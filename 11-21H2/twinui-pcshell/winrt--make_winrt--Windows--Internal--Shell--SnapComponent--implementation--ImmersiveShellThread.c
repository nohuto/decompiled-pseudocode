/*
 * XREFs of winrt::make_winrt::Windows::Internal::Shell::SnapComponent::implementation::ImmersiveShellThreadDispatcherCallback__lambda_4820608d764e205befb540f09a70bd1e_____lambda_4820608d764e205befb540f09a70bd1e___ @ 0x1805B3528
 * Callers:
 *     ?SnapWindow@DesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@winrt@@QEAAX_KAEBURect@Foundation@67@U?$array_view@$$CBURect@Foundation@Windows@winrt@@@7@@Z @ 0x1805B4898 (-SnapWindow@DesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@winrt@@.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180188B1C (--2@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall winrt::make_winrt::Windows::Internal::Shell::SnapComponent::implementation::ImmersiveShellThreadDispatcherCallback__lambda_4820608d764e205befb540f09a70bd1e_____lambda_4820608d764e205befb540f09a70bd1e___(
        _QWORD *a1,
        __int64 a2)
{
  char *v4; // r10
  __int64 v5; // rax

  v4 = (char *)operator new(0x60uLL);
  *((_QWORD *)v4 + 2) = off_180667AE8;
  _InterlockedExchangeAdd(&`winrt::get_module_lock'::`2'::s_lock, 1u);
  *((_QWORD *)v4 + 1) = 1LL;
  *a1 = v4 + 16;
  *(_QWORD *)v4 = &off_180667B20;
  *(_OWORD *)(v4 + 24) = *(_OWORD *)a2;
  *((_QWORD *)v4 + 5) = *(_QWORD *)(a2 + 16);
  *((_OWORD *)v4 + 3) = *(_OWORD *)(a2 + 24);
  *((_QWORD *)v4 + 8) = 0LL;
  *((_QWORD *)v4 + 9) = 0LL;
  *((_QWORD *)v4 + 10) = 0LL;
  *((_QWORD *)v4 + 8) = *(_QWORD *)(a2 + 40);
  *((_QWORD *)v4 + 9) = *(_QWORD *)(a2 + 48);
  *((_QWORD *)v4 + 10) = *(_QWORD *)(a2 + 56);
  *(_QWORD *)(a2 + 40) = 0LL;
  *(_QWORD *)(a2 + 48) = 0LL;
  *(_QWORD *)(a2 + 56) = 0LL;
  v5 = *(_QWORD *)(a2 + 64);
  *(_QWORD *)(a2 + 64) = 0LL;
  *((_QWORD *)v4 + 11) = v5;
  *(_QWORD *)v4 = &off_1806454D8;
  return a1;
}
