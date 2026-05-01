/*
 * XREFs of ??4?$ComPtr@UIAppResizeView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18038667C
 * Callers:
 *     ?FindFrameWrapper@TouchKeyboardExperienceManager@@AEAAJPEAUIApplicationFrame@@AEAV?$ComPtr@UIApplicationFrameWrapper@@@WRL@Microsoft@@@Z @ 0x18022E59E (-FindFrameWrapper@TouchKeyboardExperienceManager@@AEAAJPEAUIApplicationFrame@@AEAV-$ComPtr@UIApp.c)
 *     ?InitializeViewInfoIfNeeded@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@@Z @ 0x18022EBB4 (-InitializeViewInfoIfNeeded@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@@Z.c)
 *     ?_CreateModalExperienceAsync@AccessibilityExperienceManager@@AEAAJXZ @ 0x180488704 (-_CreateModalExperienceAsync@AccessibilityExperienceManager@@AEAAJXZ.c)
 *     ?ShowAppResizeView@TabletModeViewManager@@UEAAJPEAUIApplicationView@@W4MOVE_SIZE_TYPE@@UtagPOINT@@@Z @ 0x18050BAC0 (-ShowAppResizeView@TabletModeViewManager@@UEAAJPEAUIApplicationView@@W4MOVE_SIZE_TYPE@@UtagPOINT.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x180040860 (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 *__fastcall Microsoft::WRL::ComPtr<IAppResizeView>::operator=(__int64 *a1, __int64 *a2)
{
  __int64 v3; // rax
  __int64 v4; // rbx
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v3 = *a1;
  v4 = *a2;
  if ( *a1 != *a2 )
  {
    if ( v4 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(*a2);
      v3 = *a1;
    }
    v6 = v3;
    *a1 = v4;
    Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v6);
  }
  return a1;
}
