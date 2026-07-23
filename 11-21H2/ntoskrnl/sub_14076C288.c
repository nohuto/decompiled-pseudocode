/*
 * XREFs of sub_14076C288 @ 0x14076C288
 * Callers:
 *     sub_14076BE08 @ 0x14076BE08 (sub_14076BE08.c)
 *     sub_14076E9B8 @ 0x14076E9B8 (sub_14076E9B8.c)
 *     sub_14095975C @ 0x14095975C (sub_14095975C.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x1402A6D50 (ObfReferenceObjectWithTag.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_14078C398 @ 0x14078C398 (sub_14078C398.c)
 *     sub_14078C4EC @ 0x14078C4EC (sub_14078C4EC.c)
 */

void __fastcall sub_14076C288(__int128 *a1, _QWORD *a2)
{
  void *v2; // rbp
  __int64 v4; // rsi
  int v5; // r14d
  __int64 v6; // rax
  __int64 v7; // rbx
  __int128 v8; // xmm0
  void *v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax

  v2 = a2;
  if ( !stru_140C46280.Header.SignalState )
  {
    v4 = *(_QWORD *)(a2[39] + 40LL);
    if ( v4 )
    {
      v5 = *(unsigned __int16 *)(v4 + 40) + 80;
      v6 = sub_14078C4EC((unsigned int)*(unsigned __int16 *)(v4 + 40) + 192);
      v7 = v6;
      if ( v6 )
      {
        v8 = *a1;
        *(_DWORD *)(v6 + 148) = v5;
        v9 = (void *)(v6 + 160);
        *(_OWORD *)(v6 + 112) = v8;
        v10 = *(_QWORD *)a1 - 0x11D046F0CB3A400ALL;
        if ( *(_QWORD *)a1 == 0x11D046F0CB3A400ALL )
          v10 = *((_QWORD *)a1 + 1) - 0x3F05139760008FB0LL;
        if ( v10 )
          *(_DWORD *)(v7 + 128) = 1;
        else
          *(_DWORD *)(v7 + 128) = 4;
        memmove(v9, *(const void **)(v4 + 48), *(unsigned __int16 *)(v4 + 40));
        *(_WORD *)(v7 + 2 * ((unsigned __int64)*(unsigned __int16 *)(v4 + 40) >> 1) + 160) = 0;
        v11 = *(_QWORD *)a1 - 0x11D046F0CB3A400ALL;
        if ( *(_QWORD *)a1 == 0x11D046F0CB3A400ALL )
          v11 = *((_QWORD *)a1 + 1) - 0x3F05139760008FB0LL;
        if ( !v11 )
          goto LABEL_11;
        v12 = *(_QWORD *)a1 - 0x11D046F0CB3A4009LL;
        if ( *(_QWORD *)a1 == 0x11D046F0CB3A4009LL )
          v12 = *((_QWORD *)a1 + 1) - 0x3F05139760008FB0LL;
        if ( v12 )
          ObfReferenceObjectWithTag(v2, 0x56706E50u);
        else
LABEL_11:
          v2 = 0LL;
        *(_QWORD *)(v7 + 152) = v2;
        sub_14078C398(v7);
      }
    }
  }
}
