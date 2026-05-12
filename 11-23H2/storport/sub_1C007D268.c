/*
 * XREFs of sub_1C007D268 @ 0x1C007D268
 * Callers:
 *     sub_1C0079980 @ 0x1C0079980 (sub_1C0079980.c)
 *     sub_1C007A3D0 @ 0x1C007A3D0 (sub_1C007A3D0.c)
 *     sub_1C007AE2C @ 0x1C007AE2C (sub_1C007AE2C.c)
 *     sub_1C007DA18 @ 0x1C007DA18 (sub_1C007DA18.c)
 *     sub_1C007E6FC @ 0x1C007E6FC (sub_1C007E6FC.c)
 *     sub_1C007E890 @ 0x1C007E890 (sub_1C007E890.c)
 * Callees:
 *     sub_1C007D2D8 @ 0x1C007D2D8 (sub_1C007D2D8.c)
 */

__int64 __fastcall sub_1C007D268(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, __int64 a5, int a6, _DWORD *a7)
{
  __int64 result; // rax
  _DWORD v8[2]; // [rsp+20h] [rbp-40h] BYREF
  __int64 *v9; // [rsp+28h] [rbp-38h]
  int v10; // [rsp+30h] [rbp-30h]
  int v11; // [rsp+34h] [rbp-2Ch]
  __int64 v12; // [rsp+38h] [rbp-28h] BYREF
  int v13; // [rsp+40h] [rbp-20h]
  int v14; // [rsp+44h] [rbp-1Ch]
  __int64 v15; // [rsp+48h] [rbp-18h]
  int v16; // [rsp+50h] [rbp-10h]
  int v17; // [rsp+54h] [rbp-Ch]

  v11 = 0;
  v17 = 0;
  v12 = a4;
  v15 = a5;
  v16 = a6;
  v8[0] = a4;
  v8[1] = a4;
  v9 = &v12;
  v13 = 4;
  v14 = 8;
  v10 = 1;
  result = ((__int64 (__fastcall *)(__int64, __int64, __int64, _DWORD *))sub_1C007D2D8)(a1, a2, a3, v8);
  if ( a7 )
    *a7 = v16;
  return result;
}
