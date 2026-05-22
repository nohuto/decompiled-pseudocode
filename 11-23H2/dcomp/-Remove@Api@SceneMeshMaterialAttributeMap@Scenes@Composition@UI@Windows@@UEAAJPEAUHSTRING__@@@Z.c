/*
 * XREFs of ?Remove@Api@SceneMeshMaterialAttributeMap@Scenes@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@@Z @ 0x18018F150
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?AddDirtyRebuildableObject@CDevice@DirectComposition@@QEAAXPEAVCRebuildableObject@2@@Z @ 0x18003BDBC (-AddDirtyRebuildableObject@CDevice@DirectComposition@@QEAAXPEAVCRebuildableObject@2@@Z.c)
 *     ?Remove@?$HashMap@PEAUHSTRING__@@W4SceneAttributeSemantic@Scenes@Composition@UI@Windows@@U?$DefaultHash@PEAUHSTRING__@@@Internal@Collections@Foundation@6@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@89Foundation@6@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@89Foundation@6@U?$DefaultLifetimeTraits@W4SceneAttributeSemantic@Scenes@Composition@UI@Windows@@@89Foundation@6@U?$HashMapOptions@PEAUHSTRING__@@W4SceneAttributeSemantic@Scenes@Composition@UI@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@6@$0A@$00$0A@@89Foundation@6@@Internal@Collections@Foundation@Windows@@UEAAJPEAUHSTRING__@@@Z @ 0x18018EFF0 (-Remove@-$HashMap@PEAUHSTRING__@@W4SceneAttributeSemantic@Scenes@Composition@UI@Windows@@U-$Defa.c)
 */

__int64 __fastcall Windows::UI::Composition::Scenes::SceneMeshMaterialAttributeMap::Api::Remove(
        Windows::UI::Composition::Scenes::SceneMeshMaterialAttributeMap::Api *this,
        HSTRING a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbx
  unsigned int v5; // edi
  int v6; // eax
  __int64 v7; // rcx
  char v8; // al
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = (struct _RTL_CRITICAL_SECTION *)*((_QWORD *)this - 16);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v2);
  if ( (*((_BYTE *)this - 120) & 2) != 0 )
  {
    v6 = Windows::Foundation::Collections::Internal::HashMap<HSTRING__ *,enum Windows::UI::Composition::Scenes::SceneAttributeSemantic,Windows::Foundation::Collections::Internal::DefaultHash<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<enum Windows::UI::Composition::Scenes::SceneAttributeSemantic>,Windows::Foundation::Collections::Internal::HashMapOptions<HSTRING__ *,enum Windows::UI::Composition::Scenes::SceneAttributeSemantic,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,0,1,0>>::Remove(
           *((_QWORD *)this + 4),
           a2);
    v5 = v6;
    if ( v6 >= 0 )
    {
      v7 = *((_QWORD *)this + 3);
      if ( v7 )
      {
        v8 = *(_BYTE *)(v7 + 200);
        if ( (v8 & 1) == 0 )
        {
          *(_BYTE *)(v7 + 200) = v8 | 1;
          DirectComposition::CDevice::AddDirtyRebuildableObject(
            *(DirectComposition::CDevice **)(v7 + 208),
            (struct DirectComposition::CRebuildableObject *)(v7 + 184));
        }
      }
      v5 = 0;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xA1,
        (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtscenemeshmaterialattributemap.cpp",
        (const char *)(unsigned int)v6);
      DoStackCaptureDirect(v5, 0xFDu);
    }
  }
  else
  {
    v5 = -2147483629;
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
  }
  Microsoft::WRL2::ContextSession::EndApiEntry(v2);
  return v5;
}
