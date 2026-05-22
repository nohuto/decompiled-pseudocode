/*
 * XREFs of ?Insert@SceneMeshMaterialAttributeMap@Scenes@Composition@UI@Windows@@QEAAJPEAUHSTRING__@@W4SceneAttributeSemantic@2345@PEAE@Z @ 0x18018E5DC
 * Callers:
 *     ?Insert@Api@SceneMeshMaterialAttributeMap@Scenes@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@W4SceneAttributeSemantic@3456@PEAE@Z @ 0x18018E530 (-Insert@Api@SceneMeshMaterialAttributeMap@Scenes@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@W4S.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AddDirtyRebuildableObject@CDevice@DirectComposition@@QEAAXPEAVCRebuildableObject@2@@Z @ 0x18003BDBC (-AddDirtyRebuildableObject@CDevice@DirectComposition@@QEAAXPEAVCRebuildableObject@2@@Z.c)
 *     ?Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ @ 0x1801097EC (-Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ.c)
 *     ?Insert@?$HashMap@PEAUHSTRING__@@W4SceneAttributeSemantic@Scenes@Composition@UI@Windows@@U?$DefaultHash@PEAUHSTRING__@@@Internal@Collections@Foundation@6@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@89Foundation@6@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@89Foundation@6@U?$DefaultLifetimeTraits@W4SceneAttributeSemantic@Scenes@Composition@UI@Windows@@@89Foundation@6@U?$HashMapOptions@PEAUHSTRING__@@W4SceneAttributeSemantic@Scenes@Composition@UI@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@6@$0A@$00$0A@@89Foundation@6@@Internal@Collections@Foundation@Windows@@UEAAJPEAUHSTRING__@@W4SceneAttributeSemantic@Scenes@Composition@UI@5@PEAE@Z @ 0x18018E3A0 (-Insert@-$HashMap@PEAUHSTRING__@@W4SceneAttributeSemantic@Scenes@Composition@UI@Windows@@U-$Defa.c)
 */

__int64 __fastcall Windows::UI::Composition::Scenes::SceneMeshMaterialAttributeMap::Insert(
        __int64 a1,
        HSTRING a2,
        int a3,
        _BYTE *a4)
{
  const WCHAR *StringRawBuffer; // r14
  wchar_t **v9; // rbx
  const char *v10; // rax
  __int64 v11; // rdx
  unsigned int v12; // ebx
  int v14; // eax
  __int64 v15; // rcx
  char v16; // al
  const char *v17; // [rsp+28h] [rbp-30h]
  UINT32 v18[10]; // [rsp+30h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v18[0] = 0;
  StringRawBuffer = WindowsGetStringRawBuffer(a2, v18);
  v9 = off_1801DC3A0;
  while ( CompareStringOrdinal(StringRawBuffer, -1, *v9, -1, 0) != 2 )
  {
    if ( ++v9 == (wchar_t **)&Windows::UI::Composition::Interactions::CompositionInteractionSourceCollection::s_InterfaceType )
    {
      v10 = "This string is not valid as an key input to SceneMeshMaterialAttributeMap.";
      v11 = 140LL;
      goto LABEL_5;
    }
  }
  if ( (unsigned int)(a3 - 3) > 1 )
  {
    v10 = "This attribute is not valid as an value input to SceneMeshMaterialAttributeMap.";
    v11 = 147LL;
LABEL_5:
    v12 = -2147024809;
    wil::details::in1diag3::Return_HrMsg(
      retaddr,
      (void *)v11,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtscenemeshmaterialattributemap.cpp",
      (const char *)0x80070057LL,
      (int)v10,
      v17);
    return v12;
  }
  v14 = Windows::Foundation::Collections::Internal::HashMap<HSTRING__ *,enum Windows::UI::Composition::Scenes::SceneAttributeSemantic,Windows::Foundation::Collections::Internal::DefaultHash<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<enum Windows::UI::Composition::Scenes::SceneAttributeSemantic>,Windows::Foundation::Collections::Internal::HashMapOptions<HSTRING__ *,enum Windows::UI::Composition::Scenes::SceneAttributeSemantic,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,0,1,0>>::Insert(
          *(_QWORD *)(a1 + 184),
          a2,
          a3,
          a4);
  v12 = v14;
  if ( v14 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x96,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtscenemeshmaterialattributemap.cpp",
      (const char *)(unsigned int)v14);
    return v12;
  }
  v15 = *(_QWORD *)(a1 + 176);
  if ( v15 )
  {
    v16 = *(_BYTE *)(v15 + 200);
    if ( (v16 & 1) == 0 )
    {
      *(_BYTE *)(v15 + 200) = v16 | 1;
      DirectComposition::CDevice::AddDirtyRebuildableObject(
        *(DirectComposition::CDevice **)(v15 + 208),
        (struct DirectComposition::CRebuildableObject *)(v15 + 184));
    }
  }
  return 0LL;
}
