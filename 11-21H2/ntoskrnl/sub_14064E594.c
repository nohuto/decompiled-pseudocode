/*
 * XREFs of sub_14064E594 @ 0x14064E594
 * Callers:
 *     sub_14064E738 @ 0x14064E738 (sub_14064E738.c)
 *     sub_14064E7FC @ 0x14064E7FC (sub_14064E7FC.c)
 *     sub_14064E9C0 @ 0x14064E9C0 (sub_14064E9C0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14064E594(_DWORD *a1)
{
  __int64 result; // rax
  __int64 i; // rdx

  result = 0LL;
  for ( i = 18LL; i < 90; i += 18LL )
  {
    if ( *a1 < dword_140C0B2E0[i + 16] )
      break;
    if ( a1[1] < dword_140C0B2E0[i + 17] )
      break;
    result = (unsigned int)(result + 1);
  }
  return result;
}
