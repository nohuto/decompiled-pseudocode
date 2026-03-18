/*
 * XREFs of ACPIBuildProcessDevicePhasePrx @ 0x1C000DA40
 * Callers:
 *     <none>
 * Callees:
 *     ACPIBuildCompleteCommon @ 0x1C00095D8 (ACPIBuildCompleteCommon.c)
 *     ACPIBuildScheduleDpc @ 0x1C000C2F4 (ACPIBuildScheduleDpc.c)
 *     WPP_RECORDER_SF_dLqss @ 0x1C000D8EC (WPP_RECORDER_SF_dLqss.c)
 *     FreeDataBuffs @ 0x1C0018A20 (FreeDataBuffs.c)
 *     ACPIBuildDevicePowerNodes @ 0x1C002A088 (ACPIBuildDevicePowerNodes.c)
 *     ACPIWriteEventLogEntry @ 0x1C00543C8 (ACPIWriteEventLogEntry.c)
 */

__int64 __fastcall ACPIBuildProcessDevicePhasePrx(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v5; // r15d
  _QWORD *v6; // r14
  __int64 v7; // rcx
  __int64 v8; // rbp
  __int64 v9; // r13
  _QWORD *v10; // r12
  __int64 *v11; // rbx
  int v12; // edi
  KIRQL v13; // dl
  __int64 v14; // rax
  __int64 *v15; // rbx
  __int64 *v16; // rax
  __int64 *v17; // rbx
  ULONG_PTR v18; // rdx
  const char *v19; // rax
  char v20; // cl
  const char *v21; // r8
  __int64 v22; // rdx
  signed __int32 v23; // ecx
  KIRQL v24; // bl
  int BugCheckParameter4; // [rsp+20h] [rbp-58h]

  v5 = 0;
  v6 = *(_QWORD **)(a1 + 40);
  v7 = a1 + 80;
  v8 = (unsigned int)(*(_DWORD *)(a1 + 28) - 19) >> 1;
  v9 = (unsigned int)(v8 + 1);
  v10 = &v6[v9];
  *(_DWORD *)(a1 + 32) = 2 * v8 + 20;
  if ( v10[57] || v6[v9 + 51] )
  {
    if ( !*(_QWORD *)(a1 + 56) )
      goto LABEL_9;
    dword_1C0081AC8 = 0;
    byte_1C0081ACC = 0;
    goto LABEL_24;
  }
  v11 = (__int64 *)v6[95];
  v12 = *(_DWORD *)&aPs0Ps1Ps2[4 * v8];
  v13 = ExAcquireSpinLockShared(&ACPINamespaceLock);
  v14 = *v11;
  v15 = *(__int64 **)(*v11 + 24);
  v16 = (__int64 *)(v14 + 24);
  if ( v16 == v15 )
  {
LABEL_6:
    ExReleaseSpinLockShared(&ACPINamespaceLock, v13);
LABEL_7:
    v17 = 0LL;
    goto LABEL_8;
  }
  while ( v12 != *((_DWORD *)v15 + 10) )
  {
    v15 = (__int64 *)*v15;
    if ( v16 == v15 )
      goto LABEL_6;
  }
  ExReleaseSpinLockShared(&ACPINamespaceLock, v13);
  if ( !v15 )
    goto LABEL_7;
  v17 = v15 + 15;
  dword_1C0081AC8 = 0;
  byte_1C0081ACC = 0;
  if ( (gdwfAMLI & 4) != 0 )
    _InterlockedIncrement((volatile signed __int32 *)v17 + 2);
LABEL_8:
  v10[57] = v17;
  v18 = *(_QWORD *)(a1 + 56);
  if ( v18 )
  {
    if ( *(_WORD *)(a1 + 82) != 4 )
    {
      ACPIWriteEventLogEntry(3221553168LL, 0LL, 0LL);
      goto LABEL_9;
    }
    v5 = ACPIBuildDevicePowerNodes((ULONG_PTR)v6, v18);
    dword_1C0081AC8 = 0;
    v7 = a1 + 80;
    byte_1C0081ACC = 0;
LABEL_24:
    FreeDataBuffs(v7, 1LL);
  }
LABEL_9:
  v19 = (const char *)&unk_1C006FB8B;
  v20 = 0;
  v21 = (const char *)&unk_1C006FB8B;
  if ( v6 )
  {
    v22 = v6[1];
    v20 = (char)v6;
    if ( (v22 & 0x200000000000LL) != 0 )
    {
      v19 = (const char *)v6[76];
      if ( (v22 & 0x400000000000LL) != 0 )
        v21 = (const char *)v6[77];
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_dLqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      (__int64)&WPP_RECORDER_INITIALIZED,
      (__int64)v21,
      a4,
      BugCheckParameter4,
      v8,
      v5,
      v20,
      v19,
      v21);
  v23 = *(_DWORD *)(a1 + 32);
  if ( v5 == -1073741738 )
  {
    *(_DWORD *)(a1 + 48) = -1073741738;
    ACPIBuildCompleteCommon((volatile signed __int32 *)(a1 + 24), 2);
  }
  else
  {
    if ( v5 < 0 )
    {
      *(_DWORD *)(a1 + 48) = v5;
      KeBugCheckEx(0xA5u, 3uLL, 0LL, v5, 0LL);
    }
    *(_DWORD *)(a1 + 32) = 2;
    _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 24), v23, 1);
    v24 = KeAcquireSpinLockRaiseToDpc(&AcpiBuildQueueLock);
    ACPIBuildScheduleDpc();
    KeReleaseSpinLock(&AcpiBuildQueueLock, v24);
  }
  return (unsigned int)v5;
}
