/*
 * XREFs of ??_G?$SimpleKeyValuePair@PEAUHSTRING__@@W4SceneAttributeSemantic@Scenes@Composition@UI@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@6@U?$DefaultLifetimeTraits@W4SceneAttributeSemantic@Scenes@Composition@UI@Windows@@@89Foundation@6@$00@Internal@Collections@Foundation@Windows@@UEAAPEAXI@Z @ 0x18018CDC0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180095B64 (--3@YAXPEAX_K@Z.c)
 *     ??1?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UICompositionNotificationDeferral@Composition@UI@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@UEAA@XZ @ 0x180105AA8 (--1-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UICompositionNotificatio.c)
 */

HSTRING *__fastcall Windows::Foundation::Collections::Internal::SimpleKeyValuePair<HSTRING__ *,enum Windows::UI::Composition::Scenes::SceneAttributeSemantic,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<enum Windows::UI::Composition::Scenes::SceneAttributeSemantic>,1>::`scalar deleting destructor'(
        HSTRING *a1,
        char a2)
{
  volatile int *v4; // rdx

  WindowsDeleteString(a1[8]);
  a1[8] = 0LL;
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::UI::Composition::ICompositionNotificationDeferral,Microsoft::WRL::FtmBase>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::UI::Composition::ICompositionNotificationDeferral,Microsoft::WRL::FtmBase>(
    (__int64)a1,
    v4);
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
