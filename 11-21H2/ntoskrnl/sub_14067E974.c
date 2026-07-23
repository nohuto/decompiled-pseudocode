/*
 * XREFs of sub_14067E974 @ 0x14067E974
 * Callers:
 *     sub_14053F5E8 @ 0x14053F5E8 (sub_14053F5E8.c)
 *     sub_14067E1BC @ 0x14067E1BC (sub_14067E1BC.c)
 *     sub_140690978 @ 0x140690978 (sub_140690978.c)
 *     sub_14085BE8C @ 0x14085BE8C (sub_14085BE8C.c)
 * Callees:
 *     sub_140721CE0 @ 0x140721CE0 (sub_140721CE0.c)
 *     sub_1407C0854 @ 0x1407C0854 (sub_1407C0854.c)
 */

void __fastcall sub_14067E974(__int64 a1)
{
  unsigned __int16 i; // bx
  __int64 v3; // rax

  for ( i = 0; i <= *(_WORD *)(a1 + 2); ++i )
  {
    v3 = sub_140721CE0(a1, i);
    sub_1407C0854(v3);
  }
}
