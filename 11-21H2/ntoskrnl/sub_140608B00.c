/*
 * XREFs of sub_140608B00 @ 0x140608B00
 * Callers:
 *     <none>
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_140604844 @ 0x140604844 (sub_140604844.c)
 *     sub_140628C98 @ 0x140628C98 (sub_140628C98.c)
 */

__int64 __fastcall sub_140608B00(__int64 a1, __int64 a2, __int64 a3, int a4, __int64 a5, int a6, __int16 a7, int a8)
{
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 *v14; // rdi
  __int64 v15; // r8
  __int64 v16; // r9
  int v17; // eax
  __int64 v18; // rax
  __int64 *i; // rbx
  __int64 result; // rax
  __int64 v21; // rdx
  _QWORD **v22; // rdi
  _QWORD *j; // rbx
  _QWORD v24[8]; // [rsp+58h] [rbp-31h] BYREF
  __int64 retaddr; // [rsp+C0h] [rbp+37h]

  memset(v24, 0, sizeof(v24));
  v14 = sub_140604844(45);
  if ( !v14 )
    goto LABEL_18;
  if ( dword_140C1B2A0 && ((qword_140D01450 & 0xFFA9F6E6) != 0 || (qword_140D01450 & 0x200000000LL) != 0)
    || (qword_140D01450 & 0x800000000LL) == 0 )
  {
    if ( (*((_DWORD *)v14 + 3) & 0x20) != 0 )
      goto LABEL_13;
    goto LABEL_11;
  }
  v17 = *((_DWORD *)v14 + 3);
  if ( (v17 & 0x18) == 0 )
  {
    if ( (v17 & 4) == 0 )
      goto LABEL_13;
LABEL_11:
    v18 = sub_140628C98(v13, v12, v15, v16);
    goto LABEL_12;
  }
  v18 = retaddr;
LABEL_12:
  v24[0] = v18;
LABEL_13:
  v24[3] = a5;
  LODWORD(v24[2]) = a6;
  WORD2(v24[1]) = a7;
  LODWORD(v24[1]) = a8;
  v24[7] = a1;
  v24[6] = a2;
  v24[5] = a3;
  LODWORD(v24[4]) = a4;
  for ( i = (__int64 *)v14[4]; i != v14 + 4; i = (__int64 *)*i )
  {
    if ( i != (__int64 *)16 )
      sub_14042A5E0(v24, v12);
  }
LABEL_18:
  result = sub_14042A5E0(a1, a2);
  if ( v14 )
  {
    v22 = (_QWORD **)(v14 + 6);
    for ( j = *v22; j != v22; j = (_QWORD *)*j )
    {
      result = (__int64)(j - 2);
      if ( j != (_QWORD *)16 )
        result = sub_14042A5E0(v24, v21);
    }
  }
  return result;
}
