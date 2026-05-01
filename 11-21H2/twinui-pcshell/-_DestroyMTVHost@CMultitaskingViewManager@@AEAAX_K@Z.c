/*
 * XREFs of ?_DestroyMTVHost@CMultitaskingViewManager@@AEAAX_K@Z @ 0x180052C3C
 * Callers:
 *     ?ViewDismissed@CMultitaskingViewManager@@UEAAJPEAUIMultitaskingViewHost@@@Z @ 0x180052B00 (-ViewDismissed@CMultitaskingViewManager@@UEAAJPEAUIMultitaskingViewHost@@@Z.c)
 *     ?Destroy@CMultitaskingViewManager@@UEAAJXZ @ 0x18005D470 (-Destroy@CMultitaskingViewManager@@UEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x180040860 (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??_GMULTITASKING_HOST_DATA@CMultitaskingViewManager@@QEAAPEAXI@Z @ 0x180052CBC (--_GMULTITASKING_HOST_DATA@CMultitaskingViewManager@@QEAAPEAXI@Z.c)
 *     memmove_0 @ 0x1801EACFB (memmove_0.c)
 */

void __fastcall CMultitaskingViewManager::_DestroyMTVHost(CMultitaskingViewManager *this, unsigned __int64 a2)
{
  __int64 v4; // rdi
  unsigned int v5; // edx
  __int64 v6; // r8

  v4 = 16 * a2;
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)(16 * a2 + *((_QWORD *)this + 36) + 8LL));
  if ( a2 < *((_QWORD *)this + 37) )
  {
    CMultitaskingViewManager::MULTITASKING_HOST_DATA::`scalar deleting destructor'(
      (CMultitaskingViewManager::MULTITASKING_HOST_DATA *)(v4 + *((_QWORD *)this + 36)),
      v5);
    v6 = *((_QWORD *)this + 37);
    if ( a2 != v6 - 1 )
    {
      memmove_0(
        (void *)(v4 + *((_QWORD *)this + 36)),
        (const void *)(v4 + *((_QWORD *)this + 36) + 16),
        16 * (v6 - a2) - 16);
      v6 = *((_QWORD *)this + 37);
    }
    *((_QWORD *)this + 37) = v6 - 1;
  }
}
