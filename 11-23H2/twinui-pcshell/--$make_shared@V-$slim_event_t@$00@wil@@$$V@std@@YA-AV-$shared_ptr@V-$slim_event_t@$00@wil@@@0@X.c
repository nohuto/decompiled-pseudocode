/*
 * XREFs of ??$make_shared@V?$slim_event_t@$00@wil@@$$V@std@@YA?AV?$shared_ptr@V?$slim_event_t@$00@wil@@@0@XZ @ 0x180694A30
 * Callers:
 *     _anonymous_namespace_::EnsureWebExperiencePackageInstalled$_ResumeCoro$1 @ 0x180239600 (_anonymous_namespace_--EnsureWebExperiencePackageInstalled$_ResumeCoro$1.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1801C706C (--2@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall std::make_shared<wil::slim_event_t<1>,>(_QWORD *a1)
{
  _QWORD *result; // rax
  _DWORD *v3; // [rsp+40h] [rbp+8h]

  v3 = operator new(0x18uLL);
  *(_OWORD *)v3 = 0LL;
  v3[2] = 1;
  v3[3] = 1;
  *(_QWORD *)v3 = &std::_Ref_count_obj2<winrt::Windows::Internal::Shell::implementation::BootConnectingState>::`vftable';
  v3[4] = 0;
  a1[1] = v3;
  result = a1;
  *a1 = v3 + 4;
  return result;
}
