/*
 * XREFs of sub_18000FFC4 @ 0x18000FFC4
 * Callers:
 *     sub_18000F864 @ 0x18000F864 (sub_18000F864.c)
 * Callees:
 *     __security_check_cookie @ 0x18000AD40 (__security_check_cookie.c)
 *     sub_18000CB9C @ 0x18000CB9C (sub_18000CB9C.c)
 *     sub_18000DD90 @ 0x18000DD90 (sub_18000DD90.c)
 *     sub_18000EABC @ 0x18000EABC (sub_18000EABC.c)
 *     sub_18000F3AC @ 0x18000F3AC (sub_18000F3AC.c)
 *     sub_1800106C4 @ 0x1800106C4 (sub_1800106C4.c)
 *     sub_180012028 @ 0x180012028 (sub_180012028.c)
 *     sub_1800120BC @ 0x1800120BC (sub_1800120BC.c)
 *     sub_180016AC0 @ 0x180016AC0 (sub_180016AC0.c)
 */

// positive sp value has been detected, the output may be wrong!
int __fastcall sub_18000FFC4(unsigned __int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // rsi
  unsigned __int64 v4; // r15
  unsigned __int64 v6; // rdi
  int v7; // edx
  int v8; // r8d
  int v9; // ebx
  unsigned int v10; // eax
  int result; // eax
  char v12; // bl
  int v13; // r9d
  int v14; // r9d
  void *v15; // rcx
  void *v16; // rcx
  int v17; // [rsp+20h] [rbp-E0h]
  int v18; // [rsp+20h] [rbp-E0h]
  int v19; // [rsp+40h] [rbp-C0h] BYREF
  int v20; // [rsp+44h] [rbp-BCh] BYREF
  __int64 v21; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v22; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v23; // [rsp+60h] [rbp-A0h]
  _BYTE *v24; // [rsp+70h] [rbp-90h]
  _BYTE v25[24]; // [rsp+80h] [rbp-80h] BYREF
  __int64 v26; // [rsp+98h] [rbp-68h]
  int v27; // [rsp+A0h] [rbp-60h]
  void *v28; // [rsp+B0h] [rbp-50h]
  char v29; // [rsp+B8h] [rbp-48h]
  char v30; // [rsp+B9h] [rbp-47h]
  _BYTE v31[8]; // [rsp+C0h] [rbp-40h] BYREF
  __int64 (__fastcall **v32)(); // [rsp+C8h] [rbp-38h] BYREF
  __int128 v33; // [rsp+D0h] [rbp-30h]
  _BYTE *v34; // [rsp+E0h] [rbp-20h]
  __int64 (__fastcall ***v35)(); // [rsp+130h] [rbp+30h]
  _BYTE v36[4096]; // [rsp+140h] [rbp+40h] BYREF

  v3 = 0LL;
  v4 = a1 + 8 * a2;
  v22 = 0LL;
  v6 = a1;
  while ( 1 )
  {
    sub_18000CB9C(
      (__int64)v25,
      *(_WORD *)a3,
      *(_WORD *)(a3 + 2),
      *(_BYTE *)(a3 + 4),
      *(_WORD *)(a3 + 6),
      *(_BYTE *)(a3 + 8));
    v19 = 4096;
    v9 = sub_180012028(v6, v7, v8, (unsigned int)&v20, (__int64)v36, (__int64)&v19);
    sub_18000F3AC(v9);
    if ( v9 )
    {
      v10 = 0;
      v20 = 0;
      v19 = 0;
    }
    else
    {
      v10 = v19;
    }
    result = sub_1800106C4(v25, v36, v10, 4096LL);
    if ( v30 )
      break;
    v21 = 0LL;
    *(_QWORD *)&v23 = &v21;
    *((_QWORD *)&v23 + 1) = &v22;
    v24 = v25;
    v32 = off_180020D80;
    v35 = &v32;
    v33 = v23;
    v34 = v25;
    v12 = sub_18000EABC(a3, (__int64)v31);
    if ( !v29 )
      goto LABEL_11;
    result = sub_1800120BC(v6, v26, v27 - (int)v26, v13, v17, v20, 1);
    if ( result != -1073741823 )
    {
      if ( result )
        sub_1800120BC(v6, v26, v27 - v26, v14, v18, 0, 0);
LABEL_11:
      result = v21;
      v6 += 8LL;
      v22 = v21;
      goto LABEL_12;
    }
    ++v3;
    v12 = 0;
LABEL_12:
    v15 = v28;
    v28 = 0LL;
    if ( v15 )
      result = sub_18000DD90(v15);
    if ( v12 || v6 >= v4 || v3 >= 0x32 )
      return result;
  }
  v16 = v28;
  v28 = 0LL;
  if ( v16 )
    return sub_18000DD90(v16);
  return result;
}
