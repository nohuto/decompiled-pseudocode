/*
 * XREFs of sub_140581434 @ 0x140581434
 * Callers:
 *     sub_14021119C @ 0x14021119C (sub_14021119C.c)
 *     sub_14036C3B4 @ 0x14036C3B4 (sub_14036C3B4.c)
 * Callees:
 *     sub_1402294F0 @ 0x1402294F0 (sub_1402294F0.c)
 *     sub_140229550 @ 0x140229550 (sub_140229550.c)
 *     sub_1402BEDD0 @ 0x1402BEDD0 (sub_1402BEDD0.c)
 *     sub_1402CC7C0 @ 0x1402CC7C0 (sub_1402CC7C0.c)
 *     sub_140317A80 @ 0x140317A80 (sub_140317A80.c)
 *     sub_14036C4B0 @ 0x14036C4B0 (sub_14036C4B0.c)
 */

__int64 __fastcall sub_140581434(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rbx
  unsigned __int64 v4; // r14
  int v5; // esi
  __int64 *v6; // rdi
  bool v7; // zf
  unsigned __int8 v9; // [rsp+30h] [rbp+8h] BYREF

  v9 = 0;
  v2 = *(_QWORD *)(a1 + 40) >> 12;
  v3 = MEMORY[0xFFFFF6FB7DBEDF68] ^ (MEMORY[0xFFFFF6FB7DBEDF68] ^ (v2 << 12)) & 0xFFFFFFFFFF000LL;
  v4 = sub_1402CC7C0(v2, &v9, 0x80000000);
  sub_14036C4B0(a1, v4);
  v5 = 0;
  v6 = (__int64 *)(v4 + 3944);
  if ( sub_140317A80(v4 + 3944) )
  {
    if ( (unsigned int)sub_140229550() )
    {
      v5 = 1;
      if ( HIBYTE(word_140C51864) )
        goto LABEL_9;
      v7 = (v3 & 1) == 0;
    }
    else
    {
      if ( (*(_DWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 2172LL) & 0x1000) == 0 )
        goto LABEL_9;
      v7 = (v3 & 1) == 0;
    }
    if ( !v7 )
      v3 |= 0x8000000000000000uLL;
  }
LABEL_9:
  *v6 = v3;
  if ( v5 )
    sub_1402294F0((__int64)v6, v3);
  return sub_1402BEDD0(v4, v9);
}
