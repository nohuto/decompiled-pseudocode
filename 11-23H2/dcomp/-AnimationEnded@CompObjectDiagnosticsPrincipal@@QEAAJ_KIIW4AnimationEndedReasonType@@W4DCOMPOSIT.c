/*
 * XREFs of ?AnimationEnded@CompObjectDiagnosticsPrincipal@@QEAAJ_KIIW4AnimationEndedReasonType@@W4DCOMPOSITION_EXPRESSION_TYPE@@V?$span@$$CBE$0?0@gsl@@@Z @ 0x18019CF70
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalUnlock@?$RefPtr@VCompositionPropertySet@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ @ 0x18000BCF4 (-InternalUnlock@-$RefPtr@VCompositionPropertySet@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXX.c)
 *     ?InternalAddRef@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18001EE7C (-InternalAddRef@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?UsingSession_NoLock@ContextRuntimeClass@WRL2@Microsoft@@QEAAJPEAVContextSessionGuardIfNeeded@23@@Z @ 0x180087388 (-UsingSession_NoLock@ContextRuntimeClass@WRL2@Microsoft@@QEAAJPEAVContextSessionGuardIfNeeded@23.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800F6E34 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?DeserializeExpressionType@PropertyValueHelper@Composition@UI@Windows@@SAJW4DCOMPOSITION_EXPRESSION_TYPE@@V?$span@$$CBE$0?0@gsl@@PEAPEAUIPropertyValue@Foundation@4@@Z @ 0x18018B810 (-DeserializeExpressionType@PropertyValueHelper@Composition@UI@Windows@@SAJW4DCOMPOSITION_EXPRESS.c)
 *     ??$MakeAndInitialize2@VDebugAnimationPropertyInfo@Private@Composition@UI@Windows@@V12345@PEAVCompositor@345@PEAVDebugReference@2345@AEA_KPEAUHSTRING__@@AEAIPEAUIPropertyValue@Foundation@5@@Details@WRL2@Microsoft@@YAJPEAPEAVDebugAnimationPropertyInfo@Private@Composition@UI@Windows@@$$QEAPEAVCompositor@567@$$QEAPEAVDebugReference@4567@AEA_K$$QEAPEAUHSTRING__@@AEAI$$QEAPEAUIPropertyValue@Foundation@7@@Z @ 0x18019BDEC (--$MakeAndInitialize2@VDebugAnimationPropertyInfo@Private@Composition@UI@Windows@@V12345@PEAVCom.c)
 *     ?DirectlyTargetsProperty@CompObjectDiagnosticsPrincipal@@QEAA_NI@Z @ 0x18019D634 (-DirectlyTargetsProperty@CompObjectDiagnosticsPrincipal@@QEAA_NI@Z.c)
 *     ?TryGetPropInfo@CompObjectDiagnosticsPrincipal@@AEAAPEAUPropInfo@1@I@Z @ 0x18019E4E0 (-TryGetPropInfo@CompObjectDiagnosticsPrincipal@@AEAAPEAUPropInfo@1@I@Z.c)
 */

__int64 __fastcall CompObjectDiagnosticsPrincipal::AnimationEnded(
        CompObjectDiagnosticsPrincipal *this,
        __int64 a2,
        unsigned int a3,
        int a4,
        int a5,
        unsigned int a6,
        __int128 *a7)
{
  Microsoft::WRL2::ContextRuntimeClass *v8; // rcx
  char *v9; // rdi
  int v11; // eax
  struct CompObjectDiagnosticsPrincipal::PropInfo *PropInfo; // r14
  int v13; // eax
  Microsoft::WRL2::NestableRuntimeClass **v14; // r12
  __int64 v15; // rbx
  int v16; // eax
  unsigned int v17; // r14d
  Microsoft::WRL2::NestableRuntimeClass *v19; // rcx
  unsigned int v20; // eax
  int v21; // [rsp+20h] [rbp-50h]
  __int64 v22; // [rsp+40h] [rbp-30h] BYREF
  int v23[2]; // [rsp+48h] [rbp-28h] BYREF
  __int64 v24; // [rsp+50h] [rbp-20h] BYREF
  __int128 v25; // [rsp+60h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+38h]
  Microsoft::WRL2::ContextSession *v27; // [rsp+B0h] [rbp+40h] BYREF
  __int64 v28; // [rsp+B8h] [rbp+48h] BYREF
  int v29; // [rsp+C8h] [rbp+58h] BYREF

  v29 = a4;
  v28 = a2;
  v8 = (Microsoft::WRL2::ContextRuntimeClass *)*((_QWORD *)this + 9);
  v9 = 0LL;
  v27 = 0LL;
  v11 = Microsoft::WRL2::ContextRuntimeClass::UsingSession_NoLock(
          v8,
          (struct Microsoft::WRL2::ContextSessionGuardIfNeeded *)&v27);
  if ( v11 < 0 )
  {
    if ( v11 != -2147483629 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        323LL,
        (__int64)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\compobjectdiagnosticsprincipal.cpp",
        (const char *)(unsigned int)v11,
        v21);
    if ( v27 )
      Microsoft::WRL2::ContextSession::EndApiEntry((struct _RTL_CRITICAL_SECTION *)v27);
    return 0LL;
  }
  PropInfo = CompObjectDiagnosticsPrincipal::TryGetPropInfo(this, a3);
  if ( !PropInfo )
  {
LABEL_16:
    if ( v27 )
      Microsoft::WRL2::ContextSession::EndApiEntry((struct _RTL_CRITICAL_SECTION *)v27);
    if ( v9 )
    {
      v20 = (*(__int64 (__fastcall **)(_QWORD, char *))(**((_QWORD **)this + 11) + 56LL))(*((_QWORD *)this + 11), v9);
      if ( (int)(v20 + 0x80000000) >= 0 && v20 != -2147483629 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          352LL,
          (__int64)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\compobjectdiagnosticsprincipal.cpp",
          (const char *)v20,
          v21);
    }
    return 0LL;
  }
  v22 = 0LL;
  v25 = *a7;
  v13 = Windows::UI::Composition::PropertyValueHelper::DeserializeExpressionType(a6, &v25, &v22);
  if ( v13 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      304LL,
      (__int64)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\compobjectdiagnosticsprincipal.cpp",
      (const char *)(unsigned int)v13,
      v21);
  v14 = (Microsoft::WRL2::NestableRuntimeClass **)((char *)PropInfo + 16);
  v15 = v22;
  *(_QWORD *)v23 = *(_QWORD *)PropInfo;
  v24 = *((_QWORD *)this + 10);
  *(_QWORD *)&v25 = *((_QWORD *)this + 9);
  Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertySet>::InternalUnlock((Microsoft::WRL2::NestableRuntimeClass **)PropInfo + 2);
  v16 = Microsoft::WRL2::Details::MakeAndInitialize2<Windows::UI::Composition::Private::DebugAnimationPropertyInfo,Windows::UI::Composition::Private::DebugAnimationPropertyInfo,Windows::UI::Composition::Compositor *,Windows::UI::Composition::Private::DebugReference *,unsigned __int64 &,HSTRING__ *,unsigned int &,Windows::Foundation::IPropertyValue *>(
          (Microsoft::WRL2::NestableRuntimeClass **)PropInfo + 2,
          &v25,
          &v24,
          &v28,
          v23,
          &v29,
          &v22);
  v17 = v16;
  if ( v16 >= 0 )
  {
    if ( CompObjectDiagnosticsPrincipal::DirectlyTargetsProperty(this, a3) )
    {
      v19 = *v14;
      if ( *v14 )
      {
        v9 = (char *)v19 + 128;
        Microsoft::WRL2::NestableRuntimeClass::InternalAddRef(v19);
      }
    }
    if ( v15 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
    goto LABEL_16;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x139,
    (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\compobjectdiagnosticsprincipal.cpp",
    (const char *)(unsigned int)v16);
  if ( v15 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  if ( v27 )
    Microsoft::WRL2::ContextSession::EndApiEntry((struct _RTL_CRITICAL_SECTION *)v27);
  return v17;
}
