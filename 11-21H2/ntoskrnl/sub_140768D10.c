/*
 * XREFs of sub_140768D10 @ 0x140768D10
 * Callers:
 *     sub_140779F10 @ 0x140779F10 (sub_140779F10.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140768E44 @ 0x140768E44 (sub_140768E44.c)
 *     sub_14076A3C4 @ 0x14076A3C4 (sub_14076A3C4.c)
 *     sub_140773030 @ 0x140773030 (sub_140773030.c)
 *     sub_14077B0A4 @ 0x14077B0A4 (sub_14077B0A4.c)
 *     sub_14077DA5C @ 0x14077DA5C (sub_14077DA5C.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_140768D10(__int64 a1, __int64 a2, PVOID *a3)
{
  __int64 Pool2; // rax
  int v7; // ebx
  int v8; // eax
  int v10; // eax
  int v11; // [rsp+60h] [rbp-98h] BYREF
  int v12; // [rsp+64h] [rbp-94h] BYREF
  __int128 v13; // [rsp+68h] [rbp-90h] BYREF
  _BYTE v14[80]; // [rsp+80h] [rbp-78h] BYREF

  v12 = 0;
  v11 = 0;
  v13 = 0LL;
  Pool2 = ExAllocatePool2(256LL, 24LL, 1198550608LL);
  *a3 = (PVOID)Pool2;
  if ( !Pool2 )
  {
    v7 = -1073741670;
LABEL_16:
    sub_140768E44(*a3);
    *a3 = 0LL;
    return (unsigned int)v7;
  }
  if ( a2 )
  {
    v7 = sub_14076A3C4(2LL, a2, Pool2 + 16);
    if ( v7 < 0 )
      goto LABEL_16;
  }
  v7 = sub_14077B0A4(1LL, a1, *a3);
  if ( (int)(v7 + 0x80000000) >= 0 && v7 != -1073741772 )
    goto LABEL_16;
  v8 = sub_14077DA5C(
         qword_140D00AC0,
         a1,
         1,
         0,
         0LL,
         (__int64)&stru_140010A18,
         (__int64)&v12,
         (__int64)&v13,
         16,
         (__int64)&v11,
         0);
  v7 = v8;
  if ( v8 == -1073741275 || v8 == -1073741772 )
    return 0;
  if ( v8 < 0 )
    goto LABEL_16;
  v7 = sub_140773030(&v13, v14);
  if ( v7 < 0 )
    goto LABEL_16;
  v10 = sub_14077B0A4(2LL, v14, (char *)*a3 + 8);
  v7 = v10;
  if ( v10 == -1073741772 )
  {
    return 0;
  }
  else if ( v10 < 0 )
  {
    goto LABEL_16;
  }
  return (unsigned int)v7;
}
