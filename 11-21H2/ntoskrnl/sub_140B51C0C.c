/*
 * XREFs of sub_140B51C0C @ 0x140B51C0C
 * Callers:
 *     sub_14027C784 @ 0x14027C784 (sub_14027C784.c)
 * Callees:
 *     sub_1402294F0 @ 0x1402294F0 (sub_1402294F0.c)
 *     sub_140229550 @ 0x140229550 (sub_140229550.c)
 *     sub_1402CBD10 @ 0x1402CBD10 (sub_1402CBD10.c)
 *     ?_Getint@?$time_get@_WV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@AEBAHAEAV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@2@0HHAEAH@Z @ 0x1402EA644 (-_Getint@-$time_get@_WV-$istreambuf_iterator@_WU-$char_traits@_W@std@@@std@@@std@@AEBAHAEAV-$ist.c)
 *     sub_140317A80 @ 0x140317A80 (sub_140317A80.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_140424FF0 @ 0x140424FF0 (sub_140424FF0.c)
 *     sub_140AF4308 @ 0x140AF4308 (sub_140AF4308.c)
 */

__int64 __fastcall sub_140B51C0C(ULONG_PTR BugCheckParameter2, __int64 a2)
{
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // rsi
  _QWORD *v6; // rdi
  unsigned __int64 v7; // rbx
  int v8; // ebp
  BOOL v9; // r15d
  __int64 v10; // rdx
  bool v11; // zf
  __int64 v12; // rdx
  int v13; // r8d
  bool v14; // zf

  v4 = sub_140AF4308();
  v5 = v4;
  if ( !v4 )
    KeBugCheckEx(0x1Au, 0x3030305uLL, BugCheckParameter2, 0LL, 0LL);
  v6 = (_QWORD *)(((v4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v7 = sub_1402CBD10((unsigned __int64)v6, BugCheckParameter2, -1610612732);
  v8 = 0;
  v9 = sub_140317A80((unsigned __int64)v6);
  if ( v9 )
  {
    if ( (unsigned int)sub_140229550() )
    {
      v8 = 1;
      if ( HIBYTE(word_140C51864) )
        goto LABEL_11;
      v11 = (v7 & 1) == 0;
    }
    else
    {
      if ( (*(_DWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 2172LL) & 0x1000) == 0 )
        goto LABEL_11;
      v11 = (v7 & 1) == 0;
    }
    if ( !v11 )
      v7 |= v10;
  }
LABEL_11:
  *v6 = v7;
  if ( v8 )
    sub_1402294F0((__int64)v6, v7);
  sub_140424FF0(v5, a2);
  v12 = 0LL;
  v13 = 0;
  if ( v9 )
  {
    if ( (unsigned int)sub_140229550() )
    {
      v13 = 1;
      if ( HIBYTE(word_140C51864) )
        goto LABEL_21;
      v14 = (v12 & 1) == 0;
    }
    else
    {
      if ( (*(_DWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 2172LL) & 0x1000) == 0 )
        goto LABEL_21;
      v14 = (v12 & 1) == 0;
    }
    if ( !v14 )
      v12 |= 0x8000000000000000uLL;
  }
LABEL_21:
  *v6 = v12;
  if ( v13 )
    sub_1402294F0((__int64)v6, v12);
  return std::time_get<wchar_t,std::istreambuf_iterator<wchar_t>>::_Getint(v5, 0, 1u);
}
