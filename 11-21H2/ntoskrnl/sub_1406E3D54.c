/*
 * XREFs of sub_1406E3D54 @ 0x1406E3D54
 * Callers:
 *     sub_1407169FC @ 0x1407169FC (sub_1407169FC.c)
 * Callees:
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_1406BF400 @ 0x1406BF400 (sub_1406BF400.c)
 *     sub_1406BF450 @ 0x1406BF450 (sub_1406BF450.c)
 *     sub_14079BA7C @ 0x14079BA7C (sub_14079BA7C.c)
 *     sub_14079BD98 @ 0x14079BD98 (sub_14079BD98.c)
 *     sub_14079C8A4 @ 0x14079C8A4 (sub_14079C8A4.c)
 *     sub_1407C97C0 @ 0x1407C97C0 (sub_1407C97C0.c)
 *     sub_1407C9820 @ 0x1407C9820 (sub_1407C9820.c)
 */

__int64 __fastcall sub_1406E3D54(
        ULONG_PTR BugCheckParameter3,
        char *Src,
        unsigned int a3,
        int a4,
        ULONG_PTR BugCheckParameter4)
{
  unsigned __int16 v6; // di
  bool v8; // zf
  char *v9; // r12
  __int64 v10; // rax
  __int64 v11; // r15
  __int64 v12; // rax
  __int64 v13; // r14
  unsigned int v14; // esi
  void *v15; // rax
  size_t v16; // r8
  int v17; // edi
  unsigned __int16 v19; // di
  ULONG_PTR v20; // rdx
  ULONG_PTR v21; // rdx
  int v22; // eax
  unsigned __int16 v23; // r12
  __int64 v24; // [rsp+40h] [rbp-20h] BYREF
  __int64 v25; // [rsp+48h] [rbp-18h] BYREF
  __int64 v26; // [rsp+50h] [rbp-10h] BYREF
  __int64 v27; // [rsp+58h] [rbp-8h] BYREF
  __int64 v28; // [rsp+A0h] [rbp+40h] BYREF
  char *v29; // [rsp+A8h] [rbp+48h]
  int v30; // [rsp+B8h] [rbp+58h]

  v30 = a4;
  v29 = Src;
  v6 = 0;
  v26 = 0xFFFFFFFFLL;
  v27 = 0xFFFFFFFFLL;
  v8 = (*(_BYTE *)(BugCheckParameter3 + 140) & 1) == 0;
  v9 = Src;
  v24 = 0xFFFFFFFFLL;
  LODWORD(v28) = 0;
  if ( v8 )
    v10 = sub_1407C9820(BugCheckParameter3);
  else
    v10 = sub_1406BF400(BugCheckParameter3, (unsigned int)BugCheckParameter4, &v27);
  v11 = v10;
  if ( !v10 )
    return 3221225626LL;
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    v12 = sub_1406BF400(BugCheckParameter3, *(unsigned int *)(v10 + 4), &v24);
  else
    v12 = sub_1407C9820(BugCheckParameter3);
  v13 = v12;
  if ( !v12 )
    goto LABEL_34;
  v14 = (a3 + 16343) / 0x3FD8;
  if ( (unsigned __int16)v14 < *(_WORD *)(v11 + 2) )
  {
    v19 = (a3 + 16343) / 0x3FD8;
    do
      sub_14079BD98(BugCheckParameter3, *(unsigned int *)(v13 + 4LL * v19++));
    while ( v19 < *(_WORD *)(v11 + 2) );
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      sub_1406BF450(BugCheckParameter3, &v24);
    else
      sub_1407C97C0(BugCheckParameter3, &v24);
    v20 = *(unsigned int *)(v11 + 4);
    v6 = 0;
    v25 = 0LL;
    sub_14079BA7C(BugCheckParameter3, v20, (__int64)&v28, (__int64)&v25, (__int64)&v24);
    v13 = v25;
    *(_DWORD *)(v11 + 4) = v28;
  }
  else if ( (unsigned __int16)v14 > *(_WORD *)(v11 + 2) )
  {
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      sub_1406BF450(BugCheckParameter3, &v24);
    else
      sub_1407C97C0(BugCheckParameter3, &v24);
    v21 = *(unsigned int *)(v11 + 4);
    v25 = 0LL;
    v22 = sub_14079BA7C(BugCheckParameter3, v21, (__int64)&v28, (__int64)&v25, (__int64)&v24);
    v13 = v25;
    v17 = v22;
    if ( v22 < 0 )
      goto LABEL_19;
    v23 = *(_WORD *)(v11 + 2);
    *(_DWORD *)(v11 + 4) = v28;
    while ( v23 < (unsigned __int16)v14 )
    {
      v17 = sub_14079C8A4(BugCheckParameter3, 16344, v30, (unsigned int)v13 + 4 * v23, 0LL, 0LL);
      if ( v17 < 0 )
        goto LABEL_19;
      ++v23;
    }
    v9 = v29;
    v6 = 0;
  }
  if ( (_WORD)v14 )
  {
    while ( 1 )
    {
      v15 = (void *)((*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0
                   ? sub_1406BF400(BugCheckParameter3, *(unsigned int *)(v13 + 4LL * v6), &v26)
                   : sub_1407C9820(BugCheckParameter3));
      if ( !v15 )
        break;
      v16 = a3;
      if ( a3 > 0x3FD8 )
        v16 = 16344LL;
      memmove(v15, v9, v16);
      if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
        sub_1406BF450(BugCheckParameter3, &v26);
      else
        sub_1407C97C0(BugCheckParameter3, &v26);
      a3 -= 16344;
      v9 += 16344;
      if ( ++v6 >= (unsigned __int16)v14 )
        goto LABEL_18;
    }
LABEL_34:
    v17 = -1073741670;
    goto LABEL_19;
  }
LABEL_18:
  *(_WORD *)(v11 + 2) = v14;
  v17 = 0;
LABEL_19:
  if ( v13 )
  {
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      sub_1406BF450(BugCheckParameter3, &v24);
    else
      sub_1407C97C0(BugCheckParameter3, &v24);
  }
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    sub_1406BF450(BugCheckParameter3, &v27);
  else
    sub_1407C97C0(BugCheckParameter3, &v27);
  return (unsigned int)v17;
}
