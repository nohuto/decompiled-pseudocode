/*
 * XREFs of sub_140605C60 @ 0x140605C60
 * Callers:
 *     <none>
 * Callees:
 *     CcCopyWriteEx @ 0x140226550 (CcCopyWriteEx.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_140604844 @ 0x140604844 (sub_140604844.c)
 *     sub_140628C98 @ 0x140628C98 (sub_140628C98.c)
 */

char __fastcall sub_140605C60(__int64 a1, unsigned int a2, unsigned int a3, __int64 a4)
{
  __int64 v4; // r12
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 *v10; // rdi
  __int64 v11; // r8
  __int64 v12; // r9
  int v13; // eax
  __int64 v14; // rax
  __int64 *i; // rbx
  char result; // al
  __int64 v17; // rdx
  _QWORD **v18; // rdi
  _QWORD *j; // rbx
  __int64 v20; // [rsp+30h] [rbp-30h] BYREF
  __int128 v21; // [rsp+38h] [rbp-28h] BYREF
  __int128 v22; // [rsp+48h] [rbp-18h]
  __int64 retaddr; // [rsp+88h] [rbp+28h]

  v4 = a2;
  v21 = 0LL;
  v22 = 0LL;
  v10 = sub_140604844(3);
  if ( !v10 )
    goto LABEL_18;
  if ( dword_140C1B2A0
    && ((qword_140D01450 & 0xFFA9F6E6) != 0 || (v9 = HIDWORD(qword_140D01450), (qword_140D01450 & 0x200000000LL) != 0))
    || (qword_140D01450 & 0x800000000LL) == 0 )
  {
    if ( (*((_DWORD *)v10 + 3) & 0x20) != 0 )
      goto LABEL_13;
    goto LABEL_11;
  }
  v13 = *((_DWORD *)v10 + 3);
  if ( (v13 & 0x18) == 0 )
  {
    if ( (v13 & 4) == 0 )
      goto LABEL_13;
LABEL_11:
    v14 = sub_140628C98(v9, v8, v11, v12);
    goto LABEL_12;
  }
  v14 = retaddr;
LABEL_12:
  *(_QWORD *)&v21 = v14;
LABEL_13:
  *((_QWORD *)&v22 + 1) = a1;
  *(_QWORD *)&v22 = __PAIR64__(v4, a3);
  *((_QWORD *)&v21 + 1) = a4;
  for ( i = (__int64 *)v10[4]; i != v10 + 4; i = (__int64 *)*i )
  {
    if ( i != (__int64 *)16 )
      sub_14042A5E0(&v21, v8);
  }
LABEL_18:
  v20 = v4;
  result = CcCopyWriteEx(a1, &v20, a3, 1, a4, 0LL);
  if ( v10 )
  {
    v18 = (_QWORD **)(v10 + 6);
    for ( j = *v18; j != v18; j = (_QWORD *)*j )
    {
      result = (_BYTE)j - 16;
      if ( j != (_QWORD *)16 )
        result = sub_14042A5E0(&v21, v17);
    }
  }
  return result;
}
