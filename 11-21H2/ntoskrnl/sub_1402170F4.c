/*
 * XREFs of sub_1402170F4 @ 0x1402170F4
 * Callers:
 *     sub_140217060 @ 0x140217060 (sub_140217060.c)
 * Callees:
 *     sub_1402294F0 @ 0x1402294F0 (sub_1402294F0.c)
 *     sub_140229550 @ 0x140229550 (sub_140229550.c)
 *     sub_1402BEDD0 @ 0x1402BEDD0 (sub_1402BEDD0.c)
 *     sub_1402CC7C0 @ 0x1402CC7C0 (sub_1402CC7C0.c)
 *     sub_140317A10 @ 0x140317A10 (sub_140317A10.c)
 *     sub_140317A80 @ 0x140317A80 (sub_140317A80.c)
 */

__int64 __fastcall sub_1402170F4(__int64 a1)
{
  __int64 v2; // rcx
  __int64 result; // rax
  unsigned int v4; // ebx
  __int64 v5; // r14
  unsigned __int64 *v6; // rsi
  __int64 v7; // rax
  __int64 v8; // rdx
  unsigned __int64 v9; // rbx
  BOOL v10; // edi
  __int64 v11; // rcx

  v2 = *(_QWORD *)(a1 + 40) & 0xFFFFFFFFFFLL;
  result = ((*(_QWORD *)(a1 + 8) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  if ( (*(_QWORD *)(48 * v2 - 0x21FFFFFFFFF8LL) | 0x8000000000000000uLL) == result )
  {
    v4 = (*(_DWORD *)(a1 + 8) >> 3) & 0x1FF;
    v5 = sub_1402CC7C0(v2, 0LL, 0x80000000LL);
    v6 = (unsigned __int64 *)(v5 + 8LL * v4);
    v7 = sub_140317A10(v6);
    if ( (v7 & 1) != 0 )
    {
      v9 = v7 & 0xFFFFFFFFFFFFFBFEuLL | 0x400;
      v10 = 0;
      if ( (unsigned int)sub_140317A80(v6) )
        v10 = sub_140229550(v11, v8) != 0;
      *v6 = v9;
      if ( v10 )
        sub_1402294F0(v6, v9);
    }
    LOBYTE(v8) = 17;
    return sub_1402BEDD0(v5, v8, 0x80000000LL);
  }
  return result;
}
