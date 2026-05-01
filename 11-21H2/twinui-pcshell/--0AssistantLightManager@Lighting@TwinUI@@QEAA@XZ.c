/*
 * XREFs of ??0AssistantLightManager@Lighting@TwinUI@@QEAA@XZ @ 0x180117778
 * Callers:
 *     ??0AssistantLightWNFListener@Lighting@TwinUI@@QEAA@XZ @ 0x1801176C0 (--0AssistantLightWNFListener@Lighting@TwinUI@@QEAA@XZ.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180087484 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_LightingWhenLidClosed@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18011783C (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_LightingWhenLidClosed@@@details@wil@@QEAA.c)
 *     ??0FeatureFunctorHost@details@wil@@QEAA@IAEBUDiagnosticsInfo@2@@Z @ 0x180117B98 (--0FeatureFunctorHost@details@wil@@QEAA@IAEBUDiagnosticsInfo@2@@Z.c)
 *     ?RunFunctor@details@wil@@YAJAEAUIFunctor@12@AEAUIFunctorHost@12@@Z @ 0x180117CC0 (-RunFunctor@details@wil@@YAJAEAUIFunctor@12@AEAUIFunctorHost@12@@Z.c)
 *     ?CloseHandle@details@wil@@YAXPEAX@Z @ 0x18015F354 (-CloseHandle@details@wil@@YAXPEAX@Z.c)
 *     ?GetLastErrorFailHr@details@wil@@YAJXZ @ 0x1801661D4 (-GetLastErrorFailHr@details@wil@@YAJXZ.c)
 */

// Hidden C++ exception states: #wind=7
struct _RTL_CRITICAL_SECTION *__fastcall TwinUI::Lighting::AssistantLightManager::AssistantLightManager(
        struct _RTL_CRITICAL_SECTION *this)
{
  struct _RTL_CRITICAL_SECTION_DEBUG *v2; // rax
  wil::details *v3; // rcx
  HANDLE Event; // r14
  __int64 v5; // rdx
  wil::details *LockSemaphore; // rsi
  DWORD LastError; // ebx
  void *v8; // rdx
  struct wil::details::IFunctorHost *v9; // r8
  _QWORD v11[2]; // [rsp+20h] [rbp-60h] BYREF
  struct DiagnosticsInfo v12; // [rsp+30h] [rbp-50h] BYREF
  const char *v13; // [rsp+38h] [rbp-48h]
  __int64 v14; // [rsp+40h] [rbp-40h]
  __int16 v15; // [rsp+48h] [rbp-38h]
  char v16[8]; // [rsp+50h] [rbp-30h] BYREF
  __int64 v17; // [rsp+58h] [rbp-28h]
  int v18; // [rsp+64h] [rbp-1Ch]
  struct DiagnosticsInfo retaddr; // [rsp+98h] [rbp+18h]
  struct _RTL_CRITICAL_SECTION *v20; // [rsp+A8h] [rbp+28h] BYREF

  InitializeCriticalSectionEx(this, 0, 0);
  v20 = this + 1;
  this[1].DebugInfo = 0LL;
  *(_QWORD *)&this[1].LockCount = 0LL;
  v2 = (struct _RTL_CRITICAL_SECTION_DEBUG *)std::_Allocate<16,std::_Default_allocate_traits,0>(0x38uLL);
  *(_QWORD *)&v2->Type = v2;
  v2->CriticalSection = (struct _RTL_CRITICAL_SECTION *)v2;
  v2->ProcessLocksList.Flink = (struct _LIST_ENTRY *)v2;
  LOWORD(v2->ProcessLocksList.Blink) = 257;
  this[1].DebugInfo = v2;
  this[1].OwningThread = 0LL;
  this[1].LockSemaphore = 0LL;
  this[1].SpinCount = 0LL;
  LODWORD(this[2].LockSemaphore) = 0;
  Event = CreateEventExW(0LL, 0LL, 1u, 0x1F0003u);
  if ( Event )
  {
    GetLastError();
    LockSemaphore = (wil::details *)this[1].LockSemaphore;
    if ( LockSemaphore )
    {
      LastError = GetLastError();
      wil::details::CloseHandle(LockSemaphore, v8);
      SetLastError(LastError);
    }
    this[1].LockSemaphore = Event;
  }
  else
  {
    wil::details::GetLastErrorFailHr(v3);
  }
  this[2].DebugInfo = 0LL;
  *(_QWORD *)&this[2].LockCount = 0LL;
  this[2].OwningThread = 0LL;
  v20 = this;
  v12 = retaddr;
  v13 = "pcshell\\twinui\\lighting\\lib\\assistantlightmanager.cpp";
  v14 = 0LL;
  v15 = 36;
  LOBYTE(v5) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_LightingWhenLidClosed>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_LightingWhenLidClosed>::GetImpl'::`2'::impl,
    v5);
  v11[0] = &off_180666360;
  v11[1] = &v20;
  wil::details::FeatureFunctorHost::FeatureFunctorHost((wil::details::FeatureFunctorHost *)v16, 0xFB92B3u, &v12);
  wil::details::RunFunctor((wil::details *)v11, (struct wil::details::IFunctor *)v16, v9);
  if ( v17 )
    *(_DWORD *)(v17 + 16) = v18;
  return this;
}
