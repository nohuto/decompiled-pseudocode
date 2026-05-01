/*
 * XREFs of ??$MakeAndInitialize@VShoulderTapExperienceManagerFactory@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x180178730
 * Callers:
 *     ?CreateInstance@?$SimpleClassFactory@VShoulderTapExperienceManagerFactory@@$0A@@WRL@Microsoft@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x1801780D0 (-CreateInstance@-$SimpleClassFactory@VShoulderTapExperienceManagerFactory@@$0A@@WRL@Microsoft@@U.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIIndividualExperienceManagerFactory@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180175610 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIIn_ea_180175610.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIIndividualExperienceManagerFactory@@VFtmBase@23@@WRL@Microsoft@@QEAA@XZ @ 0x180178B3C (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIIndividualExperienceManagerFactory@@.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801C6900 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<ShoulderTapExperienceManagerFactory,IUnknown,>(
        volatile signed __int32 **a1)
{
  unsigned int v2; // ebx
  volatile signed __int32 *v3; // rax
  volatile signed __int32 *v4; // rdi

  v2 = 0;
  *a1 = 0LL;
  v3 = (volatile signed __int32 *)operator new(0x30uLL, (const struct std::nothrow_t *)&std::nothrow);
  v4 = v3;
  if ( v3 )
  {
    Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IIndividualExperienceManagerFactory,Microsoft::WRL::FtmBase>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IIndividualExperienceManagerFactory,Microsoft::WRL::FtmBase>(v3);
    *(_QWORD *)v4 = &ShoulderTapExperienceManagerFactory::`vftable'{for `IIndividualExperienceManagerFactory'};
    *((_QWORD *)v4 + 1) = &ScreenClippingExperienceManagerFactory::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
    *a1 = v4;
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v4 + 8LL))(v4);
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IIndividualExperienceManagerFactory,Microsoft::WRL::FtmBase>::Release(v4);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v2;
}
