/*
 * XREFs of ?GetWeakReference@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCImmersiveShellComponentWithGITSite@@UIApplicationFrameEventHandler@@UIImmersiveLayoutChanges@@UIImmersiveWindowMessageNotification@@UITouchKeyboardExperienceManager@@UIApplicationStateChangeHandler@@UILightDismissNotification@@UIGlobalRudeWindowNotifications@@UIClipboardViewLauncher@DataTransfer@Internal@ApplicationModel@Windows@@UIDWMStoryboardListener@@UITextInputHostInfoProvider@@UIInputExperienceHost@Text@Shell@Internal@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAJPEAPEAUIWeakReference@@@Z @ 0x1801650A0
 * Callers:
 *     <none>
 * Callees:
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x1801484A0 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ??_EWeakReferenceImpl@Details@WRL@Microsoft@@UEAAPEAXI@Z @ 0x180165270 (--_EWeakReferenceImpl@Details@WRL@Microsoft@@UEAAPEAXI@Z.c)
 *     ?CreateWeakReference@Details@WRL@Microsoft@@YAPEAVWeakReferenceImpl@123@PEAUIUnknown@@@Z @ 0x1801652B0 (-CreateWeakReference@Details@WRL@Microsoft@@YAPEAVWeakReferenceImpl@123@PEAUIUnknown@@@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CImmersiveShellComponentWithGITSite,IApplicationFrameEventHandler,IImmersiveLayoutChanges,IImmersiveWindowMessageNotification,ITouchKeyboardExperienceManager,IApplicationStateChangeHandler,ILightDismissNotification,IGlobalRudeWindowNotifications,Windows::ApplicationModel::Internal::DataTransfer::IClipboardViewLauncher,IDWMStoryboardListener,ITextInputHostInfoProvider,Windows::Internal::Shell::Text::IInputExperienceHost,Microsoft::WRL::FtmBase>::GetWeakReference(
        __int64 a1,
        volatile int *a2)
{
  signed __int64 v2; // rdi
  Microsoft::WRL::Details::WeakReferenceImpl *v5; // r8
  __int64 WeakReference; // rax
  unsigned __int64 v8; // rdx
  bool i; // zf
  signed __int64 v10; // rax

  v2 = *(_QWORD *)(a1 + 136);
  *(_QWORD *)a2 = 0LL;
  if ( v2 < 0 )
  {
LABEL_2:
    Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(2 * v2 + 12), a2);
LABEL_3:
    *(_QWORD *)a2 = v5;
    return 0LL;
  }
  WeakReference = (__int64)Microsoft::WRL::Details::CreateWeakReference(
                             (Microsoft::WRL::Details *)(a1 - 112),
                             (struct IUnknown *)a2);
  v5 = (Microsoft::WRL::Details::WeakReferenceImpl *)WeakReference;
  if ( WeakReference )
  {
    *(_DWORD *)(WeakReference + 16) = v2;
    v8 = (WeakReference >> 1) | 0x8000000000000000uLL;
    v10 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 136), v8, v2);
    for ( i = v2 == v10; ; i = v10 == v2 )
    {
      v2 = v10;
      if ( i )
        break;
      if ( v10 < 0 )
      {
        Microsoft::WRL::Details::WeakReferenceImpl::`vector deleting destructor'(v5, 1u);
        goto LABEL_2;
      }
      *((_DWORD *)v5 + 4) = v10;
      v10 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 136), v8, v10);
    }
    goto LABEL_3;
  }
  return 2147942414LL;
}
