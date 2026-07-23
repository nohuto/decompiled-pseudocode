/*
 * XREFs of sub_14075E2D8 @ 0x14075E2D8
 * Callers:
 *     sub_14075E568 @ 0x14075E568 (sub_14075E568.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1406E0C3C @ 0x1406E0C3C (sub_1406E0C3C.c)
 *     sub_14075B270 @ 0x14075B270 (sub_14075B270.c)
 *     sub_14075BB10 @ 0x14075BB10 (sub_14075BB10.c)
 *     sub_14075E160 @ 0x14075E160 (sub_14075E160.c)
 *     sub_14075E448 @ 0x14075E448 (sub_14075E448.c)
 *     sub_14075E4A8 @ 0x14075E4A8 (sub_14075E4A8.c)
 *     sub_140842D98 @ 0x140842D98 (sub_140842D98.c)
 *     sub_14085CF70 @ 0x14085CF70 (sub_14085CF70.c)
 */

__int64 __fastcall sub_14075E2D8(__int64 a1, WCHAR *a2, __int64 a3, __int64 a4, __int64 a5)
{
  int v8; // eax
  __int64 v9; // r8
  unsigned int v10; // eax
  int v11; // ebx
  int v13; // eax
  __int64 v14; // rbx
  int v15; // [rsp+28h] [rbp-D8h]
  unsigned int v16; // [rsp+30h] [rbp-D0h] BYREF
  PVOID P; // [rsp+38h] [rbp-C8h] BYREF
  _BYTE v18[96]; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v19[32]; // [rsp+A0h] [rbp-60h] BYREF

  memset(&v18[4], 0, 0x5CuLL);
  memset(v19, 0, sizeof(v19));
  P = 0LL;
  v8 = 10;
  v16 = 0;
  if ( a4 )
    v8 = 26;
  *(_DWORD *)v18 = v8;
  if ( (int)sub_14075E160(&P, a2, (void *)0xFFFFFFFFFFFFFFFFLL, 0LL, 0LL) < 0
    && (!a4 || (int)sub_140842D98(&P, a2, a4, a5) < 0) )
  {
    sub_1406E0C3C(1LL, (__int64)"SdbGetDatabaseMatch");
    goto LABEL_7;
  }
  if ( !(unsigned int)sub_14075B270(v18, (__int64 *)P) )
    goto LABEL_19;
  v10 = sub_14075BB10(a1, *(void **)(a1 + 8), v9, (__int64)v18, v19, v15);
  v11 = 16;
  if ( v10 > 0x10 )
  {
    sub_1406E0C3C(1LL, (__int64)"SdbGetDatabaseMatch");
    goto LABEL_11;
  }
  v11 = v10;
  if ( v10 )
  {
LABEL_11:
    v13 = v11 - 1;
    v14 = v11 - 1;
    if ( v13 < 0 )
      goto LABEL_7;
    while ( (v19[2 * v14 + 1] & 2) != 0 || (unsigned int)sub_14085CF70(a1, *(_QWORD *)(a1 + 8), v19[2 * v14], &v16) )
    {
      if ( --v14 < 0 )
        goto LABEL_7;
    }
LABEL_19:
    sub_1406E0C3C(1LL, (__int64)"SdbGetDatabaseMatch");
  }
LABEL_7:
  sub_14075E4A8(v18);
  sub_14075E448(P);
  return v16;
}
