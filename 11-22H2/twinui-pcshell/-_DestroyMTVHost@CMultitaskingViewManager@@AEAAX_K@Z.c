/*
 * XREFs of ?_DestroyMTVHost@CMultitaskingViewManager@@AEAAX_K@Z @ 0x18004C3A4
 * Callers:
 *     ?ViewDismissed@CMultitaskingViewManager@@UEAAJPEAUIMultitaskingViewHost@@@Z @ 0x18004B4D0 (-ViewDismissed@CMultitaskingViewManager@@UEAAJPEAUIMultitaskingViewHost@@@Z.c)
 *     ?Destroy@CMultitaskingViewManager@@UEAAJXZ @ 0x1801ACCD0 (-Destroy@CMultitaskingViewManager@@UEAAJXZ.c)
 * Callees:
 *     ??_GMULTITASKING_HOST_DATA@CMultitaskingViewManager@@QEAAPEAXI@Z @ 0x18004C420 (--_GMULTITASKING_HOST_DATA@CMultitaskingViewManager@@QEAAPEAXI@Z.c)
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x18006BCD8 (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     memmove_0 @ 0x1801C9357 (memmove_0.c)
 */

void __fastcall CMultitaskingViewManager::_DestroyMTVHost(CMultitaskingViewManager *this, unsigned __int64 a2)
{
  __int64 v4; // rdi
  unsigned int v5; // edx
  __int64 v6; // r8

  v4 = 16 * a2;
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(16 * a2 + *((_QWORD *)this + 37) + 8LL);
  if ( a2 < *((_QWORD *)this + 38) )
  {
    CMultitaskingViewManager::MULTITASKING_HOST_DATA::`scalar deleting destructor'(
      (CMultitaskingViewManager::MULTITASKING_HOST_DATA *)(v4 + *((_QWORD *)this + 37)),
      v5);
    v6 = *((_QWORD *)this + 38);
    if ( a2 != v6 - 1 )
      memmove_0(
        (void *)(v4 + *((_QWORD *)this + 37)),
        (const void *)(v4 + *((_QWORD *)this + 37) + 16),
        16 * (v6 - a2) - 16);
    --*((_QWORD *)this + 38);
  }
}
