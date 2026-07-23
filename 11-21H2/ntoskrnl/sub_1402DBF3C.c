/*
 * XREFs of sub_1402DBF3C @ 0x1402DBF3C
 * Callers:
 *     sub_1402DB994 @ 0x1402DB994 (sub_1402DB994.c)
 *     sub_1402DBD88 @ 0x1402DBD88 (sub_1402DBD88.c)
 *     sub_1402DBFAC @ 0x1402DBFAC (sub_1402DBFAC.c)
 *     sub_1402DC164 @ 0x1402DC164 (sub_1402DC164.c)
 *     sub_14033D80C @ 0x14033D80C (sub_14033D80C.c)
 *     sub_14033F41C @ 0x14033F41C (sub_14033F41C.c)
 *     sub_140757FFC @ 0x140757FFC (sub_140757FFC.c)
 *     sub_14075FC44 @ 0x14075FC44 (sub_14075FC44.c)
 *     sub_140761DD8 @ 0x140761DD8 (sub_140761DD8.c)
 *     sub_140761DF8 @ 0x140761DF8 (sub_140761DF8.c)
 *     sub_140761E94 @ 0x140761E94 (sub_140761E94.c)
 *     sub_1407623F0 @ 0x1407623F0 (sub_1407623F0.c)
 *     sub_140814DC0 @ 0x140814DC0 (sub_140814DC0.c)
 *     sub_140970E00 @ 0x140970E00 (sub_140970E00.c)
 *     sub_140971068 @ 0x140971068 (sub_140971068.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall sub_1402DBF3C(unsigned __int64 a1)
{
  _QWORD *i; // rdx

  for ( i = *(_QWORD **)(*(_QWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 1368LL) + 80LL); ; i = (_QWORD *)*i )
  {
    while ( 1 )
    {
      if ( !i )
        return 0LL;
      if ( a1 <= i[6] )
        break;
      i = (_QWORD *)i[1];
    }
    if ( a1 >= (i[5] & 0xFFFFFFFFFFFFFFFCuLL) )
      break;
  }
  return i;
}
