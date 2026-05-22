/*
 * XREFs of ?First@?$SimpleVectorView@PEAVSceneNode@Scenes@Composition@UI@Windows@@U?$IVector@PEAVSceneNode@Scenes@Composition@UI@Windows@@@Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVSceneNode@Scenes@Composition@UI@Windows@@@Internal@785@UNoVersionTag@Internal@785@$0A@@Internal@Collections@Foundation@Windows@@UEAAJPEAPEAU?$IIterator@PEAVSceneNode@Scenes@Composition@UI@Windows@@@345@@Z @ 0x180142600
 * Callers:
 *     <none>
 * Callees:
 *     ??R_lambda_10121672dcf7646b29a4574b1ebda7b2_@@QEBAJXZ @ 0x180141568 (--R_lambda_10121672dcf7646b29a4574b1ebda7b2_@@QEBAJXZ.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::SimpleVectorView<Windows::UI::Composition::Scenes::SceneNode *,Windows::Foundation::Collections::IVector<Windows::UI::Composition::Scenes::SceneNode *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::UI::Composition::Scenes::SceneNode *>,Windows::Foundation::Collections::Internal::NoVersionTag,0>::First(
        __int64 a1,
        _QWORD *a2)
{
  int v2; // ebx
  __int64 v4[3]; // [rsp+20h] [rbp-18h] BYREF
  _QWORD *v5; // [rsp+48h] [rbp+10h] BYREF

  v5 = a2;
  *a2 = 0LL;
  v2 = *(_DWORD *)(a1 + 32);
  v4[0] = a1 - 16;
  v4[1] = (__int64)&v5;
  if ( v2 >= 0 )
    return (unsigned int)_lambda_10121672dcf7646b29a4574b1ebda7b2_::operator()(v4);
  else
    RoOriginateError((unsigned int)v2, 0LL);
  return (unsigned int)v2;
}
