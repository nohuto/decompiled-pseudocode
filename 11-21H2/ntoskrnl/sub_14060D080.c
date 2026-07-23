/*
 * XREFs of sub_14060D080 @ 0x14060D080
 * Callers:
 *     <none>
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_140604844 @ 0x140604844 (sub_140604844.c)
 *     sub_140628C98 @ 0x140628C98 (sub_140628C98.c)
 */

__int64 __fastcall sub_14060D080(unsigned int a1, __int64 a2, __int64 a3, int a4, __int64 a5, __int64 a6, __int64 a7)
{
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 *v13; // rdi
  __int64 v14; // r8
  __int64 v15; // r9
  int v16; // eax
  __int64 v17; // rax
  __int64 *i; // rbx
  __int64 result; // rax
  __int64 v20; // rdx
  _QWORD **v21; // rdi
  _QWORD *v22; // rbx
  _QWORD v23[10]; // [rsp+48h] [rbp-39h] BYREF
  __int64 retaddr; // [rsp+C0h] [rbp+3Fh]

  memset(v23, 0, 0x48uLL);
  v13 = sub_140604844(138);
  if ( !v13 )
    goto LABEL_18;
  if ( dword_140C1B2A0 && ((qword_140D01450 & 0xFFA9F6E6) != 0 || (qword_140D01450 & 0x200000000LL) != 0)
    || (qword_140D01450 & 0x800000000LL) == 0 )
  {
    if ( (*((_DWORD *)v13 + 3) & 0x20) != 0 )
      goto LABEL_13;
    goto LABEL_11;
  }
  v16 = *((_DWORD *)v13 + 3);
  if ( (v16 & 0x18) == 0 )
  {
    if ( (v16 & 4) == 0 )
      goto LABEL_13;
LABEL_11:
    v17 = sub_140628C98(v12, v11, v14, v15);
    goto LABEL_12;
  }
  v17 = retaddr;
LABEL_12:
  v23[0] = v17;
LABEL_13:
  v23[3] = a5;
  v23[2] = a6;
  v23[1] = a7;
  LODWORD(v23[7]) = a1;
  v23[6] = a2;
  v23[5] = a3;
  LODWORD(v23[4]) = a4;
  for ( i = (__int64 *)v13[4]; i != v13 + 4; i = (__int64 *)*i )
  {
    if ( i != (__int64 *)16 )
      sub_14042A5E0(v23, v11);
  }
LABEL_18:
  result = sub_14042A5E0(a1, a2);
  v23[8] = result;
  if ( v13 )
  {
    v21 = (_QWORD **)(v13 + 6);
    v22 = *v21;
    if ( *v21 != v21 )
    {
      do
      {
        if ( v22 != (_QWORD *)16 )
          sub_14042A5E0(v23, v20);
        v22 = (_QWORD *)*v22;
      }
      while ( v22 != v21 );
      return v23[8];
    }
  }
  return result;
}
