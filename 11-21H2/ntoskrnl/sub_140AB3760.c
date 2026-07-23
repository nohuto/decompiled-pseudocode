/*
 * XREFs of sub_140AB3760 @ 0x140AB3760
 * Callers:
 *     sub_140AB23B0 @ 0x140AB23B0 (sub_140AB23B0.c)
 *     sub_140AB28B8 @ 0x140AB28B8 (sub_140AB28B8.c)
 *     sub_140AB346C @ 0x140AB346C (sub_140AB346C.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140AB3760(__int64 a1, __int64 a2)
{
  char v2; // al

  v2 = *(_BYTE *)(a1 + 1);
  switch ( v2 )
  {
    case 8:
      return (char)a2;
    case 16:
      return (__int16)a2;
    case 32:
      return (int)a2;
  }
  return a2;
}
