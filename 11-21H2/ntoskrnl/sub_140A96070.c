/*
 * XREFs of sub_140A96070 @ 0x140A96070
 * Callers:
 *     <none>
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_140A985B4 @ 0x140A985B4 (sub_140A985B4.c)
 */

__int64 __fastcall sub_140A96070(__int64 a1)
{
  __int64 v2; // rdx

  sub_140A985B4(*(_DWORD *)(a1 + 8) & 0xFFFFFFFC);
  return sub_14042A5E0(a1, v2);
}
