/*
 * XREFs of ??_GTransformInformation@Private@Composition@UI@Windows@@UEAAPEAXI@Z @ 0x180105B60
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180095B64 (--3@YAXPEAX_K@Z.c)
 *     ??1?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UICompositionNotificationDeferral@Composition@UI@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@UEAA@XZ @ 0x180105AA8 (--1-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UICompositionNotificatio.c)
 */

Windows::UI::Composition::Private::TransformInformation *__fastcall Windows::UI::Composition::Private::TransformInformation::`scalar deleting destructor'(
        Windows::UI::Composition::Private::TransformInformation *this,
        volatile int *a2)
{
  char v2; // bl

  v2 = (char)a2;
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::UI::Composition::ICompositionNotificationDeferral,Microsoft::WRL::FtmBase>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::UI::Composition::ICompositionNotificationDeferral,Microsoft::WRL::FtmBase>(
    (__int64)this,
    a2);
  if ( (v2 & 1) != 0 )
    operator delete(this);
  return this;
}
