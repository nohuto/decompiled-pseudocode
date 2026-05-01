/*
 * XREFs of ?SetExistingSplashScreen@CImmersiveWindowFactoryBase@@QEAAXPEAUISplashScreen@@@Z @ 0x180799528
 * Callers:
 *     ?ActivateApplicationForLaunchWithManager@@YAJPEAUIApplicationActivationManagerPriv@@PEBG11W4ACTIVATEOPTIONSINTERNAL@@PEAUISplashScreen@@PEAUHMONITOR__@@PEAK@Z @ 0x1802EBAF4 (-ActivateApplicationForLaunchWithManager@@YAJPEAUIApplicationActivationManagerPriv@@PEBG11W4ACTI.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x18006BCD8 (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIGlobalInterfaceTable@@@WRL@Microsoft@@IEBAXXZ @ 0x18006E0D0 (-InternalAddRef@-$ComPtr@UIGlobalInterfaceTable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgs @ 0x18074BCA8 (MicrosoftTelemetryAssertTriggeredNoArgs.c)
 */

void __fastcall CImmersiveWindowFactoryBase::SetExistingSplashScreen(
        CImmersiveWindowFactoryBase *this,
        struct ISplashScreen *a2)
{
  struct ISplashScreen *v4; // [rsp+30h] [rbp+8h] BYREF

  if ( !*((_BYTE *)this + 104) )
    MicrosoftTelemetryAssertTriggeredNoArgs();
  if ( *((struct ISplashScreen **)this + 20) != a2 )
  {
    v4 = a2;
    Microsoft::WRL::ComPtr<IGlobalInterfaceTable>::InternalAddRef((__int64 *)&v4);
    v4 = (struct ISplashScreen *)*((_QWORD *)this + 20);
    *((_QWORD *)this + 20) = a2;
    Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)&v4);
  }
}
