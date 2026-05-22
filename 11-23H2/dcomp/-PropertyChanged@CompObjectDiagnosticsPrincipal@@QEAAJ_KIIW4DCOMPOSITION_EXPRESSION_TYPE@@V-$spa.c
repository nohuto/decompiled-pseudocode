/*
 * XREFs of ?PropertyChanged@CompObjectDiagnosticsPrincipal@@QEAAJ_KIIW4DCOMPOSITION_EXPRESSION_TYPE@@V?$span@$$CBE$0?0@gsl@@@Z @ 0x18019DCD0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalUnlock@?$RefPtr@VCompositionPropertySet@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ @ 0x18000BCF4 (-InternalUnlock@-$RefPtr@VCompositionPropertySet@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXX.c)
 *     ?InternalAddRef@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18001EE7C (-InternalAddRef@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?Set@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEAUHSTRING__@@@Z @ 0x18004434C (-Set@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEAUHSTRING__@@@Z.c)
 *     ?UsingSession_NoLock@ContextRuntimeClass@WRL2@Microsoft@@QEAAJPEAVContextSessionGuardIfNeeded@23@@Z @ 0x180087388 (-UsingSession_NoLock@ContextRuntimeClass@WRL2@Microsoft@@QEAAJPEAVContextSessionGuardIfNeeded@23.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800F6E34 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$ComPtr@UIDCompositionSurfaceFactory@@@WRL@Microsoft@@QEAA@XZ @ 0x180100AFC (--1-$ComPtr@UIDCompositionSurfaceFactory@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ?DeserializeExpressionType@PropertyValueHelper@Composition@UI@Windows@@SAJW4DCOMPOSITION_EXPRESSION_TYPE@@V?$span@$$CBE$0?0@gsl@@PEAPEAUIPropertyValue@Foundation@4@@Z @ 0x18018B810 (-DeserializeExpressionType@PropertyValueHelper@Composition@UI@Windows@@SAJW4DCOMPOSITION_EXPRESS.c)
 *     ??$MakeAndInitialize2@VDebugAnimationPropertyInfo@Private@Composition@UI@Windows@@V12345@PEAVCompositor@345@PEAVDebugReference@2345@AEA_KPEAUHSTRING__@@AEAIPEAUIPropertyValue@Foundation@5@@Details@WRL2@Microsoft@@YAJPEAPEAVDebugAnimationPropertyInfo@Private@Composition@UI@Windows@@$$QEAPEAVCompositor@567@$$QEAPEAVDebugReference@4567@AEA_K$$QEAPEAUHSTRING__@@AEAI$$QEAPEAUIPropertyValue@Foundation@7@@Z @ 0x18019BDEC (--$MakeAndInitialize2@VDebugAnimationPropertyInfo@Private@Composition@UI@Windows@@V12345@PEAVCom.c)
 *     ?DirectlyTargetsProperty@CompObjectDiagnosticsPrincipal@@QEAA_NI@Z @ 0x18019D634 (-DirectlyTargetsProperty@CompObjectDiagnosticsPrincipal@@QEAA_NI@Z.c)
 *     ?TryGetPropInfo@CompObjectDiagnosticsPrincipal@@AEAAPEAUPropInfo@1@I@Z @ 0x18019E4E0 (-TryGetPropInfo@CompObjectDiagnosticsPrincipal@@AEAAPEAUPropInfo@1@I@Z.c)
 */

__int64 __fastcall CompObjectDiagnosticsPrincipal::PropertyChanged(
        CompObjectDiagnosticsPrincipal *this,
        __int64 a2,
        unsigned int a3,
        int a4,
        unsigned int a5,
        _OWORD *a6)
{
  HSTRING v6; // rbx
  __int64 v7; // r12
  Microsoft::WRL2::ContextRuntimeClass *v9; // rcx
  char *v12; // rdi
  int v13; // eax
  struct CompObjectDiagnosticsPrincipal::PropInfo *PropInfo; // r14
  int v15; // eax
  int v16; // eax
  Microsoft::WRL2::NestableRuntimeClass **v17; // r12
  int v18; // eax
  unsigned int v19; // r14d
  Microsoft::WRL2::NestableRuntimeClass *v21; // rcx
  unsigned int v22; // eax
  int v23; // [rsp+28h] [rbp-59h]
  Microsoft::WRL2::ContextSession *v24; // [rsp+58h] [rbp-29h] BYREF
  HSTRING v25; // [rsp+60h] [rbp-21h] BYREF
  HSTRING v26; // [rsp+68h] [rbp-19h] BYREF
  int v27[2]; // [rsp+70h] [rbp-11h] BYREF
  __int64 v28; // [rsp+78h] [rbp-9h] BYREF
  _OWORD v29[4]; // [rsp+88h] [rbp+7h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D0h] [rbp+4Fh]
  HSTRING string; // [rsp+D8h] [rbp+57h] BYREF
  __int64 v32; // [rsp+E0h] [rbp+5Fh] BYREF
  int v33; // [rsp+F0h] [rbp+6Fh] BYREF

  v33 = a4;
  v32 = a2;
  v6 = 0LL;
  v7 = a2;
  string = 0LL;
  v24 = 0LL;
  v9 = (Microsoft::WRL2::ContextRuntimeClass *)*((_QWORD *)this + 9);
  v25 = 0LL;
  v12 = 0LL;
  v13 = Microsoft::WRL2::ContextRuntimeClass::UsingSession_NoLock(
          v9,
          (struct Microsoft::WRL2::ContextSessionGuardIfNeeded *)&v24);
  if ( v13 < 0 )
  {
    if ( v13 != -2147483629 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        234LL,
        (__int64)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\compobjectdiagnosticsprincipal.cpp",
        (const char *)(unsigned int)v13,
        v23);
    if ( v24 )
      Microsoft::WRL2::ContextSession::EndApiEntry((struct _RTL_CRITICAL_SECTION *)v24);
    WindowsDeleteString(string);
    Microsoft::WRL::ComPtr<IDCompositionSurfaceFactory>::~ComPtr<IDCompositionSurfaceFactory>(&v25);
    return 0LL;
  }
  PropInfo = CompObjectDiagnosticsPrincipal::TryGetPropInfo(this, a3);
  if ( !PropInfo )
  {
LABEL_15:
    if ( v24 )
      Microsoft::WRL2::ContextSession::EndApiEntry((struct _RTL_CRITICAL_SECTION *)v24);
    if ( v12 )
    {
      v22 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, HSTRING))(**((_QWORD **)this + 11) + 80LL))(
              *((_QWORD *)this + 11),
              *((_QWORD *)this + 10),
              v7,
              string);
      if ( (int)(v22 + 0x80000000) >= 0 && v22 != -2147483629 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          270LL,
          (__int64)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\compobjectdiagnosticsprincipal.cpp",
          (const char *)v22,
          a4);
    }
    WindowsDeleteString(string);
    string = 0LL;
    if ( v6 )
      (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v6 + 16LL))(v6);
    return 0LL;
  }
  v29[0] = *a6;
  v15 = Windows::UI::Composition::PropertyValueHelper::DeserializeExpressionType(a5, v29, &v25);
  if ( v15 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      213LL,
      (__int64)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\compobjectdiagnosticsprincipal.cpp",
      (const char *)(unsigned int)v15,
      v23);
  v26 = *(HSTRING *)PropInfo;
  v16 = Microsoft::WRL::Wrappers::HString::Set(&string, &v26);
  if ( v16 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      215LL,
      (__int64)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\compobjectdiagnosticsprincipal.cpp",
      (const char *)(unsigned int)v16,
      v23);
  v17 = (Microsoft::WRL2::NestableRuntimeClass **)((char *)PropInfo + 16);
  v6 = v25;
  *(_QWORD *)v27 = *(_QWORD *)PropInfo;
  v28 = *((_QWORD *)this + 10);
  *(_QWORD *)&v29[0] = *((_QWORD *)this + 9);
  v26 = v25;
  Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertySet>::InternalUnlock((Microsoft::WRL2::NestableRuntimeClass **)PropInfo + 2);
  v18 = Microsoft::WRL2::Details::MakeAndInitialize2<Windows::UI::Composition::Private::DebugAnimationPropertyInfo,Windows::UI::Composition::Private::DebugAnimationPropertyInfo,Windows::UI::Composition::Compositor *,Windows::UI::Composition::Private::DebugReference *,unsigned __int64 &,HSTRING__ *,unsigned int &,Windows::Foundation::IPropertyValue *>(
          (Microsoft::WRL2::NestableRuntimeClass **)PropInfo + 2,
          v29,
          &v28,
          &v32,
          v27,
          &v33,
          &v26);
  v19 = v18;
  if ( v18 >= 0 )
  {
    if ( CompObjectDiagnosticsPrincipal::DirectlyTargetsProperty(this, a3) )
    {
      v21 = *v17;
      if ( *v17 )
      {
        v12 = (char *)v21 + 128;
        Microsoft::WRL2::NestableRuntimeClass::InternalAddRef(v21);
      }
    }
    v7 = v32;
    goto LABEL_15;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xE0,
    (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\compobjectdiagnosticsprincipal.cpp",
    (const char *)(unsigned int)v18);
  if ( v24 )
    Microsoft::WRL2::ContextSession::EndApiEntry((struct _RTL_CRITICAL_SECTION *)v24);
  WindowsDeleteString(string);
  string = 0LL;
  Microsoft::WRL::ComPtr<IDCompositionSurfaceFactory>::~ComPtr<IDCompositionSurfaceFactory>(&v25);
  return v19;
}
