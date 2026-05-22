/*
 * XREFs of ?GetSystemDirPath@GameInputModule@@CAJPEBGAEAV?$unique_ptr@$$BY0A@GU?$default_delete@$$BY0A@G@std@@@std@@PEA_K@Z @ 0x18004BD60
 * Callers:
 *     ?LoadGameInput@GameInputServerProxy@@AEAAJXZ @ 0x18004B808 (-LoadGameInput@GameInputServerProxy@@AEAAJXZ.c)
 *     ?LoadModule@GameInputModule@@AEAAJW4ModuleKind@1@AEBUGameInputVersion@@@Z @ 0x18004BB94 (-LoadModule@GameInputModule@@AEAAJW4ModuleKind@1@AEBUGameInputVersion@@@Z.c)
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x180057AD8 (--_V@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180058470 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?Return_GetLastError@in1diag0@details@wil@@YAJXZ @ 0x1801263AC (-Return_GetLastError@in1diag0@details@wil@@YAJXZ.c)
 *     ?Return_Hr@in1diag0@details@wil@@YAXJ@Z @ 0x1801263D4 (-Return_Hr@in1diag0@details@wil@@YAXJ@Z.c)
 */

__int64 __fastcall GameInputModule::GetSystemDirPath(__int64 a1, void **a2)
{
  void *v3; // rcx
  UINT SystemDirectoryW; // eax
  wil::details::in1diag0 *v6; // rcx
  __int64 v7; // rbp
  unsigned __int64 v8; // rsi
  unsigned __int64 v9; // rbx
  unsigned __int64 v10; // rax
  WCHAR *v11; // rax
  int v12; // edx
  WCHAR *v13; // rdi
  unsigned int v14; // ebx
  int v16; // edx
  unsigned __int64 v17; // rbx
  unsigned __int64 i; // rbp
  unsigned __int64 v19; // rbp
  void *v20; // rcx

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
    v14 = -2147024882;
    wil::details::in1diag0::Return_Hr((wil::details::in1diag0 *)0x8007000ELL, v12);
    return v14;
  }
  v17 = GetSystemDirectoryW(v11, v9);
  if ( v17 != v7 - 1 )
  {
    if ( v17 )
    {
      v14 = -2147418113;
      wil::details::in1diag0::Return_Hr((wil::details::in1diag0 *)0x8000FFFFLL, v16);
      operator delete[](v13);
      return v14;
    }
    operator delete[](v13);
    return wil::details::in1diag0::Return_GetLastError(v6);
  }
  for ( i = 0LL; i < v17; ++i )
    v13[i] = _o_towlower(v13[i]);
  if ( a1 )
  {
    v19 = 0LL;
    for ( v13[v17++] = 92; v19 < v8; ++v17 )
      v13[v17] = _o_towlower(*(unsigned __int16 *)(a1 + 2 * v19++));
  }
  v13[v17] = 0;
  v20 = *a2;
  *a2 = v13;
  if ( v20 )
    operator delete[](v20);
  return 0LL;
}
