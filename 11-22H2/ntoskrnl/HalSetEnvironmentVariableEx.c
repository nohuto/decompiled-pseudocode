/*
 * XREFs of HalSetEnvironmentVariableEx @ 0x140504B70
 * Callers:
 *     WheapCheckForAndReportErrorsFromPreviousSession @ 0x1403B3B0C (WheapCheckForAndReportErrorsFromPreviousSession.c)
 *     HaliAcpiSleep @ 0x140528000 (HaliAcpiSleep.c)
 *     WheapPersistPageForMemoryError @ 0x140611038 (WheapPersistPageForMemoryError.c)
 *     IopSetEnvironmentVariableHal @ 0x1409513D0 (IopSetEnvironmentVariableHal.c)
 *     PopSetMemoryOverwriteRequestAction @ 0x140AA0A6C (PopSetMemoryOverwriteRequestAction.c)
 *     PopCheckpointSystemSleepUnsafe @ 0x140AAA6B4 (PopCheckpointSystemSleepUnsafe.c)
 * Callees:
 *     KeRevertToUserGroupAffinityThread @ 0x140305CD0 (KeRevertToUserGroupAffinityThread.c)
 *     KeSetSystemGroupAffinityThread @ 0x140306B20 (KeSetSystemGroupAffinityThread.c)
 *     __security_check_cookie @ 0x1403D7680 (__security_check_cookie.c)
 *     wcscpy_s @ 0x1403DF730 (wcscpy_s.c)
 *     _alloca_probe @ 0x140429450 (_alloca_probe.c)
 *     HalEfiSetEnvironmentVariable @ 0x14050CE9C (HalEfiSetEnvironmentVariable.c)
 */

__int64 __fastcall HalSetEnvironmentVariableEx(const wchar_t *a1, int a2, __int64 a3, int a4, int a5)
{
  char v10; // si
  __int64 v11; // rax
  __int64 v12; // rax
  rsize_t v13; // rdx
  unsigned __int64 v14; // rax
  __int64 v15; // rcx
  unsigned __int64 v16; // rcx
  void *v17; // rsp
  void *v18; // rsp
  unsigned int v19; // edx
  unsigned int v20; // ebx
  wchar_t Dst[8]; // [rsp+30h] [rbp+0h] BYREF
  _GROUP_AFFINITY PreviousAffinity; // [rsp+40h] [rbp+10h] BYREF

  *(_OWORD *)Dst = 0LL;
  PreviousAffinity = 0LL;
  if ( !HalFirmwareTypeEfi )
    return 3221225474LL;
  v10 = 1;
  if ( (a5 & 1) == 0 )
    return 3221225485LL;
  v11 = -1LL;
  do
    ++v11;
  while ( a1[v11] );
  v12 = (unsigned int)(v11 + 1);
  if ( (unsigned int)v12 >= 0x100 )
    v12 = 256LL;
  v13 = (unsigned int)v12;
  v14 = 2 * v12;
  v15 = v14 + 15;
  if ( v14 + 15 < v14 )
    v15 = 0xFFFFFFFFFFFFFF0LL;
  v16 = v15 & 0xFFFFFFFFFFFFFFF0uLL;
  v17 = alloca(v16);
  v18 = alloca(v16);
  wcscpy_s(Dst, v13, a1);
  if ( KeGetCurrentIrql() >= 2u )
  {
    v10 = 0;
  }
  else
  {
    v19 = KiProcessorIndexToNumberMappingTable[KeGetPcr()->Prcb.Number];
    Dst[6] = 0;
    Dst[7] = 0;
    *(_DWORD *)&Dst[4] = (unsigned __int16)(v19 >> 6);
    *(_QWORD *)Dst = 1LL << (v19 & 0x3F);
    KeSetSystemGroupAffinityThread((PGROUP_AFFINITY)Dst, &PreviousAffinity);
  }
  if ( (a5 & 0x40) != 0 )
    v20 = -1073741811;
  else
    v20 = HalEfiSetEnvironmentVariable((unsigned int)Dst, a2, 0, 0, 0LL);
  if ( a4 )
    v20 = HalEfiSetEnvironmentVariable((unsigned int)Dst, a2, a5 | 6u, a4, a3);
  if ( v10 )
    KeRevertToUserGroupAffinityThread(&PreviousAffinity);
  return v20;
}
