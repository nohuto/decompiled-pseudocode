/*
 * XREFs of ?VirtualDesktopAcessibility_CreateInstance@@YAJW4_TABLETMODESTATE@@PEAUIVirtualDesktopNotificationServicePrivate@@PEAUIVirtualDesktopCollection@@PEAUIVirtualDesktopManagerPrivate@@PEAUIVirtualDesktopLock@@AEBU_GUID@@PEAPEAX@Z @ 0x18013EC9C
 * Callers:
 *     ?RuntimeClassInitialize@CVirtualDesktopComponent@@QEAAJXZ @ 0x1800FAD6C (-RuntimeClassInitialize@CVirtualDesktopComponent@@QEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$MakeAndInitialize@VVirtualDesktopAcessibility@@V1@AEAW4_TABLETMODESTATE@@AEAPEAUIVirtualDesktopNotificationServicePrivate@@AEAPEAUIVirtualDesktopCollection@@AEAPEAUIVirtualDesktopManagerPrivate@@AEAPEAUIVirtualDesktopLock@@@Details@WRL@Microsoft@@YAJPEAPEAVVirtualDesktopAcessibility@@AEAW4_TABLETMODESTATE@@AEAPEAUIVirtualDesktopNotificationServicePrivate@@AEAPEAUIVirtualDesktopCollection@@AEAPEAUIVirtualDesktopManagerPrivate@@AEAPEAUIVirtualDesktopLock@@@Z @ 0x18013DEF8 (--$MakeAndInitialize@VVirtualDesktopAcessibility@@V1@AEAW4_TABLETMODESTATE@@AEAPEAUIVirtualDeskt.c)
 *     ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@V?$VirtualDesktopNotificationBase@UIVirtualDesktopNotification@@@@UIVirtualDesktopAccessibility@@UIVirtualDesktopAccessibilityInternal@@VFtmBase@23@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$01@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@V?$VirtualDesktopNotificationBase@UIVirtualDesktopNotification@@@@UIVirtualDesktopAccessibility@@UIVirtualDesktopAccessibilityInternal@@VFtmBase@23@@123@AEBU_GUID@@PEAPEAX@Z @ 0x18013ED4C (--$AsIID@V-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@V-$_ea_18013ED4C.c)
 *     ?InternalRelease@?$ComPtr@VVirtualDesktopAcessibility@@@WRL@Microsoft@@IEAAKXZ @ 0x18017FC84 (-InternalRelease@-$ComPtr@VVirtualDesktopAcessibility@@@WRL@Microsoft@@IEAAKXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 VirtualDesktopAcessibility_CreateInstance(int a1, ...)
{
  VirtualDesktopAcessibility *v1; // rdi
  int v2; // eax
  unsigned int v3; // ebx
  __int64 v5; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  int v7; // [rsp+50h] [rbp+20h] BYREF
  __int64 v8; // [rsp+58h] [rbp+28h] BYREF
  va_list va; // [rsp+58h] [rbp+28h]
  __int64 v10; // [rsp+60h] [rbp+30h] BYREF
  va_list va1; // [rsp+60h] [rbp+30h]
  __int64 v12; // [rsp+68h] [rbp+38h] BYREF
  va_list va2; // [rsp+68h] [rbp+38h]
  __int64 v14; // [rsp+70h] [rbp+40h] BYREF
  va_list va3; // [rsp+70h] [rbp+40h]
  __int64 v16; // [rsp+78h] [rbp+48h]
  VirtualDesktopAcessibility *v17; // [rsp+80h] [rbp+50h] BYREF
  va_list va4; // [rsp+80h] [rbp+50h]
  va_list va5; // [rsp+88h] [rbp+58h] BYREF

  va_start(va5, a1);
  va_start(va4, a1);
  va_start(va3, a1);
  va_start(va2, a1);
  va_start(va1, a1);
  va_start(va, a1);
  v8 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v10 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v12 = va_arg(va3, _QWORD);
  va_copy(va4, va3);
  v14 = va_arg(va4, _QWORD);
  v16 = va_arg(va4, _QWORD);
  va_copy(va5, va4);
  v17 = va_arg(va5, VirtualDesktopAcessibility *);
  v7 = a1;
  v1 = v17;
  *(_QWORD *)v17 = 0LL;
  v17 = 0LL;
  Microsoft::WRL::ComPtr<VirtualDesktopAcessibility>::InternalRelease((VirtualDesktopAcessibility **)va4);
  v2 = Microsoft::WRL::Details::MakeAndInitialize<VirtualDesktopAcessibility,VirtualDesktopAcessibility,enum _TABLETMODESTATE &,IVirtualDesktopNotificationServicePrivate * &,IVirtualDesktopCollection * &,IVirtualDesktopManagerPrivate * &,IVirtualDesktopLock * &>(
         (VirtualDesktopAcessibility **)va4,
         &v7,
         (__int64 *)va,
         (__int64 *)va1,
         (__int64 *)va2,
         (__int64 *)va3);
  v3 = v2;
  if ( v2 < 0 )
  {
    v5 = 171LL;
LABEL_6:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopaccessibility.cpp",
      (const char *)(unsigned int)v2);
    goto LABEL_3;
  }
  v2 = Microsoft::WRL::Details::RuntimeClassBaseT<2>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,VirtualDesktopNotificationBase<IVirtualDesktopNotification>,IVirtualDesktopAccessibility,IVirtualDesktopAccessibilityInternal,Microsoft::WRL::FtmBase>>(
         v17,
         &GUID_06ca098c_9621_4172_8a11_a49c3c499839,
         v1);
  v3 = v2;
  if ( v2 < 0 )
  {
    v5 = 172LL;
    goto LABEL_6;
  }
LABEL_3:
  Microsoft::WRL::ComPtr<VirtualDesktopAcessibility>::InternalRelease((VirtualDesktopAcessibility **)va4);
  return v3;
}
