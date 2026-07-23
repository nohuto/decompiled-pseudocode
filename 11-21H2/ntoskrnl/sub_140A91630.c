/*
 * XREFs of sub_140A91630 @ 0x140A91630
 * Callers:
 *     <none>
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_140A8C924 @ 0x140A8C924 (sub_140A8C924.c)
 */

__int64 __fastcall sub_140A91630(__int64 a1, __int64 a2)
{
  unsigned __int8 CurrentIrql; // al

  if ( (dword_140C29FC0 & 0x10) != 0 )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql )
      sub_140A8C924(0xC4u, 0xE5uLL, CurrentIrql, 0LL, 0LL);
  }
  return sub_14042A5E0(a1, a2);
}
