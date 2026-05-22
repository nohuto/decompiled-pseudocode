/*
 * XREFs of ?RebuildInternal@SceneMeshRendererComponent@Scenes@Composition@UI@Windows@@UEAAJXZ @ 0x1801336E0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@U?$ITypedEventHandler@PEAVHolographicCompositor@Internal@Composition@UI@Windows@@W4HolographicCompositorStatus@2345@@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000FA18 (-InternalRelease@-$ComPtr@U-$ITypedEventHandler@PEAVHolographicCompositor@Internal@Composition@U.c)
 *     ?ResourceSetBufferProperty@CDevice@DirectComposition@@QEAAXIIPEBX_K@Z @ 0x18004CEB0 (-ResourceSetBufferProperty@CDevice@DirectComposition@@QEAAXIIPEBX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$_Emplace_reallocate@AEBUSceneMeshMaterialAttributeData@@@?$vector@USceneMeshMaterialAttributeData@@V?$allocator@USceneMeshMaterialAttributeData@@@std@@@std@@QEAAPEAUSceneMeshMaterialAttributeData@@QEAU2@AEBU2@@Z @ 0x1801331BC (--$_Emplace_reallocate@AEBUSceneMeshMaterialAttributeData@@@-$vector@USceneMeshMaterialAttribute.c)
 *     ?First@SceneMeshMaterialAttributeMap@Scenes@Composition@UI@Windows@@QEAAJPEAPEAU?$IIterator@PEAU?$IKeyValuePair@PEAUHSTRING__@@W4SceneAttributeSemantic@Scenes@Composition@UI@Windows@@@Collections@Foundation@Windows@@@Collections@Foundation@5@@Z @ 0x18018D594 (-First@SceneMeshMaterialAttributeMap@Scenes@Composition@UI@Windows@@QEAAJPEAPEAU-$IIterator@PEAU.c)
 */

__int64 __fastcall Windows::UI::Composition::Scenes::SceneMeshRendererComponent::RebuildInternal(
        Windows::UI::Composition::Scenes::SceneMeshRendererComponent *this)
{
  char *v1; // rsi
  __int64 v2; // rax
  __int64 v4; // rbx
  int v5; // eax
  unsigned int v6; // ebx
  __int64 v7; // rdx
  __int64 v8; // rbx
  int (__fastcall *v9)(__int64, __int64 *); // rdi
  const WCHAR *StringRawBuffer; // rbx
  int v11; // edi
  BOOL v12; // ecx
  _BYTE *v13; // rdx
  __int64 v15; // [rsp+30h] [rbp-20h] BYREF
  unsigned __int64 v16; // [rsp+38h] [rbp-18h] BYREF
  HSTRING string[2]; // [rsp+40h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+38h]
  char v19; // [rsp+90h] [rbp+40h] BYREF
  UINT32 length; // [rsp+98h] [rbp+48h] BYREF
  int v21; // [rsp+A0h] [rbp+50h] BYREF
  __int64 v22; // [rsp+A8h] [rbp+58h] BYREF

  v22 = 0LL;
  v1 = (char *)this + 72;
  v2 = *((_QWORD *)this + 9);
  v15 = 0LL;
  *((_QWORD *)this + 10) = v2;
  v4 = *((_QWORD *)this + 8);
  Microsoft::WRL::ComPtr<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::Internal::HolographicCompositor *,enum Windows::UI::Composition::Internal::HolographicCompositorStatus>>::InternalRelease(&v22);
  v5 = Windows::UI::Composition::Scenes::SceneMeshMaterialAttributeMap::First(v4, &v22);
  v6 = v5;
  if ( v5 >= 0 )
  {
    if ( (*(int (__fastcall **)(__int64, char *))(*(_QWORD *)v22 + 56LL))(v22, &v19) >= 0 )
    {
      do
      {
        if ( !v19 )
          break;
        v8 = v22;
        v9 = *(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v22 + 48LL);
        Microsoft::WRL::ComPtr<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::Internal::HolographicCompositor *,enum Windows::UI::Composition::Internal::HolographicCompositorStatus>>::InternalRelease(&v15);
        if ( v9(v8, &v15) < 0 )
          break;
        v5 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v15 + 48LL))(v15, string);
        v6 = v5;
        if ( v5 < 0 )
        {
          v7 = 95LL;
          goto LABEL_24;
        }
        v5 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v15 + 56LL))(v15, &v21);
        v6 = v5;
        if ( v5 < 0 )
        {
          v7 = 96LL;
          goto LABEL_24;
        }
        length = 0;
        StringRawBuffer = WindowsGetStringRawBuffer(string[0], &length);
        CompareStringOrdinal(StringRawBuffer, length, L"EmissiveInput", 13, 0);
        v11 = CompareStringOrdinal(StringRawBuffer, length, L"NormalInput", 11, 0) == 2;
        if ( CompareStringOrdinal(StringRawBuffer, length, L"OcclusionInput", 14, 0) == 2 )
          v11 = 2;
        if ( CompareStringOrdinal(StringRawBuffer, length, L"BaseColorInput", 14, 0) == 2 )
          v11 = 3;
        if ( CompareStringOrdinal(StringRawBuffer, length, L"MetallicRoughnessInput", 22, 0) == 2 )
          v11 = 4;
        v12 = 0;
        if ( v21 != 3 )
          v12 = v21 == 4;
        v13 = (_BYTE *)*((_QWORD *)v1 + 1);
        v16 = __PAIR64__(v12, v11);
        if ( v13 == *((_BYTE **)v1 + 2) )
        {
          std::vector<SceneMeshMaterialAttributeData>::_Emplace_reallocate<SceneMeshMaterialAttributeData const &>(
            (__int64)v1,
            v13,
            &v16);
        }
        else
        {
          *(_QWORD *)v13 = v16;
          *((_QWORD *)v1 + 1) += 8LL;
        }
      }
      while ( (*(int (__fastcall **)(__int64, char *))(*(_QWORD *)v22 + 64LL))(v22, &v19) >= 0 );
    }
    DirectComposition::CDevice::ResourceSetBufferProperty(
      *(DirectComposition::CDevice **)(*((_QWORD *)this - 20) + 456LL),
      *((_DWORD *)this - 14),
      2,
      *(const void **)v1,
      (*((_QWORD *)v1 + 1) - *(_QWORD *)v1) & 0xFFFFFFFFFFFFFFF8uLL);
    *((_BYTE *)this + 16) &= ~1u;
    v6 = 0;
  }
  else
  {
    v7 = 84LL;
LABEL_24:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtscenemeshrenderercomponent.cpp",
      (const char *)(unsigned int)v5);
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::Internal::HolographicCompositor *,enum Windows::UI::Composition::Internal::HolographicCompositorStatus>>::InternalRelease(&v15);
  Microsoft::WRL::ComPtr<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::Internal::HolographicCompositor *,enum Windows::UI::Composition::Internal::HolographicCompositorStatus>>::InternalRelease(&v22);
  return v6;
}
