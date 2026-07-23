/*
 * XREFs of sub_140230BA0 @ 0x140230BA0
 * Callers:
 *     sub_1402307A0 @ 0x1402307A0 (sub_1402307A0.c)
 *     sub_140230B44 @ 0x140230B44 (sub_140230B44.c)
 *     sub_140279590 @ 0x140279590 (sub_140279590.c)
 *     sub_140279D30 @ 0x140279D30 (sub_140279D30.c)
 *     sub_140291FC0 @ 0x140291FC0 (sub_140291FC0.c)
 *     sub_14031C860 @ 0x14031C860 (sub_14031C860.c)
 *     sub_14031EAA0 @ 0x14031EAA0 (sub_14031EAA0.c)
 *     sub_140339520 @ 0x140339520 (sub_140339520.c)
 * Callees:
 *     sub_140230C30 @ 0x140230C30 (sub_140230C30.c)
 *     sub_14024EF40 @ 0x14024EF40 (sub_14024EF40.c)
 */

char __fastcall sub_140230BA0(__int64 a1, char a2)
{
  __int16 v4; // cx
  char result; // al
  void *v6; // rsi
  __int64 v7; // rdx

  if ( !a1 )
    return 0;
  v4 = *(_WORD *)(a1 + 368);
  result = 0;
  if ( v4 != 16 )
  {
    if ( v4 == 51 )
    {
      v6 = (void *)qword_140D071B0;
      goto LABEL_5;
    }
    return 0;
  }
  if ( (*(_DWORD *)(a1 + 376) & 0x200) == 0
    && ((unsigned int)sub_14024EF40(3LL, *(_QWORD *)(a1 + 384)) || (unsigned int)sub_14024EF40(2LL, v7)) )
  {
    return 0;
  }
  v6 = &loc_140429897;
  result = sub_140230C30(*(_QWORD *)(a1 + 360));
LABEL_5:
  if ( (a2 & 1) == 0 && *(void **)(a1 + 360) == v6 )
    return 1;
  return result;
}
