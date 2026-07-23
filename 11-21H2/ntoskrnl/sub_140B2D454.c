/*
 * XREFs of sub_140B2D454 @ 0x140B2D454
 * Callers:
 *     sub_140AF47DC @ 0x140AF47DC (sub_140AF47DC.c)
 * Callees:
 *     sub_1402225D0 @ 0x1402225D0 (sub_1402225D0.c)
 *     sub_1402294F0 @ 0x1402294F0 (sub_1402294F0.c)
 *     sub_140229550 @ 0x140229550 (sub_140229550.c)
 *     sub_1402CBD10 @ 0x1402CBD10 (sub_1402CBD10.c)
 *     sub_1403095B0 @ 0x1403095B0 (sub_1403095B0.c)
 *     sub_140317A80 @ 0x140317A80 (sub_140317A80.c)
 */

ULONG_PTR sub_140B2D454()
{
  ULONG_PTR result; // rax
  unsigned __int64 v1; // rsi
  unsigned __int64 v2; // rdi
  unsigned __int64 v3; // rbx
  int v4; // r14d
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rsi
  __int64 v7; // rbx
  int v8; // edi
  bool v9; // zf
  bool v10; // zf

  result = sub_1403095B0((__int64)&qword_140C534C0, 2u);
  v1 = result;
  if ( !result )
    return result;
  v2 = sub_1402CBD10(result, qword_140C53290, 536870913);
  v3 = v2;
  v4 = 0;
  if ( sub_140317A80(v1) )
  {
    if ( (unsigned int)sub_140229550() )
    {
      v4 = 1;
      if ( HIBYTE(word_140C51864) )
        goto LABEL_3;
      v9 = (v2 & 1) == 0;
    }
    else
    {
      if ( (*(_DWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 2172LL) & 0x1000) == 0 )
        goto LABEL_3;
      v9 = (v2 & 1) == 0;
    }
    if ( !v9 )
      v3 = v2 | 0x8000000000000000uLL;
  }
LABEL_3:
  *(_QWORD *)v1 = v3;
  if ( v4 )
    sub_1402294F0(v1, v3);
  qword_140C53298 = (__int64)(v1 << 25) >> 16;
  v5 = sub_1402225D0((__int64)(v1 << 25) >> 16);
  v6 = v1 + 8;
  qword_140C532A8 = v5;
  v7 = v2 ^ (v2 ^ (qword_140C53278 << 12)) & 0xFFFFFFFFFF000LL;
  v8 = 0;
  if ( !sub_140317A80(v6) )
    goto LABEL_6;
  if ( (unsigned int)sub_140229550() )
  {
    v8 = 1;
    if ( !HIBYTE(word_140C51864) )
    {
      v10 = (v7 & 1) == 0;
      goto LABEL_22;
    }
  }
  else if ( (*(_DWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 2172LL) & 0x1000) != 0 )
  {
    v10 = (v7 & 1) == 0;
LABEL_22:
    if ( !v10 )
      v7 |= 0x8000000000000000uLL;
  }
LABEL_6:
  *(_QWORD *)v6 = v7;
  if ( v8 )
    sub_1402294F0(v6, v7);
  qword_140C532A0 = (PVOID)((__int64)(v6 << 25) >> 16);
  qword_140C532B0 = sub_1402225D0((__int64)qword_140C532A0);
  return 1LL;
}
