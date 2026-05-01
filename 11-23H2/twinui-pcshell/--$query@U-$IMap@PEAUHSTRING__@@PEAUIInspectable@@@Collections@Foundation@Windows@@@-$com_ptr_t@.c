/*
 * XREFs of ??$query@U?$IMap@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@Windows@@@?$com_ptr_t@UIPropertySet@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@U?$IMap@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@1@XZ @ 0x1801F531C
 * Callers:
 *     _lambda_aa99c597e8a4a7ee3c1807cb535a4e9f_::operator() @ 0x1801F82EC (_lambda_aa99c597e8a4a7ee3c1807cb535a4e9f_--operator().c)
 *     _lambda_873da902577de7b1e240af1da8b9a9bc_::operator() @ 0x1804E72E8 (_lambda_873da902577de7b1e240af1da8b9a9bc_--operator().c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

_QWORD *__fastcall wil::com_ptr_t<Windows::Foundation::Collections::IPropertySet,wil::err_exception_policy>::query<Windows::Foundation::Collections::IMap<HSTRING__ *,IInspectable *>>(
        __int64 (__fastcall ****a1)(_QWORD, GUID *, _QWORD *),
        _QWORD *a2)
{
  __int64 (__fastcall ***v2)(_QWORD, GUID *, _QWORD *); // rcx
  int v4; // eax
  int v6; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v2 = *a1;
  *a2 = 0LL;
  v4 = (**v2)(v2, &GUID_1b0d3570_0877_5ec2_8a2c_3b9539506aca, a2);
  if ( v4 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x1815,
      (int)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\result_macros.h",
      (const char *)(unsigned int)v4,
      v6);
  return a2;
}
