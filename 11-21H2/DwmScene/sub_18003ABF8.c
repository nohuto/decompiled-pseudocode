/*
 * XREFs of sub_18003ABF8 @ 0x18003ABF8
 * Callers:
 *     sub_180033018 @ 0x180033018 (sub_180033018.c)
 * Callees:
 *     sub_18002C3FC @ 0x18002C3FC (sub_18002C3FC.c)
 *     j_LanguageEnumProc @ 0x18002C8D8 (j_LanguageEnumProc.c)
 *     sub_18003A638 @ 0x18003A638 (sub_18003A638.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_18003ABF8(_BYTE *a1)
{
  __int64 result; // rax
  __int64 v3; // [rsp+20h] [rbp-18h] BYREF
  char v4; // [rsp+28h] [rbp-10h]

  result = sub_18002C3FC((__int64)(a1 + 8), (__int64)&v3);
  if ( !a1[1160] )
  {
    sub_18003A638((__int64)a1);
    result = (*(__int64 (__fastcall **)(_BYTE *))(*(_QWORD *)a1 + 64LL))(a1);
    a1[1160] = 1;
  }
  if ( v4 )
    return j_LanguageEnumProc(v3);
  return result;
}
