/*
 * XREFs of DisableEnergyEstimation @ 0x1C0039C3C
 * Callers:
 *     InitializeEnergyEstimationForEfficiencyClass @ 0x1C003A158 (InitializeEnergyEstimationForEfficiencyClass.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0002BE0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C000C510 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DisableEnergyEstimation(__int64 a1)
{
  void *v1; // rdi
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  struct _GROUP_AFFINITY Affinity; // [rsp+20h] [rbp-38h] BYREF
  struct _GROUP_AFFINITY PreviousAffinity; // [rsp+30h] [rbp-28h] BYREF

  v1 = *(void **)(a1 + 368);
  Affinity = 0LL;
  PreviousAffinity = 0LL;
  if ( v1 )
  {
    if ( qword_1C0012740 )
    {
      KeProcessorGroupAffinity(&Affinity, *(unsigned int *)(a1 + 56));
      KeSetSystemGroupAffinityThread(&Affinity, &PreviousAffinity);
      ((void (__fastcall *)(__int64, __int64, __int64, __int64))qword_1C0012740)(v4, v3, v5, v6);
      KeRevertToUserGroupAffinityThread(&PreviousAffinity);
    }
    ExFreePoolWithTag(v1, (ULONG)1919119952);
    *(_QWORD *)(a1 + 368) = 0LL;
  }
}
