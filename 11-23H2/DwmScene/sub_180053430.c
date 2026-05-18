/*
 * XREFs of sub_180053430 @ 0x180053430
 * Callers:
 *     <none>
 * Callees:
 *     sub_180056848 @ 0x180056848 (sub_180056848.c)
 */

__int64 __fastcall sub_180053430(__int64 a1)
{
  __int64 result; // rax

  result = 0LL;
  if ( *(_QWORD *)(a1 + 96) )
    return sub_180056848();
  return result;
}
