/*
 * XREFs of LdrpDetectDetour @ 0x180074E0C
 * Callers:
 *     LdrpLoadDllInternal @ 0x18003B940 (LdrpLoadDllInternal.c)
 *     LdrpEnableParallelLoading @ 0x180074450 (LdrpEnableParallelLoading.c)
 * Callees:
 *     TpReleaseWork @ 0x180020220 (TpReleaseWork.c)
 *     LdrpLogInternal @ 0x18003F290 (LdrpLogInternal.c)
 *     TpWaitForWork @ 0x180084C50 (TpWaitForWork.c)
 *     ZwQueryInformationThread @ 0x1800A4510 (ZwQueryInformationThread.c)
 */

void LdrpDetectDetour()
{
  unsigned int v0; // edx
  _QWORD *v1; // rcx
  __int64 (__fastcall **v2)(int, int, int, int, ULONG, ULONG); // r8
  __int64 v3; // rax
  char v4; // al
  int ThreadInformation; // [rsp+40h] [rbp+8h] BYREF

  if ( !LdrpDetourExist )
  {
    v0 = 0;
    v1 = &LdrpThunkSignature;
    v2 = &LdrpCriticalLoaderFunctions;
    while ( 1 )
    {
      v3 = *v1 - *(_QWORD *)*v2;
      if ( *v1 == *(_QWORD *)*v2 )
        v3 = v1[1] - *((_QWORD *)*v2 + 1);
      if ( v3 )
        break;
      v1 += 2;
      ++v0;
      ++v2;
      if ( v0 >= 5 )
        goto LABEL_7;
    }
    LdrpLogInternal(
      (unsigned int)"minkernel\\ntdll\\ldrmap.c",
      3854,
      (__int64)"LdrpDetectDetour",
      2u,
      "!!! Detour detected, disable parallel loading\n");
    LdrpDetourExist = 1;
LABEL_7:
    if ( ZwQueryInformationThread(
           (HANDLE)0xFFFFFFFFFFFFFFFELL,
           ThreadDynamicCodePolicyInfo,
           &ThreadInformation,
           4u,
           0LL) < 0 )
    {
      v4 = LdrpDetourExist;
    }
    else
    {
      v4 = LdrpDetourExist;
      if ( ThreadInformation == 1 )
        v4 = 1;
      LdrpDetourExist = v4;
    }
    if ( v4 )
    {
      if ( LdrpMapAndSnapWork )
      {
        TpWaitForWork(LdrpMapAndSnapWork, 1u);
        TpReleaseWork(LdrpMapAndSnapWork);
        LdrpMapAndSnapWork = 0LL;
      }
    }
  }
}
