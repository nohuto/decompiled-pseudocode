/*
 * XREFs of sub_18005D318 @ 0x18005D318
 * Callers:
 *     sub_180064EF0 @ 0x180064EF0 (sub_180064EF0.c)
 *     sub_18006A694 @ 0x18006A694 (sub_18006A694.c)
 *     sub_18008D684 @ 0x18008D684 (sub_18008D684.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18005D318(__int64 a1, int a2, char a3)
{
  unsigned int v3; // eax
  __int64 result; // rax

  v3 = *(_DWORD *)(a1 + 440);
  if ( a3 )
    result = a2 | v3;
  else
    result = ~a2 & v3;
  *(_DWORD *)(a1 + 440) = result;
  return result;
}
