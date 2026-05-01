/*
 * XREFs of sub_18000BE70 @ 0x18000BE70
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000F414 @ 0x18000F414 (sub_18000F414.c)
 */

__int64 __fastcall sub_18000BE70(__int64 a1)
{
  __int64 result; // rax

  if ( *(_BYTE *)a1 )
    return sub_18000F414((LPCRITICAL_SECTION)(a1 + 72), (PSRWLOCK)(a1 + 32));
  return result;
}
