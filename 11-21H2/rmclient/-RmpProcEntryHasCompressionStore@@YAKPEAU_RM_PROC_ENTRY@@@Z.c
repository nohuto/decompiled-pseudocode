/*
 * XREFs of ?RmpProcEntryHasCompressionStore@@YAKPEAU_RM_PROC_ENTRY@@@Z @ 0x1800141F8
 * Callers:
 *     ?RmpProcEntrySetLevel@@YAJPEAU_RM_PROC_ENTRY@@W4_RM_PROC_MANAGEMENT_LEVEL@@PEAU_RM_PROC_PROPERTIES@@PEAW42@@Z @ 0x1800147C4 (-RmpProcEntrySetLevel@@YAJPEAU_RM_PROC_ENTRY@@W4_RM_PROC_MANAGEMENT_LEVEL@@PEAU_RM_PROC_PROPERTI.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RmpProcEntryHasCompressionStore(struct _RM_PROC_ENTRY *a1)
{
  __int64 v1; // rax
  _DWORD SystemInformation[2]; // [rsp+20h] [rbp-30h] BYREF
  _QWORD *v4; // [rsp+28h] [rbp-28h]
  __int64 v5; // [rsp+30h] [rbp-20h]
  _QWORD v6[2]; // [rsp+38h] [rbp-18h] BYREF
  __int64 v7; // [rsp+48h] [rbp-8h]

  v5 = 24LL;
  v7 = 0LL;
  v4 = v6;
  v1 = *((_QWORD *)a1 + 5);
  SystemInformation[0] = 1;
  SystemInformation[1] = 23;
  v6[0] = 1LL;
  v6[1] = v1;
  NtQuerySystemInformation(SystemVerifierFaultsInformation|SystemLocksInformation, SystemInformation, 0x18u, 0LL);
  return v7 & 1;
}
