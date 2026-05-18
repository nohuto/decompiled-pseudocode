/*
 * XREFs of sub_180063B2C @ 0x180063B2C
 * Callers:
 *     sub_180067B80 @ 0x180067B80 (sub_180067B80.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_18003A4B0 @ 0x18003A4B0 (sub_18003A4B0.c)
 *     sub_18003A7E4 @ 0x18003A7E4 (sub_18003A7E4.c)
 *     sub_18003AA24 @ 0x18003AA24 (sub_18003AA24.c)
 *     sub_18003AAE0 @ 0x18003AAE0 (sub_18003AAE0.c)
 *     sub_18003B388 @ 0x18003B388 (sub_18003B388.c)
 *     __alloca_probe @ 0x1800E3900 (__alloca_probe.c)
 */

__int64 *__fastcall sub_180063B2C(__int64 *a1, __int64 *a2)
{
  __int64 v4; // rsi
  unsigned __int64 v6; // rcx
  unsigned __int64 v7; // rdx
  char *v8; // r9
  LPVOID lpMem; // [rsp+30h] [rbp-D0h] BYREF
  unsigned __int64 v10; // [rsp+38h] [rbp-C8h]
  _QWORD v11[2]; // [rsp+40h] [rbp-C0h] BYREF
  char v12; // [rsp+50h] [rbp-B0h] BYREF

  v4 = ((char *)a2 - (char *)a1) >> 4;
  if ( v4 <= 32 )
    return sub_18003A7E4(a1, a2, (__int64 (__fastcall *)(__int64 *, __int64 *))sub_180065830);
  v6 = v4 - v4 / 2;
  v7 = 0x7FFFFFFFFFFFFFFFLL;
  if ( v6 != 0x7FFFFFFFFFFFFFFFLL )
    v7 = v4 - v4 / 2;
  if ( v6 <= 0x100 )
    goto LABEL_9;
  sub_18003A4B0((__int64 *)&lpMem, v7);
  v6 = v10;
  if ( v10 <= 0x100 )
  {
    sub_18003AA24(lpMem);
    v6 = 256LL;
LABEL_9:
    v8 = &v12;
    goto LABEL_10;
  }
  v8 = (char *)lpMem;
LABEL_10:
  v11[0] = v8;
  v11[1] = v6;
  sub_18003AAE0(a1, a2, v4, (__int64)v8, v6, (unsigned __int8 (__fastcall *)(__int64, __int64))sub_180065830);
  return (__int64 *)sub_18003B388((__int64)v11);
}
