/*
 * XREFs of sub_1403AD0A8 @ 0x1403AD0A8
 * Callers:
 *     sub_14028FA14 @ 0x14028FA14 (sub_14028FA14.c)
 * Callees:
 *     sub_140227300 @ 0x140227300 (sub_140227300.c)
 *     sub_1402294F0 @ 0x1402294F0 (sub_1402294F0.c)
 *     sub_140229550 @ 0x140229550 (sub_140229550.c)
 *     sub_1402CFEB0 @ 0x1402CFEB0 (sub_1402CFEB0.c)
 *     ?_Getint@?$time_get@_WV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@AEBAHAEAV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@2@0HHAEAH@Z @ 0x1402EA644 (-_Getint@-$time_get@_WV-$istreambuf_iterator@_WU-$char_traits@_W@std@@@std@@@std@@AEBAHAEAV-$ist.c)
 *     sub_1402FDD20 @ 0x1402FDD20 (sub_1402FDD20.c)
 *     sub_140317A80 @ 0x140317A80 (sub_140317A80.c)
 *     sub_1403AD304 @ 0x1403AD304 (sub_1403AD304.c)
 */

_UNKNOWN **__fastcall sub_1403AD0A8(unsigned __int64 a1, __int64 *a2, char a3)
{
  _UNKNOWN **result; // rax
  __int64 v4; // rbx
  __int64 v7; // rdi
  unsigned __int64 v8; // rax
  __int64 *v9; // rdi
  int v10; // ebp
  unsigned __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rdx
  bool v16; // zf
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF

  result = &retaddr;
  v4 = *a2;
  if ( !*a2 )
    return result;
  if ( (unsigned int)sub_1402FDD20(a1) )
  {
    v7 = (a1 >> 18) & 0x3FFFFFF8;
    v8 = 0xFFFFF6FB40000000uLL;
  }
  else
  {
    v7 = (a1 >> 9) & 0x7FFFFFFFF8LL;
    v8 = 0xFFFFF68000000000uLL;
  }
  v9 = (__int64 *)(v8 + v7);
  _InterlockedIncrement(&dword_140C52BD4);
  v10 = 0;
  if ( sub_140317A80((unsigned __int64)v9) )
  {
    if ( (unsigned int)sub_140229550() )
    {
      v10 = 1;
      if ( HIBYTE(word_140C51864) )
        goto LABEL_5;
      v16 = (v4 & 1) == 0;
    }
    else
    {
      if ( (*(_DWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 2172LL) & 0x1000) == 0 )
        goto LABEL_5;
      v16 = (v4 & 1) == 0;
    }
    if ( !v16 )
      v4 |= 0x8000000000000000uLL;
  }
LABEL_5:
  *v9 = v4;
  if ( v10 )
    sub_1402294F0((__int64)v9, v4);
  _InterlockedDecrement(&dword_140C52BD4);
  v11 = sub_1402CFEB0(a1);
  v15 = (unsigned int)sub_140227300(v11, v12, v13, v14);
  if ( (a3 & 4) != 0 )
    return (_UNKNOWN **)sub_1403AD304(a1, v15);
  else
    return (_UNKNOWN **)std::time_get<wchar_t,std::istreambuf_iterator<wchar_t>>::_Getint(a1, v15, 2u);
}
