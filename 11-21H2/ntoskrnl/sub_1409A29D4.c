/*
 * XREFs of sub_1409A29D4 @ 0x1409A29D4
 * Callers:
 *     sub_1409A1BAC @ 0x1409A1BAC (sub_1409A1BAC.c)
 *     sub_1409A1D70 @ 0x1409A1D70 (sub_1409A1D70.c)
 *     sub_1409A1E04 @ 0x1409A1E04 (sub_1409A1E04.c)
 * Callees:
 *     sub_1402E0200 @ 0x1402E0200 (sub_1402E0200.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1409A5188 @ 0x1409A5188 (sub_1409A5188.c)
 *     sub_1409A7718 @ 0x1409A7718 (sub_1409A7718.c)
 *     sub_1409A7858 @ 0x1409A7858 (sub_1409A7858.c)
 *     sub_1409A7948 @ 0x1409A7948 (sub_1409A7948.c)
 *     sub_1409A7B30 @ 0x1409A7B30 (sub_1409A7B30.c)
 *     sub_1409AB3EC @ 0x1409AB3EC (sub_1409AB3EC.c)
 */

__int64 __fastcall sub_1409A29D4(__int64 a1, __int64 a2, _DWORD *a3, int a4)
{
  unsigned int v8; // esi
  int v9; // edx
  __int64 v10; // r11
  int v11; // r9d
  int v12; // r8d
  int v13; // edx
  int v14; // ecx
  _DWORD v16[136]; // [rsp+38h] [rbp-D0h] BYREF

  memset(&v16[1], 0, 0x21CuLL);
  v8 = 0;
  v16[0] = a4;
  switch ( a4 )
  {
    case 0:
    case 3:
      v16[2] = a3[8];
      v16[3] = a3[149];
      v16[4] = a3[4];
      v16[5] = a3[18];
      sub_1402E0200(&v16[6], 260LL, (__int64)(a3 + 19));
      v11 = a3[18];
      v12 = a3[4];
      v13 = a3[149];
      v14 = a3[8];
      if ( a4 )
        sub_1409A7718(v14, v13, v12, v11, v10);
      else
        sub_1409A7B30(v14, v13, v12, v11, v10);
      break;
    case 4:
      v9 = a3[149];
      v16[2] = a3[8];
      v16[3] = v9;
      sub_1409A7858();
      break;
    case 5:
      v16[2] = a3[8];
      sub_1409A7948();
      break;
  }
  if ( a2 )
    return (unsigned int)sub_1409AB3EC(a2, v16);
  else
    sub_1409A5188(a1, v16);
  return v8;
}
