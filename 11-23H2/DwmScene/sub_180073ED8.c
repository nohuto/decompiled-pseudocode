/*
 * XREFs of sub_180073ED8 @ 0x180073ED8
 * Callers:
 *     sub_180074090 @ 0x180074090 (sub_180074090.c)
 * Callees:
 *     sub_18002AA98 @ 0x18002AA98 (sub_18002AA98.c)
 *     sub_180073F6C @ 0x180073F6C (sub_180073F6C.c)
 *     sub_180074020 @ 0x180074020 (sub_180074020.c)
 */

void __fastcall sub_180073ED8(__int64 *a1)
{
  __int64 v1; // r8
  unsigned __int64 v3; // rcx
  __int64 v4; // rbx

  v1 = *a1;
  v3 = 0x86BCA1AF286BCA1BuLL * ((a1[1] - *a1) >> 3);
  if ( v3 <= 0xF0 )
  {
    if ( v3 < 0xF0 )
    {
      if ( 0x86BCA1AF286BCA1BuLL * ((a1[2] - v1) >> 3) >= 0xF0 )
        a1[1] = sub_180074020((void *)a1[1]);
      else
        sub_180073F6C(a1);
    }
  }
  else
  {
    v4 = v1 + 36480;
    sub_18002AA98(v1 + 36480, a1[1]);
    a1[1] = v4;
  }
}
