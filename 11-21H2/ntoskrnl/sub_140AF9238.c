/*
 * XREFs of sub_140AF9238 @ 0x140AF9238
 * Callers:
 *     sub_140A55270 @ 0x140A55270 (sub_140A55270.c)
 * Callees:
 *     sub_1403BE664 @ 0x1403BE664 (sub_1403BE664.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140537044 @ 0x140537044 (sub_140537044.c)
 *     HviGetHardwareFeatures @ 0x140647B00 (HviGetHardwareFeatures.c)
 *     sub_140AF9490 @ 0x140AF9490 (sub_140AF9490.c)
 */

__int64 __fastcall sub_140AF9238(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  bool v4; // zf
  _QWORD *v5; // rax
  int v6; // ebx
  __int64 v7; // rax
  __int64 v8; // rcx
  _BOOL8 v20; // rdx
  _QWORD *v21; // rax
  int v22; // eax
  _BYTE v23[8]; // [rsp+20h] [rbp-30h] BYREF
  _QWORD v24[2]; // [rsp+28h] [rbp-28h] BYREF
  __int128 v25; // [rsp+38h] [rbp-18h] BYREF

  v4 = byte_140C4C678 == 0;
  qword_140C4A108 = (__int64)&qword_140C4A100;
  qword_140C4A100 = (__int64)&qword_140C4A100;
  qword_140C4BE38 = (__int64)&qword_140C4BE30;
  qword_140C4BE30 = (__int64)&qword_140C4BE30;
  qword_140C4BEA8 = (__int64)&qword_140C4BEA0;
  qword_140C4BEA0 = (__int64)&qword_140C4BEA0;
  qword_140C4A0F8 = (__int64)&qword_140C4A0F0;
  qword_140C4A0F0 = (__int64)&qword_140C4A0F0;
  v5 = (_QWORD *)off_140C07098;
  qword_140C4A110 = 0LL;
  qword_140C4BE20 = 0LL;
  qword_140C4BE28 = 0LL;
  qword_140C4A0E0 = 0LL;
  *(_QWORD *)(off_140C07098 + 8) = sub_140B2B9A0;
  v5[2] = sub_1405263E0;
  v5[3] = sub_1405264A0;
  v5[4] = sub_140525930;
  v5[5] = sub_140526F10;
  v5[6] = sub_140525620;
  v5[7] = sub_140527130;
  v5[9] = sub_1405262A0;
  v5[10] = sub_140526160;
  v5[11] = sub_140526870;
  v5[16] = sub_1405254E0;
  v5[17] = sub_140524EB0;
  v5[18] = sub_140525E80;
  v5[19] = sub_1403D8710;
  v5[20] = sub_1405251A0;
  v5[21] = sub_140525150;
  v5[22] = sub_140525420;
  qword_140C4BE78 = (__int64)&qword_140C4BE70;
  qword_140C4BE70 = (__int64)&qword_140C4BE70;
  qword_140C4BE58 = (__int64)&qword_140C4BE50;
  qword_140C4BE50 = (__int64)&qword_140C4BE50;
  v25 = 0LL;
  byte_140C4BCBD = 0;
  byte_140C4BCD0 = 0;
  qword_140C4BE88 = 0LL;
  qword_140C4BEB0 = 0LL;
  byte_140C4BCBC = 0;
  if ( !v4 )
  {
    _RAX = 1073741827LL;
    __asm { cpuid }
    byte_140C4BCBE = BYTE3(_RDX) & 1;
    _RAX = 1073741827LL;
    __asm { cpuid }
    v20 = (_RDX & 0x2000000) != 0;
    v24[1] = (unsigned int)_RCX;
    byte_140C4BCBD = v20;
    v24[0] = __PAIR64__(_RBX, _RAX);
    HviGetHardwareFeatures((__int64)&v25, v20, 1073741827LL, a4);
    if ( (v25 & 0x20) != 0 )
    {
      v21 = (_QWORD *)off_140C07098;
      byte_140C4BCBC = 1;
      *(_QWORD *)(off_140C07098 + 8) = sub_140B4D270;
      v21[5] = sub_140527410;
      v21[9] = sub_1405273D0;
      v21[10] = sub_1405273A0;
      v21[16] = sub_140527310;
    }
  }
  v24[0] = 0LL;
  if ( !byte_140C4BCBC || byte_140C4C678 )
  {
    v6 = sub_140AF9490(v24);
    if ( v6 >= 0 )
    {
      if ( (v24[0] & 2) != 0 )
        byte_140C4BCD0 = 1;
      v23[0] = 0;
      v6 = 0;
      v7 = sub_1403BE664(1380011332);
      if ( v7 )
      {
        v6 = sub_140537044(v7, v23);
        if ( v6 >= 0 )
        {
          if ( v23[0] )
            byte_140C4BCD0 = 1;
        }
      }
    }
  }
  else
  {
    v6 = 0;
  }
  v8 = qword_140C4BCE0;
  if ( (__int64 *)qword_140C4BCE0 != &qword_140C4BCE0 )
  {
    while ( 1 )
    {
      v22 = *(_DWORD *)(v8 + 472);
      v8 = *(_QWORD *)v8;
      if ( (v22 & 0x40) == 0 )
        break;
      if ( (__int64 *)v8 == &qword_140C4BCE0 )
        return (unsigned int)v6;
    }
  }
  byte_140C09790 = 0;
  return (unsigned int)v6;
}
