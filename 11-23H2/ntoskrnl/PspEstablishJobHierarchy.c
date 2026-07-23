/*
 * XREFs of PspEstablishJobHierarchy @ 0x14069F8F4
 * Callers:
 *     PspAssignProcessToJob @ 0x14069FFF0 (PspAssignProcessToJob.c)
 *     PspImplicitAssignProcessToJob @ 0x1407E628C (PspImplicitAssignProcessToJob.c)
 * Callees:
 *     KeInsertSchedulingGroup @ 0x1402050DC (KeInsertSchedulingGroup.c)
 *     KeRemoveSchedulingGroup @ 0x140206C84 (KeRemoveSchedulingGroup.c)
 *     ObfDereferenceObjectWithTag @ 0x14022F6C0 (ObfDereferenceObjectWithTag.c)
 *     PsGetProcessSessionId @ 0x1402978B0 (PsGetProcessSessionId.c)
 *     ObfReferenceObjectWithTag @ 0x1402B6B50 (ObfReferenceObjectWithTag.c)
 *     IoSetDiskIoAttributionOnProcess @ 0x140367738 (IoSetDiskIoAttributionOnProcess.c)
 *     PspAddSchedulingGroupToJobChain @ 0x140683BA8 (PspAddSchedulingGroupToJobChain.c)
 *     PspBindProcessSessionToJob @ 0x14069FBC4 (PspBindProcessSessionToJob.c)
 *     MmLinkJobProcess @ 0x14069FC10 (MmLinkJobProcess.c)
 *     PspEnumJobsAndProcessesInJobHierarchy @ 0x1406A3448 (PspEnumJobsAndProcessesInJobHierarchy.c)
 *     PspUpdateJobEffectivePriorityLimits @ 0x1407D7564 (PspUpdateJobEffectivePriorityLimits.c)
 *     PspSetEffectiveJobLimits @ 0x1407D9AC4 (PspSetEffectiveJobLimits.c)
 *     PspUnlinkJobProcess @ 0x1407E32B4 (PspUnlinkJobProcess.c)
 *     PspEstablishDfssHierarchy @ 0x1409B24E0 (PspEstablishDfssHierarchy.c)
 *     PspSetEffectiveRateControlJob @ 0x1409B2BD8 (PspSetEffectiveRateControlJob.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 */

__int64 __fastcall PspEstablishJobHierarchy(char *Object, __int64 a2, __int64 a3, unsigned int a4)
{
  int v8; // esi
  __int64 v9; // rcx
  _QWORD *Pool2; // r15
  unsigned __int64 v12; // r14
  unsigned __int16 *v13; // rcx
  __int64 v14; // rax
  PVOID v15; // rcx
  _QWORD *v16; // rdx
  _QWORD *v17; // rax
  char v18; // al
  int i; // r8d
  __int64 v20; // rax
  bool v21; // zf
  void *v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25[2]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v26; // [rsp+40h] [rbp-28h]

  *(_OWORD *)v25 = 0LL;
  v26 = 0LL;
  if ( a4 != 1 )
  {
    if ( a4 != 2 )
    {
      if ( a4 == 3 )
      {
        PspUnlinkJobProcess(a3);
        MmLinkJobProcess(Object, a2);
        ObfReferenceObjectWithTag(Object, 0x73507350u);
        ObfDereferenceObjectWithTag((PVOID)a3, 0x73507350u);
        v24 = *((_QWORD *)Object + 196);
        if ( !*((_DWORD *)Object + 391) )
        {
          if ( !v24 )
            goto LABEL_67;
          v24 = *(_QWORD *)(v24 + 1568);
        }
        IoSetDiskIoAttributionOnProcess(v24, a2);
        goto LABEL_67;
      }
      if ( a4 == 4 || a4 == 5 )
        goto LABEL_13;
      if ( a4 != 6 )
      {
        if ( a4 != 7 )
        {
          v8 = -1073741811;
          goto LABEL_6;
        }
LABEL_13:
        Pool2 = 0LL;
        v12 = *(_QWORD *)(a3 + 1320) + 1LL;
        if ( v12 > 2 )
        {
          Pool2 = (_QWORD *)ExAllocatePool2(256LL, 8 * v12 - 16, 1649046352LL);
          if ( !Pool2 )
            return 3221225626LL;
        }
        if ( a4 - 4 <= 1 )
        {
          v8 = PspBindProcessSessionToJob(Object, a2);
          if ( v8 < 0 )
            goto LABEL_39;
        }
        v13 = (unsigned __int16 *)*((_QWORD *)Object + 154);
        if ( v13 )
        {
          KeRemoveSchedulingGroup(v13);
          if ( (*(_DWORD *)(a3 + 1536) & 0x20) == 0 )
          {
            v8 = PspAddSchedulingGroupToJobChain(a3, 0LL);
            if ( v8 < 0 )
            {
              KeInsertSchedulingGroup(
                *((_QWORD *)Object + 153) + 128LL,
                *(_QWORD *)(*((_QWORD *)Object + 153) + 128LL),
                0LL);
LABEL_39:
              if ( Pool2 )
                ExFreePoolWithTag(Pool2, 0x624A7350u);
              goto LABEL_6;
            }
          }
          KeInsertSchedulingGroup(
            *((_QWORD *)Object + 153) + 128LL,
            *(_QWORD *)(*((_QWORD *)Object + 153) + 128LL),
            *(_QWORD *)(a3 + 1224) + 128LL);
        }
        else
        {
          v14 = *(_QWORD *)(a3 + 1232);
          if ( v14 )
            *((_QWORD *)Object + 154) = v14;
        }
        v15 = Object;
        if ( a4 != 4 )
          v15 = (PVOID)a3;
        ObfReferenceObjectWithTag(v15, 0x73507350u);
        v16 = *(_QWORD **)(a3 + 1280);
        v17 = Object + 1256;
        if ( *v16 != a3 + 1272 )
          __fastfail(3u);
        *v17 = a3 + 1272;
        *((_QWORD *)Object + 158) = v16;
        *v16 = v17;
        *(_QWORD *)(a3 + 1280) = v17;
        *((_QWORD *)Object + 161) = a3;
        *((_QWORD *)Object + 162) = *(_QWORD *)(a3 + 1296);
        v18 = *(_BYTE *)(a3 + 1086) + 1;
        *((_QWORD *)Object + 165) = v12;
        Object[1086] = v18;
        if ( v12 > 2 )
        {
          if ( v12 > 3 )
          {
            v23 = *(_QWORD *)(a3 + 1320) - 2LL;
            if ( *(_QWORD *)(a3 + 1320) != 2LL )
            {
              do
              {
                Pool2[v23] = *(_QWORD *)(*(_QWORD *)(a3 + 1328) + 8 * v23 - 8);
                --v23;
              }
              while ( v23 );
            }
          }
          *Pool2 = *(_QWORD *)(a3 + 1288);
          *((_QWORD *)Object + 166) = Pool2;
          Pool2 = 0LL;
        }
        if ( a4 == 4 )
        {
          PspUnlinkJobProcess(a3);
          MmLinkJobProcess(Object, a2);
        }
        PspSetEffectiveJobLimits(Object, 0LL);
        *((_DWORD *)Object + 262) += *(_DWORD *)(a3 + 1048);
        *((_DWORD *)Object + 263) += *(_DWORD *)(a3 + 1052);
        *((_DWORD *)Object + 265) += *(_DWORD *)(a3 + 1060);
        *((_DWORD *)Object + 264) += *(_DWORD *)(a3 + 1056);
        *((_DWORD *)Object + 266) += *(_DWORD *)(a3 + 1064);
        *((_QWORD *)Object + 224) = *(_QWORD *)(a3 + 1792);
        PspUpdateJobEffectivePriorityLimits(Object, 3LL);
        if ( (*(_DWORD *)(a3 + 1536) & 0x1841000) != 0 )
          _InterlockedOr((volatile signed __int32 *)Object + 384, *(_DWORD *)(a3 + 1536) & 0x1841000);
        for ( i = 0; i < 3; ++i )
        {
          if ( (unsigned int)(i - 1) > 1 && *(_QWORD *)(a3 + 1024) )
            PspSetEffectiveRateControlJob(Object);
        }
        if ( *(_DWORD *)(a3 + 1564) )
        {
          v20 = a3;
          v21 = a3 == 0;
        }
        else
        {
          v20 = *(_QWORD *)(a3 + 1568);
          v21 = v20 == 0;
        }
        if ( v21 )
        {
          if ( *((_DWORD *)Object + 391) && a4 == 4 )
            IoSetDiskIoAttributionOnProcess(*((_QWORD *)Object + 196), a2);
        }
        else
        {
          v25[1] = v20;
          LOBYTE(v26) = 1;
          PspEnumJobsAndProcessesInJobHierarchy(Object, (__int64)v25, 5);
        }
        v22 = *(void **)(a3 + 1776);
        if ( v22 )
        {
          ObfReferenceObjectWithTag(v22, 0x624A7350u);
          *((_QWORD *)Object + 222) = *(_QWORD *)(a3 + 1776);
          *((_QWORD *)Object + 223) = *(_QWORD *)(a3 + 1784);
        }
        if ( a4 == 7 )
          _interlockedbittestandset((volatile signed __int32 *)Object + 385, 0);
        v8 = 0;
        goto LABEL_39;
      }
      _interlockedbittestandset((volatile signed __int32 *)Object + 385, 0);
    }
LABEL_67:
    v8 = 0;
    goto LABEL_6;
  }
  v8 = PspBindProcessSessionToJob(Object, a2);
  if ( v8 >= 0 )
  {
    ObfReferenceObjectWithTag(Object, 0x73507350u);
    MmLinkJobProcess(Object, a2);
  }
  v9 = *((_QWORD *)Object + 196);
  if ( !*((_DWORD *)Object + 391) )
  {
    if ( !v9 )
      goto LABEL_6;
    v9 = *(_QWORD *)(v9 + 1568);
  }
  IoSetDiskIoAttributionOnProcess(v9, a2);
LABEL_6:
  if ( a2 && v8 >= 0 && PsCpuFairShareEnabled )
  {
    if ( (unsigned int)PsGetProcessSessionId(a2) )
      PspEstablishDfssHierarchy(Object, a2, a4);
  }
  return (unsigned int)v8;
}
