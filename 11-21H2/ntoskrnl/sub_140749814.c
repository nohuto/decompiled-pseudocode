/*
 * XREFs of sub_140749814 @ 0x140749814
 * Callers:
 *     sub_140749848 @ 0x140749848 (sub_140749848.c)
 *     sub_1407669D4 @ 0x1407669D4 (sub_1407669D4.c)
 * Callees:
 *     sub_140863944 @ 0x140863944 (sub_140863944.c)
 */

__int64 __fastcall sub_140749814(__int64 a1)
{
  ULONG_PTR v2; // rcx
  __int64 result; // rax

  v2 = *(_QWORD *)(a1 + 720);
  if ( v2 )
  {
    result = sub_140863944(v2);
    *(_QWORD *)(a1 + 720) = 0LL;
  }
  return result;
}
