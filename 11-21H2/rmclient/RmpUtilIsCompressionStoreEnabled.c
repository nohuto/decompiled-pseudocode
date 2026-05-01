/*
 * XREFs of RmpUtilIsCompressionStoreEnabled @ 0x18000BE34
 * Callers:
 *     ?RmpProcEntrySetLevel@@YAJPEAU_RM_PROC_ENTRY@@W4_RM_PROC_MANAGEMENT_LEVEL@@PEAU_RM_PROC_PROPERTIES@@PEAW42@@Z @ 0x1800147C4 (-RmpProcEntrySetLevel@@YAJPEAU_RM_PROC_ENTRY@@W4_RM_PROC_MANAGEMENT_LEVEL@@PEAU_RM_PROC_PROPERTI.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B040 (__security_check_cookie.c)
 */

_BOOL8 RmpUtilIsCompressionStoreEnabled()
{
  _DWORD v1[2]; // [rsp+20h] [rbp-58h] BYREF
  _OWORD *v2; // [rsp+28h] [rbp-50h]
  int v3; // [rsp+30h] [rbp-48h]
  _OWORD v4[2]; // [rsp+38h] [rbp-40h] BYREF
  __int64 v5; // [rsp+58h] [rbp-20h]

  v1[0] = 1;
  v1[1] = 22;
  memset(v4, 0, sizeof(v4));
  v5 = 0LL;
  LODWORD(v4[0]) = 3;
  v2 = v4;
  v3 = 40;
  return NtQuerySystemInformation(SystemVerifierFaultsInformation|SystemLocksInformation, v1, 0x18u, 0LL) >= 0;
}
