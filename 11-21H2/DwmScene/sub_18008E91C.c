/*
 * XREFs of sub_18008E91C @ 0x18008E91C
 * Callers:
 *     sub_18008E9B8 @ 0x18008E9B8 (sub_18008E9B8.c)
 *     sub_18008F01C @ 0x18008F01C (sub_18008F01C.c)
 *     sub_18008F3C0 @ 0x18008F3C0 (sub_18008F3C0.c)
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 */

__int64 __fastcall sub_18008E91C(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  unsigned __int64 v4; // rdx
  __int64 result; // rax

  if ( a1 != a2 )
  {
    v3 = a1;
    do
    {
      v4 = *(_QWORD *)(v3 + 24);
      if ( v4 >= 0x10 )
        result = sub_180010884(*(char **)v3, v4 + 1);
      *(_QWORD *)(v3 + 16) = 0LL;
      *(_QWORD *)(v3 + 24) = 15LL;
      *(_BYTE *)v3 = 0;
      v3 += 56LL;
    }
    while ( v3 != a2 );
  }
  return result;
}
