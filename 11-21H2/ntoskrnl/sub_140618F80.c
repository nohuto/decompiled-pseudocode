/*
 * XREFs of sub_140618F80 @ 0x140618F80
 * Callers:
 *     <none>
 * Callees:
 *     PoFxActivateComponent @ 0x140357D10 (PoFxActivateComponent.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_140604844 @ 0x140604844 (sub_140604844.c)
 *     sub_140628C98 @ 0x140628C98 (sub_140628C98.c)
 */

char __fastcall sub_140618F80(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter3, unsigned int a3)
{
  unsigned int v5; // r14d
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 *v8; // rdi
  __int64 v9; // r8
  __int64 v10; // r9
  int v11; // eax
  __int64 v12; // rax
  __int64 *i; // rbx
  char result; // al
  __int64 v15; // rdx
  _QWORD **v16; // rdi
  _QWORD *j; // rbx
  __int128 v18; // [rsp+20h] [rbp-38h] BYREF
  ULONG_PTR v19; // [rsp+30h] [rbp-28h]
  __int64 retaddr; // [rsp+58h] [rbp+0h]

  v18 = 0LL;
  v19 = 0LL;
  v5 = BugCheckParameter3;
  v8 = sub_140604844(368);
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
  *(_QWORD *)&v18 = v12;
LABEL_13:
  v19 = BugCheckParameter2;
  *((_QWORD *)&v18 + 1) = __PAIR64__(v5, a3);
  for ( i = (__int64 *)v8[4]; i != v8 + 4; i = (__int64 *)*i )
  {
    if ( i != (__int64 *)16 )
      sub_14042A5E0(&v18, v6);
  }
LABEL_18:
  result = PoFxActivateComponent(BugCheckParameter2, v5, a3);
  if ( v8 )
  {
    v16 = (_QWORD **)(v8 + 6);
    for ( j = *v16; j != v16; j = (_QWORD *)*j )
    {
      result = (_BYTE)j - 16;
      if ( j != (_QWORD *)16 )
        result = sub_14042A5E0(&v18, v15);
    }
  }
  return result;
}
