/*
 * XREFs of sub_14095B2D4 @ 0x14095B2D4
 * Callers:
 *     sub_140777578 @ 0x140777578 (sub_140777578.c)
 * Callees:
 *     sub_1403A01B0 @ 0x1403A01B0 (sub_1403A01B0.c)
 *     sub_1405643B8 @ 0x1405643B8 (sub_1405643B8.c)
 *     sub_140749C4C @ 0x140749C4C (sub_140749C4C.c)
 *     sub_14076FBEC @ 0x14076FBEC (sub_14076FBEC.c)
 */

__int64 __fastcall sub_14095B2D4(__int64 a1, int a2, __int64 a3)
{
  int v3; // edi
  unsigned int v6; // edi

  v3 = a3;
  if ( (byte_140C0DD4B & 0x10) != 0 )
    sub_1405643B8(a1, (const EVENT_DESCRIPTOR *)qword_14003B6B0, a3, 1, *(const wchar_t **)(a1 + 48));
  if ( v3 && (*(_DWORD *)(a1 + 396) & 0x400000) != 0 )
  {
    v6 = -1073741267;
  }
  else
  {
    v6 = sub_140749C4C(a1, 1, a2);
    if ( (*(_DWORD *)(a1 + 396) & 0x1000000) != 0 )
    {
      sub_1403A01B0(*(_QWORD *)(a1 + 32));
      sub_14076FBEC(a1, 0x1000000);
    }
  }
  if ( (byte_140C0DD4B & 0x10) != 0 )
    sub_1405643B8(a1, (const EVENT_DESCRIPTOR *)qword_14003B710, a3, 1, *(const wchar_t **)(a1 + 48));
  return v6;
}
