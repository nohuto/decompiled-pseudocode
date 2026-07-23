/*
 * XREFs of sub_14023EE78 @ 0x14023EE78
 * Callers:
 *     sub_14031E200 @ 0x14031E200 (sub_14031E200.c)
 * Callees:
 *     sub_1402294F0 @ 0x1402294F0 (sub_1402294F0.c)
 *     sub_140229550 @ 0x140229550 (sub_140229550.c)
 *     sub_140230B44 @ 0x140230B44 (sub_140230B44.c)
 *     sub_140315D60 @ 0x140315D60 (sub_140315D60.c)
 *     sub_140317A10 @ 0x140317A10 (sub_140317A10.c)
 *     sub_140317A80 @ 0x140317A80 (sub_140317A80.c)
 */

__int64 __fastcall sub_14023EE78(
        unsigned __int64 *BugCheckParameter2,
        __int64 a2,
        char a3,
        int a4,
        __int64 a5,
        char a6)
{
  __int64 v9; // rax
  __int64 v10; // rdi
  char v11; // bl
  unsigned __int64 v13; // rax
  __int64 v14; // rbp
  unsigned __int64 v15; // rbx
  int v16; // edi
  unsigned __int64 v17; // rbx
  int v18; // edi

  if ( a3 == 1
    && ((unsigned __int64)BugCheckParameter2 > 0xFFFFF6BFFFFFFF78uLL
     || (unsigned __int64)BugCheckParameter2 < 0xFFFFF68000000000uLL) )
  {
    return 3221225477LL;
  }
  v9 = sub_140317A10(BugCheckParameter2);
  v10 = v9;
  if ( (v9 & 1) != 0 )
  {
    if ( a2 && (v9 & 0xA00) == 0 )
      return 3221225477LL;
    return 0LL;
  }
  v11 = a4;
  if ( *((char *)qword_1400161F0 + (a4 & 7)) - (a2 != 0) < 10 )
    return 3221225477LL;
  if ( (a4 & 0xFFFFFFF8) != 0x10 || (a5 & 1) != 0 && *(_BYTE *)(a5 & 0xFFFFFFFFFFFFFFFEuLL) == 1 )
    return 0LL;
  if ( !sub_140230B44(a5) )
    return 3221225477LL;
  if ( (v10 & 0xC00) != 0x800 )
  {
    v17 = v10 & 0xFFFFFFFFFFFFFC1FuLL | (32LL * (a4 & 0xF));
    v18 = 0;
    if ( !(unsigned int)sub_140317A80(BugCheckParameter2) )
      goto LABEL_44;
    if ( (unsigned int)sub_140229550() )
    {
      v18 = 1;
      if ( HIBYTE(word_140C51864) )
      {
LABEL_44:
        *BugCheckParameter2 = v17;
        if ( v18 )
          sub_1402294F0((__int64)BugCheckParameter2, v17);
        return 2147483649LL;
      }
    }
    else if ( (*(_DWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 2172LL) & 0x1000) == 0 )
    {
      goto LABEL_44;
    }
    if ( (v17 & 1) != 0 )
      v17 |= 0x8000000000000000uLL;
    goto LABEL_44;
  }
  if ( a6 )
  {
    v13 = v10;
    if ( qword_140C50780 )
    {
      if ( (v10 & 0x10) != 0 )
        v13 = v10 & 0xFFFFFFFFFFFFFFEFuLL;
      else
        v13 = v10 & ~qword_140C50780;
    }
    v14 = 48 * ((v13 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
  }
  else
  {
    v14 = sub_140315D60((ULONG_PTR)BugCheckParameter2);
    v10 = sub_140317A10(BugCheckParameter2);
    if ( v14 )
      *(_QWORD *)(v14 + 16) = *(_QWORD *)(v14 + 16) & 0xFFFFFFFFFFFFFC1FuLL | (32LL * (v11 & 0xF));
  }
  v15 = v10 & 0xFFFFFFFFFFFFFC1FuLL | (32LL * (v11 & 0xF));
  v16 = 0;
  if ( !(unsigned int)sub_140317A80(BugCheckParameter2) )
    goto LABEL_32;
  if ( (unsigned int)sub_140229550() )
  {
    v16 = 1;
    if ( HIBYTE(word_140C51864) )
      goto LABEL_32;
LABEL_30:
    if ( (v15 & 1) != 0 )
      v15 |= 0x8000000000000000uLL;
    goto LABEL_32;
  }
  if ( (*(_DWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 2172LL) & 0x1000) != 0 )
    goto LABEL_30;
LABEL_32:
  *BugCheckParameter2 = v15;
  if ( v16 )
    sub_1402294F0((__int64)BugCheckParameter2, v15);
  if ( !a6 )
  {
    if ( v14 )
      _InterlockedAnd64((volatile signed __int64 *)(v14 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
  return 2147483649LL;
}
