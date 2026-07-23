/*
 * XREFs of sub_140953B9C @ 0x140953B9C
 * Callers:
 *     sub_14095A750 @ 0x14095A750 (sub_14095A750.c)
 * Callees:
 *     memset @ 0x140435E00 (memset.c)
 *     sub_140563B98 @ 0x140563B98 (sub_140563B98.c)
 *     sub_140563CAC @ 0x140563CAC (sub_140563CAC.c)
 *     sub_1407648E4 @ 0x1407648E4 (sub_1407648E4.c)
 *     sub_140765DC0 @ 0x140765DC0 (sub_140765DC0.c)
 */

__int64 __fastcall sub_140953B9C(
        __int64 a1,
        const wchar_t *a2,
        const wchar_t *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        int a11,
        __int64 a12,
        int a13)
{
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r14
  __int64 v19; // rcx
  int v20; // ebx
  __int64 v21; // r8
  _QWORD v23[16]; // [rsp+48h] [rbp-79h] BYREF
  __int64 v24; // [rsp+E8h] [rbp+27h] BYREF

  memset(v23, 0, 0x78uLL);
  v24 = 0LL;
  if ( (byte_140C0DD4C & 2) != 0 )
    sub_140563B98(v16, (const EVENT_DESCRIPTOR *)qword_14003B6D0, v17, L"DRIVERENUM", a3, a2);
  v18 = a5;
  v23[7] = a6;
  LODWORD(v23[8]) = a7;
  v23[9] = a8;
  v23[10] = a9;
  LODWORD(v23[11]) = a11;
  v23[12] = a10;
  LODWORD(v23[13]) = a13;
  v23[14] = a12;
  v23[0] = L"DRIVERENUM";
  v23[1] = a2;
  v23[2] = a3;
  v23[4] = a4;
  v23[6] = a5;
  if ( a4 )
  {
    v20 = sub_1407648E4(a4, 1024LL, &v24);
    if ( v20 < 0 )
      goto LABEL_10;
    LODWORD(v23[3]) = v24;
  }
  if ( v18 )
  {
    v20 = sub_1407648E4(v18, 1024LL, &v24);
    if ( v20 < 0 )
      goto LABEL_10;
    LODWORD(v23[5]) = v24;
  }
  v20 = sub_140765DC0((__int64)v23, 0LL);
LABEL_10:
  if ( (byte_140C0DD4C & 2) != 0 )
    sub_140563CAC(v19, (const EVENT_DESCRIPTOR *)qword_14003B2D0, v21, L"DRIVERENUM", a3, a2, v20);
  return (unsigned int)v20;
}
