/*
 * XREFs of ??0hstring@winrt@@QEAA@PEB_W@Z @ 0x1800F50FC
 * Callers:
 *     _dynamic_initializer_for__c_animationPropertyName__ @ 0x18000A080 (_dynamic_initializer_for__c_animationPropertyName__.c)
 *     ?GetRuntimeClassName@?$XamlExplorerHostChildWindow_base@UXamlExplorerHostChildWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@Unon_agile@7@@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UEBA?AUhstring@7@XZ @ 0x18041DDD0 (-GetRuntimeClassName@-$XamlExplorerHostChildWindow_base@UXamlExplorerHostChildWindow@implementat.c)
 *     ?GetRuntimeClassName@?$XamlExplorerHostWindow_base@UXamlExplorerHostWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@$$V@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UEBA?AUhstring@7@XZ @ 0x18041DE00 (-GetRuntimeClassName@-$XamlExplorerHostWindow_base@UXamlExplorerHostWindow@implementation@XamlEx.c)
 *     ?GetRuntimeClassName@?$ActivationChangedEventArgs_base@UActivationChangedEventArgs@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@$$V@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UEBA?AUhstring@7@XZ @ 0x180421D30 (-GetRuntimeClassName@-$ActivationChangedEventArgs_base@UActivationChangedEventArgs@implementatio.c)
 *     ?get_WindowTitle@?$produce@UXamlExplorerHostWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIXamlExplorerHostWindow@34567@@impl@winrt@@UEAAHPEAPEAX@Z @ 0x1804222A0 (-get_WindowTitle@-$produce@UXamlExplorerHostWindow@implementation@XamlExplorerHost@Shell@Interna.c)
 * Callees:
 *     ?precreate_hstring_on_heap@impl@winrt@@YAPEAUshared_hstring_header@12@I@Z @ 0x1800F7820 (-precreate_hstring_on_heap@impl@winrt@@YAPEAUshared_hstring_header@12@I@Z.c)
 *     _invalid_parameter_noinfo @ 0x180188E82 (_invalid_parameter_noinfo.c)
 *     memset_0 @ 0x180188F60 (memset_0.c)
 *     memcpy_0 @ 0x1801EACEF (memcpy_0.c)
 */

winrt::hstring *__fastcall winrt::hstring::hstring(winrt::hstring *this, const wchar_t *a2)
{
  __int64 v2; // rdi
  struct winrt::impl::shared_hstring_header *v4; // rbx
  struct winrt::impl::shared_hstring_header *v6; // rax
  __int64 v7; // rdx
  struct winrt::impl::shared_hstring_header *v8; // r14
  void *v9; // rcx
  size_t v10; // r8
  winrt::hstring *result; // rax

  v2 = -1LL;
  v4 = 0LL;
  do
    ++v2;
  while ( a2[v2] );
  if ( (_DWORD)v2 )
  {
    v6 = winrt::impl::precreate_hstring_on_heap((winrt::impl *)(unsigned int)v2, (unsigned int)a2);
    v8 = v6;
    v9 = (char *)v6 + 28;
    v10 = 2LL * (unsigned int)v2;
    if ( v10 )
    {
      if ( v6 != (struct winrt::impl::shared_hstring_header *)-28LL )
      {
        if ( a2 )
        {
          memcpy_0(v9, a2, v10);
          goto LABEL_8;
        }
        memset_0(v9, 0, v10);
      }
      *(_DWORD *)_o__errno(v9, v7, v10) = 22;
      invalid_parameter_noinfo();
    }
LABEL_8:
    v4 = v8;
  }
  result = this;
  *(_QWORD *)this = v4;
  return result;
}
