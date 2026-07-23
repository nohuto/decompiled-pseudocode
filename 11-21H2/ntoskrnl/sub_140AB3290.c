/*
 * XREFs of sub_140AB3290 @ 0x140AB3290
 * Callers:
 *     sub_140AB2168 @ 0x140AB2168 (sub_140AB2168.c)
 *     sub_140AB28B8 @ 0x140AB28B8 (sub_140AB28B8.c)
 *     sub_140AB3214 @ 0x140AB3214 (sub_140AB3214.c)
 *     sub_140AB3358 @ 0x140AB3358 (sub_140AB3358.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140AB3290(__int64 a1, _BYTE *a2, int a3, _DWORD *a4)
{
  __int64 v4; // r10
  __int64 v6; // rcx
  __int64 v7; // rcx

  v4 = (unsigned int)*a4;
  if ( (int)v4 + a3 > (unsigned int)*(unsigned __int8 *)(a1 + 5) )
    return 3221225990LL;
  *a4 = v4 + a3;
  v6 = v4 + a1 + 6;
  if ( a3 )
  {
    v7 = v6 - (_QWORD)a2;
    do
    {
      *a2 = a2[v7];
      ++a2;
      --a3;
    }
    while ( a3 );
  }
  return 0LL;
}
