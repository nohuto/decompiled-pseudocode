/*
 * XREFs of ??$MakeAndInitialize@VUiaEndpointNotifierCallback@Composition@UI@Windows@@UIUiaEndpointNotifierCallback@@PEAVCompositionIsland@234@AEAU_GUID@@@Details@WRL@Microsoft@@YAJPEAPEAUIUiaEndpointNotifierCallback@@$$QEAPEAVCompositionIsland@Composition@UI@Windows@@AEAU_GUID@@@Z @ 0x180088A00
 * Callers:
 *     ?RegisterUIAEndpoint_Callback@CompositionIsland@Composition@UI@Windows@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180088900 (-RegisterUIAEndpoint_Callback@CompositionIsland@Composition@UI@Windows@@CAXPEAU_TP_CALLBACK_INST.c)
 * Callees:
 *     ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIUiaEndpointNotifierCallback@@VFtmBase@23@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$02@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIUiaEndpointNotifierCallback@@VFtmBase@23@@123@AEBU_GUID@@PEAPEAX@Z @ 0x18002BE98 (--$AsIID@V-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIUiaEndpointNoti.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18004400C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIUiaEndpointNotifierCallback@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800863F0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIUiaEndpointNotif.c)
 *     ??0UiaEndpointNotifierCallback@Composition@UI@Windows@@QEAA@XZ @ 0x180088A94 (--0UiaEndpointNotifierCallback@Composition@UI@Windows@@QEAA@XZ.c)
 *     ??1?$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800A1230 (--1-$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<Windows::UI::Composition::UiaEndpointNotifierCallback,IUiaEndpointNotifierCallback,Windows::UI::Composition::CompositionIsland *,_GUID &>(
        _QWORD *a1,
        _QWORD *a2,
        __int128 *a3)
{
  Windows::UI::Composition::UiaEndpointNotifierCallback *v6; // rax
  __int64 v7; // rax
  __int128 v8; // xmm0
  __int64 v9; // rbx
  unsigned int v10; // edi
  Windows::UI::Composition::UiaEndpointNotifierCallback *v12; // [rsp+30h] [rbp+8h] BYREF

  *a1 = 0LL;
  v6 = (Windows::UI::Composition::UiaEndpointNotifierCallback *)DefaultHeap::Alloc(0x60uLL);
  v12 = v6;
  if ( v6 )
  {
    v7 = Windows::UI::Composition::UiaEndpointNotifierCallback::UiaEndpointNotifierCallback(v6);
    v8 = *a3;
    v9 = v7;
    *(_QWORD *)(v7 + 72) = *a2;
    *(_OWORD *)(v7 + 80) = v8;
    v10 = Microsoft::WRL::Details::RuntimeClassBaseT<3>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IUiaEndpointNotifierCallback,Microsoft::WRL::FtmBase>>(
            v7,
            &GUID_a0619dc9_c18e_43dc_ab1c_ea9a0df90597,
            a1);
    if ( v9 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IUiaEndpointNotifierCallback,Microsoft::WRL::FtmBase>::Release(v9);
    return v10;
  }
  else
  {
    Microsoft::WRL::Details::MakeAllocator<Windows::UI::Composition::InjectionAnimation>::~MakeAllocator<Windows::UI::Composition::InjectionAnimation>(&v12);
    return 2147942414LL;
  }
}
