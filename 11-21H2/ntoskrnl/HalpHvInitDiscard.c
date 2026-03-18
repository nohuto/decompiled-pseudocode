/*
 * XREFs of HalpHvInitDiscard @ 0x140B2AAB4
 * Callers:
 *     HalpHvInitSystem @ 0x140A5B670 (HalpHvInitSystem.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 HalpHvInitDiscard()
{
  _QWORD v1[68]; // [rsp+20h] [rbp-E0h] BYREF

  memset(v1, 0, 0x218uLL);
  if ( qword_140C01D60 )
  {
    qword_140C01D60(v1);
    if ( !LODWORD(v1[3]) && HIDWORD(v1[3]) && ((HIDWORD(v1[3]) + 1) & HIDWORD(v1[3])) == 0 )
    {
      HalpEnlightenment = v1[0];
      dword_140C4C47C = HIDWORD(v1[3]);
      qword_140C4C480 = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))v1[4];
      qword_140C4C488 = (__int64 (__fastcall *)(_QWORD))v1[5];
      qword_140C4C4A8 = v1[9];
      qword_140C4C4B0 = v1[10];
      qword_140C4C4B8 = v1[11];
      qword_140C4C490 = v1[6];
      qword_140C4C498 = v1[7];
      qword_140C4C4A0 = v1[8];
      qword_140C4C4D0 = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))v1[14];
      qword_140C4C4F8 = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))v1[19];
      qword_140C4C500 = (__int64 (__fastcall *)(_QWORD))v1[20];
      qword_140C4C508 = (__int64 (*)(void))v1[21];
      qword_140C4C510 = v1[22];
      qword_140C4C518 = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))v1[23];
      qword_140C4C520 = v1[24];
      qword_140C4C528 = (__int64 (__fastcall *)(_QWORD, _QWORD))v1[25];
      qword_140C4C5D0 = (__int64 (__fastcall *)(_QWORD))v1[46];
      qword_140C4C5D8 = v1[47];
      qword_140C4C530 = (__int64 (*)(void))v1[26];
      qword_140C4C538 = (__int64 (__fastcall *)(_QWORD))v1[27];
      qword_140C4C540 = (__int64 (__fastcall *)(_QWORD, _QWORD))v1[28];
      qword_140C4C548 = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _DWORD, _DWORD, _QWORD))v1[29];
      qword_140C4C550 = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))v1[30];
      xmmword_140C4C468 = *(_OWORD *)&v1[1];
      qword_140C4C4C0 = v1[12];
      qword_140C4C4C8 = v1[13];
      qword_140C4C4D8 = (__int64 (*)(void))v1[15];
      qword_140C4C4E0 = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))v1[16];
      qword_140C4C4E8 = (__int64 (__fastcall *)(_QWORD))v1[17];
      qword_140C4C4F0 = v1[18];
      qword_140C4C558 = v1[31];
      qword_140C4C560 = v1[32];
      qword_140C4C568 = v1[33];
      qword_140C4C570 = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))v1[34];
      qword_140C4C578 = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))v1[35];
      qword_140C4C580 = v1[36];
      qword_140C4C588 = v1[37];
      qword_140C4C590 = v1[38];
      qword_140C4C598 = v1[39];
      qword_140C4C5A0 = v1[40];
      qword_140C4C5A8 = v1[41];
      qword_140C4C5B0 = v1[42];
      qword_140C4C5B8 = v1[43];
      qword_140C4C5C0 = (__int64 (__fastcall *)(_QWORD, _QWORD))v1[44];
      qword_140C4C5C8 = v1[45];
      qword_140C4C5E0 = v1[48];
      qword_140C4C5E8 = v1[49];
      qword_140C4C5F0 = v1[50];
      qword_140C4C5F8 = v1[51];
      qword_140C4C600 = v1[52];
      qword_140C4C608 = v1[53];
      qword_140C4C638 = v1[59];
      qword_140C4C648 = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))v1[61];
      qword_140C4C610 = v1[54];
      qword_140C4C618 = v1[55];
      qword_140C4C620 = v1[56];
      qword_140C4C628 = v1[57];
      qword_140C4C630 = v1[58];
      qword_140C4C650 = v1[62];
      qword_140C4C660 = v1[64];
      qword_140C4C658 = v1[63];
      qword_140C4C668 = v1[65];
      qword_140C4C670 = v1[66];
    }
  }
  if ( HalpHvCpuManager )
  {
    if ( qword_140C4C490 )
      HalpHvSleepEnlightenedCpuManager = 1;
    if ( qword_140C4C4D0 )
      HalpHvWheaEnlightenedCpuManager = 1;
  }
  off_140C01CE8[0] = (__int64 (__fastcall *)())HalpPrepareForBugcheck;
  off_140C01DF0[0] = HalpSaveAndDisableEnlightenment;
  off_140C01DF8[0] = HalpRestoreHvEnlightenment;
  return 0LL;
}
