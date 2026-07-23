/*
 * XREFs of HalpHvInitDiscard @ 0x140B6DCC0
 * Callers:
 *     HalpHvInitSystem @ 0x140A916C0 (HalpHvInitSystem.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 HalpHvInitDiscard()
{
  _QWORD v1[74]; // [rsp+20h] [rbp-E0h] BYREF

  memset(v1, 0, 0x248uLL);
  if ( qword_140C01B20 )
  {
    qword_140C01B20(v1);
    if ( !LODWORD(v1[3]) && HIDWORD(v1[3]) && ((HIDWORD(v1[3]) + 1) & HIDWORD(v1[3])) == 0 )
    {
      HalpEnlightenment = v1[0];
      dword_140C6249C = HIDWORD(v1[3]);
      qword_140C624A0 = (__int64 (__fastcall *)(_QWORD))v1[4];
      qword_140C624A8 = (__int64 (__fastcall *)(_QWORD))v1[5];
      qword_140C624C8 = v1[9];
      qword_140C624D0 = v1[10];
      qword_140C624D8 = v1[11];
      qword_140C624B0 = v1[6];
      qword_140C624B8 = v1[7];
      qword_140C624C0 = v1[8];
      qword_140C624F0 = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))v1[14];
      qword_140C62518 = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))v1[19];
      qword_140C62520 = (__int64 (__fastcall *)(_QWORD))v1[20];
      qword_140C62528 = (__int64 (*)(void))v1[21];
      qword_140C62530 = v1[22];
      qword_140C62538 = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))v1[23];
      qword_140C62540 = v1[24];
      qword_140C62548 = (__int64 (__fastcall *)(_QWORD, _QWORD))v1[25];
      qword_140C62608 = (__int64 (__fastcall *)(_QWORD))v1[49];
      qword_140C62610 = v1[50];
      qword_140C62550 = (__int64 (*)(void))v1[26];
      qword_140C62558 = (__int64 (__fastcall *)(_QWORD))v1[27];
      qword_140C62560 = (__int64 (__fastcall *)(_QWORD, _QWORD))v1[28];
      qword_140C62580 = v1[32];
      qword_140C62568 = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _DWORD, _DWORD, _QWORD))v1[29];
      qword_140C62570 = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))v1[30];
      xmmword_140C62488 = *(_OWORD *)&v1[1];
      qword_140C624E0 = v1[12];
      qword_140C624E8 = v1[13];
      qword_140C624F8 = (__int64 (*)(void))v1[15];
      qword_140C62500 = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))v1[16];
      qword_140C62508 = (__int64 (__fastcall *)(_QWORD))v1[17];
      qword_140C62510 = v1[18];
      qword_140C62578 = v1[31];
      qword_140C62588 = v1[33];
      qword_140C62590 = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))v1[34];
      qword_140C62598 = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD))v1[35];
      qword_140C625A0 = v1[36];
      qword_140C625A8 = v1[37];
      qword_140C625B0 = v1[38];
      qword_140C625B8 = v1[39];
      qword_140C625C0 = v1[40];
      qword_140C625C8 = v1[41];
      qword_140C625D0 = v1[42];
      qword_140C625D8 = v1[43];
      qword_140C625E0 = (__int64 (__fastcall *)(_QWORD, _QWORD))v1[44];
      qword_140C625E8 = v1[45];
      qword_140C625F0 = v1[46];
      qword_140C625F8 = v1[47];
      qword_140C62600 = v1[48];
      qword_140C62618 = v1[51];
      qword_140C62620 = v1[52];
      qword_140C62628 = v1[53];
      qword_140C62630 = v1[54];
      qword_140C62638 = v1[55];
      qword_140C62640 = v1[56];
      qword_140C62670 = v1[62];
      qword_140C62680 = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))v1[64];
      qword_140C62648 = v1[57];
      qword_140C62650 = v1[58];
      qword_140C62658 = v1[59];
      qword_140C62660 = v1[60];
      qword_140C62668 = v1[61];
      qword_140C62688 = v1[65];
      qword_140C62698 = v1[67];
      qword_140C62690 = v1[66];
      qword_140C626A0 = v1[68];
      qword_140C626A8 = v1[69];
      qword_140C626B0 = v1[70];
      qword_140C626B8 = v1[71];
      qword_140C626C0 = v1[72];
    }
  }
  if ( HalpHvCpuManager )
  {
    if ( qword_140C624B0 )
      HalpHvSleepEnlightenedCpuManager = 1;
    if ( qword_140C624F0 )
      HalpHvWheaEnlightenedCpuManager = 1;
  }
  off_140C01AA8[0] = (__int64 (__fastcall *)())HalpPrepareForBugcheck;
  off_140C01BB0[0] = HalpSaveAndDisableEnlightenment;
  off_140C01BB8[0] = HalpRestoreHvEnlightenment;
  return 0LL;
}
