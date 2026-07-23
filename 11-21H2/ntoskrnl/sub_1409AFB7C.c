/*
 * XREFs of sub_1409AFB7C @ 0x1409AFB7C
 * Callers:
 *     sub_1407A34A0 @ 0x1407A34A0 (sub_1407A34A0.c)
 * Callees:
 *     sub_1402D0930 @ 0x1402D0930 (sub_1402D0930.c)
 *     sub_14030D5C0 @ 0x14030D5C0 (sub_14030D5C0.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_1405E7C30 @ 0x1405E7C30 (sub_1405E7C30.c)
 *     sub_1407B99C0 @ 0x1407B99C0 (sub_1407B99C0.c)
 *     sub_1409AF8C4 @ 0x1409AF8C4 (sub_1409AF8C4.c)
 *     sub_1409B5AEC @ 0x1409B5AEC (sub_1409B5AEC.c)
 */

__int64 __fastcall sub_1409AFB7C(ULONG_PTR BugCheckParameter1, _DWORD *a2, __int64 a3, _BYTE *a4, unsigned int a5)
{
  __int64 result; // rax
  __int64 v10; // r9
  int v11; // esi
  char *v12; // rax
  __int64 v13; // rax
  unsigned __int64 v14; // [rsp+30h] [rbp-31h] BYREF
  unsigned __int64 v15; // [rsp+38h] [rbp-29h] BYREF
  __int64 v16; // [rsp+40h] [rbp-21h] BYREF
  ULONG_PTR v17; // [rsp+48h] [rbp-19h] BYREF
  _OWORD v18[3]; // [rsp+50h] [rbp-11h] BYREF

  v15 = 0LL;
  v17 = 0LL;
  v14 = 0LL;
  memset(v18, 0, sizeof(v18));
  result = sub_1409B5AEC(a3, &v14, &v17);
  if ( (int)result >= 0 )
  {
    sub_14030D5C0(BugCheckParameter1, 0LL, (__int64)v18, v10);
    v16 = 0LL;
    v11 = sub_1409AF8C4(v14, v17, a5, &v16, &v15);
    if ( v11 < 0 )
    {
      v13 = v16;
    }
    else
    {
      if ( (a2[12] & 0x100040) == 0x100040 )
      {
        v12 = sub_1405E7C30(a2 + 308, 0xBu, 0LL);
        if ( v12 )
        {
          *(_QWORD *)((char *)a2 + a2[312] + 1232) |= 0x800uLL;
          *((_QWORD *)v12 + 1) = v15;
          *(_QWORD *)v12 = 1LL;
        }
      }
      *(_QWORD *)(a3 + 64) = v16;
      *a4 |= 8u;
      v13 = 0LL;
    }
    if ( v13 )
    {
      v15 = 0LL;
      v14 = v13;
      sub_1407B99C0(0xFFFFFFFFFFFFFFFFuLL, &v14, &v15, 0x8000u, 0, 0x40000000);
    }
    sub_1402D0930((__int64)v18, 0LL);
    return (unsigned int)v11;
  }
  return result;
}
