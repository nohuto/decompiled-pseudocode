/*
 * XREFs of sub_1402DF940 @ 0x1402DF940
 * Callers:
 *     sub_1402313B4 @ 0x1402313B4 (sub_1402313B4.c)
 *     sub_1402A1788 @ 0x1402A1788 (sub_1402A1788.c)
 *     sub_1402DF880 @ 0x1402DF880 (sub_1402DF880.c)
 *     sub_1405945DC @ 0x1405945DC (sub_1405945DC.c)
 * Callees:
 *     ObReferenceObjectSafeWithTag @ 0x140302BD0 (ObReferenceObjectSafeWithTag.c)
 */

_QWORD *__fastcall sub_1402DF940(__int64 a1)
{
  _QWORD *v1; // rsi
  _QWORD *i; // rbx
  _QWORD *v3; // rdi

  if ( *(_QWORD *)(a1 + 616) && (*(_DWORD *)(a1 + 4) & 2) == 0 )
  {
    v1 = (_QWORD *)(a1 + 16);
    for ( i = *(_QWORD **)(a1 + 16); i != v1; i = (_QWORD *)*i )
    {
      v3 = i - 148;
      if ( (*((_BYTE *)i + 665) & 1) == 0
        && (*((_DWORD *)v3 + 281) & 0xC00u) >= 0xC00
        && (*((_BYTE *)v3 + 1851) & 0x60) != 0x40
        && (unsigned __int8)ObReferenceObjectSafeWithTag(i - 148, 1953261124LL) )
      {
        return i - 148;
      }
    }
  }
  return 0LL;
}
