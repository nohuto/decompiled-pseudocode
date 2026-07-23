/*
 * XREFs of sub_1409587F0 @ 0x1409587F0
 * Callers:
 *     sub_1407655BC @ 0x1407655BC (sub_1407655BC.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_14074CA9C @ 0x14074CA9C (sub_14074CA9C.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_1409587F0(struct _DEVICE_OBJECT *a1, _QWORD *a2)
{
  _WORD *Pool2; // rax
  _WORD *v5; // rbx
  int v7; // edi
  _QWORD v8[9]; // [rsp+30h] [rbp-78h] BYREF
  __int128 v9; // [rsp+78h] [rbp-30h] BYREF

  v9 = xmmword_14003AFE0;
  Pool2 = (_WORD *)ExAllocatePool2(256LL, 48LL, 538996816LL);
  v5 = Pool2;
  if ( !Pool2 )
    return 3221225626LL;
  *Pool2 = 48;
  memset(v8, 0, sizeof(v8));
  LOWORD(v8[0]) = 2075;
  v8[1] = &v9;
  LODWORD(v8[2]) = 48;
  v5[1] = 0;
  v8[3] = v5;
  v8[4] = 0LL;
  v7 = sub_14074CA9C(a1, (__int64)v8, -1073741637, 0LL, 0LL);
  if ( v7 < 0 )
    ExFreePoolWithTag(v5, 0);
  else
    *a2 = v5;
  return (unsigned int)v7;
}
