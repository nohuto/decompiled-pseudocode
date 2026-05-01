/*
 * XREFs of ?ActivateRemotePathInContainer@ApplicationContainerActivation@@UEAAJU_GUID@@PEAUHSTRING__@@11EURect@Foundation@Windows@@HPEA_J@Z @ 0x1806302A0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     memset_0 @ 0x1801C750C (memset_0.c)
 *     ?Throw_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z @ 0x18046AC88 (-Throw_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z.c)
 *     ??$MakeAndInitializeOrThrow@VApplicationContainerActivationPolicy@@PEAUIApplicationContainerActivationComponent@@AEAEAEAUtagINITIALWINDOWPLACEMENT@@@wil@@YA?AV?$ComPtr@VApplicationContainerActivationPolicy@@@WRL@Microsoft@@$$QEAPEAUIApplicationContainerActivationComponent@@AEAEAEAUtagINITIALWINDOWPLACEMENT@@@Z @ 0x18062DE84 (--$MakeAndInitializeOrThrow@VApplicationContainerActivationPolicy@@PEAUIApplicationContainerActi.c)
 *     ??0?$ActivityBase@VAAMTraceProvider@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18062ECE0 (--0-$ActivityBase@VAAMTraceProvider@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil.c)
 *     ??1ActivateRemotePathInContainer@AAMTraceProvider@@QEAA@XZ @ 0x18062F390 (--1ActivateRemotePathInContainer@AAMTraceProvider@@QEAA@XZ.c)
 *     ?GetActivationComponent@ApplicationContainerActivation@@SA?AV?$com_ptr_t@UIApplicationContainerActivationComponent@@Uerr_exception_policy@wil@@@wil@@XZ @ 0x1806309E0 (-GetActivationComponent@ApplicationContainerActivation@@SA-AV-$com_ptr_t@UIApplicationContainerA.c)
 *     ?InternalRelease@?$ComPtr@VApplicationContainerActivationPolicy@@@WRL@Microsoft@@IEAAKXZ @ 0x180630DA0 (-InternalRelease@-$ComPtr@VApplicationContainerActivationPolicy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?StartActivity@ActivateRemotePathInContainer@AAMTraceProvider@@QEAAXU_GUID@@PEBG1@Z @ 0x180632470 (-StartActivity@ActivateRemotePathInContainer@AAMTraceProvider@@QEAAXU_GUID@@PEBG1@Z.c)
 *     ?Stop@ActivateRemotePathInContainer@AAMTraceProvider@@QEAAXU_GUID@@J@Z @ 0x18063295C (-Stop@ActivateRemotePathInContainer@AAMTraceProvider@@QEAAXU_GUID@@J@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall ApplicationContainerActivation::ActivateRemotePathInContainer(
        __int64 a1,
        struct _GUID *a2,
        HSTRING a3,
        HSTRING a4,
        HSTRING string,
        char a6,
        __int64 a7,
        int a8,
        HINSTANCE *a9)
{
  struct _GUID *v9; // r14
  __int64 v10; // r15
  HINSTANCE *v11; // rsi
  unsigned int v12; // edi
  const unsigned __int16 *StringRawBuffer; // r12
  const unsigned __int16 *v14; // r13
  __int64 i; // rcx
  HINSTANCE v16; // rbx
  const char *LastError; // r9
  wil *v18; // rcx
  __int64 v20; // [rsp+20h] [rbp-258h] BYREF
  __int64 v21; // [rsp+28h] [rbp-250h] BYREF
  struct _GUID v22; // [rsp+30h] [rbp-248h] BYREF
  HSTRING v23; // [rsp+40h] [rbp-238h]
  SHELLEXECUTEINFOW pExecInfo; // [rsp+50h] [rbp-228h] BYREF
  struct _GUID v25; // [rsp+C0h] [rbp-1B8h] BYREF
  __int128 v26; // [rsp+D0h] [rbp-1A8h] BYREF
  int v27; // [rsp+E0h] [rbp-198h]
  _QWORD v28[40]; // [rsp+F0h] [rbp-188h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+278h] [rbp+0h]

  v23 = a4;
  v9 = a2;
  v10 = a7;
  *(_QWORD *)&v25.Data1 = a2;
  v11 = a9;
  v12 = 0;
  StringRawBuffer = WindowsGetStringRawBuffer(a3, 0LL);
  v14 = WindowsGetStringRawBuffer(string, 0LL);
  if ( v11 )
    *v11 = 0LL;
  wil::ActivityBase<AAMTraceProvider,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<AAMTraceProvider,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v28,
    (__int64)"ActivateRemotePathInContainer");
  v28[0] = &AAMTraceProvider::ActivateRemotePathInContainer::`vftable';
  v22 = *v9;
  AAMTraceProvider::ActivateRemotePathInContainer::StartActivity(
    (AAMTraceProvider::ActivateRemotePathInContainer *)v28,
    &v22,
    StringRawBuffer,
    v14);
  v26 = 0LL;
  v27 = 0;
  for ( i = 0LL; i < 4; ++i )
    *((_DWORD *)&v26 + i) = (int)*(float *)(v10 + 4 * i);
  try
  {
    v27 = a8;
    ApplicationContainerActivation::GetActivationComponent(&v21);
    *(_QWORD *)&v22.Data1 = v21;
    wil::MakeAndInitializeOrThrow<ApplicationContainerActivationPolicy,IApplicationContainerActivationComponent *,unsigned char &,tagINITIALWINDOWPLACEMENT &>(
      &v20,
      (__int64 *)&v22,
      &a6,
      &v26);
    v16 = (HINSTANCE)((v20 + 40) & -(__int64)(v20 != 0));
    memset_0(&pExecInfo, 0, sizeof(pExecInfo));
    pExecInfo.cbSize = 112;
    pExecInfo.nShow = 1;
    pExecInfo.fMask = 0x8000000;
    pExecInfo.lpFile = StringRawBuffer;
    pExecInfo.lpDirectory = WindowsGetStringRawBuffer(v23, 0LL);
    pExecInfo.hInstApp = v16;
    pExecInfo.lpParameters = v14;
    if ( !ShellExecuteExW(&pExecInfo) )
    {
      if ( v11 )
        *v11 = pExecInfo.hInstApp;
      LastError = (const char *)GetLastError();
      wil::details::in1diag3::Throw_Win32(
        retaddr,
        315LL,
        (__int64)"pcshell\\twinui\\vailactivation\\lib\\applicationcontaineractivation.cpp",
        LastError,
        v20);
    }
    Microsoft::WRL::ComPtr<ApplicationContainerActivationPolicy>::InternalRelease(&v20);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v21);
  }
  catch ( ... )
  {
    LODWORD(v20) = wil::ResultFromCaughtException(v18);
    v12 = v20;
    v9 = *(struct _GUID **)&v25.Data1;
  }
  v25 = *v9;
  AAMTraceProvider::ActivateRemotePathInContainer::Stop(
    (AAMTraceProvider::ActivateRemotePathInContainer *)v28,
    &v25,
    v12);
  AAMTraceProvider::ActivateRemotePathInContainer::~ActivateRemotePathInContainer((AAMTraceProvider::ActivateRemotePathInContainer *)v28);
  return v12;
}
