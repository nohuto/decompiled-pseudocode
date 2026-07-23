/*
 * XREFs of sub_1406148B0 @ 0x1406148B0
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseMutant @ 0x1402F91E0 (KeReleaseMutant.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_140604844 @ 0x140604844 (sub_140604844.c)
 *     sub_140628C98 @ 0x140628C98 (sub_140628C98.c)
 */

LONG __fastcall sub_1406148B0(PRKMUTANT Mutant, KPRIORITY Increment, BOOLEAN Abandoned, BOOLEAN Wait)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 *v10; // rdi
  __int64 v11; // r8
  __int64 v12; // r9
  int v13; // eax
  __int64 v14; // rax
  __int64 *i; // rbx
  LONG result; // eax
  __int64 v17; // rdx
  _QWORD **v18; // rdi
  _QWORD *v19; // rbx
  __int128 v20; // [rsp+20h] [rbp-20h] BYREF
  __int128 v21; // [rsp+30h] [rbp-10h]
  __int64 retaddr; // [rsp+68h] [rbp+28h]

  v20 = 0LL;
  v21 = 0LL;
  v10 = sub_140604844(282);
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
  *(_QWORD *)&v21 = Mutant;
  HIDWORD(v20) = Increment;
  BYTE9(v20) = Abandoned;
  BYTE8(v20) = Wait;
  for ( i = (__int64 *)v10[4]; i != v10 + 4; i = (__int64 *)*i )
  {
    if ( i != (__int64 *)16 )
      sub_14042A5E0(&v20, v8);
  }
LABEL_18:
  result = KeReleaseMutant(Mutant, Increment, Abandoned, Wait);
  DWORD2(v21) = result;
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
      return DWORD2(v21);
    }
  }
  return result;
}
