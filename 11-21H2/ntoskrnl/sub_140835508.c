/*
 * XREFs of sub_140835508 @ 0x140835508
 * Callers:
 *     sub_1408351BC @ 0x1408351BC (sub_1408351BC.c)
 *     sub_1409ACAD0 @ 0x1409ACAD0 (sub_1409ACAD0.c)
 * Callees:
 *     memset @ 0x140435E00 (memset.c)
 *     sub_140781F40 @ 0x140781F40 (sub_140781F40.c)
 */

char sub_140835508()
{
  char v0; // bl
  _QWORD v2[15]; // [rsp+30h] [rbp-78h] BYREF
  int v3; // [rsp+B0h] [rbp+8h] BYREF

  v3 = 0;
  memset(v2, 0, 0x70uLL);
  LODWORD(v2[1]) = 292;
  v2[2] = L"OCFW_Enabled";
  LODWORD(v2[4]) = 0x4000000;
  v0 = 1;
  v2[3] = &v3;
  if ( (int)sub_140781F40(0, L"\\Registry\\Machine\\SYSTEM\\CurrentControlSet\\Control\\OneCore", (__int64)v2, 0LL) < 0
    || !v3 )
  {
    return 0;
  }
  return v0;
}
