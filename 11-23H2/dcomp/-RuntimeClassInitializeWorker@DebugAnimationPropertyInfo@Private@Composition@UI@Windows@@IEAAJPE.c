/*
 * XREFs of ?RuntimeClassInitializeWorker@DebugAnimationPropertyInfo@Private@Composition@UI@Windows@@IEAAJPEAVCompositor@345@PEAVDebugReference@2345@_KPEAUHSTRING__@@IPEAUIPropertyValue@Foundation@5@W4AnimationDebugPropertyInfoType@2345@@Z @ 0x1801A33A8
 * Callers:
 *     ??$MakeAndInitialize2@VDebugAnimationPropertyInfo@Private@Composition@UI@Windows@@V12345@PEAVCompositor@345@PEAVDebugReference@2345@AEA_KPEAUHSTRING__@@AEAIPEAUIPropertyValue@Foundation@5@@Details@WRL2@Microsoft@@YAJPEAPEAVDebugAnimationPropertyInfo@Private@Composition@UI@Windows@@$$QEAPEAVCompositor@567@$$QEAPEAVDebugReference@4567@AEA_K$$QEAPEAUHSTRING__@@AEAI$$QEAPEAUIPropertyValue@Foundation@7@@Z @ 0x18019BDEC (--$MakeAndInitialize2@VDebugAnimationPropertyInfo@Private@Composition@UI@Windows@@V12345@PEAVCom.c)
 *     ??$MakeAndInitialize2@VDebugAnimationPropertyInfo@Private@Composition@UI@Windows@@V12345@PEAVCompositor@345@PEAVDebugReference@2345@AEA_KPEAUHSTRING__@@HPEAUIPropertyValue@Foundation@5@@Details@WRL2@Microsoft@@YAJPEAPEAVDebugAnimationPropertyInfo@Private@Composition@UI@Windows@@$$QEAPEAVCompositor@567@$$QEAPEAVDebugReference@4567@AEA_K$$QEAPEAUHSTRING__@@$$QEAH$$QEAPEAUIPropertyValue@Foundation@7@@Z @ 0x18019BEF4 (--$MakeAndInitialize2@VDebugAnimationPropertyInfo@Private@Composition@UI@Windows@@V_ea_18019BEF4.c)
 *     ??$MakeAndInitialize2@VDebugAnimationPropertyInfo@Private@Composition@UI@Windows@@V12345@PEAVCompositor@345@PEAVDebugReference@2345@HPEAUHSTRING__@@HPEAUIPropertyValue@Foundation@5@@Details@WRL2@Microsoft@@YAJPEAPEAVDebugAnimationPropertyInfo@Private@Composition@UI@Windows@@$$QEAPEAVCompositor@567@$$QEAPEAVDebugReference@4567@$$QEAH$$QEAPEAUHSTRING__@@3$$QEAPEAUIPropertyValue@Foundation@7@@Z @ 0x18019BFFC (--$MakeAndInitialize2@VDebugAnimationPropertyInfo@Private@Composition@UI@Windows@@V_ea_18019BFFC.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalAddRef@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18001EE7C (-InternalAddRef@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 *     ?Set@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEAUHSTRING__@@@Z @ 0x18004434C (-Set@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEAUHSTRING__@@@Z.c)
 *     ?RuntimeClassInitialize@CompositionObject@Composition@UI@Windows@@QEAAJPEAVCompositor@234@@Z @ 0x180055F60 (-RuntimeClassInitialize@CompositionObject@Composition@UI@Windows@@QEAAJPEAVCompositor@234@@Z.c)
 *     ?InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18007BB44 (-InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 *     ??4?$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@QEAAAEAV012@PEAUIPropertyValue@Foundation@Windows@@@Z @ 0x1801A30E8 (--4-$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@QEAAAEAV012@PEAUIPropertyValue@F.c)
 */

__int64 __fastcall Windows::UI::Composition::Private::DebugAnimationPropertyInfo::RuntimeClassInitializeWorker(
        __int64 a1,
        struct Windows::UI::Composition::Compositor *a2,
        Microsoft::WRL2::NestableRuntimeClass *a3,
        __int64 a4,
        HSTRING a5,
        int a6,
        __int64 a7)
{
  int v10; // eax
  unsigned int v11; // esi
  Microsoft::WRL2::NestableRuntimeClass *v13; // rcx
  int v14; // eax
  unsigned int v15; // edi
  __int64 v16; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v10 = Windows::UI::Composition::CompositionObject::RuntimeClassInitialize(
          (Windows::UI::Composition::CompositionObject *)a1,
          a2);
  v11 = v10;
  if ( v10 >= 0 )
  {
    if ( *(Microsoft::WRL2::NestableRuntimeClass **)(a1 + 144) != a3 )
    {
      if ( a3 )
        Microsoft::WRL2::NestableRuntimeClass::InternalAddRef(a3);
      v13 = *(Microsoft::WRL2::NestableRuntimeClass **)(a1 + 144);
      *(_QWORD *)(a1 + 144) = a3;
      if ( v13 )
        Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v13);
    }
    *(_QWORD *)(a1 + 152) = a4;
    v14 = Microsoft::WRL::Wrappers::HString::Set((HSTRING *)(a1 + 160), &a5);
    v15 = v14;
    if ( v14 >= 0 )
    {
      v16 = a7;
      *(_DWORD *)(a1 + 168) = a6;
      Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::operator=((__int64 *)(a1 + 176), v16);
      *(_DWORD *)(a1 + 184) = 0;
      return 0LL;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x3A,
        (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtdebuganimationpropertyinfo.cpp",
        (const char *)(unsigned int)v14);
      return v15;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x36,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtdebuganimationpropertyinfo.cpp",
      (const char *)(unsigned int)v10);
    return v11;
  }
}
