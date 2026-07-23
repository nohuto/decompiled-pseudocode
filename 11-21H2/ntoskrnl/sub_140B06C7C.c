/*
 * XREFs of sub_140B06C7C @ 0x140B06C7C
 * Callers:
 *     sub_140B071D0 @ 0x140B071D0 (sub_140B071D0.c)
 * Callees:
 *     sub_1402294F0 @ 0x1402294F0 (sub_1402294F0.c)
 *     sub_140229550 @ 0x140229550 (sub_140229550.c)
 *     sub_140317A10 @ 0x140317A10 (sub_140317A10.c)
 *     sub_140317A80 @ 0x140317A80 (sub_140317A80.c)
 *     KeFlushEntireTb @ 0x1403C39C0 (KeFlushEntireTb.c)
 *     sub_140B06E60 @ 0x140B06E60 (sub_140B06E60.c)
 *     sub_140B06F28 @ 0x140B06F28 (sub_140B06F28.c)
 */

__int64 __fastcall sub_140B06C7C(__int64 a1)
{
  __int64 v2; // rbp
  unsigned __int64 v3; // r15
  __int64 v4; // rcx
  __int64 v5; // rsi
  unsigned __int64 v6; // rax
  int v7; // edi
  __int64 *v8; // r14
  __int64 v9; // rbx
  int v10; // r12d
  int v11; // r14d
  unsigned __int64 v12; // rbx
  unsigned __int64 i; // r14
  unsigned __int64 v14; // rdx
  __int64 result; // rax
  __int64 v16; // rdx
  bool v17; // zf
  __int64 v18; // [rsp+50h] [rbp+8h]

  v2 = *(_QWORD *)(a1 + 16);
  v3 = 0xFFFFF68000000000uLL;
  v4 = qword_140C54050[0];
  v5 = qword_140C540E0;
  v18 = qword_140C54050[0];
  if ( (dword_140D06880 & 0x4000) == 0 && qword_140C540E0 == 0xFFFFF68000000000uLL )
    goto LABEL_18;
  v6 = ((unsigned __int64)qword_140C540E0 >> 39) & 0x1FF;
  v7 = 0;
  v8 = (__int64 *)(8 * v6 - 0x90482413000LL);
  if ( 8 * v6 != 3944 )
  {
    v9 = sub_140317A10(0xFFFFF6FB7DBEDF68uLL);
    v10 = 0;
    if ( !sub_140317A80((unsigned __int64)v8) )
    {
LABEL_5:
      *v8 = v9;
      if ( v10 )
        sub_1402294F0((__int64)v8, v9);
      if ( (dword_140D06880 & 0x100000) == 0 )
      {
        v11 = 0;
        if ( sub_140317A80(0xFFFFF6FB7DBEDF68uLL) && (unsigned int)sub_140229550() )
          v11 = 1;
        MEMORY[0xFFFFF6FB7DBEDF68] = 0LL;
        if ( v11 )
          sub_1402294F0(0xFFFFF6FB7DBEDF68uLL, 0LL);
      }
      KeFlushEntireTb();
      goto LABEL_12;
    }
    if ( (unsigned int)sub_140229550() )
    {
      v10 = 1;
      if ( HIBYTE(word_140C51864) )
        goto LABEL_5;
      v17 = (v9 & 1) == 0;
    }
    else
    {
      if ( (*(_DWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 2172LL) & 0x1000) == 0 )
        goto LABEL_5;
      v17 = (v9 & 1) == 0;
    }
    if ( !v17 )
      v9 |= v16;
    goto LABEL_5;
  }
LABEL_12:
  v12 = v5;
  for ( i = 39LL; ; i -= 9LL )
  {
    sub_140B06E60(*(PVOID *)(v2 + 48), *(unsigned int *)(v2 + 64));
    if ( i >= 0xC )
      sub_140B06E60(*(PVOID *)(v2 + 48), *(unsigned int *)(v2 + 64));
    if ( (unsigned int)++v7 > 4 )
      break;
    v3 = ((v3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v12 = v5 + ((v12 >> 9) & 0x7FFFFFFFF8LL);
  }
  v4 = v18;
LABEL_18:
  v14 = 0xFFFFDE0000000000uLL;
  if ( (dword_140D06880 & 0x4000) != 0 || v4 != 0xFFFFDE0000000000uLL )
    sub_140B06E60(*(PVOID *)(v2 + 48), *(unsigned int *)(v2 + 64));
  result = sub_140B06F28(a1, v14);
  qword_140D05410 = v5;
  qword_140C024F0 = v5;
  return result;
}
