/*
 * XREFs of ?SetExistingSplashScreen@CImmersiveWindowFactoryBase@@QEAAXPEAUISplashScreen@@@Z @ 0x18061AC78
 * Callers:
 *     ?ActivateApplicationForLaunchWithManager@@YAJPEAUIApplicationActivationManagerPriv@@PEBG11W4ACTIVATEOPTIONSINTERNAL@@PEAUISplashScreen@@PEAUHMONITOR__@@PEAK@Z @ 0x1805F0088 (-ActivateApplicationForLaunchWithManager@@YAJPEAUIApplicationActivationManagerPriv@@PEBG11W4ACTI.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ @ 0x18003FC5C (-InternalAddRef@-$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x180040860 (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgs @ 0x1805F5290 (MicrosoftTelemetryAssertTriggeredNoArgs.c)
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
    Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::InternalAddRef((__int64 *)&v4);
    v4 = (struct ISplashScreen *)*((_QWORD *)this + 20);
    *((_QWORD *)this + 20) = a2;
    Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)&v4);
  }
}
