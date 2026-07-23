/*
 * XREFs of sub_1405CC890 @ 0x1405CC890
 * Callers:
 *     sub_14099613C @ 0x14099613C (sub_14099613C.c)
 *     sub_14099F3A0 @ 0x14099F3A0 (sub_14099F3A0.c)
 * Callees:
 *     <none>
 */

char __fastcall sub_1405CC890(__int64 a1, int *a2)
{
  int v2; // r8d
  char result; // al

  v2 = 0;
  if ( (_InterlockedCompareExchange((volatile signed __int32 *)(a1 + 824), 0, 0) & 0x900) == 0x100 )
  {
    result = 0;
    v2 = 2;
  }
  else if ( (_InterlockedCompareExchange((volatile signed __int32 *)(a1 + 824), 0, 0) & 0x20) != 0 )
  {
    result = 1;
  }
  else
  {
    result = 0;
    v2 = 1;
  }
  if ( a2 )
    *a2 = v2;
  return result;
}
