/*
 * XREFs of sub_140618D20 @ 0x140618D20
 * Callers:
 *     <none>
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x1402A6D50 (ObfReferenceObjectWithTag.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_140604844 @ 0x140604844 (sub_140604844.c)
 *     sub_140628C98 @ 0x140628C98 (sub_140628C98.c)
 */

LONG_PTR __fastcall sub_140618D20(PVOID Object)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 *v4; // rdi
  __int64 v5; // r8
  __int64 v6; // r9
  int v7; // eax
  __int64 v8; // rax
  __int64 *i; // rbx
  LONG_PTR result; // rax
  __int64 v11; // rdx
  _QWORD **v12; // rdi
  _QWORD *v13; // rbx
  __int128 v14; // [rsp+20h] [rbp-28h] BYREF
  LONG_PTR v15; // [rsp+30h] [rbp-18h]
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  v14 = 0LL;
  v15 = 0LL;
  v4 = sub_140604844(365);
  if ( !v4 )
    goto LABEL_18;
  if ( dword_140C1B2A0
    && ((qword_140D01450 & 0xFFA9F6E6) != 0 || (v3 = HIDWORD(qword_140D01450), (qword_140D01450 & 0x200000000LL) != 0))
    || (qword_140D01450 & 0x800000000LL) == 0 )
  {
    if ( (*((_DWORD *)v4 + 3) & 0x20) != 0 )
      goto LABEL_13;
    goto LABEL_11;
  }
  v7 = *((_DWORD *)v4 + 3);
  if ( (v7 & 0x18) == 0 )
  {
    if ( (v7 & 4) == 0 )
      goto LABEL_13;
LABEL_11:
    v8 = sub_140628C98(v3, v2, v5, v6);
    goto LABEL_12;
  }
  v8 = retaddr;
LABEL_12:
  *(_QWORD *)&v14 = v8;
LABEL_13:
  *((_QWORD *)&v14 + 1) = Object;
  for ( i = (__int64 *)v4[4]; i != v4 + 4; i = (__int64 *)*i )
  {
    if ( i != (__int64 *)16 )
      sub_14042A5E0(&v14, v2);
  }
LABEL_18:
  result = ObfReferenceObjectWithTag(Object, 0x746C6644u);
  v15 = result;
  if ( v4 )
  {
    v12 = (_QWORD **)(v4 + 6);
    v13 = *v12;
    if ( *v12 != v12 )
    {
      do
      {
        if ( v13 != (_QWORD *)16 )
          sub_14042A5E0(&v14, v11);
        v13 = (_QWORD *)*v13;
      }
      while ( v13 != v12 );
      return v15;
    }
  }
  return result;
}
