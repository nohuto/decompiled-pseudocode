/*
 * XREFs of sub_1407187D4 @ 0x1407187D4
 * Callers:
 *     sub_1407185B4 @ 0x1407185B4 (sub_1407185B4.c)
 * Callees:
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_1406BF400 @ 0x1406BF400 (sub_1406BF400.c)
 *     sub_1406BF450 @ 0x1406BF450 (sub_1406BF450.c)
 *     sub_140718B18 @ 0x140718B18 (sub_140718B18.c)
 *     sub_140718B68 @ 0x140718B68 (sub_140718B68.c)
 *     sub_14071F300 @ 0x14071F300 (sub_14071F300.c)
 *     sub_14079BA7C @ 0x14079BA7C (sub_14079BA7C.c)
 *     sub_14079BD98 @ 0x14079BD98 (sub_14079BD98.c)
 *     sub_1407C4180 @ 0x1407C4180 (sub_1407C4180.c)
 *     sub_1407C97C0 @ 0x1407C97C0 (sub_1407C97C0.c)
 *     sub_1407C9820 @ 0x1407C9820 (sub_1407C9820.c)
 *     sub_1407CD270 @ 0x1407CD270 (sub_1407CD270.c)
 *     sub_140AB4534 @ 0x140AB4534 (sub_140AB4534.c)
 */

__int64 __fastcall sub_1407187D4(
        ULONG_PTR BugCheckParameter3,
        ULONG_PTR BugCheckParameter4,
        int a3,
        const UNICODE_STRING *a4,
        unsigned int *a5)
{
  unsigned int v5; // r12d
  unsigned int v8; // edx
  unsigned int v9; // r15d
  int v10; // esi
  __int64 v11; // rax
  _WORD *v12; // rdi
  int v13; // eax
  int v14; // ecx
  _WORD *v15; // r14
  int v16; // ecx
  unsigned int v17; // r9d
  int v18; // eax
  __int64 v19; // rsi
  int v20; // eax
  int v21; // eax
  int v22; // eax
  int v24; // [rsp+30h] [rbp-30h]
  unsigned int v25; // [rsp+40h] [rbp-20h] BYREF
  unsigned int v26; // [rsp+44h] [rbp-1Ch] BYREF
  __int64 v27; // [rsp+48h] [rbp-18h] BYREF
  __int64 v28; // [rsp+50h] [rbp-10h] BYREF
  __int64 v29; // [rsp+58h] [rbp-8h] BYREF

  v5 = BugCheckParameter4;
  v28 = 0xFFFFFFFFLL;
  LODWORD(v27) = 0;
  v26 = 0;
  sub_140AB4534((char *)&v28 + 4);
  v9 = v8;
  v10 = sub_14071F300(BugCheckParameter3, v5);
  if ( v10 < 0 )
    return (unsigned int)v10;
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    v11 = sub_1406BF400(BugCheckParameter3, v5, &v28);
  else
    v11 = sub_1407C9820(BugCheckParameter3);
  v12 = (_WORD *)v11;
  v13 = *(unsigned __int16 *)(v11 + 2);
  if ( (_WORD)v13 == 0xFFFF )
  {
    v10 = -1073741670;
    goto LABEL_21;
  }
  v14 = -4 - *((_DWORD *)v12 - 1);
  if ( *v12 == 26988 )
  {
    v15 = 0LL;
    v16 = v14 - 4 * v13;
    v17 = 4;
  }
  else
  {
    v17 = 8;
    v16 = v14 - 8 * v13;
    v15 = v12;
  }
  v25 = v5;
  v9 = v5;
  if ( v16 - 4 < v17 )
  {
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      sub_1406BF450(BugCheckParameter3, &v28);
    else
      sub_1407C97C0(BugCheckParameter3, &v28);
    v29 = 0LL;
    v18 = sub_14079BA7C(BugCheckParameter3, v5, (__int64)&v25, (__int64)&v29, (__int64)&v28);
    v12 = (_WORD *)v29;
    v10 = v18;
    v9 = v25;
    if ( v18 < 0 )
      goto LABEL_21;
    if ( v15 )
      v15 = (_WORD *)v29;
  }
  v10 = sub_1407CD270(BugCheckParameter3, v12, a4, 0LL, &v27, &v26, v24);
  if ( v10 == -1073741772 )
  {
    v19 = v26;
    if ( v26 == (unsigned __int16)v12[1] )
      goto LABEL_33;
    v20 = sub_1407C4180(BugCheckParameter3, a4, (__int64)v12, (__int64)&v27);
    if ( v20 == 2 )
    {
      v10 = -1073741670;
      goto LABEL_21;
    }
    if ( v20 > 0 )
      v19 = (unsigned int)(v19 + 1);
    v21 = (unsigned __int16)v12[1];
    if ( (_DWORD)v19 == v21 )
    {
LABEL_33:
      if ( v15 )
        goto LABEL_34;
    }
    else
    {
      if ( v15 )
      {
        memmove(
          &v15[4 * (unsigned int)(v19 + 1) + 2],
          &v15[4 * v19 + 2],
          8LL * ((unsigned __int16)v15[1] - (unsigned int)v19));
LABEL_34:
        *(_DWORD *)&v15[4 * v19 + 2] = a3;
        if ( *v15 == 26732 )
          v22 = sub_140718B68(a4);
        else
          v22 = sub_140718B18(a4);
        *(_DWORD *)&v15[4 * v19 + 4] = v22;
        goto LABEL_31;
      }
      memmove(&v12[2 * (unsigned int)(v19 + 1) + 2], &v12[2 * (unsigned int)v19 + 2], 4LL * (unsigned int)(v21 - v19));
    }
    *(_DWORD *)&v12[2 * v19 + 2] = a3;
LABEL_31:
    ++v12[1];
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      sub_1406BF450(BugCheckParameter3, &v28);
    else
      sub_1407C97C0(BugCheckParameter3, &v28);
    v12 = 0LL;
    if ( v9 != v5 )
      sub_14079BD98(BugCheckParameter3, v5);
    *a5 = v9;
    v9 = -1;
    v10 = 0;
  }
LABEL_21:
  if ( v12 )
  {
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      sub_1406BF450(BugCheckParameter3, &v28);
    else
      sub_1407C97C0(BugCheckParameter3, &v28);
  }
  if ( v9 != -1 && v9 != v5 )
    sub_14079BD98(BugCheckParameter3, v9);
  return (unsigned int)v10;
}
