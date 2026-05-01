/*
 * XREFs of sub_1800120BC @ 0x1800120BC
 * Callers:
 *     sub_18000FFC4 @ 0x18000FFC4 (sub_18000FFC4.c)
 *     sub_180011BFC @ 0x180011BFC (sub_180011BFC.c)
 * Callees:
 *     sub_180011BC4 @ 0x180011BC4 (sub_180011BC4.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180016AA0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800120BC(__int64 a1, __int64 a2, unsigned int a3, __int64 a4, int a5, int a6, int a7)
{
  __int64 (__fastcall *v7)(__int64, __int64, _QWORD, _QWORD, _QWORD, int, int); // r11
  HMODULE v11; // rax

  v7 = (__int64 (__fastcall *)(__int64, __int64, _QWORD, _QWORD, _QWORD, int, int))NtUpdateWnfStateData;
  if ( NtUpdateWnfStateData )
    return v7(a1, a2, a3, 0LL, 0LL, a6, a7);
  v11 = sub_180011BC4();
  NtUpdateWnfStateData = (__int64)GetProcAddress(v11, "NtUpdateWnfStateData");
  v7 = (__int64 (__fastcall *)(__int64, __int64, _QWORD, _QWORD, _QWORD, int, int))NtUpdateWnfStateData;
  if ( NtUpdateWnfStateData )
    return v7(a1, a2, a3, 0LL, 0LL, a6, a7);
  else
    return 3221225785LL;
}
