/*
 * XREFs of sub_18000D644 @ 0x18000D644
 * Callers:
 *     sub_18000EE74 @ 0x18000EE74 (sub_18000EE74.c)
 *     sub_18000FD54 @ 0x18000FD54 (sub_18000FD54.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_18000D644(__int64 a1)
{
  if ( !*(_BYTE *)a1 )
    SetLastError(*(_DWORD *)(a1 + 4));
}
