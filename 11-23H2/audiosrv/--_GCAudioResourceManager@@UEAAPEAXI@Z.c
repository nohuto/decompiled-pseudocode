/*
 * XREFs of ??_GCAudioResourceManager@@UEAAPEAXI@Z @ 0x1800D8BE0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIAudioResourceManager@@UIAudioResourceControl@@@Details@WRL@Microsoft@@UEAA@XZ @ 0x180018624 (--1-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIAudioResourceManager@@.c)
 *     ?InternalRelease@?$ComPtr@UIPolicyConfig@@@WRL@Microsoft@@IEAAKXZ @ 0x180047D64 (-InternalRelease@-$ComPtr@UIPolicyConfig@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x180067038 (--3@YAXPEAX_K@Z.c)
 */

CAudioResourceManager *__fastcall CAudioResourceManager::`scalar deleting destructor'(
        CAudioResourceManager *this,
        char a2)
{
  Microsoft::WRL::ComPtr<IPolicyConfig>::InternalRelease((__int64 *)this + 6);
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IAudioResourceManager,IAudioResourceControl>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IAudioResourceManager,IAudioResourceControl>((__int64)this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
