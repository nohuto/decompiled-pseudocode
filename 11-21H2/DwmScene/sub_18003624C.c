/*
 * XREFs of sub_18003624C @ 0x18003624C
 * Callers:
 *     sub_180019CF0 @ 0x180019CF0 (sub_180019CF0.c)
 * Callees:
 *     sub_18002C3FC @ 0x18002C3FC (sub_18002C3FC.c)
 *     j_LanguageEnumProc @ 0x18002C8D8 (j_LanguageEnumProc.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_18003624C(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // [rsp+20h] [rbp-18h] BYREF
  char v4; // [rsp+28h] [rbp-10h]

  sub_18002C3FC(a1 + 8, (__int64)&v3);
  result = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)a1 + 8LL))(a1, &v3);
  if ( v4 )
    return j_LanguageEnumProc(v3);
  return result;
}
