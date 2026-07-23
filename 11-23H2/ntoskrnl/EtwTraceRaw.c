/*
 * XREFs of EtwTraceRaw @ 0x1405FF8A8
 * Callers:
 *     NtTraceEvent @ 0x1402579A0 (NtTraceEvent.c)
 * Callees:
 *     EtwpOpenLogger @ 0x140227700 (EtwpOpenLogger.c)
 *     EtwpReleaseTraceBuffer @ 0x1402277A8 (EtwpReleaseTraceBuffer.c)
 *     PsGetCurrentServerSiloGlobals @ 0x14022D480 (PsGetCurrentServerSiloGlobals.c)
 *     KeLeaveCriticalRegionThread @ 0x14022F7F0 (KeLeaveCriticalRegionThread.c)
 *     EtwpReserveTraceBuffer @ 0x1402341D0 (EtwpReserveTraceBuffer.c)
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x140259F60 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     EtwpGetReserveTraceBufferStatus @ 0x14036AD38 (EtwpGetReserveTraceBufferStatus.c)
 *     EtwpSendTraceEvent @ 0x1403A2268 (EtwpSendTraceEvent.c)
 *     memmove @ 0x140435B00 (memmove.c)
 *     EtwpInvokeEventCallback @ 0x1406014E8 (EtwpInvokeEventCallback.c)
 *     EtwpCheckLoggerControlAccess @ 0x1406BDB3C (EtwpCheckLoggerControlAccess.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A00DF0 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall EtwTraceRaw(unsigned __int16 a1, void *a2, int a3, char a4)
{
  int ReserveTraceBufferStatus; // edi
  unsigned int v6; // r13d
  __int64 v7; // r14
  __int64 v8; // rax
  __int64 v9; // rsi
  _DWORD *v10; // r12
  char *v11; // rcx
  void *v12; // rax
  __int64 v13; // r9
  LARGE_INTEGER v15[3]; // [rsp+40h] [rbp-68h] BYREF
  __int128 v16; // [rsp+58h] [rbp-50h] BYREF
  __int64 v17; // [rsp+68h] [rbp-40h]
  char v18; // [rsp+B0h] [rbp+8h] BYREF
  void *Src; // [rsp+B8h] [rbp+10h]
  size_t Size; // [rsp+C0h] [rbp+18h]
  char v21; // [rsp+C8h] [rbp+20h]

  v21 = a4;
  LODWORD(Size) = a3;
  Src = a2;
  v16 = 0LL;
  v17 = 0LL;
  v18 = 0;
  ReserveTraceBufferStatus = 0;
  v15[0].QuadPart = 0LL;
  v6 = a1;
  if ( a4 )
    v7 = *((_QWORD *)PsGetCurrentServerSiloGlobals() + 108);
  else
    v7 = EtwpHostSiloState;
  if ( v6 >= *(_DWORD *)(v7 + 16) )
    return (unsigned int)-1073741816;
  v8 = EtwpOpenLogger(v6, v7, a4, &v18);
  v9 = v8;
  if ( (v15[1].QuadPart = v8) == 0 )
    return (unsigned int)-1073741816;
  v10 = (_DWORD *)(v8 + 12);
  v15[2].QuadPart = v8 + 12;
  if ( (*(_DWORD *)(v8 + 12) & 0x80u) != 0 )
  {
    ReserveTraceBufferStatus = -1073741790;
    goto LABEL_31;
  }
  if ( a4 )
  {
    ReserveTraceBufferStatus = EtwpCheckLoggerControlAccess(0x200u);
    if ( ReserveTraceBufferStatus >= 0 )
    {
      if ( (_DWORD)Size )
      {
        if ( ((unsigned __int8)Src & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        v11 = (char *)Src + (unsigned int)Size;
        if ( (unsigned __int64)v11 > 0x7FFFFFFF0000LL || v11 < Src )
          MEMORY[0x7FFFFFFF0000] = 0;
      }
      goto LABEL_21;
    }
  }
  else
  {
    if ( (*v10 & 0x1000000) == 0 )
    {
LABEL_21:
      v12 = (void *)EtwpReserveTraceBuffer(v9, Size, (__int64)&v16, v15, 0);
      if ( v12 )
      {
        memmove(v12, Src, (unsigned int)Size);
        if ( (*v10 & 0x80000) != 0 && (!(_BYTE)KdDebuggerNotPresent && !KdPitchDebugger || KdEventLoggingPresent) )
          EtwpSendTraceEvent(v9, (__int64)&v16);
        if ( *(_QWORD *)(v9 + 1288) )
        {
          LOBYTE(v13) = a4;
          EtwpInvokeEventCallback(v9, &v16, 0LL, v13);
        }
        EtwpReleaseTraceBuffer((signed __int64 *)&v16);
      }
      else
      {
        ReserveTraceBufferStatus = EtwpGetReserveTraceBufferStatus(v9, Size);
      }
      goto LABEL_31;
    }
    ReserveTraceBufferStatus = -1073741637;
  }
LABEL_31:
  if ( v18 )
  {
    ExReleaseRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(v7 + 448) + 8LL * v6), 1u);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
  return (unsigned int)ReserveTraceBufferStatus;
}
