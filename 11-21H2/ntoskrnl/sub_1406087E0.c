/*
 * XREFs of sub_1406087E0 @ 0x1406087E0
 * Callers:
 *     <none>
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_140604844 @ 0x140604844 (sub_140604844.c)
 *     sub_140628C98 @ 0x140628C98 (sub_140628C98.c)
 */

__int64 __fastcall sub_1406087E0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        unsigned int a5,
        __int64 a6,
        int a7,
        __int16 a8,
        int a9)
{
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 *v15; // rdi
  __int64 v16; // r8
  __int64 v17; // r9
  int v18; // eax
  __int64 v19; // rax
  __int64 *i; // rbx
  __int64 result; // rax
  __int64 v22; // rdx
  _QWORD **v23; // rdi
  _QWORD *v24; // rbx
  _QWORD v25[10]; // [rsp+58h] [rbp-49h] BYREF
  __int64 retaddr; // [rsp+D0h] [rbp+2Fh]

  memset(v25, 0, 0x48uLL);
  v15 = sub_140604844(43);
  if ( !v15 )
    goto LABEL_18;
  if ( dword_140C1B2A0 && ((qword_140D01450 & 0xFFA9F6E6) != 0 || (qword_140D01450 & 0x200000000LL) != 0)
    || (qword_140D01450 & 0x800000000LL) == 0 )
  {
    if ( (*((_DWORD *)v15 + 3) & 0x20) != 0 )
      goto LABEL_13;
    goto LABEL_11;
  }
  v18 = *((_DWORD *)v15 + 3);
  if ( (v18 & 0x18) == 0 )
  {
    if ( (v18 & 4) == 0 )
      goto LABEL_13;
LABEL_11:
    v19 = sub_140628C98(v14, v13, v16, v17);
    goto LABEL_12;
  }
  v19 = retaddr;
LABEL_12:
  v25[0] = v19;
LABEL_13:
  v25[4] = __PAIR64__(a4, a5);
  v25[3] = a6;
  LODWORD(v25[2]) = a7;
  WORD2(v25[1]) = a8;
  LODWORD(v25[1]) = a9;
  v25[7] = a1;
  v25[6] = a2;
  v25[5] = a3;
  for ( i = (__int64 *)v15[4]; i != v15 + 4; i = (__int64 *)*i )
  {
    if ( i != (__int64 *)16 )
      sub_14042A5E0(v25, v13);
  }
LABEL_18:
  result = sub_14042A5E0(a1, a2);
  LODWORD(v25[8]) = result;
  if ( v15 )
  {
    v23 = (_QWORD **)(v15 + 6);
    v24 = *v23;
    if ( *v23 != v23 )
    {
      do
      {
        if ( v24 != (_QWORD *)16 )
          sub_14042A5E0(v25, v22);
        v24 = (_QWORD *)*v24;
      }
      while ( v24 != v23 );
      return LODWORD(v25[8]);
    }
  }
  return result;
}
