/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_6e59436657fdc730ce46c13d2be9f9a3___::CTaskWrapper__lambda_6e59436657fdc730ce46c13d2be9f9a3_____lambda_6e59436657fdc730ce46c13d2be9f9a3___ @ 0x180198A20
 * Callers:
 *     Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_6e59436657fdc730ce46c13d2be9f9a3_____lambda_6e59436657fdc730ce46c13d2be9f9a3___ @ 0x180199230 (Microsoft--WRL--Details--Make_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_6e59436657fdc.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180087160 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 *     ??0?$ActivityBase@VSearchAppLauncherLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@$$QEAV01@@Z @ 0x18019B51C (--0-$ActivityBase@VSearchAppLauncherLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProv.c)
 *     ??0?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@QEAA@AEBV01@@Z @ 0x18019B7B0 (--0-$vector@UtagRECT@@V-$allocator@UtagRECT@@@std@@@std@@QEAA@AEBV01@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_6e59436657fdc730ce46c13d2be9f9a3___::CTaskWrapper__lambda_6e59436657fdc730ce46c13d2be9f9a3_____lambda_6e59436657fdc730ce46c13d2be9f9a3___(
        __int64 a1,
        __int64 a2)
{
  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>(a1);
  *(_QWORD *)(a1 + 16) = *(_QWORD *)a2;
  *(_OWORD *)(a1 + 24) = *(_OWORD *)(a2 + 8);
  std::vector<tagRECT>::vector<tagRECT>(a1 + 40, a2 + 24);
  wil::ActivityBase<SearchAppLauncherLogging,0,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<SearchAppLauncherLogging,0,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>(
    a1 + 64,
    a2 + 48);
  *(_QWORD *)(a1 + 64) = &SearchAppExperienceManagerTelemetry::UndockedSearchAppExperienceManager_SetWindowRgn::`vftable';
  *(_QWORD *)a1 = off_180642D40;
  return a1;
}
