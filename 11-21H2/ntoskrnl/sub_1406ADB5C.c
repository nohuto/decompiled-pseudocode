/*
 * XREFs of sub_1406ADB5C @ 0x1406ADB5C
 * Callers:
 *     sub_1406ADA90 @ 0x1406ADA90 (sub_1406ADA90.c)
 * Callees:
 *     sub_1402AD030 @ 0x1402AD030 (sub_1402AD030.c)
 *     sub_140347810 @ 0x140347810 (sub_140347810.c)
 *     sub_1406ADBC8 @ 0x1406ADBC8 (sub_1406ADBC8.c)
 *     sub_140988C68 @ 0x140988C68 (sub_140988C68.c)
 */

__int64 __fastcall sub_1406ADB5C(struct _EX_RUNDOWN_REF *a1, __int64 a2)
{
  struct _EX_RUNDOWN_REF *v2; // rsi
  unsigned int v5; // eax
  unsigned int v6; // ebx

  v2 = a1 + 17;
  if ( !sub_140347810(a1 + 17) )
    return (unsigned int)-1073741696;
  if ( *(_WORD *)(a2 + 2) )
  {
    if ( *(_WORD *)(a2 + 2) != 1 )
    {
      v6 = -1073741811;
      goto LABEL_5;
    }
    v5 = sub_140988C68(a1);
  }
  else
  {
    v5 = sub_1406ADBC8(a1, a2);
  }
  v6 = v5;
LABEL_5:
  sub_1402AD030(v2);
  return v6;
}
