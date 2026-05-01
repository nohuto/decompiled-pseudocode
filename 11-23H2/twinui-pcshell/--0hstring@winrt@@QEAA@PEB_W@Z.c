/*
 * XREFs of ??0hstring@winrt@@QEAA@PEB_W@Z @ 0x18018BE74
 * Callers:
 *     _dynamic_initializer_for__c_animationPropertyName__ @ 0x18000AF20 (_dynamic_initializer_for__c_animationPropertyName__.c)
 * Callees:
 *     ?precreate_hstring_on_heap@impl@winrt@@YAPEAUshared_hstring_header@12@I@Z @ 0x1800D214C (-precreate_hstring_on_heap@impl@winrt@@YAPEAUshared_hstring_header@12@I@Z.c)
 *     _invalid_parameter_noinfo @ 0x1801C73EA (_invalid_parameter_noinfo.c)
 */

void *__fastcall winrt::hstring::hstring(winrt::hstring *this, const wchar_t *a2)
{
  struct winrt::impl::shared_hstring_header *v2; // rax
  __int64 v3; // rcx
  __int64 v4; // r8
  struct winrt::impl::shared_hstring_header *v5; // rbx
  _OWORD *v6; // rdx

  v2 = winrt::impl::precreate_hstring_on_heap((winrt::impl *)0xD);
  v5 = v2;
  v6 = (_OWORD *)((char *)v2 + 28);
  if ( v2 == (struct winrt::impl::shared_hstring_header *)-28LL )
  {
    *(_DWORD *)_o__errno(v3, v6, v4) = 22;
    invalid_parameter_noinfo();
  }
  else
  {
    *v6 = *(_OWORD *)L"Translation.Y";
    *(_QWORD *)((char *)v2 + 44) = *(_QWORD *)L"ion.Y";
    *((_WORD *)v2 + 26) = aTranslationY[12];
  }
  qword_18098F290 = v5;
  return &qword_18098F290;
}
