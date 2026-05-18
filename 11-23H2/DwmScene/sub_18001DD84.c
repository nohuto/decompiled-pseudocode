/*
 * XREFs of sub_18001DD84 @ 0x18001DD84
 * Callers:
 *     sub_18001C834 @ 0x18001C834 (sub_18001C834.c)
 *     sub_18001D3F8 @ 0x18001D3F8 (sub_18001D3F8.c)
 *     sub_180028C50 @ 0x180028C50 (sub_180028C50.c)
 *     sub_18002A910 @ 0x18002A910 (sub_18002A910.c)
 *     sub_180034AB0 @ 0x180034AB0 (sub_180034AB0.c)
 *     sub_18003EE84 @ 0x18003EE84 (sub_18003EE84.c)
 *     sub_18005E7CC @ 0x18005E7CC (sub_18005E7CC.c)
 *     sub_18005EA14 @ 0x18005EA14 (sub_18005EA14.c)
 *     sub_18005EAD0 @ 0x18005EAD0 (sub_18005EAD0.c)
 *     sub_18007BAF0 @ 0x18007BAF0 (sub_18007BAF0.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall sub_18001DD84(_QWORD *a1)
{
  __int64 *v1; // rdx

  v1 = (__int64 *)*a1;
  if ( !*(_BYTE *)(*a1 + 25LL) )
  {
    do
    {
      a1 = v1;
      v1 = (__int64 *)*v1;
    }
    while ( !*((_BYTE *)v1 + 25) );
  }
  return a1;
}
