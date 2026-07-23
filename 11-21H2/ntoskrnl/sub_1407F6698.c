/*
 * XREFs of sub_1407F6698 @ 0x1407F6698
 * Callers:
 *     sub_1406A18C0 @ 0x1406A18C0 (sub_1406A18C0.c)
 * Callees:
 *     SeFreePrivileges @ 0x140208AC0 (SeFreePrivileges.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_14065AED8 @ 0x14065AED8 (sub_14065AED8.c)
 *     sub_14067E828 @ 0x14067E828 (sub_14067E828.c)
 *     sub_14069F3D4 @ 0x14069F3D4 (sub_14069F3D4.c)
 *     sub_14069F47C @ 0x14069F47C (sub_14069F47C.c)
 *     sub_1406BF400 @ 0x1406BF400 (sub_1406BF400.c)
 *     sub_1406BF450 @ 0x1406BF450 (sub_1406BF450.c)
 *     sub_140721B68 @ 0x140721B68 (sub_140721B68.c)
 *     sub_140721BAC @ 0x140721BAC (sub_140721BAC.c)
 *     sub_140721CE0 @ 0x140721CE0 (sub_140721CE0.c)
 *     sub_1407C05F4 @ 0x1407C05F4 (sub_1407C05F4.c)
 *     sub_1407C5730 @ 0x1407C5730 (sub_1407C5730.c)
 *     sub_1407C97C0 @ 0x1407C97C0 (sub_1407C97C0.c)
 *     sub_1407C9820 @ 0x1407C9820 (sub_1407C9820.c)
 *     sub_140921F64 @ 0x140921F64 (sub_140921F64.c)
 *     sub_140AB4534 @ 0x140AB4534 (sub_140AB4534.c)
 *     sub_140AB45A0 @ 0x140AB45A0 (sub_140AB45A0.c)
 */

__int64 __fastcall sub_1407F6698(__int64 a1, unsigned int a2, int a3, size_t a4, unsigned int a5, __int64 a6)
{
  __int64 v7; // r15
  char v9; // r12
  __int64 v10; // rsi
  __int64 v11; // rdi
  int v12; // ebx
  char v13; // al
  char v14; // r8
  __int16 v15; // dx
  __int16 v16; // dx
  char v17; // r9
  __int16 v18; // r10
  int v19; // r14d
  unsigned int v20; // ebx
  __int64 v21; // r14
  __int64 v22; // rax
  ULONG_PTR v23; // rcx
  ULONG_PTR v24; // rdx
  __int64 v25; // rax
  __int64 v26; // rcx
  __int64 v27; // rcx
  ULONG_PTR v28; // rcx
  __int64 v29; // rax
  __int64 v30; // r15
  __int64 v31; // rcx
  __int64 v32; // rcx
  __int64 v34; // [rsp+40h] [rbp-A9h] BYREF
  __int64 v35; // [rsp+48h] [rbp-A1h] BYREF
  __int64 v36; // [rsp+50h] [rbp-99h] BYREF
  __int128 v37; // [rsp+58h] [rbp-91h] BYREF
  PPRIVILEGE_SET Privileges[2]; // [rsp+68h] [rbp-81h]
  __int64 v39; // [rsp+78h] [rbp-71h]
  size_t Size; // [rsp+80h] [rbp-69h]
  ULONG_PTR BugCheckParameter4[12]; // [rsp+90h] [rbp-59h] BYREF

  v7 = a2;
  Size = a4;
  v39 = a6;
  memset(BugCheckParameter4, 0, 0x58uLL);
  v37 = 0LL;
  WORD1(v37) = -1;
  v9 = 0;
  *(_OWORD *)Privileges = 0LL;
  sub_14069F47C(BugCheckParameter4);
  v36 = 0xFFFFFFFFLL;
  sub_140AB4534((char *)&v36 + 4);
  v34 = 0xFFFFFFFFLL;
  v10 = 0LL;
  v11 = 0LL;
  sub_140AB4534((char *)&v34 + 4);
  v35 = 0xFFFFFFFFLL;
  sub_140AB4534((char *)&v35 + 4);
  v12 = sub_1407C05F4((__int64)&v37, *(_QWORD *)(a1 + 8));
  if ( v12 < 0 )
    goto LABEL_37;
  sub_140721B68((__int64)&v37);
  v9 = 1;
  v13 = sub_140AB45A0(a1, 0LL);
  v14 = 0;
  if ( v13 )
  {
    v12 = (*(_BYTE *)(a1 + 48) & 1) != 0 ? -1073740763 : -1073741444;
    goto LABEL_37;
  }
  v15 = WORD1(v37);
  if ( SWORD1(v37) <= 0 )
    goto LABEL_15;
  do
  {
    v10 = sub_140721CE0((__int64)&v37, v15);
    if ( *(_DWORD *)(v10 + 40) != -1 )
      v17 = 1;
    v15 = v18 + v16;
  }
  while ( v15 > 0 );
  if ( !v17 )
  {
LABEL_15:
    v10 = *((_QWORD *)&v37 + 1);
    v21 = *((_QWORD *)&v37 + 1);
    v22 = sub_14067E828(*((__int64 *)&v37 + 1), (__int64)&v34, v14);
    v11 = v22;
    if ( (*(_BYTE *)(v22 + 2) & 0x40) != 0 )
    {
      v12 = -1073741816;
      goto LABEL_37;
    }
    if ( *(_DWORD *)(v22 + 36) <= (unsigned int)v7 )
    {
      v12 = -2147483622;
      goto LABEL_37;
    }
    v23 = *(_QWORD *)(v10 + 32);
    v24 = *(unsigned int *)(v22 + 40);
    if ( (*(_BYTE *)(v23 + 140) & 1) != 0 )
      v25 = sub_1406BF400(v23, v24, &v35);
    else
      v25 = sub_1407C9820(v23, v24, (unsigned int *)&v35);
    v20 = *(_DWORD *)(v25 + 4 * v7);
    v26 = *(_QWORD *)(v10 + 32);
    if ( (*(_BYTE *)(v26 + 140) & 1) != 0 )
      sub_1406BF450(v26, &v35);
    else
      sub_1407C97C0(v26, (unsigned int *)&v35);
    v27 = *(_QWORD *)(v10 + 32);
    if ( (*(_BYTE *)(v27 + 140) & 1) != 0 )
      sub_1406BF450(v27, &v34);
    else
      sub_1407C97C0(v27, (unsigned int *)&v34);
    goto LABEL_28;
  }
  v12 = sub_140921F64(BugCheckParameter4, &v37, a1);
  if ( v12 < 0 )
    goto LABEL_37;
  v12 = sub_14065AED8((__int64)BugCheckParameter4);
  if ( v12 < 0 )
    goto LABEL_37;
  v19 = 0;
  if ( !(_DWORD)v7 )
  {
LABEL_14:
    v20 = BugCheckParameter4[0];
    v21 = sub_140721CE0((__int64)&v37, SHIWORD(BugCheckParameter4[0]));
LABEL_28:
    v28 = *(_QWORD *)(v21 + 32);
    if ( (*(_BYTE *)(v28 + 140) & 1) != 0 )
      v29 = sub_1406BF400(v28, v20, &v36);
    else
      v29 = sub_1407C9820(v28, v20, (unsigned int *)&v36);
    v30 = v29;
    v12 = sub_1407C5730(v21, v20, v29, a3, (_DWORD *)Size, a5, (unsigned int *)v39);
    if ( v12 >= 0 )
      v12 = 0;
    v11 = 0LL;
    if ( v30 )
    {
      v31 = *(_QWORD *)(v21 + 32);
      if ( (*(_BYTE *)(v31 + 140) & 1) != 0 )
        sub_1406BF450(v31, &v36);
      else
        sub_1407C97C0(v31, (unsigned int *)&v36);
    }
    goto LABEL_37;
  }
  while ( 1 )
  {
    v12 = sub_14065AED8((__int64)BugCheckParameter4);
    if ( v12 < 0 )
      break;
    if ( ++v19 >= (unsigned int)v7 )
      goto LABEL_14;
  }
LABEL_37:
  sub_14069F3D4((__int64)BugCheckParameter4);
  if ( v11 )
  {
    v32 = *(_QWORD *)(v10 + 32);
    if ( (*(_BYTE *)(v32 + 140) & 1) != 0 )
      sub_1406BF450(v32, &v34);
    else
      sub_1407C97C0(v32, (unsigned int *)&v34);
  }
  if ( v9 )
    sub_140721BAC((__int64)&v37);
  if ( Privileges[1] )
    SeFreePrivileges(Privileges[1]);
  return (unsigned int)v12;
}
