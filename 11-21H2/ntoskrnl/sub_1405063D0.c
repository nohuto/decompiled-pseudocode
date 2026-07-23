/*
 * XREFs of sub_1405063D0 @ 0x1405063D0
 * Callers:
 *     <none>
 * Callees:
 *     sub_140506410 @ 0x140506410 (sub_140506410.c)
 *     sub_14050A324 @ 0x14050A324 (sub_14050A324.c)
 */

__int64 __fastcall sub_1405063D0(__int64 a1)
{
  int v1; // eax

  v1 = *(_DWORD *)(a1 + 8);
  if ( v1 >= 0 )
  {
    if ( v1 <= 1 )
      return sub_140506410(a1);
    if ( v1 == 3 )
      return sub_14050A324();
  }
  return 3221225659LL;
}
