/*
 * XREFs of sub_140767EAC @ 0x140767EAC
 * Callers:
 *     sub_140767E88 @ 0x140767E88 (sub_140767E88.c)
 *     sub_1409582C4 @ 0x1409582C4 (sub_1409582C4.c)
 *     sub_140958430 @ 0x140958430 (sub_140958430.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140767EAC(__int64 a1, __int64 a2, int a3, _QWORD *a4)
{
  __int64 v4; // r10
  _QWORD *v5; // rax

  v4 = 0LL;
  if ( a3 <= 0 )
  {
LABEL_5:
    LODWORD(v4) = -1;
    if ( a4 )
      *a4 = 0LL;
  }
  else
  {
    v5 = (_QWORD *)(a1 + 16);
    while ( a2 != *v5 )
    {
      v4 = (unsigned int)(v4 + 1);
      v5 += 3;
      if ( (int)v4 >= a3 )
        goto LABEL_5;
    }
    if ( a4 )
      *a4 = a1 + 8 * (v4 + 2 * (v4 + 1));
  }
  return (unsigned int)v4;
}
