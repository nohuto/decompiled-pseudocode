/*
 * XREFs of ??$make@V?$module_count_wrapper@UPenMenuSystemTrayManager@implementation@Shell@Internal@Windows@winrt@@@details@wil@@$$V@winrt@@YA?A_PXZ @ 0x18008C18C
 * Callers:
 *     ?CreateInstance@?$wrl_factory_for_winrt_com_class@UPenMenuSystemTrayManager@implementation@Shell@Internal@Windows@winrt@@@wil@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x18008B820 (-CreateInstance@-$wrl_factory_for_winrt_com_class@UPenMenuSystemTrayManager@implementation@Shell.c)
 * Callees:
 *     ??0?$heap_implements@V?$module_count_wrapper@UPenMenuSystemTrayManager@implementation@Shell@Internal@Windows@winrt@@@details@wil@@@impl@winrt@@QEAA@XZ @ 0x18008AFDC (--0-$heap_implements@V-$module_count_wrapper@UPenMenuSystemTrayManager@implementation@Shell@Inte.c)
 *     ??2@YAPEAX_K@Z @ 0x1801C706C (--2@YAPEAX_K@Z.c)
 *     memset_0 @ 0x1801C750C (memset_0.c)
 */

_QWORD *__fastcall winrt::make<wil::details::module_count_wrapper<winrt::Windows::Internal::Shell::implementation::PenMenuSystemTrayManager>,>(
        _QWORD *a1)
{
  char *v2; // rdi
  winrt::Windows::Internal::Shell::implementation::PenMenuSystemTrayManager *v3; // rax
  void *v5; // [rsp+40h] [rbp+8h]

  v2 = 0LL;
  v5 = operator new(0x98uLL);
  memset_0(v5, 0, 0x98uLL);
  v3 = winrt::impl::heap_implements<wil::details::module_count_wrapper<winrt::Windows::Internal::Shell::implementation::PenMenuSystemTrayManager>>::heap_implements<wil::details::module_count_wrapper<winrt::Windows::Internal::Shell::implementation::PenMenuSystemTrayManager>>((winrt::Windows::Internal::Shell::implementation::PenMenuSystemTrayManager *)v5);
  if ( v3 )
    v2 = (char *)v3 + 8;
  *a1 = v2;
  return a1;
}
