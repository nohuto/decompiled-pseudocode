/*
 * XREFs of sub_140B531EC @ 0x140B531EC
 * Callers:
 *     sub_140B026CC @ 0x140B026CC (sub_140B026CC.c)
 * Callees:
 *     sub_1408534E0 @ 0x1408534E0 (sub_1408534E0.c)
 */

__int64 sub_140B531EC()
{
  if ( dword_140D05258 )
  {
    dword_140C209C8 = dword_140D05258;
    sub_1408534E0(
      (__int64)&unk_140C20918,
      (__int64)sub_1405D6A80,
      (__int64)&stru_140C207A0,
      (__int64)sub_1409965B0,
      (__int64)&stru_140C207A0);
    dword_140C209CC |= 1u;
  }
  return 0LL;
}
