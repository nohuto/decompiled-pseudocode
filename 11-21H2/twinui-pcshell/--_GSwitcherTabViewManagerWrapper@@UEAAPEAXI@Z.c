/*
 * XREFs of ??_GSwitcherTabViewManagerWrapper@@UEAAPEAXI@Z @ 0x180430F10
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x180040860 (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIApplicationViewIconLoaderNotifications@@@Details@WRL@Microsoft@@UEAA@XZ @ 0x18012DAB8 (--1-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIApplicationViewIconLoa.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 */

SwitcherTabViewManagerWrapper *__fastcall SwitcherTabViewManagerWrapper::`scalar deleting destructor'(
        SwitcherTabViewManagerWrapper *this,
        char a2)
{
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)this + 5);
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IApplicationViewIconLoaderNotifications>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IApplicationViewIconLoaderNotifications>((__int64)this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
