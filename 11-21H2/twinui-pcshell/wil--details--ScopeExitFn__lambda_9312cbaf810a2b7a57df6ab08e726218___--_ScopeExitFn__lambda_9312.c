/*
 * XREFs of wil::details::ScopeExitFn__lambda_9312cbaf810a2b7a57df6ab08e726218___::_ScopeExitFn__lambda_9312cbaf810a2b7a57df6ab08e726218___ @ 0x1805F0EF4
 * Callers:
 *     _CSingleViewShellExperience::OnViewCreatedBase_::_1_::dtor$1 @ 0x18021A31D (_CSingleViewShellExperience--OnViewCreatedBase_--_1_--dtor$1.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?DestroyView@CSingleViewShellExperience@@QEAAJXZ @ 0x1805F1334 (-DestroyView@CSingleViewShellExperience@@QEAAJXZ.c)
 */

void __fastcall wil::details::ScopeExitFn__lambda_9312cbaf810a2b7a57df6ab08e726218___::_ScopeExitFn__lambda_9312cbaf810a2b7a57df6ab08e726218___(
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
        (void *)0x1AB,
        (__int64)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
        (const char *)(unsigned int)v1);
  }
}
