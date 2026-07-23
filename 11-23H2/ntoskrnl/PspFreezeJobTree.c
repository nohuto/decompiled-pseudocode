/*
 * XREFs of PspFreezeJobTree @ 0x1407DA398
 * Callers:
 *     NtSetInformationJobObject @ 0x1406A4040 (NtSetInformationJobObject.c)
 *     PspFreezeJobTree @ 0x1407DA398 (PspFreezeJobTree.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x1402391B0 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x14023D4E0 (ExReleaseResourceLite.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     PspEnumJobsAndProcessesInJobHierarchy @ 0x1406A3448 (PspEnumJobsAndProcessesInJobHierarchy.c)
 *     PspFreezeJobTree @ 0x1407DA398 (PspFreezeJobTree.c)
 *     PspDispatchWakeNotification @ 0x1407DA604 (PspDispatchWakeNotification.c)
 *     PspComputeReportWakeFilter @ 0x1407DA724 (PspComputeReportWakeFilter.c)
 */

__int64 __fastcall PspFreezeJobTree(__int64 a1, __int64 a2)
{
  int v4; // r14d
  __int64 v5; // r9
  int v6; // ecx
  int v7; // eax
  int v8; // eax
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  int v12; // esi
  __int64 v14; // [rsp+30h] [rbp-59h] BYREF
  __int64 v15; // [rsp+38h] [rbp-51h] BYREF
  __int64 v16[2]; // [rsp+48h] [rbp-41h] BYREF
  _QWORD v17[11]; // [rsp+58h] [rbp-31h] BYREF

  v16[1] = 0LL;
  v15 = 0LL;
  *(_OWORD *)v17 = 0LL;
  memset(&v17[3], 0, 0x40uLL);
  v16[0] = a2;
  v4 = 0;
  LODWORD(v14) = 0;
  ExAcquireResourceExclusiveLite((PERESOURCE)(a1 + 56), 1u);
  v6 = *(_DWORD *)a2;
  if ( (*(_DWORD *)a2 & 1) != 0 )
  {
    v7 = *(_DWORD *)(a1 + 1536) & 0x200;
    if ( *(_BYTE *)(a2 + 4) )
    {
      if ( v7 )
        goto LABEL_19;
    }
    else if ( !v7 || ((*(_BYTE *)(a1 + 1540) ^ (unsigned __int8)v6) & 8) == 0 )
    {
      goto LABEL_19;
    }
  }
  if ( (v6 & 4) == 0 )
    goto LABEL_10;
  v8 = *(_DWORD *)(a1 + 1536) & 0x80000;
  if ( *(_BYTE *)(a2 + 5) )
  {
    if ( !v8 )
      goto LABEL_10;
LABEL_19:
    LODWORD(v14) = -1073741811;
    ExReleaseResourceLite((PERESOURCE)(a1 + 56));
    return (unsigned int)v14;
  }
  if ( !v8 )
    goto LABEL_19;
LABEL_10:
  if ( (v6 & 2) != 0 )
  {
    if ( (*(_DWORD *)(a1 + 1536) & 0x800) != 0 )
    {
      LOBYTE(v5) = 1;
      PspComputeReportWakeFilter(a1, &v15, a2 + 8, v5);
      if ( v15 )
      {
        v9 = *(_OWORD *)(a1 + 1112);
        *(_OWORD *)&v17[3] = *(_OWORD *)(a1 + 1096);
        v10 = *(_OWORD *)(a1 + 1128);
        *(_OWORD *)&v17[5] = v9;
        v11 = *(_OWORD *)(a1 + 1144);
        *(_OWORD *)&v17[7] = v10;
        *(_OWORD *)&v17[9] = v11;
      }
    }
    *(_QWORD *)(a1 + 1168) = *(_QWORD *)(a2 + 8);
  }
  v12 = 5;
  if ( (*(_DWORD *)a2 & 1) != 0 )
  {
    if ( *(_BYTE *)(a2 + 4) )
      _interlockedbittestandset((volatile signed __int32 *)(a1 + 1536), 9u);
    else
      _interlockedbittestandreset((volatile signed __int32 *)(a1 + 1536), 9u);
    if ( (*(_DWORD *)a2 & 8) == 0 )
    {
      if ( *(_BYTE *)(a2 + 4) )
        _interlockedbittestandset((volatile signed __int32 *)(a1 + 1540), 3u);
      else
        _interlockedbittestandreset((volatile signed __int32 *)(a1 + 1540), 3u);
    }
    v4 = 5;
  }
  if ( (*(_DWORD *)a2 & 4) != 0 )
  {
    if ( *(_BYTE *)(a2 + 5) )
      _interlockedbittestandset((volatile signed __int32 *)(a1 + 1536), 0x13u);
    else
      _interlockedbittestandreset((volatile signed __int32 *)(a1 + 1536), 0x13u);
  }
  else
  {
    v12 = v4;
    if ( !v4 )
      goto LABEL_32;
  }
  PspEnumJobsAndProcessesInJobHierarchy(
    (_QWORD *)a1,
    (int)PspSetJobFreezeCountCallback,
    0,
    (int)PspSetProcessFreezeStateCallback,
    (__int64)v16,
    v12);
LABEL_32:
  ExReleaseResourceLite((PERESOURCE)(a1 + 56));
  if ( v12 )
  {
    PspEnumJobsAndProcessesInJobHierarchy((_QWORD *)a1, 0, (int)PspExecuteJobFreezeThawCallback, 0, (__int64)&v14, 0);
    if ( (int)v14 < 0 )
    {
      *(_DWORD *)a2 &= ~4u;
      LODWORD(v17[0]) = 4;
      BYTE5(v17[0]) = 0;
      PspFreezeJobTree(a1, v17);
      LODWORD(v14) = 262;
    }
  }
  PspDispatchWakeNotification((PVOID)a1);
  return (unsigned int)v14;
}
