/*
 * XREFs of sub_140406900 @ 0x140406900
 * Callers:
 *     sub_1404068E0 @ 0x1404068E0 (sub_1404068E0.c)
 *     sub_140406980 @ 0x140406980 (sub_140406980.c)
 *     sub_140406B10 @ 0x140406B10 (sub_140406B10.c)
 * Callees:
 *     sub_140400F4C @ 0x140400F4C (sub_140400F4C.c)
 */

__int64 __fastcall sub_140406900(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  __int64 v4; // rdi
  int v5; // esi
  __int64 v9; // r14

  v4 = a1 + 32;
  v5 = 0;
  if ( a4 )
  {
    v9 = *(unsigned int *)(a3 + 36);
    while ( sub_140400F4C() )
    {
      v4 += v9;
      if ( ++v5 >= a4 )
        goto LABEL_5;
    }
  }
  else
  {
LABEL_5:
    *(_BYTE *)a1 = 0;
    *(_QWORD *)(a1 + 8) = a3;
  }
  return a1;
}
