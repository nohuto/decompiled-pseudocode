/*
 * XREFs of sub_18000D168 @ 0x18000D168
 * Callers:
 *     sub_18000BF7C @ 0x18000BF7C (sub_18000BF7C.c)
 *     sub_18000C00C @ 0x18000C00C (sub_18000C00C.c)
 *     sub_18000D940 @ 0x18000D940 (sub_18000D940.c)
 *     sub_180011994 @ 0x180011994 (sub_180011994.c)
 *     sub_180011A6C @ 0x180011A6C (sub_180011A6C.c)
 *     sub_180011ACC @ 0x180011ACC (sub_180011ACC.c)
 *     sub_180011B2C @ 0x180011B2C (sub_180011B2C.c)
 *     sub_180015174 @ 0x180015174 (sub_180015174.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_18000D168(__int64 a1)
{
  if ( !*(_BYTE *)a1 )
    SetLastError(*(_DWORD *)(a1 + 4));
}
