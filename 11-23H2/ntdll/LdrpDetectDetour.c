/*
 * XREFs of LdrpDetectDetour @ 0x180071780
 * Callers:
 *     LdrpLoadDllInternal @ 0x180028CA4 (LdrpLoadDllInternal.c)
 *     LdrpEnableParallelLoading @ 0x18004B644 (LdrpEnableParallelLoading.c)
 * Callees:
 *     LdrpLogInternal @ 0x180026C30 (LdrpLogInternal.c)
 *     TpWaitForWork @ 0x18004C830 (TpWaitForWork.c)
 *     TpReleaseWork @ 0x18004E5B0 (TpReleaseWork.c)
 *     ZwQueryInformationThread @ 0x1800A1350 (ZwQueryInformationThread.c)
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
      3937,
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
