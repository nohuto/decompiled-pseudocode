/*
 * XREFs of sub_140715BA0 @ 0x140715BA0
 * Callers:
 *     sub_140715A2C @ 0x140715A2C (sub_140715A2C.c)
 * Callees:
 *     sub_1406BF400 @ 0x1406BF400 (sub_1406BF400.c)
 *     sub_1406BF450 @ 0x1406BF450 (sub_1406BF450.c)
 *     sub_14071F300 @ 0x14071F300 (sub_14071F300.c)
 *     sub_14079CBD8 @ 0x14079CBD8 (sub_14079CBD8.c)
 *     sub_1407C5F80 @ 0x1407C5F80 (sub_1407C5F80.c)
 *     sub_1407C97C0 @ 0x1407C97C0 (sub_1407C97C0.c)
 *     sub_1407C97FC @ 0x1407C97FC (sub_1407C97FC.c)
 *     sub_1407C9820 @ 0x1407C9820 (sub_1407C9820.c)
 *     sub_1407CD270 @ 0x1407CD270 (sub_1407CD270.c)
 */

__int64 __fastcall sub_140715BA0(ULONG_PTR BugCheckParameter3, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  unsigned int v8; // r12d
  _WORD *v9; // rax
  _WORD *v10; // rsi
  unsigned int v11; // r15d
  _WORD *v12; // r14
  int v13; // ebx
  __int64 v15; // rax
  int v16; // [rsp+30h] [rbp-20h] BYREF
  __int64 v17; // [rsp+38h] [rbp-18h] BYREF
  _QWORD v18[2]; // [rsp+40h] [rbp-10h] BYREF
  int v19; // [rsp+98h] [rbp+48h] BYREF
  ULONG_PTR BugCheckParameter4; // [rsp+A0h] [rbp+50h] BYREF

  v19 = 0;
  v18[0] = 0LL;
  LODWORD(BugCheckParameter4) = 0;
  v17 = 0LL;
  v16 = 0;
  sub_1407C97FC(v18);
  sub_1407C97FC(&v17);
  if ( !*(_DWORD *)(a2 + 4LL * a5 + 20) )
    return (unsigned int)-1073741772;
  v8 = *(_DWORD *)(a2 + 4LL * a5 + 28);
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    v9 = (_WORD *)sub_1406BF400(BugCheckParameter3, *(unsigned int *)(a2 + 4LL * a5 + 28), v18);
  else
    v9 = (_WORD *)sub_1407C9820(BugCheckParameter3);
  v10 = v9;
  if ( !v9 )
    return (unsigned int)-1073741670;
  if ( *v9 == 26994 )
  {
    v19 = sub_1407C5F80(BugCheckParameter3, (__int64)&BugCheckParameter4);
    if ( v19 != 0x80000000 )
    {
      v11 = BugCheckParameter4;
      if ( (_DWORD)BugCheckParameter4 == -1 )
      {
        v13 = -1073741772;
LABEL_23:
        if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
          sub_1406BF450(BugCheckParameter3, v18);
        else
          sub_1407C97C0(BugCheckParameter3, v18);
        return (unsigned int)v13;
      }
      if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
        v15 = sub_1406BF400(BugCheckParameter3, (unsigned int)BugCheckParameter4, &v17);
      else
        v15 = sub_1407C9820(BugCheckParameter3);
      v12 = (_WORD *)v15;
      if ( v15 )
        goto LABEL_7;
    }
    v13 = -1073741670;
    goto LABEL_23;
  }
  v11 = v8;
  v12 = v9;
  v8 = -1;
  v10 = 0LL;
  sub_14079CBD8(&v17, v18);
LABEL_7:
  v13 = ((__int64 (__fastcall *)(ULONG_PTR, _WORD *, __int64, _QWORD, int *, int *))sub_1407CD270)(
          BugCheckParameter3,
          v12,
          a4,
          0LL,
          &v16,
          &v19);
  if ( v13 < 0 )
    goto LABEL_12;
  if ( !v10 || (v13 = sub_14071F300(BugCheckParameter3, v8), v13 >= 0) )
  {
    v13 = sub_14071F300(BugCheckParameter3, v11);
    if ( v13 >= 0 )
      v13 = 0;
  }
  if ( v12 )
  {
LABEL_12:
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      sub_1406BF450(BugCheckParameter3, &v17);
    else
      sub_1407C97C0(BugCheckParameter3, &v17);
  }
  if ( v10 )
    goto LABEL_23;
  return (unsigned int)v13;
}
