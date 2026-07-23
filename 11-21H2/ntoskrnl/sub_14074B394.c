/*
 * XREFs of sub_14074B394 @ 0x14074B394
 * Callers:
 *     sub_14076C4E0 @ 0x14076C4E0 (sub_14076C4E0.c)
 *     sub_14076E9B8 @ 0x14076E9B8 (sub_14076E9B8.c)
 *     IoGetDeviceProperty @ 0x140773C30 (IoGetDeviceProperty.c)
 *     sub_1409590D0 @ 0x1409590D0 (sub_1409590D0.c)
 * Callees:
 *     memset @ 0x140435E00 (memset.c)
 *     sub_14074CA9C @ 0x14074CA9C (sub_14074CA9C.c)
 */

__int64 __fastcall sub_14074B394(int a1, _DWORD *a2)
{
  _QWORD v5[9]; // [rsp+30h] [rbp-58h] BYREF

  memset(a2, 0, 0x40uLL);
  *a2 = 65600;
  a2[3] = -1;
  a2[2] = -1;
  memset(v5, 0, sizeof(v5));
  LOWORD(v5[0]) = 2331;
  v5[1] = a2;
  return sub_14074CA9C(a1, (unsigned int)v5, -1073741637, 0, 0LL);
}
