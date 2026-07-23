/*
 * XREFs of sub_14074B2C8 @ 0x14074B2C8
 * Callers:
 *     sub_14076E9B8 @ 0x14076E9B8 (sub_14076E9B8.c)
 * Callees:
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1406E1D34 @ 0x1406E1D34 (sub_1406E1D34.c)
 *     sub_14074CA9C @ 0x14074CA9C (sub_14074CA9C.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_14074B2C8(int a1, int a2, __int64 a3, PVOID *a4)
{
  unsigned int v7; // ebx
  int v8; // eax
  PVOID v9; // rsi
  void *v11; // [rsp+30h] [rbp-50h] BYREF
  _DWORD v12[18]; // [rsp+38h] [rbp-48h] BYREF
  PVOID P; // [rsp+B8h] [rbp+38h] BYREF

  P = 0LL;
  v11 = 0LL;
  *a4 = 0LL;
  memset(v12, 0, sizeof(v12));
  v12[2] = a2;
  v12[4] = dword_140D3CA30;
  v7 = -1073741637;
  LOWORD(v12[0]) = 3099;
  v8 = sub_14074CA9C(a1, (unsigned int)v12, -1073741637, 0, (__int64)&P);
  v9 = P;
  if ( P )
  {
    v7 = v8;
    if ( v8 >= 0 )
    {
      *a4 = P;
      if ( (int)sub_1406E1D34((const WCHAR *)v9, &v11) >= 0 )
      {
        if ( v11 )
        {
          *a4 = v11;
          ExFreePoolWithTag(v9, 0);
        }
      }
    }
  }
  return v7;
}
