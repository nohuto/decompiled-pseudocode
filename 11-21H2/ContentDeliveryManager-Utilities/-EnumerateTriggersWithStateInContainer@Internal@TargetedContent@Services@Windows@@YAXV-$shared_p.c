/*
 * XREFs of ?EnumerateTriggersWithStateInContainer@Internal@TargetedContent@Services@Windows@@YAXV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@W4TargetedContentTriggerState@1234@V?$function@$$A6A_NAEAVPropertySetHelper@Triggers@CreativeFramework@@@Z@6@@Z @ 0x1800AADA4
 * Callers:
 *     ?AllTriggersExecutedForTriggerType@Internal@TargetedContent@Services@Windows@@YA_NPEAUITargetedContentTriggerInternal@1234@_N@Z @ 0x1800A9544 (-AllTriggersExecutedForTriggerType@Internal@TargetedContent@Services@Windows@@YA_NPEAUITargetedC.c)
 *     ?GetTriggeredRegistration@Internal@TargetedContent@Services@Windows@@YAJV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@PEAPEAU?$IVector@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@Collections@Foundation@4@@Z @ 0x1800AC514 (-GetTriggeredRegistration@Internal@TargetedContent@Services@Windows@@YAJV-$shared_ptr@VISettings.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180004094 (--2@YAPEAX_K@Z.c)
 *     ?_Xbad_alloc@std@@YAXXZ @ 0x1800042A8 (-_Xbad_alloc@std@@YAXXZ.c)
 *     __security_check_cookie @ 0x180021DB0 (__security_check_cookie.c)
 *     ??1?$shared_ptr@VPublishSystemStateService@Actions@CreativeFramework@@@std@@QEAA@XZ @ 0x180057E48 (--1-$shared_ptr@VPublishSystemStateService@Actions@CreativeFramework@@@std@@QEAA@XZ.c)
 *     ?_Reset0@?$_Ptr_base@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@QEAAXPEAVISettingsContainer@CommonHelper@CreativeFramework@@PEAV_Ref_count_base@2@@Z @ 0x1800A3EB8 (-_Reset0@-$_Ptr_base@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@QEAAXPEAVISetting.c)
 *     ?ResolveNameFromTriggerState@Internal@TargetedContent@Services@Windows@@YAPEB_WW4TargetedContentTriggerState@1234@@Z @ 0x1800A6700 (-ResolveNameFromTriggerState@Internal@TargetedContent@Services@Windows@@YAPEB_WW4TargetedContent.c)
 *     ?EnumerateAllTriggersInContainer@Internal@TargetedContent@Services@Windows@@YA_NV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@V?$function@$$A6A_NV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@AEAVPropertySetHelper@Triggers@CreativeFramework@@@Z@6@@Z @ 0x1800AA300 (-EnumerateAllTriggersInContainer@Internal@TargetedContent@Services@Windows@@YA_NV-$shared_ptr@VI.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800ED700 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall Windows::Services::TargetedContent::Internal::EnumerateTriggersWithStateInContainer(
        __int64 *a1,
        __int64 a2,
        __int64 a3)
{
  char *v5; // rax
  __int64 v6; // r8
  __int64 v7; // rdx
  __int64 result; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  _QWORD v11[2]; // [rsp+20h] [rbp-19h] BYREF
  __int128 v12; // [rsp+30h] [rbp-9h] BYREF
  __int128 v13; // [rsp+40h] [rbp+7h]
  __int64 *v14; // [rsp+50h] [rbp+17h]
  _BYTE v15[24]; // [rsp+58h] [rbp+1Fh] BYREF
  char *v16; // [rsp+70h] [rbp+37h]
  __int64 v17; // [rsp+78h] [rbp+3Fh]

  v14 = a1;
  v17 = a3;
  v11[0] = Windows::Services::TargetedContent::Internal::ResolveNameFromTriggerState(2);
  v11[1] = v15;
  *(_QWORD *)&v13 = v11;
  *((_QWORD *)&v13 + 1) = a3;
  v16 = 0LL;
  v5 = (char *)operator new(0x20uLL);
  if ( !v5 )
    std::_Xbad_alloc();
  *(_QWORD *)v5 = off_180106750;
  *(_OWORD *)(v5 + 8) = v13;
  v16 = v5;
  v12 = 0LL;
  v6 = a1[1];
  v7 = *a1;
  if ( v6 )
    _InterlockedIncrement((volatile signed __int32 *)(v6 + 8));
  std::_Ptr_base<CreativeFramework::CommonHelper::ISettingsContainer>::_Reset0(&v12, v7, v6);
  Windows::Services::TargetedContent::Internal::EnumerateAllTriggersInContainer((__int64 *)&v12, (__int64)v15);
  result = std::shared_ptr<CreativeFramework::Actions::PublishSystemStateService>::~shared_ptr<CreativeFramework::Actions::PublishSystemStateService>((__int64)a1);
  v10 = *(_QWORD *)(a3 + 24);
  if ( v10 )
  {
    LOBYTE(v9) = v10 != a3;
    result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v10 + 32LL))(v10, v9);
    *(_QWORD *)(a3 + 24) = 0LL;
  }
  return result;
}
