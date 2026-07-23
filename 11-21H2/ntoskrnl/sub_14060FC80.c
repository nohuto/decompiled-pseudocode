/*
 * XREFs of sub_14060FC80 @ 0x14060FC80
 * Callers:
 *     <none>
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_140604844 @ 0x140604844 (sub_140604844.c)
 *     sub_140628C98 @ 0x140628C98 (sub_140628C98.c)
 *     IoIsWdmVersionAvailable @ 0x140662010 (IoIsWdmVersionAvailable.c)
 */

BOOLEAN __fastcall sub_14060FC80(UCHAR a1, UCHAR a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 *v6; // rdi
  __int64 v7; // r8
  __int64 v8; // r9
  int v9; // eax
  __int64 v10; // rax
  __int64 *i; // rbx
  BOOLEAN result; // al
  __int64 v13; // rdx
  _QWORD **v14; // rdi
  _QWORD *v15; // rbx
  __int128 v16; // [rsp+20h] [rbp-18h] BYREF
  __int64 retaddr; // [rsp+38h] [rbp+0h]

  v16 = 0LL;
  v6 = sub_140604844(182);
  if ( !v6 )
    goto LABEL_18;
  if ( dword_140C1B2A0
    && ((qword_140D01450 & 0xFFA9F6E6) != 0 || (v5 = HIDWORD(qword_140D01450), (qword_140D01450 & 0x200000000LL) != 0))
    || (qword_140D01450 & 0x800000000LL) == 0 )
  {
    if ( (*((_DWORD *)v6 + 3) & 0x20) != 0 )
      goto LABEL_13;
    goto LABEL_11;
  }
  v9 = *((_DWORD *)v6 + 3);
  if ( (v9 & 0x18) == 0 )
  {
    if ( (v9 & 4) == 0 )
      goto LABEL_13;
LABEL_11:
    v10 = sub_140628C98(v5, v4, v7, v8);
    goto LABEL_12;
  }
  v10 = retaddr;
LABEL_12:
  *(_QWORD *)&v16 = v10;
LABEL_13:
  BYTE9(v16) = a1;
  BYTE8(v16) = a2;
  for ( i = (__int64 *)v6[4]; i != v6 + 4; i = (__int64 *)*i )
  {
    if ( i != (__int64 *)16 )
      sub_14042A5E0(&v16, v4);
  }
LABEL_18:
  result = IoIsWdmVersionAvailable(a1, a2);
  BYTE10(v16) = result;
  if ( v6 )
  {
    v14 = (_QWORD **)(v6 + 6);
    v15 = *v14;
    if ( *v14 != v14 )
    {
      do
      {
        if ( v15 != (_QWORD *)16 )
          sub_14042A5E0(&v16, v13);
        v15 = (_QWORD *)*v15;
      }
      while ( v15 != v14 );
      return BYTE10(v16);
    }
  }
  return result;
}
