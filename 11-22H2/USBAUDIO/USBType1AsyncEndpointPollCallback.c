/*
 * XREFs of USBType1AsyncEndpointPollCallback @ 0x1C0005230
 * Callers:
 *     <none>
 * Callees:
 *     KsGateTurnInputOn @ 0x1C0003F70 (KsGateTurnInputOn.c)
 *     WPP_RECORDER_AND_TRACE_SF_DDDddd @ 0x1C000ABCC (WPP_RECORDER_AND_TRACE_SF_DDDddd.c)
 */

__int64 __fastcall USBType1AsyncEndpointPollCallback(__int64 a1, __int64 a2, struct _KSPIN *a3)
{
  _QWORD *Context; // rdi
  __int64 v6; // rbx
  __int64 v7; // rsi
  KIRQL v8; // r13
  unsigned int v10; // r8d
  unsigned int v11; // r14d
  unsigned int v12; // r15d
  unsigned int v13; // esi
  unsigned int v14; // ecx
  unsigned int v15; // edx
  bool v16; // r10
  unsigned int v17; // edx
  struct _KSGATE *v18; // rax

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
    v10 = *(_DWORD *)(v6 + 856);
    v11 = (*(unsigned __int8 *)(v6 + 977) >> 6) | (4 * *(unsigned __int8 *)(v6 + 978));
    v12 = 1000 * ((*(unsigned __int8 *)(v6 + 976) | (unsigned __int16)(*(unsigned __int8 *)(v6 + 977) << 8)) & 0x3FFF);
    v13 = (v12 >> 14) + 1000 * v11;
    v14 = v10 - v13;
    v15 = v10 / 0xA;
    if ( v10 <= v13 )
      v14 = (v12 >> 14) + 1000 * v11 - v10;
    if ( v14 > v15 )
    {
      v13 = v10 - v15;
      if ( v10 <= (v12 >> 14) + 1000 * v11 )
        v13 = v10 + v15;
      v11 = v13 / 0x3E8;
      v12 = (v13 % 0x3E8) << 14;
    }
    if ( v13 != *((_DWORD *)Context + 26) )
    {
      v16 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
         && (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) != 0
         && BYTE1(WPP_GLOBAL_Control->Timer) >= 5u;
      if ( *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
        || (LOBYTE(v10) = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
      {
        LOBYTE(v10) = 0;
      }
      if ( v16 || (_BYTE)v10 )
      {
        v17 = v12 / 0x3E8;
        LOBYTE(v17) = v16;
        WPP_RECORDER_AND_TRACE_SF_DDDddd(
          WPP_GLOBAL_Control->AttachedDevice,
          v17,
          v10,
          WPP_GLOBAL_Control->DeviceExtension);
      }
      *((_DWORD *)Context + 26) = v13;
      *(_DWORD *)(v6 + 116) = v11;
      *(_DWORD *)(v6 + 120) = v12;
    }
  }
  if ( *((_BYTE *)Context + 44) )
  {
    *((_BYTE *)Context + 44) = 0;
    v18 = KsPinGetAndGate(a3);
    KsGateTurnInputOn(v18);
    if ( !*(_BYTE *)(v6 + 100) )
      goto LABEL_15;
    KsPinAttemptProcessing(a3, 1u);
  }
  if ( !*(_BYTE *)(v6 + 100) )
  {
LABEL_15:
    *(_BYTE *)(v6 + 916) = 0;
    goto LABEL_7;
  }
  *(_DWORD *)(v6 + 896) += *(_DWORD *)(v6 + 900);
  IoQueueWorkItem(*(PIO_WORKITEM *)(v6 + 968), (PIO_WORKITEM_ROUTINE)USBType1AsyncEndpointPoll, CriticalWorkQueue, a3);
LABEL_7:
  KeReleaseSpinLock(Context + 14, v8);
  return 3221225494LL;
}
