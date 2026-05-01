/*
 * XREFs of sub_180012028 @ 0x180012028
 * Callers:
 *     sub_18000FFC4 @ 0x18000FFC4 (sub_18000FFC4.c)
 *     sub_180011BFC @ 0x180011BFC (sub_180011BFC.c)
 * Callees:
 *     sub_180011BC4 @ 0x180011BC4 (sub_180011BC4.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180016AA0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180012028(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 (__fastcall *v6)(__int64, _QWORD, _QWORD, __int64, __int64, __int64); // r11
  HMODULE v9; // rax

  v6 = (__int64 (__fastcall *)(__int64, _QWORD, _QWORD, __int64, __int64, __int64))NtQueryWnfStateData_0;
  if ( NtQueryWnfStateData_0 )
    return v6(a1, 0LL, 0LL, a4, a5, a6);
  v9 = sub_180011BC4();
  NtQueryWnfStateData_0 = (__int64)GetProcAddress(v9, "NtQueryWnfStateData");
  v6 = (__int64 (__fastcall *)(__int64, _QWORD, _QWORD, __int64, __int64, __int64))NtQueryWnfStateData_0;
  if ( NtQueryWnfStateData_0 )
    return v6(a1, 0LL, 0LL, a4, a5, a6);
  else
    return 3221225785LL;
}
