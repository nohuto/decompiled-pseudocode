/*
 * XREFs of sub_140A508E0 @ 0x140A508E0
 * Callers:
 *     sub_140A50388 @ 0x140A50388 (sub_140A50388.c)
 * Callees:
 *     sub_1403B2F00 @ 0x1403B2F00 (sub_1403B2F00.c)
 *     sub_1403B41A0 @ 0x1403B41A0 (sub_1403B41A0.c)
 */

bool sub_140A508E0()
{
  int v0; // edi
  char v1; // si
  __int16 v2; // bx
  int v3; // edx
  bool result; // al
  __int16 v5; // [rsp+40h] [rbp+8h] BYREF

  v0 = dword_140C4C090;
  v1 = byte_140C4C028;
  v5 = 0;
  v2 = 0;
  if ( (int)sub_1403B2F00(0) >= 0 )
  {
    sub_1403B41A0(0, 0, (__int64)&v5, 2u, 0LL);
    v2 = v5;
    if ( (int)sub_1403B2F00(3) >= 0 )
    {
      sub_1403B41A0(3, 0, (__int64)&v5, 2u, 0LL);
      v2 |= v5;
    }
  }
  v3 = (v2 & 0x100) != 0 && (v0 & 0x10) == 0;
  if ( (v0 & 0x20) == 0 && (v2 & 0x200) != 0 )
    v3 |= 2u;
  result = (v0 & 0x40) == 0;
  if ( (v2 & 0x400) != 0 && result )
  {
    v3 |= 4u;
    if ( byte_140C4BFE1 )
    {
      if ( (v0 & 0x80u) == 0 || (unsigned __int8)v1 >= 4u && (v0 & 0x10000) == 0 )
        v3 &= ~4u;
    }
  }
  dword_140C23798 |= v3;
  return result;
}
