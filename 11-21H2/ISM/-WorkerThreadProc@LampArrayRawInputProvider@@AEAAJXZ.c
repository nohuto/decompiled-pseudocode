/*
 * XREFs of ?WorkerThreadProc@LampArrayRawInputProvider@@AEAAJXZ @ 0x18003D860
 * Callers:
 *     ?WorkerThreadProcThunk@LampArrayRawInputProvider@@CAKPEAX@Z @ 0x180048EF0 (-WorkerThreadProcThunk@LampArrayRawInputProvider@@CAKPEAX@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002474 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Create@SipcServer@@SAJAEBU_GUID@@W4SIPC_SERVICE_BOUNDARY@@P6AXPEAXPEAUISIPCServer@@KK@Z22PEAPEAU4@@Z @ 0x18003D284 (-Create@SipcServer@@SAJAEBU_GUID@@W4SIPC_SERVICE_BOUNDARY@@P6AXPEAXPEAUISIPCServer@@KK@Z22PEAPEA.c)
 *     ?Initialize@PnpDeviceWatcher@@QEAAJPEAVLampArrayRawInputProvider@@@Z @ 0x18003D448 (-Initialize@PnpDeviceWatcher@@QEAAJPEAVLampArrayRawInputProvider@@@Z.c)
 *     ?ProcessDeviceNotifications@PnpDeviceWatcher@@QEAAJPEAK@Z @ 0x18003D980 (-ProcessDeviceNotifications@PnpDeviceWatcher@@QEAAJPEAK@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044BD0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18007DEDC (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?Shutdown@PnpDeviceWatcher@@QEAAXXZ @ 0x1800D0274 (-Shutdown@PnpDeviceWatcher@@QEAAXXZ.c)
 *     ?UpdateFromActiveViewClient@LampArrayDevice@@QEAAJPEAK@Z @ 0x1800D2E98 (-UpdateFromActiveViewClient@LampArrayDevice@@QEAAJPEAK@Z.c)
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
  unsigned int v9; // esi
  _QWORD *v10; // rbx
  DWORD v11; // r9d
  const char *v12; // r9
  __int64 v13; // rdx
  LampArrayDevice *v15; // rcx
  __int64 bAlertable; // [rsp+20h] [rbp-48h]
  HANDLE Handles[7]; // [rsp+30h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  unsigned int v19; // [rsp+70h] [rbp+8h] BYREF
  unsigned int v20; // [rsp+78h] [rbp+10h] BYREF

  v1 = (LampArrayRawInputProvider *)((char *)this + 120);
  v3 = PnpDeviceWatcher::Initialize((LampArrayRawInputProvider *)((char *)this + 120), this);
  v7 = (_QWORD *)((char *)this + 32);
  LastError = v3;
  if ( v3 < 0 )
  {
    v13 = 426LL;
  }
  else
  {
    v3 = SipcServer::Create(v5, v4, v6, (__int64)this, bAlertable, (_QWORD *)this + 4);
    LastError = v3;
    if ( v3 < 0 )
    {
      v13 = 435LL;
    }
    else
    {
      Handles[0] = (HANDLE)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v7 + 40LL))(*v7);
      Handles[1] = *((HANDLE *)this + 30);
      while ( 1 )
      {
        if ( *((_BYTE *)this + 112) )
        {
          LastError = 0;
          goto LABEL_17;
        }
        v3 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v7 + 32LL))(*v7);
        LastError = v3;
        if ( v3 < 0 )
        {
          v13 = 448LL;
          goto LABEL_16;
        }
        v20 = -1;
        v3 = PnpDeviceWatcher::ProcessDeviceNotifications(v1, &v20);
        LastError = v3;
        if ( v3 < 0 )
          break;
        v9 = -1;
        v10 = (_QWORD *)*((_QWORD *)this + 6);
        while ( v10 != (_QWORD *)((char *)this + 48) )
        {
          v15 = (LampArrayDevice *)v10[2];
          v19 = 0;
          if ( (unsigned int)LampArrayDevice::UpdateFromActiveViewClient(v15, &v19) == -2147024882 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x1C8,
              (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\lamparrayrawinputprovider.cpp",
              (const char *)0x8007000ELL,
              bAlertable);
            LastError = -2147024882;
            goto LABEL_17;
          }
          v10 = (_QWORD *)*v10;
          if ( v19 < v9 )
            v9 = v19;
        }
        v11 = v20;
        if ( v9 < v20 )
          v11 = v9;
        if ( WaitForMultipleObjectsEx(2u, Handles, 0, v11, 1) == -1 )
        {
          LastError = wil::details::in1diag3::Return_GetLastError(
                        retaddr,
                        (void *)0x1CE,
                        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\lampa"
                                      "rrayrawinputprovider.cpp",
                        v12);
          goto LABEL_17;
        }
      }
      v13 = 452LL;
    }
  }
LABEL_16:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v13,
    (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\lamparrayrawinputprovider.cpp",
    (const char *)(unsigned int)v3,
    bAlertable);
LABEL_17:
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)this + 4);
  PnpDeviceWatcher::Shutdown(v1);
  return LastError;
}
