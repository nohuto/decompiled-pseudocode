/*
 * XREFs of ?GetSystemDirPath@GameInputModule@@CAJPEBGAEAV?$unique_ptr@$$BY0A@GU?$default_delete@$$BY0A@G@std@@@std@@PEA_K@Z @ 0x180033C3C
 * Callers:
 *     ?LoadGameInput@GameInputServerProxy@@AEAAJXZ @ 0x18003370C (-LoadGameInput@GameInputServerProxy@@AEAAJXZ.c)
 *     ?LoadModule@GameInputModule@@AEAAJW4ModuleKind@1@AEBUGameInputVersion@@@Z @ 0x180033814 (-LoadModule@GameInputModule@@AEAAJW4ModuleKind@1@AEBUGameInputVersion@@@Z.c)
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x18004AF4C (--_V@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18004B774 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?Return_GetLastError@in1diag0@details@wil@@YAJXZ @ 0x1800FC61C (-Return_GetLastError@in1diag0@details@wil@@YAJXZ.c)
 *     ?Return_Hr@in1diag0@details@wil@@YAXJ@Z @ 0x1800FC644 (-Return_Hr@in1diag0@details@wil@@YAXJ@Z.c)
 */

__int64 __fastcall GameInputModule::GetSystemDirPath(__int64 a1, void **a2)
{
  void *v3; // rcx
  UINT SystemDirectoryW; // eax
  wil::details::in1diag0 *v6; // rcx
  __int64 v7; // rbp
  unsigned __int64 v8; // rsi
  unsigned __int64 v9; // rdi
  unsigned __int64 v10; // rax
  WCHAR *v11; // rax
  int v12; // edx
  WCHAR *v13; // rbx
  int v15; // edx
  unsigned __int64 v16; // rdi
  unsigned __int64 i; // rbp
  unsigned __int64 v18; // rbp
  void *v19; // rcx

  v3 = *a2;
  *a2 = 0LL;
  if ( v3 )
    operator delete[](v3);
  SystemDirectoryW = GetSystemDirectoryW(0LL, 0);
  v7 = SystemDirectoryW;
  if ( !SystemDirectoryW )
    return wil::details::in1diag0::Return_GetLastError(v6);
  if ( a1 )
  {
    v8 = -1LL;
    do
      ++v8;
    while ( *(_WORD *)(a1 + 2 * v8) );
  }
  else
  {
    v8 = 0LL;
  }
  v9 = v8 + SystemDirectoryW + 1LL;
  if ( !a1 )
    v9 = SystemDirectoryW;
  v10 = 2 * v9;
  if ( !is_mul_ok(v9, 2uLL) )
    v10 = -1LL;
  v11 = (WCHAR *)operator new[](v10, (const struct std::nothrow_t *)&std::nothrow);
  v13 = v11;
  if ( !v11 )
  {
    wil::details::in1diag0::Return_Hr((wil::details::in1diag0 *)0x8007000ELL, v12);
    return 2147942414LL;
  }
  v16 = GetSystemDirectoryW(v11, v9);
  if ( v16 != v7 - 1 )
  {
    if ( v16 )
    {
      wil::details::in1diag0::Return_Hr((wil::details::in1diag0 *)0x8000FFFFLL, v15);
      operator delete[](v13);
      return 2147549183LL;
    }
    operator delete[](v13);
    return wil::details::in1diag0::Return_GetLastError(v6);
  }
  for ( i = 0LL; i < v16; ++i )
    v13[i] = _o_towlower(v13[i]);
  if ( a1 )
  {
    v18 = 0LL;
    for ( v13[v16++] = 92; v18 < v8; ++v16 )
      v13[v16] = _o_towlower(*(unsigned __int16 *)(a1 + 2 * v18++));
  }
  v13[v16] = 0;
  v19 = *a2;
  *a2 = v13;
  if ( v19 )
    operator delete[](v19);
  return 0LL;
}
