/*
 * XREFs of ?Initialize@?$SimpleKeyValuePair@PEAUHSTRING__@@W4SceneAttributeSemantic@Scenes@Composition@UI@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@6@U?$DefaultLifetimeTraits@W4SceneAttributeSemantic@Scenes@Composition@UI@Windows@@@89Foundation@6@$00@Internal@Collections@Foundation@Windows@@AEAAJAEBQEAUHSTRING__@@AEBW4SceneAttributeSemantic@Scenes@Composition@UI@5@@Z @ 0x18018E324
 * Callers:
 *     ?Make@?$SimpleKeyValuePair@PEAUHSTRING__@@W4SceneAttributeSemantic@Scenes@Composition@UI@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@6@U?$DefaultLifetimeTraits@W4SceneAttributeSemantic@Scenes@Composition@UI@Windows@@@89Foundation@6@$00@Internal@Collections@Foundation@Windows@@SAJAEBQEAUHSTRING__@@AEBW4SceneAttributeSemantic@Scenes@Composition@UI@5@PEAPEAV12345@@Z @ 0x18018EAEC (-Make@-$SimpleKeyValuePair@PEAUHSTRING__@@W4SceneAttributeSemantic@Scenes@Composition@UI@Windows.c)
 * Callees:
 *     ??$?0PEAUHSTRING__@@@?$AutoValue@PEAUHSTRING__@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@@XWinRT@@QEAA@AEBQEAUHSTRING__@@PEAJ@Z @ 0x180149BC4 (--$-0PEAUHSTRING__@@@-$AutoValue@PEAUHSTRING__@@U-$DefaultLifetimeTraits@PEAUHSTRING__@@@Interna.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::SimpleKeyValuePair<HSTRING__ *,enum Windows::UI::Composition::Scenes::SceneAttributeSemantic,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<enum Windows::UI::Composition::Scenes::SceneAttributeSemantic>,1>::Initialize(
        __int64 a1,
        HSTRING *a2,
        int *a3)
{
  unsigned int v5; // ebx
  HSTRING v6; // rcx
  int v7; // edx
  HSTRING string; // [rsp+20h] [rbp-18h] BYREF
  HRESULT v10; // [rsp+58h] [rbp+20h] BYREF

  v10 = 0;
  XWinRT::AutoValue<HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>>::AutoValue<HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>>(
    &string,
    a2,
    &v10);
  v5 = v10;
  if ( v10 < 0 )
  {
    v6 = string;
  }
  else
  {
    v6 = *(HSTRING *)(a1 + 64);
    v5 = 0;
    v7 = *a3;
    *(_QWORD *)(a1 + 64) = string;
    string = v6;
    *(_DWORD *)(a1 + 72) = v7;
  }
  WindowsDeleteString(v6);
  return v5;
}
