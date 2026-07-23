/*
 * XREFs of sub_140996DE8 @ 0x140996DE8
 * Callers:
 *     sub_1409A56A4 @ 0x1409A56A4 (sub_1409A56A4.c)
 * Callees:
 *     ZwUpdateWnfStateData @ 0x14041F2A0 (ZwUpdateWnfStateData.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1407628C0 @ 0x1407628C0 (sub_1407628C0.c)
 *     sub_1407F20B4 @ 0x1407F20B4 (sub_1407F20B4.c)
 *     sub_1409901F0 @ 0x1409901F0 (sub_1409901F0.c)
 *     sub_140A47CF8 @ 0x140A47CF8 (sub_140A47CF8.c)
 *     sub_140A48330 @ 0x140A48330 (sub_140A48330.c)
 */

__int64 __fastcall sub_140996DE8(char a1, int a2)
{
  int v4; // ecx
  __int64 v5; // rdx
  __int64 v6; // rcx
  unsigned int v7; // eax
  unsigned int v8; // ebx
  _BYTE v10[88]; // [rsp+40h] [rbp-58h] BYREF

  memset(v10, 0, 0x4CuLL);
  sub_140A48330(v4);
  sub_1407628C0(&xmmword_140C23400, (__int64)v10);
  if ( v10[20] )
  {
    v7 = sub_1407F20B4(a1 == 0, a2);
LABEL_8:
    v8 = v7;
    goto LABEL_9;
  }
  if ( v10[3] || v10[4] || v10[5] )
  {
    v7 = sub_1409901F0(a1);
    goto LABEL_8;
  }
  v8 = 0;
LABEL_9:
  sub_140A47CF8(v6, v5);
  if ( v10[20] && !a1 && (!v8 || v8 == 259) && qword_140C4EF10 != qword_140C22048 && !dword_140C548DC )
  {
    qword_140C4EF10 = qword_140C22048;
    ZwUpdateWnfStateData(&stru_14000E630, &qword_140C22048, 8u, 0LL, 0LL, 0, 0);
  }
  return v8;
}
