/*
 * XREFs of sub_14022020C @ 0x14022020C
 * Callers:
 *     sub_14069954C @ 0x14069954C (sub_14069954C.c)
 *     sub_140A0AC70 @ 0x140A0AC70 (sub_140A0AC70.c)
 * Callees:
 *     sub_140348B40 @ 0x140348B40 (sub_140348B40.c)
 */

__int64 __fastcall sub_14022020C(__int64 a1)
{
  ULONG_PTR v2; // rcx
  __int64 result; // rax

  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 )
  {
    result = sub_140348B40(v2);
    *(_OWORD *)a1 = 0LL;
  }
  return result;
}
