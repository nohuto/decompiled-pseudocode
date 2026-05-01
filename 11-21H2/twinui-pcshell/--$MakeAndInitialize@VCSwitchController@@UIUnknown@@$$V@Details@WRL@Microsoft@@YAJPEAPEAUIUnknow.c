/*
 * XREFs of ??$MakeAndInitialize@VCSwitchController@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x18016282C
 * Callers:
 *     ?CreateInstance@?$SimpleClassFactory@VCSwitchController@@$0A@@WRL@Microsoft@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x1801627B0 (-CreateInstance@-$SimpleClassFactory@VCSwitchController@@$0A@@WRL@Microsoft@@UEAAJPEAUIUnknown@@.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x18007EB00 (InlineIsEqualGUID.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00U?$ImplementsMarker@VCWRLObjectWithSite@@@Details@23@VCImmersiveShellComponent@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1800803B0 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00U-$Impleme_ea_1800803B0.c)
 *     ?RegisterServiceInformation@CImmersiveShellComponent@@QEAAJPEBUISC_SERVICE@1@I@Z @ 0x1800B0B20 (-RegisterServiceInformation@CImmersiveShellComponent@@QEAAJPEBUISC_SERVICE@1@I@Z.c)
 *     ?CastToUnknown@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$0A@U?$ImplementsMarker@VCWRLObjectWithSite@@@Details@23@UIDropFeedback@@UITemporaryAppVisual@@UIImmersiveApplicationNotification@@UITempAppVisualHost@@@Details@WRL@Microsoft@@IEAAPEAUIUnknown@@XZ @ 0x1800B0FBC (-CastToUnknown@-$ImplementsHelper@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$0A@U-$ImplementsMarke.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCImmersiveShellComponentWithSite@@UIPerMonitorShellPositionerManager@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18012DC00 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCIm_ea_18012DC00.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VCImmersiveShellComponentWithSite@@UISwitchController@@@WRL@Microsoft@@QEAA@XZ @ 0x180162970 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@VCImmersiveShellComponent_ea_180162970.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801883B0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CSwitchController,IUnknown,>(__int64 *a1)
{
  _QWORD *v2; // rax
  _QWORD *v3; // rbx
  __int64 v4; // rsi
  int v5; // edi
  int *v6; // rdx
  __int64 v7; // rax
  int CanCastTo; // eax
  _DWORD *v10; // r11
  _OWORD v11[2]; // [rsp+30h] [rbp-48h] BYREF

  *a1 = 0LL;
  v2 = operator new(0x70uLL, (const struct std::nothrow_t *)&std::nothrow);
  v3 = v2;
  v4 = (__int64)v2;
  if ( !v2 )
    return (unsigned int)-2147024882;
  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CImmersiveShellComponentWithSite,ISwitchController>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CImmersiveShellComponentWithSite,ISwitchController>(v2);
  *v3 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CImmersiveShellComponentWithSite,ISwitchController>::`vftable'{for `Microsoft::WRL::Details::Selector<CImmersiveShellComponentWithSite,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<CImmersiveShellComponentWithSite>,ISwitchController>>'};
  v3[3] = &CSwitchController::`vftable'{for `IImmersiveShellComponent'};
  v3[4] = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CImmersiveShellComponentWithSite,ISwitchController>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IServiceProvider>'};
  v3[11] = &CSwitchController::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,ISwitchController>,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<CImmersiveShellComponentWithSite>,ISwitchController>>'};
  *((_DWORD *)v3 + 26) = 0;
  *((_DWORD *)v3 + 27) = 0;
  v11[0] = xmmword_18068D328;
  v11[1] = 0LL;
  v5 = CImmersiveShellComponent::RegisterServiceInformation(
         (CImmersiveShellComponent *)(v3 + 3),
         (const struct CImmersiveShellComponent::ISC_SERVICE *)v11,
         1uLL);
  if ( v5 >= 0 )
  {
    *a1 = 0LL;
    if ( !InlineIsEqualGUID(&GUID_00000000_0000_0000_c000_000000000046, &GUID_00000000_0000_0000_c000_000000000046) )
    {
      CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<CWRLObjectWithSite>,CImmersiveShellComponent>::CanCastTo(
                    v4,
                    v6,
                    a1);
      v5 = -2147467262;
      if ( CanCastTo == -2147467262 )
      {
        if ( !InlineIsEqualGUID(v10, &GUID_53b23e1b_25e2_4886_9fb6_744b8f15571c) )
          goto LABEL_5;
        *a1 = (__int64)(v3 + 11);
        v5 = 0;
      }
      else
      {
        v5 = CanCastTo;
        if ( CanCastTo < 0 )
          goto LABEL_5;
      }
      (*(void (__fastcall **)(__int64))(*(_QWORD *)*a1 + 8LL))(*a1);
      goto LABEL_5;
    }
    v7 = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<CWRLObjectWithSite>,IDropFeedback,ITemporaryAppVisual,IImmersiveApplicationNotification,ITempAppVisualHost>::CastToUnknown(v4);
    *a1 = v7;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
    v5 = 0;
  }
LABEL_5:
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CImmersiveShellComponentWithSite,IPerMonitorShellPositionerManager>::Release(v4);
  return (unsigned int)v5;
}
