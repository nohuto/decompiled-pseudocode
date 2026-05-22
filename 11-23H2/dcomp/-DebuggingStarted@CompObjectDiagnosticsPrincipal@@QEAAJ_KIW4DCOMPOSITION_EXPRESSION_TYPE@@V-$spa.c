/*
 * XREFs of ?DebuggingStarted@CompObjectDiagnosticsPrincipal@@QEAAJ_KIW4DCOMPOSITION_EXPRESSION_TYPE@@V?$span@$$CBE$0?0@gsl@@@Z @ 0x18019D400
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
 *     ??$MakeAndInitialize2@VDebugAnimationPropertyInfo@Private@Composition@UI@Windows@@V12345@PEAVCompositor@345@PEAVDebugReference@2345@AEA_KPEAUHSTRING__@@HPEAUIPropertyValue@Foundation@5@@Details@WRL2@Microsoft@@YAJPEAPEAVDebugAnimationPropertyInfo@Private@Composition@UI@Windows@@$$QEAPEAVCompositor@567@$$QEAPEAVDebugReference@4567@AEA_K$$QEAPEAUHSTRING__@@$$QEAH$$QEAPEAUIPropertyValue@Foundation@7@@Z @ 0x18019BEF4 (--$MakeAndInitialize2@VDebugAnimationPropertyInfo@Private@Composition@UI@Windows@@V_ea_18019BEF4.c)
 *     ?DirectlyTargetsProperty@CompObjectDiagnosticsPrincipal@@QEAA_NI@Z @ 0x18019D634 (-DirectlyTargetsProperty@CompObjectDiagnosticsPrincipal@@QEAA_NI@Z.c)
 *     ?TryGetPropInfo@CompObjectDiagnosticsPrincipal@@AEAAPEAUPropInfo@1@I@Z @ 0x18019E4E0 (-TryGetPropInfo@CompObjectDiagnosticsPrincipal@@AEAAPEAUPropInfo@1@I@Z.c)
 */

__int64 __fastcall CompObjectDiagnosticsPrincipal::DebuggingStarted(
        CompObjectDiagnosticsPrincipal *this,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        __int128 *a5)
{
  Microsoft::WRL2::ContextRuntimeClass *v6; // rcx
  char *v7; // rdi
  int v10; // eax
  struct CompObjectDiagnosticsPrincipal::PropInfo *PropInfo; // r14
  int v12; // eax
  __int64 v13; // rax
  Microsoft::WRL2::NestableRuntimeClass **v14; // r12
  __int64 v15; // rbx
  int v16; // eax
  unsigned int v17; // r14d
  Microsoft::WRL2::NestableRuntimeClass *v19; // rcx
  unsigned int v20; // eax
  int v21; // [rsp+20h] [rbp-50h]
  Microsoft::WRL2::ContextSession *v22; // [rsp+40h] [rbp-30h] BYREF
  __int64 v23; // [rsp+48h] [rbp-28h] BYREF
  int v24[2]; // [rsp+50h] [rbp-20h] BYREF
  __int64 v25; // [rsp+58h] [rbp-18h] BYREF
  __int128 v26; // [rsp+60h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+28h]
  __int64 v28; // [rsp+A0h] [rbp+30h] BYREF
  __int64 v29; // [rsp+A8h] [rbp+38h] BYREF

  v29 = a2;
  v6 = (Microsoft::WRL2::ContextRuntimeClass *)*((_QWORD *)this + 9);
  v7 = 0LL;
  v22 = 0LL;
  v10 = Microsoft::WRL2::ContextRuntimeClass::UsingSession_NoLock(
          v6,
          (struct Microsoft::WRL2::ContextSessionGuardIfNeeded *)&v22);
  if ( v10 < 0 )
  {
    if ( v10 != -2147483629 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        73LL,
        (__int64)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\compobjectdiagnosticsprincipal.cpp",
        (const char *)(unsigned int)v10,
        v21);
    if ( v22 )
      Microsoft::WRL2::ContextSession::EndApiEntry((struct _RTL_CRITICAL_SECTION *)v22);
    return 0LL;
  }
  PropInfo = CompObjectDiagnosticsPrincipal::TryGetPropInfo(this, a3);
  if ( !PropInfo )
  {
LABEL_16:
    if ( v22 )
      Microsoft::WRL2::ContextSession::EndApiEntry((struct _RTL_CRITICAL_SECTION *)v22);
    if ( v7 )
    {
      v20 = (*(__int64 (__fastcall **)(_QWORD, char *))(**((_QWORD **)this + 11) + 72LL))(*((_QWORD *)this + 11), v7);
      if ( (int)(v20 + 0x80000000) >= 0 && v20 != -2147483629 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          102LL,
          (__int64)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\compobjectdiagnosticsprincipal.cpp",
          (const char *)v20,
          v21);
    }
    return 0LL;
  }
  v28 = 0LL;
  v26 = *a5;
  v12 = Windows::UI::Composition::PropertyValueHelper::DeserializeExpressionType(a4, &v26, &v28);
  if ( v12 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      54LL,
      (__int64)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\compobjectdiagnosticsprincipal.cpp",
      (const char *)(unsigned int)v12,
      v21);
  v13 = *(_QWORD *)PropInfo;
  v14 = (Microsoft::WRL2::NestableRuntimeClass **)((char *)PropInfo + 16);
  v15 = v28;
  LODWORD(v28) = 0;
  *(_QWORD *)v24 = v13;
  v25 = *((_QWORD *)this + 10);
  *(_QWORD *)&v26 = *((_QWORD *)this + 9);
  v23 = v15;
  Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertySet>::InternalUnlock((Microsoft::WRL2::NestableRuntimeClass **)PropInfo + 2);
  v16 = Microsoft::WRL2::Details::MakeAndInitialize2<Windows::UI::Composition::Private::DebugAnimationPropertyInfo,Windows::UI::Composition::Private::DebugAnimationPropertyInfo,Windows::UI::Composition::Compositor *,Windows::UI::Composition::Private::DebugReference *,unsigned __int64 &,HSTRING__ *,int,Windows::Foundation::IPropertyValue *>(
          (Microsoft::WRL2::NestableRuntimeClass **)PropInfo + 2,
          &v26,
          &v25,
          &v29,
          v24,
          &v28,
          &v23);
  v17 = v16;
  if ( v16 >= 0 )
  {
    if ( CompObjectDiagnosticsPrincipal::DirectlyTargetsProperty(this, a3) )
    {
      v19 = *v14;
      if ( *v14 )
      {
        v7 = (char *)v19 + 128;
        Microsoft::WRL2::NestableRuntimeClass::InternalAddRef(v19);
      }
    }
    if ( v15 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
    goto LABEL_16;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x3F,
    (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\compobjectdiagnosticsprincipal.cpp",
    (const char *)(unsigned int)v16);
  if ( v15 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  if ( v22 )
    Microsoft::WRL2::ContextSession::EndApiEntry((struct _RTL_CRITICAL_SECTION *)v22);
  return v17;
}
