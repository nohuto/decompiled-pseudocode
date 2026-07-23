/*
 * XREFs of sub_1409A4DA8 @ 0x1409A4DA8
 * Callers:
 *     sub_1409AB070 @ 0x1409AB070 (sub_1409AB070.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     sub_1409A1C60 @ 0x1409A1C60 (sub_1409A1C60.c)
 *     sub_1409A3828 @ 0x1409A3828 (sub_1409A3828.c)
 *     sub_1409A4B90 @ 0x1409A4B90 (sub_1409A4B90.c)
 *     sub_1409A8628 @ 0x1409A8628 (sub_1409A8628.c)
 *     sub_1409A9F98 @ 0x1409A9F98 (sub_1409A9F98.c)
 */

void sub_1409A4DA8()
{
  int v0; // eax
  int *v1; // rbx
  _DWORD v2[12]; // [rsp+20h] [rbp-30h] BYREF
  int *v3; // [rsp+60h] [rbp+10h] BYREF

  v3 = 0LL;
  v0 = sub_1409A4B90((__int64)&v3);
  v1 = v3;
  if ( v0 >= 0 )
  {
    v2[0] = *v3;
    v2[1] = v3[1];
    v2[2] = v3[2];
    v2[3] = v3[19];
    v2[4] = v3[29];
    v2[5] = v3[3];
    v2[6] = v3[4];
    v2[7] = v3[5];
    v2[8] = v3[66];
    v2[9] = v3[67];
    sub_1409A9F98(v2);
    sub_1409A3828((__int64)v1);
    sub_1409A1C60(v1);
  }
  else
  {
    sub_1409A8628("TtmiSessionsRundown", 4293LL, (unsigned int)v0, 0xFFFFFFFFLL);
  }
  if ( v1 )
  {
    ExReleaseResourceLite(&stru_140C1C020);
    KeLeaveCriticalRegion();
  }
}
