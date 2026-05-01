/*
 * XREFs of ?ActivateRemotePathInContainer@ApplicationContainerActivation@@UEAAJU_GUID@@PEAUHSTRING__@@11EURect@Foundation@Windows@@HPEA_J@Z @ 0x180572460
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000B3E0 (--1-$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_poli.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     memset_0 @ 0x180188F60 (memset_0.c)
 *     ??$MakeAndInitializeOrThrow@VApplicationContainerActivationPolicy@@PEAUIApplicationContainerActivationComponent@@AEAEAEAUtagINITIALWINDOWPLACEMENT@@@wil@@YA?AV?$ComPtr@VApplicationContainerActivationPolicy@@@WRL@Microsoft@@$$QEAPEAUIApplicationContainerActivationComponent@@AEAEAEAUtagINITIALWINDOWPLACEMENT@@@Z @ 0x18056FDB0 (--$MakeAndInitializeOrThrow@VApplicationContainerActivationPolicy@@PEAUIApplicationContainerActi.c)
 *     ??0?$ActivityBase@VAAMTraceProvider@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x180570F68 (--0-$ActivityBase@VAAMTraceProvider@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil.c)
 *     ??1ActivateRemotePathInContainer@AAMTraceProvider@@QEAA@XZ @ 0x1805715B8 (--1ActivateRemotePathInContainer@AAMTraceProvider@@QEAA@XZ.c)
 *     ?GetActivationComponent@ApplicationContainerActivation@@SA?AV?$com_ptr_t@UIApplicationContainerActivationComponent@@Uerr_exception_policy@wil@@@wil@@XZ @ 0x180572B94 (-GetActivationComponent@ApplicationContainerActivation@@SA-AV-$com_ptr_t@UIApplicationContainerA.c)
 *     ?InternalRelease@?$ComPtr@VApplicationContainerActivationPolicy@@@WRL@Microsoft@@IEAAKXZ @ 0x180572FD0 (-InternalRelease@-$ComPtr@VApplicationContainerActivationPolicy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?StartActivity@ActivateRemotePathInContainer@AAMTraceProvider@@QEAAXU_GUID@@PEBG1@Z @ 0x1805744A8 (-StartActivity@ActivateRemotePathInContainer@AAMTraceProvider@@QEAAXU_GUID@@PEBG1@Z.c)
 *     ?Stop@ActivateRemotePathInContainer@AAMTraceProvider@@QEAAXU_GUID@@J@Z @ 0x18057490C (-Stop@ActivateRemotePathInContainer@AAMTraceProvider@@QEAAXU_GUID@@J@Z.c)
 *     ?Throw_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z @ 0x1805756B8 (-Throw_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z.c)
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
  void *v18; // rdx
  unsigned int v19; // r8d
  wil *v20; // rcx
  __int64 v22; // [rsp+20h] [rbp-258h] BYREF
  __int64 v23; // [rsp+28h] [rbp-250h] BYREF
  struct _GUID v24; // [rsp+30h] [rbp-248h] BYREF
  HSTRING v25; // [rsp+40h] [rbp-238h]
  SHELLEXECUTEINFOW pExecInfo; // [rsp+50h] [rbp-228h] BYREF
  struct _GUID v27; // [rsp+C0h] [rbp-1B8h] BYREF
  __int128 v28; // [rsp+D0h] [rbp-1A8h] BYREF
  int v29; // [rsp+E0h] [rbp-198h]
  _QWORD v30[40]; // [rsp+F0h] [rbp-188h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+278h] [rbp+0h]

  v25 = a4;
  v9 = a2;
  v10 = a7;
  *(_QWORD *)&v27.Data1 = a2;
  v11 = a9;
  v12 = 0;
  StringRawBuffer = WindowsGetStringRawBuffer(a3, 0LL);
  v14 = WindowsGetStringRawBuffer(string, 0LL);
  if ( v11 )
    *v11 = 0LL;
  wil::ActivityBase<AAMTraceProvider,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<AAMTraceProvider,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v30,
    (__int64)"ActivateRemotePathInContainer");
  v30[0] = &AAMTraceProvider::ActivateRemotePathInContainer::`vftable';
  v24 = *v9;
  AAMTraceProvider::ActivateRemotePathInContainer::StartActivity(
    (AAMTraceProvider::ActivateRemotePathInContainer *)v30,
    &v24,
    StringRawBuffer,
    v14);
  v28 = 0LL;
  v29 = 0;
  for ( i = 0LL; i < 4; ++i )
    *((_DWORD *)&v28 + i) = (int)*(float *)(v10 + 4 * i);
  try
  {
    v29 = a8;
    ApplicationContainerActivation::GetActivationComponent(&v23);
    *(_QWORD *)&v24.Data1 = v23;
    wil::MakeAndInitializeOrThrow<ApplicationContainerActivationPolicy,IApplicationContainerActivationComponent *,unsigned char &,tagINITIALWINDOWPLACEMENT &>(
      &v22,
      (__int64 *)&v24,
      &a6,
      &v28);
    v16 = (HINSTANCE)((v22 + 40) & -(__int64)(v22 != 0));
    memset_0(&pExecInfo, 0, sizeof(pExecInfo));
    pExecInfo.cbSize = 112;
    pExecInfo.nShow = 1;
    pExecInfo.fMask = 0x8000000;
    pExecInfo.lpFile = StringRawBuffer;
    pExecInfo.lpDirectory = WindowsGetStringRawBuffer(v25, 0LL);
    pExecInfo.hInstApp = v16;
    pExecInfo.lpParameters = v14;
    if ( !ShellExecuteExW(&pExecInfo) )
    {
      if ( v11 )
        *v11 = pExecInfo.hInstApp;
      LastError = (const char *)GetLastError();
      wil::details::in1diag3::Throw_Win32(retaddr, v18, v19, LastError, v22);
    }
    Microsoft::WRL::ComPtr<ApplicationContainerActivationPolicy>::InternalRelease(&v22);
    wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v23);
  }
  catch ( ... )
  {
    LODWORD(v22) = wil::ResultFromCaughtException(v20);
    v12 = v22;
    v9 = *(struct _GUID **)&v27.Data1;
  }
  v27 = *v9;
  AAMTraceProvider::ActivateRemotePathInContainer::Stop(
    (AAMTraceProvider::ActivateRemotePathInContainer *)v30,
    &v27,
    v12);
  AAMTraceProvider::ActivateRemotePathInContainer::~ActivateRemotePathInContainer((AAMTraceProvider::ActivateRemotePathInContainer *)v30);
  return v12;
}
