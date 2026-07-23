/*
 * XREFs of sub_1405A7464 @ 0x1405A7464
 * Callers:
 *     sub_140353230 @ 0x140353230 (sub_140353230.c)
 * Callees:
 *     sub_1402294F0 @ 0x1402294F0 (sub_1402294F0.c)
 *     sub_140229550 @ 0x140229550 (sub_140229550.c)
 *     sub_140273AF0 @ 0x140273AF0 (sub_140273AF0.c)
 *     sub_140282AD0 @ 0x140282AD0 (sub_140282AD0.c)
 *     sub_1402CBD10 @ 0x1402CBD10 (sub_1402CBD10.c)
 *     sub_140317A10 @ 0x140317A10 (sub_140317A10.c)
 *     sub_140317A80 @ 0x140317A80 (sub_140317A80.c)
 *     sub_140334790 @ 0x140334790 (sub_140334790.c)
 */

__int64 __fastcall sub_1405A7464(unsigned __int64 a1, unsigned __int64 a2, int a3, unsigned __int64 *a4, int a5)
{
  __int64 v9; // rsi
  __int64 v10; // rbp
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  unsigned __int64 v15; // rdx
  __int64 v16; // rax
  unsigned __int64 v17; // rdi
  int v18; // ebp
  unsigned __int64 v19; // rbx
  unsigned __int64 v21[5]; // [rsp+20h] [rbp-28h] BYREF

  v9 = *((_QWORD *)KeGetCurrentThread() + 23);
  v10 = sub_140273AF0(a2, 0LL);
  if ( !v10 )
    return 0LL;
  v11 = sub_140317A10(a2);
  LOBYTE(v12) = 17;
  v21[0] = v11;
  sub_140334790(v10, v12, v13, v14);
  v15 = (unsigned __int64)sub_140317A10((unsigned __int64)v21) >> 12;
  v16 = 0xFFFFFC0000LL;
  if ( a3 != 2 )
    v16 = 0xFFFFFFFE00LL;
  v21[0] = sub_1402CBD10(((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, v16 & v15, a5 | 0x84000000);
  v17 = v21[0];
  if ( a3 != 1 && _InterlockedCompareExchange((volatile signed __int32 *)sub_140282AD0(v9 + 1664), 0x80000000, 1) != 1 )
    return 0LL;
  v18 = 0;
  v19 = v17;
  if ( sub_140317A80((unsigned __int64)a4) )
  {
    if ( (unsigned int)sub_140229550() )
    {
      v18 = 1;
      if ( !HIBYTE(word_140C51864) )
      {
LABEL_11:
        if ( (v17 & 1) != 0 )
          v19 = v17 | 0x8000000000000000uLL;
      }
    }
    else if ( (*(_DWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 2172LL) & 0x1000) != 0 )
    {
      goto LABEL_11;
    }
  }
  *a4 = v19;
  if ( v18 )
    sub_1402294F0((__int64)a4, v19);
  if ( a3 != 1 )
    *(_DWORD *)sub_140282AD0(v9 + 1664) = 1;
  return 1LL;
}
