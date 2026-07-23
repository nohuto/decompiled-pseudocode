/*
 * XREFs of sub_1406132D0 @ 0x1406132D0
 * Callers:
 *     <none>
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_140604844 @ 0x140604844 (sub_140604844.c)
 *     sub_140628C98 @ 0x140628C98 (sub_140628C98.c)
 */

__int64 __fastcall sub_1406132D0(__int64 a1, unsigned int a2, unsigned int a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 *v8; // rsi
  __int64 v9; // r8
  __int64 v10; // r9
  int v11; // eax
  __int64 v12; // rax
  __int64 *i; // rbx
  __int64 result; // rax
  __int64 *j; // rbx
  __int128 v16; // [rsp+20h] [rbp-38h] BYREF
  __int64 v17; // [rsp+30h] [rbp-28h]
  __int64 retaddr; // [rsp+58h] [rbp+0h]

  v16 = 0LL;
  v17 = 0LL;
  v8 = sub_140604844(255);
  if ( !v8 )
    goto LABEL_18;
  if ( dword_140C1B2A0
    && ((qword_140D01450 & 0xFFA9F6E6) != 0 || (v7 = HIDWORD(qword_140D01450), (qword_140D01450 & 0x200000000LL) != 0))
    || (qword_140D01450 & 0x800000000LL) == 0 )
  {
    if ( (*((_DWORD *)v8 + 3) & 0x20) != 0 )
      goto LABEL_13;
    goto LABEL_11;
  }
  v11 = *((_DWORD *)v8 + 3);
  if ( (v11 & 0x18) == 0 )
  {
    if ( (v11 & 4) == 0 )
      goto LABEL_13;
LABEL_11:
    v12 = sub_140628C98(v7, v6, v9, v10);
    goto LABEL_12;
  }
  v12 = retaddr;
LABEL_12:
  *(_QWORD *)&v16 = v12;
LABEL_13:
  v17 = a1;
  *((_QWORD *)&v16 + 1) = __PAIR64__(a2, a3);
  for ( i = (__int64 *)v8[4]; i != v8 + 4; i = (__int64 *)*i )
  {
    if ( i != (__int64 *)16 )
      sub_14042A5E0(&v16, v6);
  }
LABEL_18:
  *(_BYTE *)a1 = 5;
  result = a1 + 8;
  *(_QWORD *)(a1 + 16) = a1 + 8;
  *(_QWORD *)(a1 + 8) = a1 + 8;
  *(_BYTE *)(a1 + 2) = 8;
  *(_DWORD *)(a1 + 4) = a2;
  *(_DWORD *)(a1 + 24) = a3;
  if ( v8 )
  {
    for ( j = (__int64 *)v8[6]; j != v8 + 6; j = (__int64 *)*j )
    {
      result = (__int64)(j - 2);
      if ( j != (__int64 *)16 )
        result = sub_14042A5E0(&v16, v6);
    }
  }
  return result;
}
