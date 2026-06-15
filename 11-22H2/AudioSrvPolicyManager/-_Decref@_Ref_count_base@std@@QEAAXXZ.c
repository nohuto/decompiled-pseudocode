/*
 * XREFs of ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x1800025A0
 * Callers:
 *     ?QueueHostedAppInteractivityChangedWorkItem@CHostedAppInteractivityManager@@AEAAJPEBG_KKH@Z @ 0x1800023D0 (-QueueHostedAppInteractivityChangedWorkItem@CHostedAppInteractivityManager@@AEAAJPEBG_KKH@Z.c)
 *     ?QueueGenericWorkItem@@YAJV?$function@$$A6AXXZ@std@@@Z @ 0x180002610 (-QueueGenericWorkItem@@YAJV-$function@$$A6AXXZ@std@@@Z.c)
 *     ?UpdateStreamClassGainStage@CStreamClassPolicyGains@@QEAAJK_NAEBV?$shared_ptr@VDuckingDescriptor@@@std@@HPEAUIDuckingController@@PEAH@Z @ 0x18000BDF0 (-UpdateStreamClassGainStage@CStreamClassPolicyGains@@QEAAJK_NAEBV-$shared_ptr@VDuckingDescriptor.c)
 *     ??4?$shared_ptr@V?$function@$$A6AXXZ@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800156E4 (--4-$shared_ptr@V-$function@$$A6AXXZ@std@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     _lambda_bc5d681da67d9384ebd56f302790ab0c_::__lambda_bc5d681da67d9384ebd56f302790ab0c_ @ 0x180016130 (_lambda_bc5d681da67d9384ebd56f302790ab0c_--__lambda_bc5d681da67d9384ebd56f302790ab0c_.c)
 *     std::function_void___cdecl(void)_::function_void___cdecl(void)___lambda_80aa732c9f0abca8142808a505c7029f__0_ @ 0x18001AF4C (std--function_void___cdecl(void)_--function_void___cdecl(void)___lambda_80aa732c9f0abca8142808a5.c)
 *     ??1CDuckingManager@@UEAA@XZ @ 0x18001C034 (--1CDuckingManager@@UEAA@XZ.c)
 *     ?SetDuckingGainForId@CWindowsPolicyManager@@UEAAJKPEBGM@Z @ 0x18001E900 (-SetDuckingGainForId@CWindowsPolicyManager@@UEAAJKPEBGM@Z.c)
 *     ??$?4VDuckingDescriptor@@U?$default_delete@VDuckingDescriptor@@@std@@@?$shared_ptr@VDuckingDescriptor@@@std@@QEAAAEAV01@$$QEAV?$unique_ptr@VDuckingDescriptor@@U?$default_delete@VDuckingDescriptor@@@std@@@1@@Z @ 0x18001F550 (--$-4VDuckingDescriptor@@U-$default_delete@VDuckingDescriptor@@@std@@@-$shared_ptr@VDuckingDescr.c)
 *     ??$MakeAndInitialize@VCPBMStreamClassVolumeGainStage@@V1@PEBU_GUID@@V?$shared_ptr@UIDuckingDescriptor@@@std@@@Details@WRL@Microsoft@@YAJPEAPEAVCPBMStreamClassVolumeGainStage@@$$QEAPEBU_GUID@@$$QEAV?$shared_ptr@UIDuckingDescriptor@@@std@@@Z @ 0x18001F658 (--$MakeAndInitialize@VCPBMStreamClassVolumeGainStage@@V1@PEBU_GUID@@V-$shared_ptr@UIDuckingDescr.c)
 *     ??1CPBMStreamClassVolumeGainStage@@UEAA@XZ @ 0x1800203D8 (--1CPBMStreamClassVolumeGainStage@@UEAA@XZ.c)
 *     ??1DeactivatableDuckingDescriptor@@UEAA@XZ @ 0x180020410 (--1DeactivatableDuckingDescriptor@@UEAA@XZ.c)
 *     _lambda_4d82e2a18adfd26d1e0b2998ee994ec4_::operator() @ 0x180020840 (_lambda_4d82e2a18adfd26d1e0b2998ee994ec4_--operator().c)
 *     ??_G_WorkTask@@QEAAPEAXI@Z @ 0x1800210F4 (--_G_WorkTask@@QEAAPEAXI@Z.c)
 *     ?QueueWorkItem@CSerialWorkQueue@@QEAAJV?$function@$$A6AXXZ@std@@@Z @ 0x1800228D0 (-QueueWorkItem@CSerialWorkQueue@@QEAAJV-$function@$$A6AXXZ@std@@@Z.c)
 *     ?RuntimeClassInitialize@CDuckingManager@@QEAAJXZ @ 0x180022BD0 (-RuntimeClassInitialize@CDuckingManager@@QEAAJXZ.c)
 *     std::function_void___cdecl(void)_::function_void___cdecl(void)___lambda_bc5d681da67d9384ebd56f302790ab0c__0_ @ 0x18002BE2C (std--function_void___cdecl(void)_--function_void___cdecl(void)___lambda_bc5d681da67d9384ebd56f30.c)
 *     ?ProcessInteractivityNotification@CApplicationManager@@QEAAJPEBG_KW4__MIDL___MIDL_itf_playbackmanagerrpc_0000_0000_0001@@K@Z @ 0x18002DFA0 (-ProcessInteractivityNotification@CApplicationManager@@QEAAJPEBG_KW4__MIDL___MIDL_itf_playbackma.c)
 *     std::_Func_impl_no_alloc__lambda_55bbdd01f859b2b681de89e14de0bd19__void_::_Delete_this @ 0x18002FCB0 (std--_Func_impl_no_alloc__lambda_55bbdd01f859b2b681de89e14de0bd19__void_--_Delete_this.c)
 *     ?OnAppClosed@CPlaybackManager@@QEAAJPEBG_KK@Z @ 0x18003096C (-OnAppClosed@CPlaybackManager@@QEAAJPEBG_KK@Z.c)
 *     PbmAllowMediaPlaybackForApp @ 0x180031380 (PbmAllowMediaPlaybackForApp.c)
 *     PbmReportApplicationState @ 0x180031B50 (PbmReportApplicationState.c)
 *     ??1DuckingDescriptorAndId@@QEAA@XZ @ 0x180034210 (--1DuckingDescriptorAndId@@QEAA@XZ.c)
 *     ??1CGenericWorkItem@@UEAA@XZ @ 0x18003C198 (--1CGenericWorkItem@@UEAA@XZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180048B60 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall std::_Ref_count_base::_Decref(std::_Ref_count_base *this)
{
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)this + 2, 0xFFFFFFFF) == 1 )
  {
    (**(void (__fastcall ***)(std::_Ref_count_base *))this)(this);
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)this + 3, 0xFFFFFFFF) == 1 )
      (*(void (__fastcall **)(std::_Ref_count_base *))(*(_QWORD *)this + 8LL))(this);
  }
}
