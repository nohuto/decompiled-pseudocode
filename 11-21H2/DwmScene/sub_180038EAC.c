/*
 * XREFs of sub_180038EAC @ 0x180038EAC
 * Callers:
 *     sub_180034E40 @ 0x180034E40 (sub_180034E40.c)
 *     sub_1800362B0 @ 0x1800362B0 (sub_1800362B0.c)
 * Callees:
 *     sub_180011138 @ 0x180011138 (sub_180011138.c)
 *     sub_18002C460 @ 0x18002C460 (sub_18002C460.c)
 *     j_LanguageEnumProc @ 0x18002C8D8 (j_LanguageEnumProc.c)
 *     sub_180031324 @ 0x180031324 (sub_180031324.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_180038EAC(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // [rsp+30h] [rbp-18h] BYREF
  char v4; // [rsp+38h] [rbp-10h]

  sub_18002C460(a1 + 808, (__int64)&v3);
  sub_180031324((__int64 *)(a1 + 888), *(char **)(a1 + 896), *(_QWORD *)(a1 + 864), *(_QWORD *)(a1 + 872));
  sub_180011138(*(_QWORD *)(a1 + 864), *(_QWORD *)(a1 + 872));
  result = *(_QWORD *)(a1 + 864);
  *(_QWORD *)(a1 + 872) = result;
  if ( v4 )
    return j_LanguageEnumProc(v3);
  return result;
}
