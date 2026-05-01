/*
 * XREFs of sub_18000BE40 @ 0x18000BE40
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000F414 @ 0x18000F414 (sub_18000F414.c)
 */

__int64 __fastcall sub_18000BE40(__int64 a1)
{
  __int64 result; // rax

  if ( *(_BYTE *)a1 )
    return sub_18000F414((LPCRITICAL_SECTION)(a1 + 152), (PSRWLOCK)(a1 + 32));
  return result;
}
