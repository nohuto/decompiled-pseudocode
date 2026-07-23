/*
 * XREFs of sub_140546B70 @ 0x140546B70
 * Callers:
 *     <none>
 * Callees:
 *     sub_140294CC0 @ 0x140294CC0 (sub_140294CC0.c)
 *     VslGetSecurePciEnabled @ 0x1403DF160 (VslGetSecurePciEnabled.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall sub_140546B70(_DWORD *a1)
{
  __int64 result; // rax
  unsigned __int64 v3; // rcx

  memset(a1, 0, 0x218uLL);
  *a1 = dword_140D0689C;
  a1[1] = byte_140D0688B != 0;
  a1[7] = dword_140D0527C;
  if ( (dword_140D0689C & 0x40) != 0 )
    *((_QWORD *)a1 + 4) = sub_14039D930;
  if ( _bittest(&dword_140D0689C, 8u) )
    *((_QWORD *)a1 + 5) = sub_14039AF70;
  if ( (dword_140D0689C & 0x4000) != 0 )
    *((_QWORD *)a1 + 25) = sub_14039DE70;
  if ( (dword_140D0689C & 0x10000) != 0 )
  {
    *((_QWORD *)a1 + 6) = sub_140548600;
    *((_QWORD *)a1 + 7) = sub_140546AE0;
    *((_QWORD *)a1 + 8) = sub_1405478E0;
  }
  *((_QWORD *)a1 + 26) = sub_140547010;
  if ( (dword_140D0689C & 0x8000) != 0 )
  {
    *((_QWORD *)a1 + 27) = sub_140546FE0;
    *((_QWORD *)a1 + 28) = sub_140546FB0;
  }
  if ( (dword_140D0689C & 0x10) != 0 )
  {
    *((_QWORD *)a1 + 1) = sub_14041B570;
    *((_QWORD *)a1 + 2) = qword_140372E90;
  }
  *((_QWORD *)a1 + 48) = sub_140547D00;
  *((_QWORD *)a1 + 49) = sub_1405491B0;
  *((_QWORD *)a1 + 50) = sub_140545D80;
  *((_QWORD *)a1 + 51) = sub_140545E50;
  *((_QWORD *)a1 + 52) = sub_1405460D0;
  *((_QWORD *)a1 + 53) = sub_140546040;
  *((_QWORD *)a1 + 58) = sub_140546200;
  *((_QWORD *)a1 + 62) = sub_1405484D0;
  *((_QWORD *)a1 + 64) = sub_140549070;
  *((_QWORD *)a1 + 31) = sub_140548D80;
  *((_QWORD *)a1 + 32) = sub_140548C30;
  *((_QWORD *)a1 + 33) = sub_1405488E0;
  *((_QWORD *)a1 + 34) = sub_140548FF0;
  *((_QWORD *)a1 + 35) = sub_140548BF0;
  *((_QWORD *)a1 + 36) = sub_140548790;
  *((_QWORD *)a1 + 37) = sub_140548A90;
  *((_QWORD *)a1 + 38) = sub_140548B70;
  *((_QWORD *)a1 + 39) = sub_140548B10;
  *((_QWORD *)a1 + 40) = sub_1405486E0;
  *((_QWORD *)a1 + 41) = sub_140548960;
  *((_QWORD *)a1 + 42) = sub_140548A40;
  *((_QWORD *)a1 + 43) = sub_140548880;
  if ( (dword_140D068B8 & 1) != 0 )
  {
    *((_QWORD *)a1 + 44) = sub_140548F40;
    *((_QWORD *)a1 + 45) = sub_140547040;
  }
  if ( (dword_140D0689C & 0x20000000) != 0 )
    *((_QWORD *)a1 + 61) = sub_1404175E0;
  *((_QWORD *)a1 + 54) = sub_140546300;
  *((_QWORD *)a1 + 55) = sub_1405467D0;
  *((_QWORD *)a1 + 56) = sub_1405465C0;
  *((_QWORD *)a1 + 57) = sub_140546900;
  *((_QWORD *)a1 + 63) = sub_140545F70;
  *((_QWORD *)a1 + 65) = sub_140546150;
  *((_QWORD *)a1 + 66) = sub_1405461E0;
  if ( (dword_140D068B8 & 0x80u) != 0 )
  {
    *((_QWORD *)a1 + 14) = sub_140547BD0;
    *((_QWORD *)a1 + 19) = sub_140547110;
    *((_QWORD *)a1 + 20) = sub_1405486C0;
    *((_QWORD *)a1 + 21) = sub_140547F60;
    *((_QWORD *)a1 + 22) = sub_140548560;
    *((_QWORD *)a1 + 23) = sub_1405470E0;
    *((_QWORD *)a1 + 24) = sub_14054C880;
    *((_QWORD *)a1 + 15) = sub_1405472A0;
    *((_QWORD *)a1 + 16) = sub_1405473F0;
    *((_QWORD *)a1 + 17) = sub_1405471A0;
    *((_QWORD *)a1 + 18) = sub_1405474E0;
  }
  if ( _bittest((const signed __int32 *)&dword_140D068B8, 8u) )
  {
    *((_QWORD *)a1 + 9) = sub_140547570;
    *((_QWORD *)a1 + 10) = sub_140549100;
    *((_QWORD *)a1 + 11) = sub_140547F80;
  }
  if ( (dword_140D068B8 & 1) != 0 )
  {
    *((_QWORD *)a1 + 12) = sub_1405481F0;
    *((_QWORD *)a1 + 13) = sub_1405479B0;
    *((_QWORD *)a1 + 59) = sub_140931360;
    if ( (dword_140D068B8 & 0x200) != 0 )
      *((_QWORD *)a1 + 46) = sub_140548430;
  }
  result = sub_140294CC0();
  if ( (result & 4) != 0 )
  {
    v3 = (unsigned __int64)sub_14054DA20 & -(__int64)VslGetSecurePciEnabled();
    result = (__int64)sub_14054E830;
    *((_QWORD *)a1 + 29) = v3;
    *((_QWORD *)a1 + 30) = sub_14054E830;
  }
  if ( (dword_140D0688C & 0x4000) != 0 )
  {
    result = (__int64)sub_140372E70;
    *((_QWORD *)a1 + 47) = sub_140372E70;
  }
  return result;
}
