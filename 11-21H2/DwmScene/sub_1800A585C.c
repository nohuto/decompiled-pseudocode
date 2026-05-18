/*
 * XREFs of sub_1800A585C @ 0x1800A585C
 * Callers:
 *     sub_1800A5B30 @ 0x1800A5B30 (sub_1800A5B30.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_18003E6FC @ 0x18003E6FC (sub_18003E6FC.c)
 *     sub_1800A5190 @ 0x1800A5190 (sub_1800A5190.c)
 *     sub_1800A52C4 @ 0x1800A52C4 (sub_1800A52C4.c)
 *     sub_1800A542C @ 0x1800A542C (sub_1800A542C.c)
 *     _alloca_probe @ 0x1800FEE40 (_alloca_probe.c)
 */

void __fastcall sub_1800A585C(float *a1, float *a2, char a3)
{
  __int64 v6; // r14
  unsigned __int64 v7; // rcx
  __int64 v8; // rdx
  char *v9; // r9
  LPVOID lpMem; // [rsp+30h] [rbp-D0h] BYREF
  unsigned __int64 v11; // [rsp+38h] [rbp-C8h]
  LPVOID v12; // [rsp+40h] [rbp-C0h]
  unsigned __int64 v13; // [rsp+48h] [rbp-B8h]
  char v14; // [rsp+50h] [rbp-B0h] BYREF

  v6 = ((char *)a2 - (char *)a1) >> 4;
  if ( v6 <= 32 )
  {
    sub_1800A5190(a1, a2);
    return;
  }
  v7 = v6 - v6 / 2;
  v8 = 0x7FFFFFFFFFFFFFFFLL;
  if ( v7 != 0x7FFFFFFFFFFFFFFFLL )
    v8 = v6 - v6 / 2;
  if ( v7 > 0x100 )
  {
    sub_18003E6FC((__int64 *)&lpMem, v8);
    v7 = v11;
    if ( v11 > 0x100 )
    {
      v9 = (char *)lpMem;
      goto LABEL_10;
    }
    sub_1800A52C4(lpMem);
    v7 = 256LL;
  }
  v9 = &v14;
LABEL_10:
  v12 = v9;
  v13 = v7;
  sub_1800A542C((char *)a1, a2, v6, (int)v9, v7, a3);
  if ( v13 > 0x100 )
    sub_1800A52C4(v12);
}
