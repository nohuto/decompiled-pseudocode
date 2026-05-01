/*
 * XREFs of ??$CoCreateInstance@UIImmersiveComponentCreator@@Uerr_exception_policy@wil@@@wil@@YA?AV?$com_ptr_t@UIImmersiveComponentCreator@@Uerr_exception_policy@wil@@@0@AEBU_GUID@@K@Z @ 0x18014294C
 * Callers:
 *     ??0ComponentCreator@@QEAA@XZ @ 0x180142848 (--0ComponentCreator@@QEAA@XZ.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18012A008 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=2
LPVOID *__fastcall wil::CoCreateInstance<IImmersiveComponentCreator,wil::err_exception_policy>(LPVOID *a1, IID *rclsid)
{
  HRESULT Instance; // eax
  int ppv; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  *a1 = 0LL;
  Instance = CoCreateInstance(rclsid, 0LL, 1u, &GUID_329e4902_ae76_4a2c_a557_e9c4aa2ab9d8, a1);
  if ( Instance < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x17F8,
      (int)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\result_macros.h",
      (const char *)(unsigned int)Instance,
      ppv);
  return a1;
}
