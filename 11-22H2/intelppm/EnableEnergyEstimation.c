/*
 * XREFs of EnableEnergyEstimation @ 0x1C002B9F4
 * Callers:
 *     InitializeEnergyEstimationForEfficiencyClass @ 0x1C002A4D4 (InitializeEnergyEstimationForEfficiencyClass.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0003770 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0004250 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall EnableEnergyEstimation(__int64 a1)
{
  __int64 Pool2; // rax
  void *v3; // rdi
  __int64 v4; // rdx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  int v9; // ebx
  struct _GROUP_AFFINITY Affinity; // [rsp+20h] [rbp-38h] BYREF
  struct _GROUP_AFFINITY PreviousAffinity; // [rsp+30h] [rbp-28h] BYREF

  Affinity = 0LL;
  PreviousAffinity = 0LL;
  if ( qword_1C001F278 )
  {
    Pool2 = ExAllocatePool2(64LL, 136LL, 1919119952LL);
    v3 = (void *)Pool2;
    if ( Pool2 )
    {
      v4 = *(unsigned int *)(a1 + 56);
      *(_QWORD *)(a1 + 368) = Pool2;
      KeProcessorGroupAffinity(&Affinity, v4);
      KeSetSystemGroupAffinityThread(&Affinity, &PreviousAffinity);
      v9 = ((__int64 (__fastcall *)(__int64, __int64, __int64, __int64))qword_1C001F278)(v6, v5, v7, v8);
      KeRevertToUserGroupAffinityThread(&PreviousAffinity);
      if ( v9 < 0 )
      {
        ExFreePoolWithTag(v3, (ULONG)1919119952);
        *(_QWORD *)(a1 + 368) = 0LL;
      }
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  else
  {
    return (unsigned int)-1073741637;
  }
  return (unsigned int)v9;
}
