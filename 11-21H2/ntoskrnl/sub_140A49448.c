/*
 * XREFs of sub_140A49448 @ 0x140A49448
 * Callers:
 *     sub_140A494E8 @ 0x140A494E8 (sub_140A494E8.c)
 *     sub_140A6AEC0 @ 0x140A6AEC0 (sub_140A6AEC0.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140A4A768 @ 0x140A4A768 (sub_140A4A768.c)
 */

__int64 sub_140A49448()
{
  int v0; // eax
  _DWORD v2[6]; // [rsp+20h] [rbp-38h] BYREF
  char v3; // [rsp+38h] [rbp-20h]
  char v4; // [rsp+39h] [rbp-1Fh]
  char v5; // [rsp+3Ah] [rbp-1Eh]
  char v6; // [rsp+3Bh] [rbp-1Dh]

  v4 = byte_140C227DD;
  v3 = byte_140C227C2;
  v5 = byte_140C227DC;
  v2[0] = dword_140C227EC;
  v2[1] = dword_140C227E8;
  v0 = dword_140C227E0;
  if ( (dword_140C227CC & 8) != 0 )
    v0 = 6;
  v2[5] = dword_140C227CC;
  v2[2] = v0;
  v2[3] = dword_140C227E4;
  v2[4] = qword_140C227C4;
  v6 = 0;
  return sub_140A4A768(v2);
}
