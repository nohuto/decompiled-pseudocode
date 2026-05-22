/*
 * XREFs of ?ActivateInstance@TransformInformationFactory@Private@Composition@UI@Windows@@UEAAJ_JPEAPEAUITransformInformation@2345@@Z @ 0x180105BA0
 * Callers:
 *     <none>
 * Callees:
 *     ??$MakeAndInitialize@VTransformInformation@Private@Composition@UI@Windows@@UITransformInformation@2345@PEAUHWND__@@@Details@WRL@Microsoft@@YAJPEAPEAUITransformInformation@Private@Composition@UI@Windows@@$$QEAPEAUHWND__@@@Z @ 0x180104A04 (--$MakeAndInitialize@VTransformInformation@Private@Composition@UI@Windows@@UITransformInformatio.c)
 */

__int64 __fastcall Windows::UI::Composition::Private::TransformInformationFactory::ActivateInstance(
        Windows::UI::Composition::Private::TransformInformationFactory *this,
        __int64 a2,
        struct Windows::UI::Composition::Private::ITransformInformation **a3)
{
  __int64 v4; // [rsp+38h] [rbp+10h] BYREF

  v4 = a2;
  return Microsoft::WRL::Details::MakeAndInitialize<Windows::UI::Composition::Private::TransformInformation,Windows::UI::Composition::Private::ITransformInformation,HWND__ *>(
           a3,
           &v4);
}
