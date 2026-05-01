/*
 * XREFs of ?RmpProcEntryIsTooLargeToSwap@@YAKPEAU_RM_PROC_ENTRY@@@Z @ 0x180014454
 * Callers:
 *     ?RmpProcEntrySetLevel@@YAJPEAU_RM_PROC_ENTRY@@W4_RM_PROC_MANAGEMENT_LEVEL@@PEAU_RM_PROC_PROPERTIES@@PEAW42@@Z @ 0x1800147C4 (-RmpProcEntrySetLevel@@YAJPEAU_RM_PROC_ENTRY@@W4_RM_PROC_MANAGEMENT_LEVEL@@PEAU_RM_PROC_PROPERTI.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B040 (__security_check_cookie.c)
 */

__int64 __fastcall RmpProcEntryIsTooLargeToSwap(HANDLE *a1)
{
  _DWORD v2[4]; // [rsp+30h] [rbp-88h] BYREF
  _BYTE ProcessInformation[32]; // [rsp+40h] [rbp-78h] BYREF
  __int64 v4; // [rsp+60h] [rbp-58h]

  NtQueryInformationProcess(a1[5], ProcessVmCounters, ProcessInformation, 0x60u, 0LL);
  MemUtilIsWorkingSetTooLargeForSwap(v4, 5000LL, v2);
  return v2[0];
}
