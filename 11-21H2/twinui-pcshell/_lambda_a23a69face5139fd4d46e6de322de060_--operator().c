/*
 * XREFs of _lambda_a23a69face5139fd4d46e6de322de060_::operator() @ 0x18054F78C
 * Callers:
 *     ??$LambdaCustomPaintProc@V_lambda_a23a69face5139fd4d46e6de322de060_@@PEAUHDC__@@@@YAXPEAUHDC__@@AEBUtagSIZE@@_J@Z @ 0x18054E6F0 (--$LambdaCustomPaintProc@V_lambda_a23a69face5139fd4d46e6de322de060_@@PEAUHDC__@@@@YAXPEAUHDC__@@.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAXP6AXUselect_result@wil@@@_E$1?close@12@SAX0@ZU?$integral_constant@_K$0A@@wistd@@U12@PEAX$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18054F470 (--1-$unique_storage@U-$resource_policy@PEAXP6AXUselect_result@wil@@@_E$1-close@12@SAX0@ZU-$integ.c)
 *     ?SelectObject@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAXP6AXUselect_result@wil@@@_E$1?close@12@SAX0@ZU?$integral_constant@_K$0A@@wistd@@U12@PEAX$0A@$$T@details@wil@@@details@wil@@@1@PEAUHDC__@@PEAX@Z @ 0x180554BF0 (-SelectObject@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAXP6AXUselect_resu.c)
 */

__int64 __fastcall lambda_a23a69face5139fd4d46e6de322de060_::operator()(__int64 a1, HDC a2, int *a3)
{
  HDC CompatibleDC; // rax
  unsigned int v7; // edi
  HDC hdcSrc; // rbx
  __int128 v10; // [rsp+50h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  CompatibleDC = CreateCompatibleDC(a2);
  v7 = 0;
  hdcSrc = CompatibleDC;
  if ( CompatibleDC )
  {
    wil::SelectObject(&v10, CompatibleDC, *(_QWORD *)(*(_QWORD *)a1 + 16LL));
    BitBlt(a2, 0, 0, *a3, a3[1], hdcSrc, 0, 0, 0xCC0020u);
    __1__unique_storage_U__resource_policy_PEAXP6AXUselect_result_wil____E_1_close_12_SAX0_ZU__integral_constant__K_0A__wistd__U12_PEAX_0A___T_details_wil___details_wil__IEAA_XZ(&v10);
    DeleteDC(hdcSrc);
  }
  else
  {
    v7 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1DB,
      (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
      (const char *)0x8007000ELL);
  }
  return v7;
}
