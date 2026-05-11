/*
 * XREFs of USBType1AsyncEndpointPollCallback @ 0x1C0003AD0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_DDDddd @ 0x1C0005938 (WPP_RECORDER_AND_TRACE_SF_DDDddd.c)
 */

__int64 __fastcall USBType1AsyncEndpointPollCallback(__int64 a1, __int64 a2, struct _KSPIN *a3)
{
  _QWORD *Context; // rdi
  __int64 v6; // rbx
  __int64 v7; // rsi
  KIRQL v8; // r13
  unsigned int v9; // r8d
  unsigned int v10; // r14d
  unsigned int v11; // r15d
  unsigned int v12; // esi
  unsigned int v13; // ecx
  unsigned int v14; // edx
  bool v15; // r10
  unsigned int v16; // edx
  PKSGATE i; // rax

  Context = a3->Context;
  v6 = Context[19];
  v7 = *(_QWORD *)(v6 + 864);
  v8 = KeAcquireSpinLockRaiseToDpc(Context + 14);
  if ( *(_DWORD *)(v6 + 908) )
    *(_DWORD *)(v6 + 908) = *(_DWORD *)(v6 + 900) + 16;
  *(_BYTE *)(v6 + 917) = 0;
  KeSetEvent((PRKEVENT)(v6 + 920), 0, 0);
  if ( *(int *)(a2 + 48) >= 0 && *(int *)(v7 + 4) >= 0 && *(_DWORD *)(v7 + 36) == 3 )
  {
    v9 = *(_DWORD *)(v6 + 856);
    v10 = (*(unsigned __int8 *)(v6 + 977) >> 6) | (4 * *(unsigned __int8 *)(v6 + 978));
    v11 = 1000 * ((*(unsigned __int8 *)(v6 + 976) | (unsigned __int16)(*(unsigned __int8 *)(v6 + 977) << 8)) & 0x3FFF);
    v12 = (v11 >> 14) + 1000 * v10;
    v13 = v9 - v12;
    v14 = v9 / 0xA;
    if ( v9 <= v12 )
      v13 = (v11 >> 14) + 1000 * v10 - v9;
    if ( v13 > v14 )
    {
      v12 = v9 - v14;
      if ( v9 <= (v11 >> 14) + 1000 * v10 )
        v12 = v14 + v9;
      v10 = v12 / 0x3E8;
      v11 = (v12 % 0x3E8) << 14;
    }
    if ( v12 != *((_DWORD *)Context + 26) )
    {
      v15 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
         && (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) != 0
         && BYTE1(WPP_GLOBAL_Control->Timer) >= 5u;
      if ( *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
        || (LOBYTE(v9) = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
      {
        LOBYTE(v9) = 0;
      }
      if ( v15 || (_BYTE)v9 )
      {
        v16 = v11 / 0x3E8;
        LOBYTE(v16) = v15;
        WPP_RECORDER_AND_TRACE_SF_DDDddd(
          WPP_GLOBAL_Control->AttachedDevice,
          v16,
          v9,
          WPP_GLOBAL_Control->DeviceExtension);
      }
      *((_DWORD *)Context + 26) = v12;
      *(_DWORD *)(v6 + 116) = v10;
      *(_DWORD *)(v6 + 120) = v11;
    }
  }
  if ( *((_BYTE *)Context + 44) )
  {
    *((_BYTE *)Context + 44) = 0;
    for ( i = KsPinGetAndGate(a3); i && _InterlockedIncrement(&i->Count) == 1; i = i->NextGate )
      ;
    if ( !*(_BYTE *)(v6 + 100) )
      goto LABEL_34;
    KsPinAttemptProcessing(a3, 1u);
  }
  if ( !*(_BYTE *)(v6 + 100) )
  {
LABEL_34:
    *(_BYTE *)(v6 + 916) = 0;
    goto LABEL_35;
  }
  *(_DWORD *)(v6 + 896) += *(_DWORD *)(v6 + 900);
  IoQueueWorkItem(*(PIO_WORKITEM *)(v6 + 968), (PIO_WORKITEM_ROUTINE)USBType1AsyncEndpointPoll, CriticalWorkQueue, a3);
LABEL_35:
  KeReleaseSpinLock(Context + 14, v8);
  return 3221225494LL;
}
