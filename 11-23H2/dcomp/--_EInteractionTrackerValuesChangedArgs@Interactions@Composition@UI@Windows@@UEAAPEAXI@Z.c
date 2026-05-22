/*
 * XREFs of ??_EInteractionTrackerValuesChangedArgs@Interactions@Composition@UI@Windows@@UEAAPEAXI@Z @ 0x1800B6C20
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18001B130 (--3@YAXPEAX@Z.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x18008E864 (-__global_delete@@YAXPEAX_K@Z.c)
 *     ??1?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UISharedD3DDevice@Internal@Composition@UI@Windows@@UISharedD3DDeviceInterop@6789@@Details@WRL@Microsoft@@UEAA@XZ @ 0x1800A1254 (--1-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UISharedD3DD.c)
 */

Windows::UI::Composition::Interactions::InteractionTrackerValuesChangedArgs *__fastcall Windows::UI::Composition::Interactions::InteractionTrackerValuesChangedArgs::`vector deleting destructor'(
        Windows::UI::Composition::Interactions::InteractionTrackerValuesChangedArgs *this,
        volatile int *a2)
{
  char v2; // di

  v2 = (char)a2;
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase,Windows::UI::Composition::Internal::ISharedD3DDevice,Windows::UI::Composition::Internal::ISharedD3DDeviceInterop>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase,Windows::UI::Composition::Internal::ISharedD3DDevice,Windows::UI::Composition::Internal::ISharedD3DDeviceInterop>(
    (__int64)this,
    a2);
  if ( (v2 & 1) != 0 )
  {
    if ( (v2 & 4) != 0 )
      __global_delete(this);
    else
      operator delete(this);
  }
  return this;
}
