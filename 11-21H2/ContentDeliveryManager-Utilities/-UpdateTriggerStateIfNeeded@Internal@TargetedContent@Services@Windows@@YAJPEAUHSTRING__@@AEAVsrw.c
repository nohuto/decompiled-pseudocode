/*
 * XREFs of ?UpdateTriggerStateIfNeeded@Internal@TargetedContent@Services@Windows@@YAJPEAUHSTRING__@@AEAVsrwlock@wil@@V?$function@$$A6AXPEAUITargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@W4TargetedContentTriggerState@2345@1@Z@std@@@Z @ 0x1800AE2B8
 * Callers:
 *     _lambda_4f27881777b3828299edd9a0e9cb6746_::operator() @ 0x18009B508 (_lambda_4f27881777b3828299edd9a0e9cb6746_--operator().c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180004094 (--2@YAPEAX_K@Z.c)
 *     ?_Xbad_alloc@std@@YAXXZ @ 0x1800042A8 (-_Xbad_alloc@std@@YAXXZ.c)
 *     __security_check_cookie @ 0x180021DB0 (__security_check_cookie.c)
 *     ?EnumerateAllTriggersInContainer@Internal@TargetedContent@Services@Windows@@YA_NV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@V?$function@$$A6A_NV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@AEAVPropertySetHelper@Triggers@CreativeFramework@@@Z@6@@Z @ 0x1800AA300 (-EnumerateAllTriggersInContainer@Internal@TargetedContent@Services@Windows@@YA_NV-$shared_ptr@VI.c)
 *     ?GetTriggerRegistrationSettingsContainer@Internal@TargetedContent@Services@Windows@@YA?AV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@XZ @ 0x1800AB61C (-GetTriggerRegistrationSettingsContainer@Internal@TargetedContent@Services@Windows@@YA-AV-$share.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800ED700 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall Windows::Services::TargetedContent::Internal::UpdateTriggerStateIfNeeded(
        HSTRING a1,
        __int64 a2,
        __int64 a3)
{
  PCWSTR StringRawBuffer; // rax
  char *v5; // rax
  __int64 *TriggerRegistrationSettingsContainer; // rax
  __int64 v7; // rdx
  const char *v8; // r9
  __int64 v9; // rcx
  __int64 v11; // rbx
  __int64 v12; // rcx
  __int64 v13; // rdx
  PCWSTR v14; // [rsp+20h] [rbp-78h] BYREF
  __int128 v15; // [rsp+28h] [rbp-70h]
  __int64 v16; // [rsp+38h] [rbp-60h]
  _BYTE *v17; // [rsp+40h] [rbp-58h]
  _BYTE v18[16]; // [rsp+50h] [rbp-48h] BYREF
  _BYTE v19[24]; // [rsp+60h] [rbp-38h] BYREF
  char *v20; // [rsp+78h] [rbp-20h]
  __int64 v21; // [rsp+80h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]

  v21 = a3;
  StringRawBuffer = WindowsGetStringRawBuffer(a1, 0LL);
  try
  {
    v14 = StringRawBuffer;
    v17 = v19;
    *(_QWORD *)&v15 = &v14;
    *((_QWORD *)&v15 + 1) = &stru_1801AF2F8;
    v16 = a3;
    v20 = 0LL;
    v5 = (char *)operator new(0x28uLL);
    if ( !v5 )
      std::_Xbad_alloc();
    *(_QWORD *)v5 = off_180106788;
    *(_OWORD *)(v5 + 8) = v15;
    *((_QWORD *)v5 + 3) = v16;
    v20 = v5;
    TriggerRegistrationSettingsContainer = (__int64 *)Windows::Services::TargetedContent::Internal::GetTriggerRegistrationSettingsContainer((__int64)v18);
    Windows::Services::TargetedContent::Internal::EnumerateAllTriggersInContainer(
      TriggerRegistrationSettingsContainer,
      (__int64)v19);
  }
  catch ( ... )
  {
    LODWORD(v14) = wil::details::in1diag3::Return_CaughtException(
                     retaddr,
                     (void *)0x255,
                     (int)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
                     v8);
    v11 = v21;
    v12 = *(_QWORD *)(v21 + 24);
    if ( v12 )
    {
      LOBYTE(v13) = v12 != v21;
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v12 + 32LL))(v12, v13);
      *(_QWORD *)(v11 + 24) = 0LL;
    }
    return (unsigned int)v14;
  }
  v9 = *(_QWORD *)(a3 + 24);
  if ( v9 )
  {
    LOBYTE(v7) = v9 != a3;
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v9 + 32LL))(v9, v7);
    *(_QWORD *)(a3 + 24) = 0LL;
  }
  return 0LL;
}
