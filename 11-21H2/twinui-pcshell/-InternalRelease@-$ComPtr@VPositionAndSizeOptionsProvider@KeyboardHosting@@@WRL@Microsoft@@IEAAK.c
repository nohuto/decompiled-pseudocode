/*
 * XREFs of ?InternalRelease@?$ComPtr@VPositionAndSizeOptionsProvider@KeyboardHosting@@@WRL@Microsoft@@IEAAKXZ @ 0x18017B88C
 * Callers:
 *     ?RuntimeClassInitialize@TabTipAdapterPolicy@KeyboardHosting@@QEAAJXZ @ 0x1800B9828 (-RuntimeClassInitialize@TabTipAdapterPolicy@KeyboardHosting@@QEAAJXZ.c)
 *     ??$MakeAndInitialize@VPositionAndSizeOptionsProvider@KeyboardHosting@@V12@$$V@Details@WRL@Microsoft@@YAJPEAPEAVPositionAndSizeOptionsProvider@KeyboardHosting@@@Z @ 0x1800B994C (--$MakeAndInitialize@VPositionAndSizeOptionsProvider@KeyboardHosting@@V12@$$V@Details@WRL@Micros.c)
 *     ??1?$ComPtr@VViewRectProvider@KeyboardHosting@@@WRL@Microsoft@@QEAA@XZ @ 0x18046EF4C (--1-$ComPtr@VViewRectProvider@KeyboardHosting@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ??1TabTipAdapterPolicy@KeyboardHosting@@UEAA@XZ @ 0x18046F544 (--1TabTipAdapterPolicy@KeyboardHosting@@UEAA@XZ.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U?$ITypedEventHandler@PEAUIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@@PEAVWindowMigrationEventArgs@2345@@Foundation@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18017B8C0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U-$I_ea_18017B8C0.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<KeyboardHosting::PositionAndSizeOptionsProvider>::InternalRelease(
        __int64 *a1)
{
  __int64 v1; // rdx
  __int64 result; // rax

  v1 = *a1;
  result = 0LL;
  if ( *a1 )
  {
    *a1 = 0LL;
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::WindowManagementEvents::IWindowManagementEvents2 *,Windows::Internal::Shell::WindowManagementEvents::WindowMigrationEventArgs *>>::Release(v1);
  }
  return result;
}
