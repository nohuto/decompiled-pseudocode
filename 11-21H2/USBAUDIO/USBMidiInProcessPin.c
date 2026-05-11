/*
 * XREFs of USBMidiInProcessPin @ 0x1C0007990
 * Callers:
 *     <none>
 * Callees:
 *     USBMidiInCopyEvent @ 0x1C003AF80 (USBMidiInCopyEvent.c)
 */

__int64 __fastcall USBMidiInProcessPin(PKSPIN Pin)
{
  _QWORD *Context; // rbx
  unsigned int v2; // r12d
  __int64 v4; // rbp
  KSPIN_LOCK *v5; // r15
  PKSSTREAM_POINTER LeadingEdgeStreamPointer; // rsi
  KIRQL v7; // bl
  _QWORD *v8; // r14
  _QWORD *v9; // rdi
  __int64 v10; // rax
  int v11; // r8d
  __int64 v12; // r9
  __int64 v13; // r8
  PUCHAR Data; // rcx
  _QWORD *v15; // rcx
  ULONG Remaining; // [rsp+60h] [rbp+8h] BYREF

  Context = Pin->Context;
  v2 = 0;
  v4 = Context[19];
  v5 = Context + 14;
  LeadingEdgeStreamPointer = KsPinGetLeadingEdgeStreamPointer(Pin, KSSTREAM_POINTER_STATE_LOCKED);
  v7 = KeAcquireSpinLockRaiseToDpc(Context + 14);
  v8 = (_QWORD *)(v4 + 64);
  while ( 1 )
  {
    v9 = (_QWORD *)*v8;
    if ( (_QWORD *)*v8 == v8 )
      break;
    if ( !LeadingEdgeStreamPointer )
      goto LABEL_19;
    if ( (_QWORD *)v9[1] != v8 )
      goto LABEL_15;
    v10 = *v9;
    if ( *(_QWORD **)(*v9 + 8LL) != v9 )
      goto LABEL_15;
    *v8 = v10;
    *(_QWORD *)(v10 + 8) = v8;
    KeReleaseSpinLock(v5, v7);
    if ( (*((_BYTE *)v9 + 25) & 0xF8) != 0xF8
      || (v11 = *(_DWORD *)(v4 + 48)) == 0
      || (KsStreamPointerAdvanceOffsetsAndUnlock(LeadingEdgeStreamPointer, 0, (v11 + 3) & 0xFFFFFFFC, 1u),
          *(_DWORD *)(v4 + 48) = 0,
          (LeadingEdgeStreamPointer = KsPinGetLeadingEdgeStreamPointer(Pin, KSSTREAM_POINTER_STATE_LOCKED)) != 0LL) )
    {
      v12 = v9[2];
      v13 = *(_QWORD *)(v4 + 56);
      Data = LeadingEdgeStreamPointer->OffsetOut.Data;
      Remaining = LeadingEdgeStreamPointer->OffsetOut.Remaining;
      USBMidiInCopyEvent((_DWORD)Data, (_DWORD)v9 + 24, v13, v12, (__int64)&Remaining);
      if ( (v9[3] & 0xF) == 4 && Remaining + 3 <= LeadingEdgeStreamPointer->OffsetOut.Remaining )
      {
        *(_DWORD *)(v4 + 48) += Remaining;
      }
      else
      {
        KsStreamPointerAdvanceOffsetsAndUnlock(LeadingEdgeStreamPointer, 0, (Remaining + 3) & 0xFFFFFFFC, 1u);
        *(_DWORD *)(v4 + 48) = 0;
        LeadingEdgeStreamPointer = KsPinGetLeadingEdgeStreamPointer(Pin, KSSTREAM_POINTER_STATE_LOCKED);
      }
    }
    v7 = KeAcquireSpinLockRaiseToDpc(v5);
    v15 = *(_QWORD **)(v4 + 88);
    if ( *v15 != v4 + 80 )
LABEL_15:
      __fastfail(3u);
    *v9 = v4 + 80;
    v9[1] = v15;
    *v15 = v9;
    *(_QWORD *)(v4 + 88) = v9;
  }
  if ( LeadingEdgeStreamPointer )
    KsStreamPointerUnlock(LeadingEdgeStreamPointer, 0);
  v2 = 259;
LABEL_19:
  *(_BYTE *)(v4 + 33) = 0;
  KeReleaseSpinLock(v5, v7);
  return v2;
}
