/*
 * XREFs of sub_140921510 @ 0x140921510
 * Callers:
 *     sub_1407FB158 @ 0x1407FB158 (sub_1407FB158.c)
 * Callees:
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_1406BF400 @ 0x1406BF400 (sub_1406BF400.c)
 *     sub_1406BF450 @ 0x1406BF450 (sub_1406BF450.c)
 *     sub_14071F300 @ 0x14071F300 (sub_14071F300.c)
 *     sub_14079BA7C @ 0x14079BA7C (sub_14079BA7C.c)
 *     sub_14079BD98 @ 0x14079BD98 (sub_14079BD98.c)
 *     sub_14079C8A4 @ 0x14079C8A4 (sub_14079C8A4.c)
 *     sub_1407C97C0 @ 0x1407C97C0 (sub_1407C97C0.c)
 *     sub_1407C9820 @ 0x1407C9820 (sub_1407C9820.c)
 */

__int64 __fastcall sub_140921510(
        ULONG_PTR BugCheckParameter2,
        ULONG_PTR a2,
        unsigned int a3,
        unsigned int a4,
        _DWORD *a5)
{
  __int64 v5; // r13
  __int64 v7; // r14
  unsigned int v8; // esi
  __int64 v9; // rax
  __int64 v10; // rdi
  int v11; // r15d
  unsigned int v12; // r15d
  __int64 v13; // rax
  _WORD *v14; // r12
  unsigned __int16 v15; // ax
  __int64 v16; // rsi
  int v17; // eax
  int v18; // r15d
  int v19; // r15d
  int v20; // eax
  int v21; // r15d
  _WORD *v22; // rdx
  int v23; // ecx
  int v24; // eax
  int v26; // [rsp+48h] [rbp-31h] BYREF
  __int64 v27; // [rsp+50h] [rbp-29h] BYREF
  unsigned __int16 v28; // [rsp+58h] [rbp-21h]
  __int64 v29; // [rsp+60h] [rbp-19h] BYREF
  __int64 v30; // [rsp+68h] [rbp-11h] BYREF
  __int64 v31; // [rsp+70h] [rbp-9h] BYREF
  __int64 v32; // [rsp+78h] [rbp-1h] BYREF
  __int64 v33; // [rsp+80h] [rbp+7h]
  __int64 v34; // [rsp+88h] [rbp+Fh]
  unsigned __int16 v35; // [rsp+D8h] [rbp+5Fh]
  unsigned int BugCheckParameter4; // [rsp+E0h] [rbp+67h]

  BugCheckParameter4 = a2;
  v5 = a3;
  LODWORD(v30) = 0;
  v7 = 0LL;
  v27 = 0xFFFFFFFFLL;
  v31 = 0xFFFFFFFFLL;
  v8 = -1;
  v32 = 0xFFFFFFFFLL;
  v26 = -1;
  v29 = 0LL;
  if ( (*(_BYTE *)(BugCheckParameter2 + 140) & 1) != 0 )
    v9 = sub_1406BF400(BugCheckParameter2, a2, &v27);
  else
    v9 = sub_1407C9820(BugCheckParameter2, a2, (unsigned int *)&v27);
  v10 = v9;
  if ( *(_WORD *)(v9 + 2) == 0xFFFF )
  {
    v11 = -1073741670;
    goto LABEL_35;
  }
  v12 = *(_DWORD *)(v9 + 4 * v5 + 4);
  if ( (*(_BYTE *)(BugCheckParameter2 + 140) & 1) != 0 )
    v13 = sub_1406BF400(BugCheckParameter2, v12, &v31);
  else
    v13 = sub_1407C9820(BugCheckParameter2, v12, (unsigned int *)&v31);
  v14 = (_WORD *)v13;
  v15 = *(_WORD *)(v13 + 2);
  v35 = v15 >> 1;
  v28 = v15 - (v15 >> 1);
  if ( ((*v14 - 26220) & 0xFDFF) != 0 )
  {
    LODWORD(v34) = 4;
    v33 = 4LL;
  }
  else
  {
    v34 = 8LL;
    v33 = 8LL;
  }
  v11 = sub_14071F300(BugCheckParameter2, v12, 0);
  if ( v11 >= 0 )
  {
    v16 = v28;
    v17 = sub_14079C8A4(BugCheckParameter2, (unsigned int)v34 * v28 + 5, a4, &v26, (__int64)&v29, (__int64)&v32);
    v7 = v29;
    v11 = v17;
    if ( v17 >= 0 )
    {
      *(_WORD *)v29 = *v14;
      v18 = *(_DWORD *)(v10 - 4);
      if ( ((-8 - 4 * *(unsigned __int16 *)(v10 + 2) - v18) & 0xFFFFFFFC) >= 4 )
      {
        v21 = BugCheckParameter4;
        goto LABEL_21;
      }
      v19 = -v18;
      if ( (*(_BYTE *)(BugCheckParameter2 + 140) & 1) != 0 )
        sub_1406BF450(BugCheckParameter2, &v27);
      else
        sub_1407C97C0(BugCheckParameter2, (unsigned int *)&v27);
      v29 = 0LL;
      v20 = sub_14079BA7C(BugCheckParameter2, BugCheckParameter4, v19, 1, (int *)&v30, &v29, (__int64)&v27);
      v10 = v29;
      v11 = v20;
      if ( v20 >= 0 )
      {
        v21 = v30;
LABEL_21:
        if ( ((*v14 - 26220) & 0xFDFF) != 0 )
          v22 = &v14[2 * v35 + 2];
        else
          v22 = &v14[4 * v35 + 2];
        memmove((void *)(v7 + 4), v22, v33 * v16);
        v14[1] = v35;
        *(_WORD *)(v7 + 2) = v16;
        v23 = *(unsigned __int16 *)(v10 + 2);
        if ( (unsigned int)v5 < v23 - 1 )
        {
          memmove(
            (void *)(v10 + 4 * ((unsigned int)(v5 + 2) + 1LL)),
            (const void *)(v10 + 4 * ((unsigned int)(v5 + 1) + 1LL)),
            4LL * (unsigned int)(v23 - v5 - 1));
          LOWORD(v23) = *(_WORD *)(v10 + 2);
        }
        v24 = v26;
        *(_WORD *)(v10 + 2) = v23 + 1;
        v8 = -1;
        *(_DWORD *)(v10 + 4LL * (unsigned int)(v5 + 1) + 4) = v24;
        *a5 = v21;
        v11 = 0;
        goto LABEL_28;
      }
    }
    v8 = v26;
  }
LABEL_28:
  if ( (*(_BYTE *)(BugCheckParameter2 + 140) & 1) != 0 )
    sub_1406BF450(BugCheckParameter2, &v31);
  else
    sub_1407C97C0(BugCheckParameter2, (unsigned int *)&v31);
  if ( v7 )
  {
    if ( (*(_BYTE *)(BugCheckParameter2 + 140) & 1) != 0 )
      sub_1406BF450(BugCheckParameter2, &v32);
    else
      sub_1407C97C0(BugCheckParameter2, (unsigned int *)&v32);
  }
LABEL_35:
  if ( v10 )
  {
    if ( (*(_BYTE *)(BugCheckParameter2 + 140) & 1) != 0 )
      sub_1406BF450(BugCheckParameter2, &v27);
    else
      sub_1407C97C0(BugCheckParameter2, (unsigned int *)&v27);
  }
  if ( v8 != -1 )
    sub_14079BD98(BugCheckParameter2, v8);
  return (unsigned int)v11;
}
