/*
 * XREFs of ?HampSystemJobIoAttributionStop@@YAXPEAX@Z @ 0x18008E67C
 * Callers:
 *     ?HampActSystemResourceCleanup@@YAXPEAU_HAM_ACTIVITY@@@Z @ 0x18001474C (-HampActSystemResourceCleanup@@YAXPEAU_HAM_ACTIVITY@@@Z.c)
 *     ?HampActStartAsync@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_START_TYPE@@PEAW4_HAM_ACTIVITY_START_DENY_REASON@@PEA_K@Z @ 0x180025260 (-HampActStartAsync@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_START_TYPE@@PEAW4_HAM_ACTIVITY_START_D.c)
 * Callees:
 *     __security_check_cookie @ 0x1800494C0 (__security_check_cookie.c)
 *     memset_0 @ 0x1800534BA (memset_0.c)
 */

void __fastcall HampSystemJobIoAttributionStop(HANDLE JobHandle)
{
  _DWORD JobInformation[20]; // [rsp+20h] [rbp-68h] BYREF

  memset_0(JobInformation, 0, 0x48uLL);
  JobInformation[0] = 2;
  NtSetInformationJobObject(JobHandle, JobObjectJobSetInformation|0x20, JobInformation, 0x48u);
}
