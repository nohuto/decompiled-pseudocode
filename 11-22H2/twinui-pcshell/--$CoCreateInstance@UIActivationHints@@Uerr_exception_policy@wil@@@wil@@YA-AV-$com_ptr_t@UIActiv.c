/*
 * XREFs of ??$CoCreateInstance@UIActivationHints@@Uerr_exception_policy@wil@@@wil@@YA?AV?$com_ptr_t@UIActivationHints@@Uerr_exception_policy@wil@@@0@AEBU_GUID@@K@Z @ 0x180097A5C
 * Callers:
 *     ?TryGetViewPropertySetFromHintsForWin32@Win32ApplicationViewHelpers@@YA?AV?$com_ptr_t@UIPropertySet@Collections@Foundation@Windows@@Uerr_returncode_policy@wil@@@wil@@PEAUIWin32ApplicationView@@_N@Z @ 0x180097748 (-TryGetViewPropertySetFromHintsForWin32@Win32ApplicationViewHelpers@@YA-AV-$com_ptr_t@UIProperty.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=2
LPVOID *__fastcall wil::CoCreateInstance<IActivationHints,wil::err_exception_policy>(LPVOID *a1)
{
  HRESULT Instance; // eax
  int v4; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  *a1 = 0LL;
  Instance = CoCreateInstance(
               &GUID_0dc1ab8b_a52d_4ba8_bd76_e2819386fb2f,
               0LL,
               1u,
               &GUID_657a8842_0b5e_40e1_b8cb_9aafacc33aab,
               a1);
  if ( Instance < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x1815,
      (unsigned int)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\result_macros.h",
      (const char *)(unsigned int)Instance,
      v4);
  return a1;
}
