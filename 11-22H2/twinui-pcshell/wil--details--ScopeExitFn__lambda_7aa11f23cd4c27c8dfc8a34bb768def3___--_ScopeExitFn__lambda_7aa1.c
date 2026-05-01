/*
 * XREFs of wil::details::ScopeExitFn__lambda_7aa11f23cd4c27c8dfc8a34bb768def3___::_ScopeExitFn__lambda_7aa11f23cd4c27c8dfc8a34bb768def3___ @ 0x180285AA4
 * Callers:
 *     ?OnViewCreatedBase@CSingleViewShellExperience@@AEAAJ$$QEAV?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@@Z @ 0x18010D4F4 (-OnViewCreatedBase@CSingleViewShellExperience@@AEAAJ$$QEAV-$ComPtr@UIViewWrapper@ViewManagerInte.c)
 *     _CSingleViewShellExperience::OnViewCreatedBase_::_1_::dtor$1 @ 0x1802BD6AA (_CSingleViewShellExperience--OnViewCreatedBase_--_1_--dtor$1.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?DestroyView@CSingleViewShellExperience@@QEAAJXZ @ 0x180747360 (-DestroyView@CSingleViewShellExperience@@QEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall wil::details::ScopeExitFn__lambda_7aa11f23cd4c27c8dfc8a34bb768def3___::_ScopeExitFn__lambda_7aa11f23cd4c27c8dfc8a34bb768def3___(
        __int64 a1)
{
  int v1; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( *(_BYTE *)(a1 + 8) )
  {
    *(_BYTE *)(a1 + 8) = 0;
    v1 = CSingleViewShellExperience::DestroyView(*(CSingleViewShellExperience **)a1);
    if ( v1 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x1A7,
        (int)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
        (const char *)(unsigned int)v1);
  }
}
