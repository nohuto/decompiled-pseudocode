/*
 * XREFs of winrt::make_winrt::Windows::Internal::Shell::SnapComponent::implementation::ImmersiveShellThreadDispatcherCallback__lambda_ac2a839fec59629fce3443c282716c2d_____lambda_ac2a839fec59629fce3443c282716c2d___ @ 0x18068252C
 * Callers:
 *     ?SnapWindow@DesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@winrt@@QEAAX_KAEBURect@Foundation@67@U?$array_view@$$CBURect@Foundation@Windows@winrt@@@7@@Z @ 0x1806852A8 (-SnapWindow@DesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@winrt@@.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1801C706C (--2@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall winrt::make_winrt::Windows::Internal::Shell::SnapComponent::implementation::ImmersiveShellThreadDispatcherCallback__lambda_ac2a839fec59629fce3443c282716c2d_____lambda_ac2a839fec59629fce3443c282716c2d___(
        _QWORD *a1,
        __int64 a2)
{
  _QWORD *v4; // r9
  __int128 v5; // xmm0
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rax

  v4 = operator new(0x50uLL);
  v4[2] = off_1807F04F0;
  _InterlockedExchangeAdd(&`winrt::get_module_lock'::`2'::s_lock, 1u);
  v4[1] = 1LL;
  *v4 = &off_1807F0528;
  v4[3] = *(_QWORD *)a2;
  v5 = *(_OWORD *)(a2 + 8);
  *a1 = v4 + 2;
  *((_OWORD *)v4 + 2) = v5;
  v6 = *(_QWORD *)(a2 + 24);
  v7 = *(_QWORD *)(a2 + 40);
  v8 = *(_QWORD *)(a2 + 32);
  *(_QWORD *)(a2 + 40) = 0LL;
  *(_QWORD *)(a2 + 32) = 0LL;
  *(_QWORD *)(a2 + 24) = 0LL;
  v4[6] = v6;
  v4[7] = v8;
  v4[8] = v7;
  v9 = *(_QWORD *)(a2 + 48);
  *(_QWORD *)(a2 + 48) = 0LL;
  v4[9] = v9;
  *v4 = &off_1807C8EF8;
  return a1;
}
