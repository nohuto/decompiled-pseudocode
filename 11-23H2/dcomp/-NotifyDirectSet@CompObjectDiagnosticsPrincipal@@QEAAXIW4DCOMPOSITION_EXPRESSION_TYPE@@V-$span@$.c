/*
 * XREFs of ?NotifyDirectSet@CompObjectDiagnosticsPrincipal@@QEAAXIW4DCOMPOSITION_EXPRESSION_TYPE@@V?$span@$$CBE$0?0@gsl@@@Z @ 0x18019D92C
 * Callers:
 *     ?AnimationEnded@AnimationLoggingManager@Composition@UI@Windows@@QEAAXIIW4AnimationEndedReasonType@@W4DCOMPOSITION_EXPRESSION_TYPE@@V?$span@$$CBE$0?0@gsl@@@Z @ 0x18004D000 (-AnimationEnded@AnimationLoggingManager@Composition@UI@Windows@@QEAAXIIW4AnimationEndedReasonTyp.c)
 * Callees:
 *     ?InternalUnlock@?$RefPtr@VCompositionPropertySet@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ @ 0x18000BCF4 (-InternalUnlock@-$RefPtr@VCompositionPropertySet@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXX.c)
 *     ??2@YAPEAX_K@Z @ 0x180043FCC (--2@YAPEAX_K@Z.c)
 *     ?EnqueueOperationAndPassOwnershipWorker@ContextSession@WRL2@Microsoft@@AEAAXPEAUIUnknown@@W4DeferredOperationKind@123@@Z @ 0x180065280 (-EnqueueOperationAndPassOwnershipWorker@ContextSession@WRL2@Microsoft@@AEAAXPEAUIUnknown@@W4Defe.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800F6E34 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?DeserializeExpressionType@PropertyValueHelper@Composition@UI@Windows@@SAJW4DCOMPOSITION_EXPRESSION_TYPE@@V?$span@$$CBE$0?0@gsl@@PEAPEAUIPropertyValue@Foundation@4@@Z @ 0x18018B810 (-DeserializeExpressionType@PropertyValueHelper@Composition@UI@Windows@@SAJW4DCOMPOSITION_EXPRESS.c)
 *     ??$MakeAndInitialize2@VDebugAnimationPropertyInfo@Private@Composition@UI@Windows@@V12345@PEAVCompositor@345@PEAVDebugReference@2345@HPEAUHSTRING__@@HPEAUIPropertyValue@Foundation@5@@Details@WRL2@Microsoft@@YAJPEAPEAVDebugAnimationPropertyInfo@Private@Composition@UI@Windows@@$$QEAPEAVCompositor@567@$$QEAPEAVDebugReference@4567@$$QEAH$$QEAPEAUHSTRING__@@3$$QEAPEAUIPropertyValue@Foundation@7@@Z @ 0x18019BFFC (--$MakeAndInitialize2@VDebugAnimationPropertyInfo@Private@Composition@UI@Windows@@V_ea_18019BFFC.c)
 *     ??0DeferredDirectSetCallback@CompObjectDiagnosticsPrincipal@@AEAA@PEAVDebugAnimationPropertyInfo@Private@Composition@UI@Windows@@PEAUIDebugAnimationCallback@3456@@Z @ 0x18019C748 (--0DeferredDirectSetCallback@CompObjectDiagnosticsPrincipal@@AEAA@PEAVDebugAnimationPropertyInfo.c)
 *     ?DirectlyTargetsProperty@CompObjectDiagnosticsPrincipal@@QEAA_NI@Z @ 0x18019D634 (-DirectlyTargetsProperty@CompObjectDiagnosticsPrincipal@@QEAA_NI@Z.c)
 *     ?TryGetPropInfo@CompObjectDiagnosticsPrincipal@@AEAAPEAUPropInfo@1@I@Z @ 0x18019E4E0 (-TryGetPropInfo@CompObjectDiagnosticsPrincipal@@AEAAPEAUPropInfo@1@I@Z.c)
 */

void __fastcall CompObjectDiagnosticsPrincipal::NotifyDirectSet(
        CompObjectDiagnosticsPrincipal *this,
        unsigned int a2,
        unsigned int a3,
        __int128 *a4)
{
  struct CompObjectDiagnosticsPrincipal::PropInfo *PropInfo; // r14
  __int128 v9; // xmm0
  int v10; // eax
  __int64 v11; // rax
  __int64 v12; // rbx
  int v13; // eax
  struct Windows::UI::Composition::Private::IDebugAnimationCallback *v14; // rsi
  struct Windows::UI::Composition::Private::DebugAnimationPropertyInfo *v15; // r14
  CompObjectDiagnosticsPrincipal::DeferredDirectSetCallback *v16; // rax
  int v17; // [rsp+20h] [rbp-60h]
  int v18; // [rsp+20h] [rbp-60h]
  int v19; // [rsp+40h] [rbp-40h] BYREF
  __int64 v20; // [rsp+48h] [rbp-38h] BYREF
  __int64 v21; // [rsp+50h] [rbp-30h] BYREF
  int v22[2]; // [rsp+58h] [rbp-28h] BYREF
  __int64 v23; // [rsp+60h] [rbp-20h] BYREF
  __int128 v24; // [rsp+70h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+18h]

  PropInfo = CompObjectDiagnosticsPrincipal::TryGetPropInfo(this, a2);
  if ( PropInfo )
  {
    v9 = *a4;
    v20 = 0LL;
    v24 = v9;
    v10 = Windows::UI::Composition::PropertyValueHelper::DeserializeExpressionType(a3, &v24, &v20);
    if ( v10 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        626LL,
        (__int64)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\compobjectdiagnosticsprincipal.cpp",
        (const char *)(unsigned int)v10,
        v17);
    v11 = *(_QWORD *)PropInfo;
    v12 = v20;
    v19 = 0;
    LODWORD(v20) = 0;
    *(_QWORD *)v22 = v11;
    v23 = *((_QWORD *)this + 10);
    *(_QWORD *)&v24 = *((_QWORD *)this + 9);
    v21 = v12;
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertySet>::InternalUnlock((Microsoft::WRL2::NestableRuntimeClass **)PropInfo + 3);
    v13 = Microsoft::WRL2::Details::MakeAndInitialize2<Windows::UI::Composition::Private::DebugAnimationPropertyInfo,Windows::UI::Composition::Private::DebugAnimationPropertyInfo,Windows::UI::Composition::Compositor *,Windows::UI::Composition::Private::DebugReference *,int,HSTRING__ *,int,Windows::Foundation::IPropertyValue *>(
            (Microsoft::WRL2::NestableRuntimeClass **)PropInfo + 3,
            &v24,
            &v23,
            (int *)&v20,
            v22,
            &v19,
            &v21);
    if ( v13 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        635LL,
        (__int64)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\compobjectdiagnosticsprincipal.cpp",
        (const char *)(unsigned int)v13,
        v18);
    if ( CompObjectDiagnosticsPrincipal::DirectlyTargetsProperty(this, a2) )
    {
      v14 = (struct Windows::UI::Composition::Private::IDebugAnimationCallback *)*((_QWORD *)this + 11);
      v15 = (struct Windows::UI::Composition::Private::DebugAnimationPropertyInfo *)*((_QWORD *)PropInfo + 3);
      v16 = (CompObjectDiagnosticsPrincipal::DeferredDirectSetCallback *)operator new(0x20uLL);
      if ( v16 )
        v16 = CompObjectDiagnosticsPrincipal::DeferredDirectSetCallback::DeferredDirectSetCallback(v16, v15, v14);
      Microsoft::WRL2::ContextSession::EnqueueOperationAndPassOwnershipWorker(*((_QWORD *)this + 9), (__int64)v16);
    }
    if ( v12 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  }
}
