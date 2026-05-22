/*
 * XREFs of ?WorkerThreadProc@LampArrayRawInputProvider@@AEAAJXZ @ 0x18004C684
 * Callers:
 *     ?WorkerThreadProcThunk@LampArrayRawInputProvider@@CAKPEAX@Z @ 0x18004C630 (-WorkerThreadProcThunk@LampArrayRawInputProvider@@CAKPEAX@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002F9C (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ProcessDeviceNotifications@PnpDeviceWatcher@@QEAAJPEAK@Z @ 0x18001C160 (-ProcessDeviceNotifications@PnpDeviceWatcher@@QEAAJPEAK@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800334B8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Create@SipcServer@@SAJAEBU_GUID@@W4SIPC_SERVICE_BOUNDARY@@P6AXPEAXPEAUISIPCServer@@KK@Z22PEAPEAU4@@Z @ 0x18003AAA8 (-Create@SipcServer@@SAJAEBU_GUID@@W4SIPC_SERVICE_BOUNDARY@@P6AXPEAXPEAUISIPCServer@@KK@Z22PEAPEA.c)
 *     ?Initialize@PnpDeviceWatcher@@QEAAJPEAVLampArrayRawInputProvider@@@Z @ 0x18003AC10 (-Initialize@PnpDeviceWatcher@@QEAAJPEAVLampArrayRawInputProvider@@@Z.c)
 *     __security_check_cookie @ 0x1800574C0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800A7C6C (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?Shutdown@PnpDeviceWatcher@@QEAAXXZ @ 0x1800F8AD0 (-Shutdown@PnpDeviceWatcher@@QEAAXXZ.c)
 *     ?UpdateFromActiveViewClient@LampArrayDevice@@QEAAJPEAK@Z @ 0x1800FB9FC (-UpdateFromActiveViewClient@LampArrayDevice@@QEAAJPEAK@Z.c)
 */

__int64 __fastcall LampArrayRawInputProvider::WorkerThreadProc(LampArrayRawInputProvider *this)
{
  PnpDeviceWatcher *v1; // rbp
  int v3; // eax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  _QWORD *v7; // r14
  unsigned int LastError; // ebx
  __int64 v9; // rdx
  unsigned int v10; // esi
  _QWORD *v11; // rbx
  LampArrayDevice *v12; // rcx
  DWORD v13; // r9d
  const char *v14; // r9
  __int64 bAlertable; // [rsp+20h] [rbp-58h]
  unsigned int v17; // [rsp+30h] [rbp-48h] BYREF
  unsigned int v18; // [rsp+34h] [rbp-44h] BYREF
  HANDLE Handles[3]; // [rsp+38h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  v1 = (LampArrayRawInputProvider *)((char *)this + 192);
  v3 = PnpDeviceWatcher::Initialize((LampArrayRawInputProvider *)((char *)this + 192), this);
  v7 = (_QWORD *)((char *)this + 40);
  LastError = v3;
  if ( v3 < 0 )
  {
    v9 = 595LL;
LABEL_22:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\lamparrayrawinputprovider.cpp",
      (const char *)(unsigned int)v3);
    goto LABEL_24;
  }
  v3 = SipcServer::Create(v5, v4, v6, (__int64)this, bAlertable, (_QWORD *)this + 5);
  LastError = v3;
  if ( v3 < 0 )
  {
    v9 = 604LL;
    goto LABEL_22;
  }
  Handles[0] = (HANDLE)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v7 + 40LL))(*v7);
  Handles[1] = *((HANDLE *)this + 40);
  Handles[2] = *((HANDLE *)this + 41);
  while ( !*((_BYTE *)this + 184) )
  {
    v3 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v7 + 32LL))(*v7);
    LastError = v3;
    if ( v3 < 0 )
    {
      v9 = 617LL;
      goto LABEL_22;
    }
    v18 = -1;
    v3 = PnpDeviceWatcher::ProcessDeviceNotifications(v1, (WCHAR *)&v18);
    LastError = v3;
    if ( v3 < 0 )
    {
      v9 = 621LL;
      goto LABEL_22;
    }
    v10 = -1;
    v11 = (_QWORD *)*((_QWORD *)this + 9);
    while ( v11 != (_QWORD *)((char *)this + 72) )
    {
      v12 = (LampArrayDevice *)v11[2];
      v17 = 0;
      if ( (unsigned int)LampArrayDevice::UpdateFromActiveViewClient(v12, &v17) == -2147024882 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x271,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\lamparrayrawinputprovider.cpp",
          (const char *)0x8007000ELL);
        LastError = -2147024882;
        goto LABEL_24;
      }
      v11 = (_QWORD *)*v11;
      if ( v17 < v10 )
        v10 = v17;
    }
    v13 = v18;
    if ( v10 < v18 )
      v13 = v10;
    if ( WaitForMultipleObjectsEx(3u, Handles, 0, v13, 1) == -1 )
    {
      LastError = wil::details::in1diag3::Return_GetLastError(
                    retaddr,
                    (void *)0x277,
                    (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\lamparray"
                                  "rawinputprovider.cpp",
                    v14);
      goto LABEL_24;
    }
  }
  LastError = 0;
LABEL_24:
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)this + 5);
  PnpDeviceWatcher::Shutdown(v1);
  return LastError;
}
