/*
 * XREFs of sub_1402806A0 @ 0x1402806A0
 * Callers:
 *     sub_14023AF98 @ 0x14023AF98 (sub_14023AF98.c)
 *     sub_14026C808 @ 0x14026C808 (sub_14026C808.c)
 *     sub_1402724C0 @ 0x1402724C0 (sub_1402724C0.c)
 *     sub_140279590 @ 0x140279590 (sub_140279590.c)
 *     sub_1402802DC @ 0x1402802DC (sub_1402802DC.c)
 *     sub_140280308 @ 0x140280308 (sub_140280308.c)
 *     sub_1402803FC @ 0x1402803FC (sub_1402803FC.c)
 *     sub_1402804F0 @ 0x1402804F0 (sub_1402804F0.c)
 *     sub_1402810B0 @ 0x1402810B0 (sub_1402810B0.c)
 *     sub_14028E238 @ 0x14028E238 (sub_14028E238.c)
 *     sub_14028EDD0 @ 0x14028EDD0 (sub_14028EDD0.c)
 *     sub_1402CE240 @ 0x1402CE240 (sub_1402CE240.c)
 *     sub_1402D0500 @ 0x1402D0500 (sub_1402D0500.c)
 *     sub_1402E67E8 @ 0x1402E67E8 (sub_1402E67E8.c)
 *     sub_1402E766C @ 0x1402E766C (sub_1402E766C.c)
 *     sub_140318330 @ 0x140318330 (sub_140318330.c)
 *     sub_140319160 @ 0x140319160 (sub_140319160.c)
 *     sub_14031EAA0 @ 0x14031EAA0 (sub_14031EAA0.c)
 *     sub_14032D1C0 @ 0x14032D1C0 (sub_14032D1C0.c)
 *     sub_140330730 @ 0x140330730 (sub_140330730.c)
 *     sub_14033A030 @ 0x14033A030 (sub_14033A030.c)
 *     sub_14033D80C @ 0x14033D80C (sub_14033D80C.c)
 *     sub_14033E5D0 @ 0x14033E5D0 (sub_14033E5D0.c)
 *     sub_14057FA8C @ 0x14057FA8C (sub_14057FA8C.c)
 *     sub_1405B88D8 @ 0x1405B88D8 (sub_1405B88D8.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall sub_1402806A0(unsigned __int64 a1)
{
  if ( (a1 & 0x400) == 0 )
    return 0LL;
  if ( qword_140C50780 )
  {
    if ( (a1 & 0x10) == 0 )
      a1 &= ~qword_140C50780;
  }
  return HIDWORD(a1) == 0xFFFFFFFF;
}
