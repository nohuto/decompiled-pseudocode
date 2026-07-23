/*
 * XREFs of sub_140A625DC @ 0x140A625DC
 * Callers:
 *     sub_140A62700 @ 0x140A62700 (sub_140A62700.c)
 * Callees:
 *     sub_14039188C @ 0x14039188C (sub_14039188C.c)
 *     sub_1403B2B00 @ 0x1403B2B00 (sub_1403B2B00.c)
 *     sub_1403B2F00 @ 0x1403B2F00 (sub_1403B2F00.c)
 *     sub_1403B41A0 @ 0x1403B41A0 (sub_1403B41A0.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

void __fastcall sub_140A625DC(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  char v5; // bl
  __int16 v6; // [rsp+40h] [rbp+8h] BYREF
  __int16 v7; // [rsp+48h] [rbp+10h] BYREF

  v6 = 0;
  v7 = 0;
  if ( !*(_BYTE *)(a1 + 45) )
  {
    sub_14042A5E0(0LL, a2);
    if ( (int)sub_1403B2F00(0) >= 0 )
    {
      sub_1403B41A0(0, (unsigned __int8)byte_140C4C078 >> 1, (__int64)&v7, 2u, 0LL);
      v5 = v7;
      v6 = v7;
      if ( (int)sub_1403B2F00(3) >= 0 )
      {
        sub_1403B41A0(3, (unsigned __int8)byte_140C4C078 >> 1, (__int64)&v7, 2u, 0LL);
        v5 = v7 | v6;
      }
      v6 = v5 & 0x20;
      sub_1403B2B00(0, (unsigned __int8)byte_140C4C078 >> 1, (__int64)&v6, 2u, 0LL);
      if ( (int)sub_1403B2F00(3) >= 0 )
        sub_1403B2B00(3, (unsigned __int8)byte_140C4C078 >> 1, (__int64)&v6, 2u, 0LL);
    }
    if ( (dword_140C0C60C & 4) != 0 )
      sub_14039188C(v3, v2, v4);
  }
}
