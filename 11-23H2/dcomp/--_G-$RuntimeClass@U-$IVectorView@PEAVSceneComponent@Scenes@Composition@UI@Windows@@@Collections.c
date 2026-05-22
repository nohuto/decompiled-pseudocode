/*
 * XREFs of ??_G?$RuntimeClass@U?$IVectorView@PEAVSceneComponent@Scenes@Composition@UI@Windows@@@Collections@Foundation@Windows@@U?$IIterable@PEAVSceneComponent@Scenes@Composition@UI@Windows@@@234@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x180141960
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180095B64 (--3@YAXPEAX_K@Z.c)
 *     ??1?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U?$IVectorView@PEAVSceneComponent@Scenes@Composition@UI@Windows@@@Collections@Foundation@Windows@@U?$IIterable@PEAVSceneComponent@Scenes@Composition@UI@Windows@@@567@@Details@WRL@Microsoft@@UEAA@XZ @ 0x18014142C (--1-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U-$IVectorView@PEAVScene.c)
 */

void *__fastcall Microsoft::WRL::RuntimeClass<Windows::Foundation::Collections::IVectorView<Windows::UI::Composition::Scenes::SceneComponent *>,Windows::Foundation::Collections::IIterable<Windows::UI::Composition::Scenes::SceneComponent *>>::`scalar deleting destructor'(
        void *a1,
        volatile int *a2)
{
  char v2; // bl

  v2 = (char)a2;
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IVectorView<Windows::UI::Composition::Scenes::SceneComponent *>,Windows::Foundation::Collections::IIterable<Windows::UI::Composition::Scenes::SceneComponent *>>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IVectorView<Windows::UI::Composition::Scenes::SceneComponent *>,Windows::Foundation::Collections::IIterable<Windows::UI::Composition::Scenes::SceneComponent *>>(
    (__int64)a1,
    a2);
  if ( (v2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
