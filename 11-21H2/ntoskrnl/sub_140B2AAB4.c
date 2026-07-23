/*
 * XREFs of sub_140B2AAB4 @ 0x140B2AAB4
 * Callers:
 *     sub_140A5B670 @ 0x140A5B670 (sub_140A5B670.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 sub_140B2AAB4()
{
  __int64 v0; // rdx
  _QWORD v2[68]; // [rsp+20h] [rbp-E0h] BYREF

  memset(v2, 0, 0x218uLL);
  if ( qword_140C01D60 )
  {
    sub_14042A5E0(v2, v0);
    if ( !LODWORD(v2[3]) && HIDWORD(v2[3]) && ((HIDWORD(v2[3]) + 1) & HIDWORD(v2[3])) == 0 )
    {
      qword_140C4C460 = v2[0];
      dword_140C4C47C = HIDWORD(v2[3]);
      qword_140C4C480 = v2[4];
      qword_140C4C488 = v2[5];
      qword_140C4C4A8 = v2[9];
      qword_140C4C4B0 = v2[10];
      qword_140C4C4B8 = v2[11];
      qword_140C4C490 = v2[6];
      qword_140C4C498 = v2[7];
      qword_140C4C4A0 = v2[8];
      qword_140C4C4D0 = v2[14];
      qword_140C4C4F8 = v2[19];
      qword_140C4C500 = v2[20];
      qword_140C4C508 = v2[21];
      qword_140C4C510 = v2[22];
      qword_140C4C518 = v2[23];
      qword_140C4C520 = v2[24];
      qword_140C4C528 = v2[25];
      qword_140C4C5D0 = v2[46];
      qword_140C4C5D8 = v2[47];
      qword_140C4C530 = v2[26];
      qword_140C4C538 = v2[27];
      qword_140C4C540 = v2[28];
      qword_140C4C548 = v2[29];
      qword_140C4C550 = v2[30];
      xmmword_140C4C468 = *(_OWORD *)&v2[1];
      qword_140C4C4C0 = v2[12];
      qword_140C4C4C8 = v2[13];
      qword_140C4C4D8 = v2[15];
      qword_140C4C4E0 = v2[16];
      qword_140C4C4E8 = v2[17];
      qword_140C4C4F0 = v2[18];
      qword_140C4C558 = v2[31];
      qword_140C4C560 = v2[32];
      qword_140C4C568 = v2[33];
      qword_140C4C570 = v2[34];
      qword_140C4C578 = v2[35];
      qword_140C4C580 = v2[36];
      qword_140C4C588 = v2[37];
      qword_140C4C590 = v2[38];
      qword_140C4C598 = v2[39];
      qword_140C4C5A0 = v2[40];
      qword_140C4C5A8 = v2[41];
      qword_140C4C5B0 = v2[42];
      qword_140C4C5B8 = v2[43];
      qword_140C4C5C0 = v2[44];
      qword_140C4C5C8 = v2[45];
      qword_140C4C5E0 = v2[48];
      qword_140C4C5E8 = v2[49];
      qword_140C4C5F0 = v2[50];
      qword_140C4C5F8 = v2[51];
      qword_140C4C600 = v2[52];
      qword_140C4C608 = v2[53];
      qword_140C4C638 = v2[59];
      qword_140C4C648 = v2[61];
      qword_140C4C610 = v2[54];
      qword_140C4C618 = v2[55];
      qword_140C4C620 = v2[56];
      qword_140C4C628 = v2[57];
      qword_140C4C630 = v2[58];
      qword_140C4C650 = v2[62];
      qword_140C4C660 = v2[64];
      qword_140C4C658 = v2[63];
      qword_140C4C668 = v2[65];
      qword_140C4C670 = v2[66];
    }
  }
  if ( byte_140C4C678 )
  {
    if ( qword_140C4C490 )
      byte_140C4C449 = 1;
    if ( qword_140C4C4D0 )
      byte_140C4C450 = 1;
  }
  off_140C01CE8[0] = (__int64 (__fastcall *)())sub_14050E8C0;
  off_140C01DF0[0] = sub_14050F570;
  off_140C01DF8[0] = sub_14050F200;
  return 0LL;
}
