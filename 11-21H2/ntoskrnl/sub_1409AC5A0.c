/*
 * XREFs of sub_1409AC5A0 @ 0x1409AC5A0
 * Callers:
 *     sub_1409AC788 @ 0x1409AC788 (sub_1409AC788.c)
 * Callees:
 *     memset @ 0x140435E00 (memset.c)
 *     sub_140781F40 @ 0x140781F40 (sub_140781F40.c)
 */

__int64 __fastcall sub_1409AC5A0(_BYTE *a1)
{
  char v1; // bl
  __int64 result; // rax
  _QWORD v4[15]; // [rsp+30h] [rbp-78h] BYREF
  int v5; // [rsp+B8h] [rbp+10h] BYREF

  v1 = 0;
  v5 = 0;
  memset(v4, 0, 0x70uLL);
  LODWORD(v4[1]) = 292;
  v4[2] = L"TSAppCompat";
  LODWORD(v4[4]) = 0x4000000;
  v4[3] = &v5;
  result = sub_140781F40(2, L"Terminal Server", (__int64)v4, 0LL);
  if ( (_DWORD)result == -1073741772 )
  {
    result = 0LL;
  }
  else
  {
    if ( (int)result < 0 )
      return result;
    v1 = v5;
  }
  *a1 = v1;
  return result;
}
