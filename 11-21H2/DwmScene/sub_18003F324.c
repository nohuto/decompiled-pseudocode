/*
 * XREFs of sub_18003F324 @ 0x18003F324
 * Callers:
 *     sub_1800430C4 @ 0x1800430C4 (sub_1800430C4.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_18003E6FC @ 0x18003E6FC (sub_18003E6FC.c)
 *     sub_18003EBE0 @ 0x18003EBE0 (sub_18003EBE0.c)
 *     sub_18003EF08 @ 0x18003EF08 (sub_18003EF08.c)
 *     sub_18003F05C @ 0x18003F05C (sub_18003F05C.c)
 *     _alloca_probe @ 0x1800FEE40 (_alloca_probe.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall sub_18003F324(__int64 *a1, __int64 *a2)
{
  __int64 v4; // rsi
  unsigned __int64 v5; // rcx
  __int64 v6; // rdx
  char *v7; // r9
  LPVOID lpMem; // [rsp+30h] [rbp-D0h] BYREF
  unsigned __int64 v9; // [rsp+38h] [rbp-C8h]
  LPVOID v10; // [rsp+40h] [rbp-C0h]
  unsigned __int64 v11; // [rsp+48h] [rbp-B8h]
  char v12; // [rsp+50h] [rbp-B0h] BYREF

  v4 = ((char *)a2 - (char *)a1) >> 4;
  if ( v4 <= 32 )
  {
    sub_18003EBE0(a1, a2, (unsigned __int8 (__fastcall *)(__int128 *, __int64 *))sub_18008E690);
    return;
  }
  v5 = v4 - v4 / 2;
  v6 = 0x7FFFFFFFFFFFFFFFLL;
  if ( v5 != 0x7FFFFFFFFFFFFFFFLL )
    v6 = v4 - v4 / 2;
  if ( v5 > 0x100 )
  {
    sub_18003E6FC((__int64 *)&lpMem, v6);
    v5 = v9;
    if ( v9 > 0x100 )
    {
      v7 = (char *)lpMem;
      goto LABEL_10;
    }
    sub_18003EF08(lpMem);
    v5 = 256LL;
  }
  v7 = &v12;
LABEL_10:
  v10 = v7;
  v11 = v5;
  sub_18003F05C(a1, a2, v4, (__int64)v7, v5, (unsigned __int8 (__fastcall *)(__int64, __int64))sub_18008E690);
  if ( v11 > 0x100 )
    sub_18003EF08(v10);
}
