/*
 * XREFs of sub_1409DE380 @ 0x1409DE380
 * Callers:
 *     sub_140855120 @ 0x140855120 (sub_140855120.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_1407838E0 @ 0x1407838E0 (sub_1407838E0.c)
 *     sub_1407839B4 @ 0x1407839B4 (sub_1407839B4.c)
 */

char __fastcall sub_1409DE380(__int64 a1, __int64 a2)
{
  char result; // al
  __int64 v4; // rdi
  __int64 v5; // r14
  char i; // si
  __int64 v7; // rax
  __int128 v8; // xmm0
  ULONG_PTR v9; // rbx
  __int128 v10; // [rsp+30h] [rbp-29h] BYREF
  _DWORD v11[2]; // [rsp+40h] [rbp-19h] BYREF
  __int64 v12; // [rsp+48h] [rbp-11h]
  __int64 v13; // [rsp+50h] [rbp-9h]
  __int128 v14; // [rsp+58h] [rbp-1h] BYREF
  int v15; // [rsp+68h] [rbp+Fh]
  int v16; // [rsp+6Ch] [rbp+13h]
  __int64 v17; // [rsp+70h] [rbp+17h]
  __int64 v18; // [rsp+78h] [rbp+1Fh]

  result = -*(_BYTE *)(a1 + 36);
  v4 = a1;
  v5 = 0LL;
  for ( i = 5 - (*(_BYTE *)(a1 + 36) != 0); (unsigned int)v5 < *(_DWORD *)(v4 + 32); v5 = (unsigned int)(v5 + 1) )
  {
    v7 = *(_QWORD *)(v4 + 24);
    v8 = *(_OWORD *)(a2 + 72);
    v9 = *(_QWORD *)(v4 + 8 * v5 + 40);
    v11[1] = 0;
    LOBYTE(a1) = i;
    v13 = 0LL;
    v15 = 0;
    v18 = 0LL;
    v12 = v7;
    v17 = v7;
    v14 = v8;
    v11[0] = 64;
    v16 = 0x20000;
    sub_1407839B4(a1, *(unsigned int *)(v9 + 56), (__int64)&v14, 64, (__int64)v11, &v10);
    result = sub_1407838E0((__int64 *)&off_140C037E0, v9);
  }
  return result;
}
