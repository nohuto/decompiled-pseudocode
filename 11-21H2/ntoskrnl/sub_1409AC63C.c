/*
 * XREFs of sub_1409AC63C @ 0x1409AC63C
 * Callers:
 *     sub_1409AC788 @ 0x1409AC788 (sub_1409AC788.c)
 * Callees:
 *     memset @ 0x140435E00 (memset.c)
 *     sub_140781F40 @ 0x140781F40 (sub_140781F40.c)
 */

__int64 __fastcall sub_1409AC63C(_OWORD *a1)
{
  __int64 result; // rax
  __int128 v3; // [rsp+30h] [rbp-88h] BYREF
  _QWORD v4[15]; // [rsp+40h] [rbp-78h] BYREF

  v3 = 0LL;
  memset(v4, 0, 0x70uLL);
  LODWORD(v4[1]) = 308;
  LODWORD(v4[4]) = 117440512;
  v4[2] = L"ProductSuite";
  v4[3] = &v3;
  result = sub_140781F40(2, L"ProductOptions", (__int64)v4, 0LL);
  if ( (int)result >= 0 )
    *a1 = v3;
  return result;
}
