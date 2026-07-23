/*
 * XREFs of sub_14076B534 @ 0x14076B534
 * Callers:
 *     sub_14076B438 @ 0x14076B438 (sub_14076B438.c)
 *     sub_140773B90 @ 0x140773B90 (sub_140773B90.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14076B534(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax

  while ( a1 )
  {
    result = *(unsigned int *)(a1 + 560);
    if ( (result & 0x18) != 0 )
      break;
    a1 = *(_QWORD *)(a1 + 16);
  }
  *a2 = a1;
  return result;
}
