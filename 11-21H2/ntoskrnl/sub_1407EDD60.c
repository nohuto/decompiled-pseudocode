/*
 * XREFs of sub_1407EDD60 @ 0x1407EDD60
 * Callers:
 *     <none>
 * Callees:
 *     sub_140287F30 @ 0x140287F30 (sub_140287F30.c)
 *     sub_140369870 @ 0x140369870 (sub_140369870.c)
 *     sub_1403698C4 @ 0x1403698C4 (sub_1403698C4.c)
 *     sub_14036A698 @ 0x14036A698 (sub_14036A698.c)
 *     sub_14036B090 @ 0x14036B090 (sub_14036B090.c)
 *     sub_14036B8CC @ 0x14036B8CC (sub_14036B8CC.c)
 *     sub_14036B98C @ 0x14036B98C (sub_14036B98C.c)
 *     sub_1403B6DF8 @ 0x1403B6DF8 (sub_1403B6DF8.c)
 *     sub_1406831A8 @ 0x1406831A8 (sub_1406831A8.c)
 *     sub_1407F2A20 @ 0x1407F2A20 (sub_1407F2A20.c)
 *     sub_1407FCC54 @ 0x1407FCC54 (sub_1407FCC54.c)
 *     sub_140A47CF8 @ 0x140A47CF8 (sub_140A47CF8.c)
 *     sub_140A48330 @ 0x140A48330 (sub_140A48330.c)
 */

__int64 __fastcall sub_1407EDD60(int a1, __int64 a2)
{
  _DWORD *v2; // r12
  struct _KTHREAD *CurrentThread; // r15
  __int64 v5; // rcx
  _DWORD *v6; // rbx
  int v7; // ebx
  _QWORD *v8; // rsi
  char v9; // al
  int v11; // ecx
  __int64 v12; // rdx
  __int64 v13; // rcx
  int v14; // ecx
  __int64 v15; // rdx
  __int64 v16; // rcx
  bool v17; // bl
  unsigned int v18; // eax
  __int64 v19; // rcx
  _DWORD *v20; // [rsp+30h] [rbp-38h] BYREF
  int v21; // [rsp+80h] [rbp+18h] BYREF
  PVOID P; // [rsp+88h] [rbp+20h] BYREF

  v2 = (_DWORD *)a2;
  v21 = 0;
  P = 0LL;
  LOBYTE(a2) = *((_BYTE *)KeGetCurrentThread() + 562);
  if ( !(_BYTE)a2 )
    return (unsigned int)-1073741637;
  CurrentThread = KeGetCurrentThread();
  if ( (a1 & 0x7FFFFFBC) != 0 || (a1 & 0x40) != 0 && a1 >= 0 )
    return (unsigned int)-1073741811;
  v5 = 0x7FFFFFFF0000LL;
  if ( (unsigned __int64)v2 < 0x7FFFFFFF0000LL )
    v5 = (__int64)v2;
  *(_DWORD *)v5 = *(_DWORD *)v5;
  v6 = (_DWORD *)*((_QWORD *)CurrentThread + 166);
  v20 = v6;
  if ( v6 || a1 >= 0 )
    goto LABEL_11;
  v7 = sub_14036B98C(0LL, a2, 0LL, 1, 0LL, &P);
  if ( v7 < 0 )
    return (unsigned int)v7;
  v8 = P;
  v7 = sub_14036A698(P, 0, &v20);
  if ( v7 >= 0 )
  {
    v6 = v20;
    *((_QWORD *)CurrentThread + 166) = v20;
LABEL_11:
    v9 = sub_140369870(v6, a1, &v21);
    *v2 = v21;
    if ( a1 >= 0 )
    {
      sub_1407FCC54(CurrentThread, (unsigned int)a1);
      if ( (a1 & 1) != 0 )
      {
        sub_140A48330(v11);
        sub_1403B6DF8();
        sub_140A47CF8(v13, v12);
      }
      if ( (a1 & 2) != 0 )
      {
        sub_1406831A8(*((_QWORD *)KeGetCurrentThread() + 23), 12, 3LL);
        sub_140A48330(v14);
        v17 = 0;
        if ( byte_140C5AC3C && !byte_140C0C644 )
          v17 = byte_140C4EF1C == 0;
        sub_140A47CF8(v16, v15);
        v18 = sub_140287F30(*((_QWORD *)KeGetCurrentThread() + 23));
        if ( sub_14036B8CC(v18) && !v17 )
        {
          LOBYTE(v19) = 1;
          sub_1407F2A20(v19, 8LL);
        }
      }
    }
    else
    {
      sub_1403698C4(v6, a1, v9);
    }
    return 0;
  }
  if ( v8 )
    sub_14036B090(v8);
  return (unsigned int)v7;
}
