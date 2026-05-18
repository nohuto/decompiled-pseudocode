/*
 * XREFs of sub_180037528 @ 0x180037528
 * Callers:
 *     sub_180016260 @ 0x180016260 (sub_180016260.c)
 * Callees:
 *     sub_18002C3FC @ 0x18002C3FC (sub_18002C3FC.c)
 *     j_LanguageEnumProc @ 0x18002C8D8 (j_LanguageEnumProc.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_180037528(_QWORD *a1, _QWORD *a2)
{
  __int64 result; // rax
  __int64 v5; // [rsp+20h] [rbp-18h] BYREF
  char v6; // [rsp+28h] [rbp-10h]

  sub_18002C3FC((__int64)(a1 + 1), (__int64)&v5);
  a1[114] = *a2;
  a1[115] = a2[1];
  result = (*(__int64 (__fastcall **)(_QWORD *, _QWORD *))(*a1 + 88LL))(a1, a2);
  if ( v6 )
    return j_LanguageEnumProc(v5);
  return result;
}
