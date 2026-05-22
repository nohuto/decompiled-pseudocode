/*
 * XREFs of ?AnimationStarted@CompObjectDiagnosticsPrincipal@@QEAAJ_KIIW4DCOMPOSITION_EXPRESSION_TYPE@@V?$span@$$CBE$0?0@gsl@@@Z @ 0x18019D1A0
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

__int64 __fastcall CompObjectDiagnosticsPrincipal::AnimationStarted(
        CompObjectDiagnosticsPrincipal *this,
        __int64 a2,
        unsigned int a3,
        int a4,
        unsigned int a5,
        __int128 *a6)
{
  Microsoft::WRL2::ContextRuntimeClass *v7; // rcx
  char *v8; // rdi
  int v10; // eax
  struct CompObjectDiagnosticsPrincipal::PropInfo *PropInfo; // r14
  int v12; // eax
  Microsoft::WRL2::NestableRuntimeClass **v13; // r12
  __int64 v14; // rbx
  int v15; // eax
  unsigned int v16; // r14d
  Microsoft::WRL2::NestableRuntimeClass *v18; // rcx
  unsigned int v19; // eax
  int v20; // [rsp+20h] [rbp-50h]
  __int64 v21; // [rsp+40h] [rbp-30h] BYREF
  int v22[2]; // [rsp+48h] [rbp-28h] BYREF
  __int64 v23; // [rsp+50h] [rbp-20h] BYREF
  __int128 v24; // [rsp+60h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+38h]
  Microsoft::WRL2::ContextSession *v26; // [rsp+B0h] [rbp+40h] BYREF
  __int64 v27; // [rsp+B8h] [rbp+48h] BYREF
  int v28; // [rsp+C8h] [rbp+58h] BYREF

  v28 = a4;
  v27 = a2;
  v7 = (Microsoft::WRL2::ContextRuntimeClass *)*((_QWORD *)this + 9);
  v8 = 0LL;
  v26 = 0LL;
  v10 = Microsoft::WRL2::ContextRuntimeClass::UsingSession_NoLock(
          v7,
          (struct Microsoft::WRL2::ContextSessionGuardIfNeeded *)&v26);
  if ( v10 < 0 )
  {
    if ( v10 != -2147483629 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        152LL,
        (__int64)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\compobjectdiagnosticsprincipal.cpp",
        (const char *)(unsigned int)v10,
        v20);
    if ( v26 )
      Microsoft::WRL2::ContextSession::EndApiEntry((struct _RTL_CRITICAL_SECTION *)v26);
    return 0LL;
  }
  PropInfo = CompObjectDiagnosticsPrincipal::TryGetPropInfo(this, a3);
  if ( !PropInfo )
  {
LABEL_16:
    if ( v26 )
      Microsoft::WRL2::ContextSession::EndApiEntry((struct _RTL_CRITICAL_SECTION *)v26);
    if ( v8 )
    {
      v19 = (*(__int64 (__fastcall **)(_QWORD, char *))(**((_QWORD **)this + 11) + 64LL))(*((_QWORD *)this + 11), v8);
      if ( (int)(v19 + 0x80000000) >= 0 && v19 != -2147483629 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          181LL,
          (__int64)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\compobjectdiagnosticsprincipal.cpp",
          (const char *)v19,
          v20);
    }
    return 0LL;
  }
  v21 = 0LL;
  v24 = *a6;
  v12 = Windows::UI::Composition::PropertyValueHelper::DeserializeExpressionType(a5, &v24, &v21);
  if ( v12 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      133LL,
      (__int64)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\compobjectdiagnosticsprincipal.cpp",
      (const char *)(unsigned int)v12,
      v20);
  v13 = (Microsoft::WRL2::NestableRuntimeClass **)((char *)PropInfo + 16);
  v14 = v21;
  *(_QWORD *)v22 = *(_QWORD *)PropInfo;
  v23 = *((_QWORD *)this + 10);
  *(_QWORD *)&v24 = *((_QWORD *)this + 9);
  Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertySet>::InternalUnlock((Microsoft::WRL2::NestableRuntimeClass **)PropInfo + 2);
  v15 = Microsoft::WRL2::Details::MakeAndInitialize2<Windows::UI::Composition::Private::DebugAnimationPropertyInfo,Windows::UI::Composition::Private::DebugAnimationPropertyInfo,Windows::UI::Composition::Compositor *,Windows::UI::Composition::Private::DebugReference *,unsigned __int64 &,HSTRING__ *,unsigned int &,Windows::Foundation::IPropertyValue *>(
          (Microsoft::WRL2::NestableRuntimeClass **)PropInfo + 2,
          &v24,
          &v23,
          &v27,
          v22,
          &v28,
          &v21);
  v16 = v15;
  if ( v15 >= 0 )
  {
    if ( CompObjectDiagnosticsPrincipal::DirectlyTargetsProperty(this, a3) )
    {
      v18 = *v13;
      if ( *v13 )
      {
        v8 = (char *)v18 + 128;
        Microsoft::WRL2::NestableRuntimeClass::InternalAddRef(v18);
      }
    }
    if ( v14 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
    goto LABEL_16;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x8E,
    (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\compobjectdiagnosticsprincipal.cpp",
    (const char *)(unsigned int)v15);
  if ( v14 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  if ( v26 )
    Microsoft::WRL2::ContextSession::EndApiEntry((struct _RTL_CRITICAL_SECTION *)v26);
  return v16;
}
