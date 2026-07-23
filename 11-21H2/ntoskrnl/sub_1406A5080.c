/*
 * XREFs of sub_1406A5080 @ 0x1406A5080
 * Callers:
 *     sub_1406A4E90 @ 0x1406A4E90 (sub_1406A4E90.c)
 *     sub_1407C3490 @ 0x1407C3490 (sub_1407C3490.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1406A5080(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v5; // r8

  result = 0xFFFFFFFFLL;
  if ( a2 )
    result = *(unsigned int *)(a2 + 36);
  if ( a1 )
  {
    if ( !a3 )
      return *(unsigned int *)(a1 + 96);
    v5 = *(_QWORD *)(a1 + 288);
    if ( v5 )
    {
      if ( v5 == a3 )
        return *(unsigned int *)(a1 + 280);
      return *(unsigned int *)(a1 + 96);
    }
    if ( !a2 )
      return *(unsigned int *)(a1 + 96);
  }
  return result;
}
