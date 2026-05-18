/*
 * XREFs of sub_180091E94 @ 0x180091E94
 * Callers:
 *     sub_180092060 @ 0x180092060 (sub_180092060.c)
 * Callees:
 *     sub_180010574 @ 0x180010574 (sub_180010574.c)
 */

__int64 __fastcall sub_180091E94(__int64 a1)
{
  volatile signed __int32 *v2; // rcx
  __int64 result; // rax
  volatile signed __int32 *v4; // rcx

  v2 = *(volatile signed __int32 **)(a1 + 32);
  if ( v2 )
    result = sub_180010574(v2);
  v4 = *(volatile signed __int32 **)(a1 + 16);
  if ( v4 )
    return sub_180010574(v4);
  return result;
}
