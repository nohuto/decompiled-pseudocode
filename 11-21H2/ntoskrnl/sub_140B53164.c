/*
 * XREFs of sub_140B53164 @ 0x140B53164
 * Callers:
 *     sub_140B026CC @ 0x140B026CC (sub_140B026CC.c)
 * Callees:
 *     sub_1408534E0 @ 0x1408534E0 (sub_1408534E0.c)
 */

__int64 sub_140B53164()
{
  unsigned int v0; // ebx

  v0 = dword_140D050E4;
  if ( dword_140D050E4 || (v0 = dword_140D05084) != 0 )
  {
    dword_140C208C0 = v0;
    sub_1408534E0(
      (__int64)&unk_140C20810,
      (__int64)sub_1405D6A80,
      (__int64)&stru_140C207A0,
      (__int64)sub_1409962E0,
      (__int64)&stru_140C207A0);
    if ( dword_140C0C824 )
      dword_140C20790 = (dword_140C0C824 - 1) / v0 + 1;
    if ( dword_140C20790 == 1 )
      dword_140C20790 = 2;
    dword_140C208C4 |= 1u;
  }
  return 0LL;
}
