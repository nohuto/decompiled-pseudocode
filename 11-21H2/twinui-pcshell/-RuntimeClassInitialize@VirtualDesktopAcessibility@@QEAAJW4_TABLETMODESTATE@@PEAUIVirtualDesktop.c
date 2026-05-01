/*
 * XREFs of ?RuntimeClassInitialize@VirtualDesktopAcessibility@@QEAAJW4_TABLETMODESTATE@@PEAUIVirtualDesktopNotificationServicePrivate@@PEAUIVirtualDesktopCollection@@PEAUIVirtualDesktopManagerPrivate@@PEAUIVirtualDesktopLock@@@Z @ 0x1801102E8
 * Callers:
 *     ??$MakeAndInitialize@VVirtualDesktopAcessibility@@V1@AEAW4_TABLETMODESTATE@@AEAPEAUIVirtualDesktopNotificationServicePrivate@@AEAPEAUIVirtualDesktopCollection@@AEAPEAUIVirtualDesktopManagerPrivate@@AEAPEAUIVirtualDesktopLock@@@Details@WRL@Microsoft@@YAJPEAPEAVVirtualDesktopAcessibility@@AEAW4_TABLETMODESTATE@@AEAPEAUIVirtualDesktopNotificationServicePrivate@@AEAPEAUIVirtualDesktopCollection@@AEAPEAUIVirtualDesktopManagerPrivate@@AEAPEAUIVirtualDesktopLock@@@Z @ 0x18015F950 (--$MakeAndInitialize@VVirtualDesktopAcessibility@@V1@AEAW4_TABLETMODESTATE@@AEAPEAUIVirtualDeskt.c)
 * Callees:
 *     ?_Initialize@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_K@Z @ 0x18008D220 (-_Initialize@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$Register@UIVirtualDesktopNotificationServicePrivate@@P81@EAAJPEAUIVirtualDesktopNotification@@PEAK@_EP81@EAAJK@_EPEAVVirtualDesktopAcessibility@@@SmartCookie@@QEAAJPEAUIVirtualDesktopNotificationServicePrivate@@P81@EAAJPEAUIVirtualDesktopNotification@@PEAK@_EP81@EAAJK@_EPEAVVirtualDesktopAcessibility@@@Z @ 0x18010CBDC (--$Register@UIVirtualDesktopNotificationServicePrivate@@P81@EAAJPEAUIVirtualDesktopNotification@.c)
 *     ?RecalculateDesktopName@VirtualDesktopAcessibility@@AEAAJXZ @ 0x18010F3E0 (-RecalculateDesktopName@VirtualDesktopAcessibility@@AEAAJXZ.c)
 *     ??4?$ComPtr@UIVirtualDesktopLock@@@WRL@Microsoft@@QEAAAEAV012@PEAUIVirtualDesktopLock@@@Z @ 0x180112914 (--4-$ComPtr@UIVirtualDesktopLock@@@WRL@Microsoft@@QEAAAEAV012@PEAUIVirtualDesktopLock@@@Z.c)
 *     ??4?$ComPtr@UIVirtualDesktopCollection@@@WRL@Microsoft@@QEAAAEAV012@PEAUIVirtualDesktopCollection@@@Z @ 0x1801129D4 (--4-$ComPtr@UIVirtualDesktopCollection@@@WRL@Microsoft@@QEAAAEAV012@PEAUIVirtualDesktopCollectio.c)
 *     ??4?$ComPtr@UIVirtualDesktopManagerPrivate@@@WRL@Microsoft@@QEAAAEAV012@PEAUIVirtualDesktopManagerPrivate@@@Z @ 0x180112A38 (--4-$ComPtr@UIVirtualDesktopManagerPrivate@@@WRL@Microsoft@@QEAAAEAV012@PEAUIVirtualDesktopManag.c)
 *     ?FindAndSize@ResourceString@Internal@Windows@@SA_NPEAUHINSTANCE__@@IGPEAPEBGPEAG@Z @ 0x18015C9D8 (-FindAndSize@ResourceString@Internal@Windows@@SA_NPEAUHINSTANCE__@@IGPEAPEBGPEAG@Z.c)
 */

__int64 __fastcall VirtualDesktopAcessibility::RuntimeClassInitialize(
        VirtualDesktopAcessibility *a1,
        int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  __int64 v9; // r8
  int v10; // ebx
  unsigned __int16 v11; // r8
  __int64 v13; // rdx
  unsigned __int16 *v14; // [rsp+30h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  unsigned __int16 v16; // [rsp+50h] [rbp+8h] BYREF

  Microsoft::WRL::ComPtr<IVirtualDesktopCollection>::operator=((char *)a1 + 192, a4);
  Microsoft::WRL::ComPtr<IVirtualDesktopManagerPrivate>::operator=((char *)a1 + 200, a5);
  Microsoft::WRL::ComPtr<IVirtualDesktopLock>::operator=((char *)a1 + 216, a6);
  v10 = ___Register_UIVirtualDesktopNotificationServicePrivate__P81_EAAJPEAUIVirtualDesktopNotification__PEAK__EP81_EAAJK__EPEAVVirtualDesktopAcessibility___SmartCookie__QEAAJPEAUIVirtualDesktopNotificationServicePrivate__P81_EAAJPEAUIVirtualDesktopNotification__PEAK__EP81_EAAJK__EPEAVVirtualDesktopAcessibility___Z(
          (__int64)a1 + 64,
          a3,
          v9);
  if ( v10 < 0 )
  {
    v13 = 148LL;
  }
  else if ( a2 )
  {
    v10 = -2147467259;
    if ( Windows::Internal::ResourceString::FindAndSize(
           &_ImageBase,
           0x34BEu,
           v11,
           (const unsigned __int16 **)&v14,
           &v16) )
    {
      v10 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Initialize(
              (__int64)a1 + 224,
              (__int64)v14,
              v16);
      if ( v10 >= 0 )
        return 0LL;
    }
    v13 = 157LL;
  }
  else
  {
    v10 = VirtualDesktopAcessibility::RecalculateDesktopName(a1);
    if ( v10 >= 0 )
      return 0LL;
    v13 = 152LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v13,
    (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopaccessibility.cpp",
    (const char *)(unsigned int)v10);
  return (unsigned int)v10;
}
