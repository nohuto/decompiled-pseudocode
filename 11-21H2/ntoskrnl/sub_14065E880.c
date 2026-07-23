/*
 * XREFs of sub_14065E880 @ 0x14065E880
 * Callers:
 *     sub_14065E5A4 @ 0x14065E5A4 (sub_14065E5A4.c)
 *     sub_140912608 @ 0x140912608 (sub_140912608.c)
 * Callees:
 *     sub_1406BF400 @ 0x1406BF400 (sub_1406BF400.c)
 *     sub_1406BF450 @ 0x1406BF450 (sub_1406BF450.c)
 *     sub_1406C8FF4 @ 0x1406C8FF4 (sub_1406C8FF4.c)
 *     sub_14079BD98 @ 0x14079BD98 (sub_14079BD98.c)
 *     sub_1407C97C0 @ 0x1407C97C0 (sub_1407C97C0.c)
 *     sub_1407C9820 @ 0x1407C9820 (sub_1407C9820.c)
 */

__int64 __fastcall sub_14065E880(ULONG_PTR BugCheckParameter3, ULONG_PTR a2, int a3, unsigned int *a4)
{
  unsigned int v5; // edi
  unsigned int v6; // esi
  _DWORD *v7; // r14
  _WORD *v8; // rax
  _WORD *v9; // r15
  int v10; // r12d
  unsigned int v11; // esi
  _DWORD *v13; // rax
  int v14; // r13d
  _WORD *v15; // rax
  _WORD *v16; // rsi
  __int64 v17; // [rsp+30h] [rbp-20h] BYREF
  _DWORD v18[2]; // [rsp+38h] [rbp-18h] BYREF
  _DWORD v19[4]; // [rsp+40h] [rbp-10h] BYREF
  ULONG_PTR BugCheckParameter4; // [rsp+90h] [rbp+40h] BYREF
  int v21; // [rsp+A0h] [rbp+50h]
  unsigned int *v22; // [rsp+A8h] [rbp+58h]

  v22 = a4;
  v21 = a3;
  v19[1] = 0;
  v5 = 0;
  v19[0] = -1;
  v18[0] = -1;
  LODWORD(BugCheckParameter4) = -1;
  v6 = a2;
  v7 = 0LL;
  v18[1] = 0;
  LODWORD(v17) = 0;
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    v8 = (_WORD *)sub_1406BF400(BugCheckParameter3, a2);
  else
    v8 = (_WORD *)sub_1407C9820(BugCheckParameter3);
  v9 = v8;
  if ( *v8 != 26994 )
  {
    v10 = sub_1406C8FF4(BugCheckParameter3, v6, (__int64)&BugCheckParameter4);
    if ( v10 >= 0 )
    {
      v11 = BugCheckParameter4;
      goto LABEL_6;
    }
LABEL_12:
    v11 = BugCheckParameter4;
    goto LABEL_8;
  }
  v10 = sub_1406C8FF4(BugCheckParameter3, v6, (__int64)&BugCheckParameter4);
  if ( v10 < 0 )
    goto LABEL_12;
  v11 = BugCheckParameter4;
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    v13 = (_DWORD *)sub_1406BF400(BugCheckParameter3, (unsigned int)BugCheckParameter4);
  else
    v13 = (_DWORD *)sub_1407C9820(BugCheckParameter3);
  *v13 = 26994;
  v7 = v13;
  v14 = 0;
  if ( v9[1] )
  {
    do
    {
      v10 = sub_1406C8FF4(BugCheckParameter3, *(unsigned int *)&v9[2 * v14 + 2], (__int64)&v17);
      if ( v10 < 0 )
        goto LABEL_7;
      v7[v14 + 1] = v17;
      ++*((_WORD *)v7 + 1);
    }
    while ( ++v14 < (unsigned int)(unsigned __int16)v9[1] );
  }
LABEL_6:
  *v22 = v11;
  v11 = -1;
LABEL_7:
  if ( v7 )
  {
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      sub_1406BF450(BugCheckParameter3, v18);
    else
      sub_1407C97C0(BugCheckParameter3, v18);
  }
LABEL_8:
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    sub_1406BF450(BugCheckParameter3, v19);
  else
    sub_1407C97C0(BugCheckParameter3, v19);
  if ( v11 != -1 )
  {
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      v15 = (_WORD *)sub_1406BF400(BugCheckParameter3, v11);
    else
      v15 = (_WORD *)sub_1407C9820(BugCheckParameter3);
    v16 = v15;
    if ( *v15 == 26994 && v15[1] )
    {
      do
        sub_14079BD98(BugCheckParameter3, *(unsigned int *)&v16[2 * v5++ + 2]);
      while ( v5 < (unsigned __int16)v16[1] );
    }
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      sub_1406BF450(BugCheckParameter3, v18);
    else
      sub_1407C97C0(BugCheckParameter3, v18);
  }
  return (unsigned int)v10;
}
