/*
 * XREFs of sub_180029368 @ 0x180029368
 * Callers:
 *     sub_180027830 @ 0x180027830 (sub_180027830.c)
 *     sub_180035810 @ 0x180035810 (sub_180035810.c)
 * Callees:
 *     sub_18002C460 @ 0x18002C460 (sub_18002C460.c)
 *     j_LanguageEnumProc @ 0x18002C8D8 (j_LanguageEnumProc.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_180029368(_BYTE *a1)
{
  __int64 result; // rax
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // [rsp+20h] [rbp-18h] BYREF
  char v7; // [rsp+28h] [rbp-10h]

  result = sub_18002C460(a1 + 24, &v6);
  if ( !a1[3977] )
  {
    result = (*(__int64 (__fastcall **)(_BYTE *))(*(_QWORD *)a1 + 248LL))(a1);
    a1[3977] = 1;
  }
  if ( v7 )
    return j_LanguageEnumProc(v6, v3, v4, v5);
  return result;
}
