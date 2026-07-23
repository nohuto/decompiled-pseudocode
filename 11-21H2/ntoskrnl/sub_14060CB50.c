/*
 * XREFs of sub_14060CB50 @ 0x14060CB50
 * Callers:
 *     <none>
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_140604844 @ 0x140604844 (sub_140604844.c)
 *     sub_140628C98 @ 0x140628C98 (sub_140628C98.c)
 */

__int64 __fastcall sub_14060CB50(__int64 a1, char a2, char a3, __int64 a4)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 *v10; // rdi
  __int64 v11; // r8
  __int64 v12; // r9
  int v13; // eax
  __int64 v14; // rax
  __int64 *i; // rbx
  __int64 result; // rax
  __int64 v17; // rdx
  _QWORD **v18; // rdi
  _QWORD *v19; // rbx
  __int128 v20; // [rsp+30h] [rbp-30h] BYREF
  __int128 v21; // [rsp+40h] [rbp-20h]
  __int64 v22; // [rsp+50h] [rbp-10h]
  __int64 retaddr; // [rsp+88h] [rbp+28h]

  v22 = 0LL;
  v20 = 0LL;
  v21 = 0LL;
  v10 = sub_140604844(132);
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
  *(_QWORD *)&v20 = v14;
LABEL_13:
  *((_QWORD *)&v21 + 1) = a1;
  BYTE1(v21) = a2;
  LOBYTE(v21) = a3;
  *((_QWORD *)&v20 + 1) = a4;
  for ( i = (__int64 *)v10[4]; i != v10 + 4; i = (__int64 *)*i )
  {
    if ( i != (__int64 *)16 )
      sub_14042A5E0(&v20, v8);
  }
LABEL_18:
  LOBYTE(v8) = a2;
  result = sub_14042A5E0(a1, v8);
  v22 = result;
  if ( v10 )
  {
    v18 = (_QWORD **)(v10 + 6);
    v19 = *v18;
    if ( *v18 != v18 )
    {
      do
      {
        if ( v19 != (_QWORD *)16 )
          sub_14042A5E0(&v20, v17);
        v19 = (_QWORD *)*v19;
      }
      while ( v19 != v18 );
      return v22;
    }
  }
  return result;
}
