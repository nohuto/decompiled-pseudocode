/*
 * XREFs of sub_180086850 @ 0x180086850
 * Callers:
 *     sub_180086614 @ 0x180086614 (sub_180086614.c)
 *     sub_1800EA4FF @ 0x1800EA4FF (sub_1800EA4FF.c)
 * Callees:
 *     sub_18007E7DC @ 0x18007E7DC (sub_18007E7DC.c)
 */

__int64 __fastcall sub_180086850(__int64 *a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return sub_18007E7DC(v1);
  return result;
}
