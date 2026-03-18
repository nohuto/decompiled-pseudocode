/*
 * XREFs of EtwpDisableKernelTrace @ 0x1406D56D0
 * Callers:
 *     EtwpUpdateGlobalGroupMasks @ 0x1406D520C (EtwpUpdateGlobalGroupMasks.c)
 *     EtwpEnableKernelTrace @ 0x1406D5424 (EtwpEnableKernelTrace.c)
 * Callees:
 *     KeCancelTimer2 @ 0x1402D3FB0 (KeCancelTimer2.c)
 *     IoPerfReset @ 0x1405595B8 (IoPerfReset.c)
 *     KeStopProfile @ 0x1405716A4 (KeStopProfile.c)
 *     DbgSetDebugPrintCallback @ 0x1405E41E0 (DbgSetDebugPrintCallback.c)
 *     EtwpUpdateFileInfoDriverState @ 0x1406D5860 (EtwpUpdateFileInfoDriverState.c)
 *     AlpcUnregisterLogRoutine @ 0x140967848 (AlpcUnregisterLogRoutine.c)
 *     ObDisableEtwReferenceTrace @ 0x1409854AC (ObDisableEtwReferenceTrace.c)
 *     WmiSetNetworkNotify @ 0x1409DE1A0 (WmiSetNetworkNotify.c)
 */

__int64 __fastcall EtwpDisableKernelTrace(__int64 a1, int *a2, int a3, int a4)
{
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // eax
  unsigned int i; // edi

  if ( a2 )
  {
    v8 = *a2;
    if ( (*a2 & 0x20000) != 0 )
    {
      CmpTraceRoutine = 0LL;
      CmpTraceTxrRoutine = 0LL;
    }
    if ( (v8 & 0x100000) != 0 )
    {
      AlpcUnregisterLogRoutine();
      v8 = *a2;
    }
    if ( (v8 & 0x2000000) != 0 )
    {
      qword_140C00318 = 0LL;
      v8 = *a2;
    }
    if ( (v8 & 0x4000000) != 0 )
    {
      qword_140C00310 = 0LL;
      v8 = *a2;
    }
    if ( (v8 & 0x200) != 0 )
    {
      qword_140C00308 = 0LL;
      v8 = *a2;
    }
    if ( (v8 & 0x100) != 0 )
    {
      EtwpDiskIoNotifyRoutines = 0LL;
      qword_140C002F8 = 0LL;
      v8 = *a2;
    }
    if ( (v8 & 0x400) != 0 )
      qword_140C4EF38 = 0LL;
    v9 = a2[4];
    if ( (v9 & 1) != 0 )
    {
      qword_140C4EF40 = 0LL;
      v9 = a2[4];
    }
    if ( (v9 & 2) != 0 )
      qword_140C4EF48 = 0LL;
    v10 = *a2;
    if ( (*a2 & 0x200000) != 0 )
    {
      EtwpSplitIoNotifyRoutines = 0LL;
      v10 = *a2;
    }
    if ( (v10 & 0x10000) != 0 )
      WmiSetNetworkNotify(0LL);
    if ( (a2[1] & 0x10) != 0 )
      IoPerfReset(1);
    v11 = a2[4];
    if ( (v11 & 0x400000) != 0 )
    {
      qword_140C002D8 = 0LL;
      v11 = a2[4];
    }
    if ( (v11 & 0x80000) != 0 )
    {
      qword_140C002E0 = 0LL;
      v11 = a2[4];
    }
    if ( (v11 & 0x100000) != 0 )
    {
      qword_140C002E8 = 0LL;
      v11 = a2[4];
    }
    if ( (v11 & 0x200000) != 0 )
    {
      qword_140C002F0 = 0LL;
      v11 = a2[4];
    }
    if ( (v11 & 0x1000000) != 0 )
    {
      qword_140C0C5C0 = 0LL;
      v11 = a2[4];
    }
    if ( (v11 & 0x2000000) != 0 )
      qword_140C0C5C8 = 0LL;
    if ( (a2[2] & 0x8000000) != 0 )
      qword_140C0C5D0 = 0LL;
    if ( (*a2 & 0x40000) != 0 )
      DbgSetDebugPrintCallback((PDEBUG_PRINT_CALLBACK)EtwpTraceDebugPrint, 0);
    v12 = a2[1];
    if ( (v12 & 2) != 0 )
    {
      KeStopProfile((ULONG_PTR)&EtwpProfileObject);
      v12 = a2[1];
    }
    if ( (v12 & 0x400) != 0 )
    {
      for ( i = 0; i < EtwpPmcProfile; ++i )
        KeStopProfile((ULONG_PTR)qword_140C16468 + 352 * i);
    }
    if ( (a2[4] & 0x80u) != 0 )
      ObDisableEtwReferenceTrace();
    if ( (a2[1] & 0x880000) != 0 && (!a1 || (*(_DWORD *)(a1 + 4) & 0x880000) == 0) )
      KeCancelTimer2((__int64)&EtwpMemInfoTimer);
  }
  return EtwpUpdateFileInfoDriverState(a1, (_DWORD)a2, 0, a3, a4);
}
