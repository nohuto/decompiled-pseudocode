/*
 * XREFs of ??_ECIconLoader@@UEAAPEAXI@Z @ 0x1802DF890
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     ??1?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIApplicationViewIconLoader@@VFtmBase@23@@23@@Details@WRL@Microsoft@@UEAA@XZ @ 0x1802DF854 (--1-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U-$Implements@U-$Runtime.c)
 */

CIconLoader *__fastcall CIconLoader::`vector deleting destructor'(CIconLoader *this, char a2)
{
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,IApplicationViewIconLoader,Microsoft::WRL::FtmBase>>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,IApplicationViewIconLoader,Microsoft::WRL::FtmBase>>((__int64)this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
