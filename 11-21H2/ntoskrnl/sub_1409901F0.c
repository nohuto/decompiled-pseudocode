/*
 * XREFs of sub_1409901F0 @ 0x1409901F0
 * Callers:
 *     sub_140996DE8 @ 0x140996DE8 (sub_140996DE8.c)
 * Callees:
 *     sub_1407FEC6C @ 0x1407FEC6C (sub_1407FEC6C.c)
 */

__int64 __fastcall sub_1409901F0(char a1)
{
  unsigned int v1; // ebx
  _DWORD v3[4]; // [rsp+30h] [rbp-38h] BYREF
  unsigned int v4[2]; // [rsp+40h] [rbp-28h] BYREF
  __int128 v5; // [rsp+48h] [rbp-20h]

  v1 = 0;
  v3[2] = 0;
  v5 = 0LL;
  if ( a1 )
  {
    if ( !byte_140C235C9 )
    {
      v4[0] = 5;
      v4[1] = 128;
      v3[0] = 2;
      v3[1] = 1;
      sub_1407FEC6C(v4, 0, v3, 4, 1u);
    }
  }
  else if ( byte_140C235C9 )
  {
    byte_140C235CA = 1;
    return 259;
  }
  return v1;
}
