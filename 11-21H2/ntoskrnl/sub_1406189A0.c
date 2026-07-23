/*
 * XREFs of sub_1406189A0 @ 0x1406189A0
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_140604844 @ 0x140604844 (sub_140604844.c)
 *     sub_140628C98 @ 0x140628C98 (sub_140628C98.c)
 */

LONG_PTR __fastcall sub_1406189A0(PVOID Object, ULONG Tag)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 *v6; // rdi
  __int64 v7; // r8
  __int64 v8; // r9
  int v9; // eax
  __int64 v10; // rax
  __int64 *i; // rbx
  LONG_PTR result; // rax
  __int64 v13; // rdx
  _QWORD **v14; // rdi
  _QWORD *v15; // rbx
  __int128 v16; // [rsp+20h] [rbp-28h] BYREF
  __int128 v17; // [rsp+30h] [rbp-18h]
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  v16 = 0LL;
  v17 = 0LL;
  v6 = sub_140604844(364);
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
  *(_QWORD *)&v17 = Object;
  DWORD2(v16) = Tag;
  for ( i = (__int64 *)v6[4]; i != v6 + 4; i = (__int64 *)*i )
  {
    if ( i != (__int64 *)16 )
      sub_14042A5E0(&v16, v4);
  }
LABEL_18:
  result = ObfDereferenceObjectWithTag(Object, Tag);
  *((_QWORD *)&v17 + 1) = result;
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
      return *((_QWORD *)&v17 + 1);
    }
  }
  return result;
}
