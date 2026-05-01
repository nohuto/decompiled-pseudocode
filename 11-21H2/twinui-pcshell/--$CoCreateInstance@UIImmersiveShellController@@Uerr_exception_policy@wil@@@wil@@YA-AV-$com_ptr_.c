/*
 * XREFs of ??$CoCreateInstance@UIImmersiveShellController@@Uerr_exception_policy@wil@@@wil@@YA?AV?$com_ptr_t@UIImmersiveShellController@@Uerr_exception_policy@wil@@@0@AEBU_GUID@@K@Z @ 0x1801425DC
 * Callers:
 *     ?CreateImmersiveShellController@CImmersiveShellBuilder@@UEAAJPEAPEAUIImmersiveShellController@@@Z @ 0x180142410 (-CreateImmersiveShellController@CImmersiveShellBuilder@@UEAAJPEAPEAUIImmersiveShellController@@@.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18012A008 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=2
LPVOID *__fastcall wil::CoCreateInstance<IImmersiveShellController,wil::err_exception_policy>(LPVOID *a1)
{
  HRESULT Instance; // eax
  int v4; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  *a1 = 0LL;
  Instance = CoCreateInstance(
               &GUID_23650f94_13b8_4f39_b2c3_817e6564a756,
               0LL,
               1u,
               &GUID_d6948331_eaf5_4365_86ac_d8d1d03b4600,
               a1);
  if ( Instance < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x17F8,
      (int)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\result_macros.h",
      (const char *)(unsigned int)Instance,
      v4);
  return a1;
}
