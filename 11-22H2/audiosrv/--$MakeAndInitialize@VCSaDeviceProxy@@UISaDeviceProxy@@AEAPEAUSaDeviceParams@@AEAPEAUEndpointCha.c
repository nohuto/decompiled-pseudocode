/*
 * XREFs of ??$MakeAndInitialize@VCSaDeviceProxy@@UISaDeviceProxy@@AEAPEAUSaDeviceParams@@AEAPEAUEndpointCharacteristicsDescriptor@@PEAUIDeviceGraphObjectsStore@@AEAW4_AUDCLNT_SHAREMODE@@AEAKAEAUSaDeviceResourceParams@@AEAPEBU_GUID@@AEAPEBU8@@Details@WRL@Microsoft@@YAJPEAPEAUISaDeviceProxy@@AEAPEAUSaDeviceParams@@AEAPEAUEndpointCharacteristicsDescriptor@@$$QEAPEAUIDeviceGraphObjectsStore@@AEAW4_AUDCLNT_SHAREMODE@@AEAKAEAUSaDeviceResourceParams@@AEAPEBU_GUID@@7@Z @ 0x180010748
 * Callers:
 *     ?GetSaDevice@CDeviceGraphManager@@UEAAJPEAUEndpointCharacteristicsDescriptor@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@AEAUSaDeviceResourceParams@@PEBU_GUID@@4PEAPEAUISaDeviceProxy@@@Z @ 0x18000F110 (-GetSaDevice@CDeviceGraphManager@@UEAAJPEAUEndpointCharacteristicsDescriptor@@PEAUSaDeviceParams.c)
 * Callees:
 *     ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UISaDeviceProxy@@UIInspectable@@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$02@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UISaDeviceProxy@@UIInspectable@@@123@AEBU_GUID@@PEAPEAX@Z @ 0x180010854 (--$AsIID@V-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UISaDeviceProxy@@.c)
 *     ??0CSaDeviceProxy@@QEAA@XZ @ 0x18001108C (--0CSaDeviceProxy@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@CSaDeviceProxy@@QEAAJPEBUSaDeviceParams@@PEAUEndpointCharacteristicsDescriptor@@PEAUIDeviceGraphObjectsStore@@W4_AUDCLNT_SHAREMODE@@KAEAUSaDeviceResourceParams@@PEBU_GUID@@5@Z @ 0x18001184C (-RuntimeClassInitialize@CSaDeviceProxy@@QEAAJPEBUSaDeviceParams@@PEAUEndpointCharacteristicsDesc.c)
 *     ?Release@CSaDeviceProxy@@UEAAKXZ @ 0x180012C70 (-Release@CSaDeviceProxy@@UEAAKXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180067078 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??1?$MakeAllocator@VEffectPackConfigurationManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800CF388 (--1-$MakeAllocator@VEffectPackConfigurationManager@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??1?$ComPtr@VCSaDeviceProxy@@@WRL@Microsoft@@QEAA@XZ @ 0x1801047CC (--1-$ComPtr@VCSaDeviceProxy@@@WRL@Microsoft@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CSaDeviceProxy,ISaDeviceProxy,SaDeviceParams * &,EndpointCharacteristicsDescriptor * &,IDeviceGraphObjectsStore *,enum _AUDCLNT_SHAREMODE &,unsigned long &,SaDeviceResourceParams &,_GUID const * &,_GUID const * &>(
        _QWORD *a1,
        const struct SaDeviceParams **a2,
        struct EndpointCharacteristicsDescriptor **a3,
        struct IDeviceGraphObjectsStore **a4,
        enum _AUDCLNT_SHAREMODE *a5,
        unsigned int *a6,
        struct SaDeviceResourceParams *a7,
        const struct _GUID **a8,
        const struct _GUID **a9)
{
  CSaDeviceProxy *v13; // rax
  CSaDeviceProxy *v14; // rbx
  int v15; // edi
  CSaDeviceProxy *v17; // [rsp+50h] [rbp-28h] BYREF
  CSaDeviceProxy *v18; // [rsp+80h] [rbp+8h] BYREF

  *a1 = 0LL;
  v13 = (CSaDeviceProxy *)operator new(0x88uLL, (const struct std::nothrow_t *)&std::nothrow);
  v18 = v13;
  v17 = v13;
  if ( !v13 )
  {
    v15 = -2147024882;
LABEL_8:
    Microsoft::WRL::Details::MakeAllocator<EffectPackConfigurationManager>::~MakeAllocator<EffectPackConfigurationManager>(&v18);
    return (unsigned int)v15;
  }
  v14 = CSaDeviceProxy::CSaDeviceProxy(v13);
  v17 = v14;
  v18 = 0LL;
  v15 = CSaDeviceProxy::RuntimeClassInitialize(v14, *a2, *a3, *a4, *a5, *a6, a7, *a8, *a9);
  if ( v15 < 0 )
  {
    Microsoft::WRL::ComPtr<CSaDeviceProxy>::~ComPtr<CSaDeviceProxy>(&v17);
    goto LABEL_8;
  }
  v15 = Microsoft::WRL::Details::RuntimeClassBaseT<3>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,ISaDeviceProxy,IInspectable>>(
          v14,
          &GUID_1b8f81be_457f_4a54_867b_8b6a4c29fdb0,
          a1);
  if ( v14 )
    CSaDeviceProxy::Release(v14);
  return (unsigned int)v15;
}
