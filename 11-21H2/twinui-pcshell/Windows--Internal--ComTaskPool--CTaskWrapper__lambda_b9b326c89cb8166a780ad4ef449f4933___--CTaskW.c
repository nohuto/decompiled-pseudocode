/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_b9b326c89cb8166a780ad4ef449f4933___::CTaskWrapper__lambda_b9b326c89cb8166a780ad4ef449f4933_____lambda_b9b326c89cb8166a780ad4ef449f4933___ @ 0x180198B38
 * Callers:
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_b9b326c89cb8166a780ad4ef449f4933___ @ 0x180199CB4 (Windows--Internal--ComTaskPool--QueueTask__lambda_b9b326c89cb8166a780ad4ef449f4933___.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180087160 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 *     ??0?$ActivityBase@VSearchAppLauncherLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@$$QEAV01@@Z @ 0x18019B51C (--0-$ActivityBase@VSearchAppLauncherLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProv.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_b9b326c89cb8166a780ad4ef449f4933___::CTaskWrapper__lambda_b9b326c89cb8166a780ad4ef449f4933_____lambda_b9b326c89cb8166a780ad4ef449f4933___(
        __int64 a1,
        __int64 a2)
{
  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>(a1);
  *(_QWORD *)(a1 + 16) = *(_QWORD *)a2;
  *(_OWORD *)(a1 + 24) = *(_OWORD *)(a2 + 8);
  *(_OWORD *)(a1 + 40) = *(_OWORD *)(a2 + 24);
  wil::ActivityBase<SearchAppLauncherLogging,0,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<SearchAppLauncherLogging,0,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>(
    a1 + 56,
    a2 + 40);
  *(_QWORD *)(a1 + 56) = &SearchAppExperienceManagerTelemetry::UndockedSearchAppExperienceManager_SetWindowRgn::`vftable';
  *(_QWORD *)a1 = off_180642E08;
  return a1;
}
