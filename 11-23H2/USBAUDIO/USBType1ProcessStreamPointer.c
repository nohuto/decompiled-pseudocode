/*
 * XREFs of USBType1ProcessStreamPointer @ 0x1C00026C0
 * Callers:
 *     USBType1ProcessPin @ 0x1C00025B0 (USBType1ProcessPin.c)
 * Callees:
 *     USBType1BuildIsochUrbRequest @ 0x1C0002900 (USBType1BuildIsochUrbRequest.c)
 *     USBType1AsyncEndpointStartPolling @ 0x1C000A8F4 (USBType1AsyncEndpointStartPolling.c)
 *     memmove @ 0x1C001AC80 (memmove.c)
 *     USBType1LockDelay @ 0x1C003D82C (USBType1LockDelay.c)
 */

__int64 __fastcall USBType1ProcessStreamPointer(PKSSTREAM_POINTER StreamPointer)
{
  PKSPIN Pin; // r14
  int started; // ebx
  PKSSTREAM_POINTER v3; // rbp
  _QWORD *Context; // rdi
  __int64 v5; // rsi
  ULONG Remaining; // edi
  __int64 v8; // r13
  unsigned int *v9; // r15
  ULONG v10; // eax
  ULONG v11; // r12d
  KIRQL v12; // al
  _QWORD *v13; // r8
  void **v14; // rdx
  struct _KSSTREAM_POINTER *Pool2; // rax
  KIRQL v16; // r15
  _QWORD *v17; // [rsp+50h] [rbp+8h]

  Pin = StreamPointer->Pin;
  started = 0;
  v3 = StreamPointer;
  Context = Pin->Context;
  v5 = Context[19];
  if ( *(_BYTE *)(v5 + 99) )
  {
    started = USBType1LockDelay(StreamPointer->Pin);
    if ( started < 0 )
      goto LABEL_23;
  }
  if ( !*(_BYTE *)(v5 + 96) )
    goto LABEL_18;
  v16 = KeAcquireSpinLockRaiseToDpc(Context + 14);
  if ( !*(_BYTE *)(v5 + 916) )
    started = USBType1AsyncEndpointStartPolling(Pin);
  KeReleaseSpinLock(Context + 14, v16);
  if ( started < 0 )
  {
LABEL_23:
    KsStreamPointerUnlock(v3, 0);
  }
  else
  {
LABEL_18:
    if ( !*(_DWORD *)(v5 + 124) )
      goto LABEL_31;
    started = 0;
    Remaining = v3->OffsetIn.Remaining;
    v17 = Pin->Context;
    v8 = v17[19];
    v9 = *(unsigned int **)(v8 + 136);
    v10 = *(_DWORD *)(v8 + 124);
    if ( v10 >= Remaining )
      v10 = v3->OffsetIn.Remaining;
    v11 = v10;
    memmove((void *)(*((_QWORD *)v9 + 6) + v9[9]), v3->OffsetIn.Data, v10);
    if ( Remaining == v11 )
    {
      KsStreamPointerAdvanceOffsetsAndUnlock(v3, v11, 0, 0);
      v3 = 0LL;
    }
    else
    {
      KsStreamPointerAdvanceOffsets(v3, v11, 0, 0);
    }
    *(_DWORD *)(v8 + 124) -= v11;
    v9[9] += v11;
    if ( !*(_DWORD *)(v8 + 124) )
    {
      v12 = KeAcquireSpinLockRaiseToDpc(v17 + 14);
      v13 = *(_QWORD **)v9;
      if ( *(unsigned int **)(*(_QWORD *)v9 + 8LL) != v9 || (v14 = (void **)*((_QWORD *)v9 + 1), *v14 != v9) )
        __fastfail(3u);
      *v14 = v13;
      v13[1] = v14;
      KeReleaseSpinLock(v17 + 14, v12);
      Pool2 = (struct _KSSTREAM_POINTER *)ExAllocatePool2(64LL, 64LL, 1096972357LL);
      if ( Pool2 )
      {
        Pool2->Pin = Pin;
        Pool2->Offset = &Pool2->OffsetIn;
        Pool2->OffsetIn.Data = (PUCHAR)*((_QWORD *)v9 + 6);
        Pool2->OffsetIn.Count = v9[9];
        Pool2->OffsetIn.Remaining = v9[9];
        Pool2->Context = v9;
        started = USBType1BuildIsochUrbRequest(Pool2);
      }
      else
      {
        started = -1073741670;
      }
    }
    if ( started >= 0 )
    {
LABEL_31:
      if ( !v3 )
        return 0;
      if ( *(_DWORD *)(v5 + 124) )
        return 0;
      started = USBType1BuildIsochUrbRequest(v3);
      if ( started >= 0 )
        return 0;
    }
  }
  return (unsigned int)started;
}
