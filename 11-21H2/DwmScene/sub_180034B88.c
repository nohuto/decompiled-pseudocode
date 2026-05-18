/*
 * XREFs of sub_180034B88 @ 0x180034B88
 * Callers:
 *     sub_180038370 @ 0x180038370 (sub_180038370.c)
 * Callees:
 *     sub_18001F2B4 @ 0x18001F2B4 (sub_18001F2B4.c)
 *     sub_18002C460 @ 0x18002C460 (sub_18002C460.c)
 *     j_LanguageEnumProc @ 0x18002C8D8 (j_LanguageEnumProc.c)
 *     sub_180038F28 @ 0x180038F28 (sub_180038F28.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall sub_180034B88(__int64 a1)
{
  __int64 v2; // [rsp+20h] [rbp-18h] BYREF
  char v3; // [rsp+28h] [rbp-10h]

  sub_18002C460(a1 + 312, (__int64)&v2);
  sub_180038F28(a1);
  if ( *(_QWORD *)(a1 + 288) != *(_QWORD *)(a1 + 296) )
    sub_18001F2B4(&stru_1801EA288, 5, "Engine::CheckAllLoadersDestroyed() -- detected live Loader objects!");
  if ( v3 )
    j_LanguageEnumProc(v2);
}
