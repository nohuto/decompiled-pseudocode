/*
 * XREFs of ?InitializeSyncObjects@RIMDeviceCollection@@IEAAJXZ @ 0x18002B240
 * Callers:
 *     ?Initialize@HIDDeviceCollection@@QEAAJKQEAU_RIM_USAGE_ANDPAGE@@KKPEAPEAX@Z @ 0x18002B01C (-Initialize@HIDDeviceCollection@@QEAAJKQEAU_RIM_USAGE_ANDPAGE@@KKPEAPEAX@Z.c)
 *     ?Initialize@RIMDeviceCollection@@UEAAJKKPEAPEAX@Z @ 0x1800BC0A4 (-Initialize@RIMDeviceCollection@@UEAAJKKPEAPEAX@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ @ 0x18000BC64 (-InternalRelease@-$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044BD0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18007DEDC (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall RIMDeviceCollection::InitializeSyncObjects(RIMDeviceCollection *this)
{
  HANDLE CurrentProcess; // rdi
  HANDLE EventW; // rax
  const char *v4; // r9
  HANDLE v5; // rax
  const char *v6; // r9
  const char *v7; // r9
  HANDLE v8; // r14
  int v9; // eax
  unsigned int v10; // ebx
  __int64 v11; // rcx
  HANDLE v12; // rax
  const char *v13; // r9
  const char *v14; // r9
  HANDLE v15; // r14
  int v16; // eax
  unsigned int v17; // ebx
  __int64 v18; // rcx
  HANDLE WaitableTimer; // rax
  const char *v20; // r9
  const char *v21; // r9
  HANDLE v22; // r14
  int v23; // eax
  unsigned int v24; // ebx
  __int64 v25; // rcx
  HANDLE Semaphore; // rax
  const char *v27; // r9
  const char *v28; // r9
  HANDLE v29; // rdi
  int v30; // eax
  unsigned int v31; // ebx
  __int64 v32; // rcx
  __int64 v34; // rdx
  __int64 v35; // r9
  __int64 v36; // rdx
  __int64 v37; // r9
  __int64 v38; // rdx
  __int64 v39; // r9
  __int64 v40; // rdx
  __int64 v41; // r9
  DWORD dwDesiredAccess; // [rsp+20h] [rbp-20h]
  DWORD dwDesiredAccessa; // [rsp+20h] [rbp-20h]
  DWORD dwDesiredAccessb; // [rsp+20h] [rbp-20h]
  DWORD dwDesiredAccessc; // [rsp+20h] [rbp-20h]
  DWORD dwDesiredAccessd; // [rsp+20h] [rbp-20h]
  DWORD dwDesiredAccesse; // [rsp+20h] [rbp-20h]
  DWORD dwDesiredAccessf; // [rsp+20h] [rbp-20h]
  DWORD dwDesiredAccessg; // [rsp+20h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+28h]
  __int64 v51; // [rsp+70h] [rbp+30h] BYREF
  HANDLE TargetHandle; // [rsp+78h] [rbp+38h] BYREF
  HANDLE v53; // [rsp+80h] [rbp+40h] BYREF

  CurrentProcess = GetCurrentProcess();
  TargetHandle = 0LL;
  v53 = 0LL;
  EventW = CreateEventW(0LL, 0, 0, 0LL);
  *((_QWORD *)this + 5) = EventW;
  if ( !EventW )
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)0x306,
             (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\rimdevicecollection.cpp",
             v4);
  v5 = CreateEventW(0LL, 0, 0, 0LL);
  *((_QWORD *)this + 6) = v5;
  if ( !v5 )
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)0x30D,
             (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\rimdevicecollection.cpp",
             v6);
  if ( !DuplicateHandle(CurrentProcess, v5, CurrentProcess, &TargetHandle, 0, 0, 2u) )
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)0x316,
             (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\rimdevicecollection.cpp",
             v7);
  v8 = TargetHandle;
  v51 = 0LL;
  v9 = CoreUICreate(&v51);
  v10 = v9;
  if ( v9 < 0 )
  {
    v34 = 1201LL;
LABEL_37:
    v35 = (unsigned int)v9;
    goto LABEL_38;
  }
  if ( !v51 )
  {
    v10 = -2147418113;
    v35 = 2147549183LL;
    v34 = 1205LL;
LABEL_38:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v34,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\rimdevicecollection.cpp",
      (const char *)v35,
      dwDesiredAccess);
    Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease(&v51);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x31B,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\rimdevicecollection.cpp",
      (const char *)v10,
      dwDesiredAccessd);
    return v10;
  }
  v9 = (*(__int64 (__fastcall **)(__int64, HANDLE, __int64 (__fastcall *)(void *, unsigned int, void *), RIMDeviceCollection *))(*(_QWORD *)v51 + 272LL))(
         v51,
         v8,
         RIMDeviceCollection::OnRIMPnpEventStatic,
         this);
  v10 = v9;
  if ( v9 < 0 )
  {
    v34 = 1211LL;
    goto LABEL_37;
  }
  v11 = v51;
  if ( v51 )
  {
    v51 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  }
  v12 = CreateEventW(0LL, 0, 0, 0LL);
  *((_QWORD *)this + 7) = v12;
  if ( !v12 )
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)0x322,
             (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\rimdevicecollection.cpp",
             v13);
  if ( !DuplicateHandle(CurrentProcess, v12, CurrentProcess, &TargetHandle, 0, 0, 2u) )
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)0x32B,
             (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\rimdevicecollection.cpp",
             v14);
  v15 = TargetHandle;
  v51 = 0LL;
  v16 = CoreUICreate(&v51);
  v17 = v16;
  if ( v16 < 0 )
  {
    v36 = 1201LL;
LABEL_44:
    v37 = (unsigned int)v16;
    goto LABEL_45;
  }
  if ( !v51 )
  {
    v17 = -2147418113;
    v37 = 2147549183LL;
    v36 = 1205LL;
LABEL_45:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v36,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\rimdevicecollection.cpp",
      (const char *)v37,
      dwDesiredAccessa);
    Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease(&v51);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x330,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\rimdevicecollection.cpp",
      (const char *)v17,
      dwDesiredAccesse);
    return v17;
  }
  v16 = (*(__int64 (__fastcall **)(__int64, HANDLE, __int64 (__fastcall *)(void *, unsigned int, void *), RIMDeviceCollection *))(*(_QWORD *)v51 + 272LL))(
          v51,
          v15,
          RIMDeviceCollection::OnRIMDeferredRead,
          this);
  v17 = v16;
  if ( v16 < 0 )
  {
    v36 = 1211LL;
    goto LABEL_44;
  }
  v18 = v51;
  if ( v51 )
  {
    v51 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
  }
  WaitableTimer = CreateWaitableTimerExW(0LL, 0LL, 0, 0x100002u);
  *((_QWORD *)this + 8) = WaitableTimer;
  if ( !WaitableTimer )
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)0x338,
             (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\rimdevicecollection.cpp",
             v20);
  if ( !DuplicateHandle(CurrentProcess, WaitableTimer, CurrentProcess, &TargetHandle, 0, 0, 2u) )
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)0x341,
             (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\rimdevicecollection.cpp",
             v21);
  v22 = TargetHandle;
  v51 = 0LL;
  v23 = CoreUICreate(&v51);
  v24 = v23;
  if ( v23 < 0 )
  {
    v38 = 1201LL;
LABEL_51:
    v39 = (unsigned int)v23;
    goto LABEL_52;
  }
  if ( !v51 )
  {
    v24 = -2147418113;
    v39 = 2147549183LL;
    v38 = 1205LL;
LABEL_52:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v38,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\rimdevicecollection.cpp",
      (const char *)v39,
      dwDesiredAccessb);
    Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease(&v51);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x346,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\rimdevicecollection.cpp",
      (const char *)v24,
      dwDesiredAccessf);
    return v24;
  }
  v23 = (*(__int64 (__fastcall **)(__int64, HANDLE, __int64 (__fastcall *)(void *, unsigned int, void *), RIMDeviceCollection *))(*(_QWORD *)v51 + 272LL))(
          v51,
          v22,
          RIMDeviceCollection::OnRIMTimerEventStatic,
          this);
  v24 = v23;
  if ( v23 < 0 )
  {
    v38 = 1211LL;
    goto LABEL_51;
  }
  v25 = v51;
  if ( v51 )
  {
    v51 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
  }
  Semaphore = CreateSemaphoreExW(0LL, 0, 0x7FFFFFFF, 0LL, 0, 0x1F0003u);
  *((_QWORD *)this + 9) = Semaphore;
  if ( !Semaphore )
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)0x350,
             (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\rimdevicecollection.cpp",
             v27);
  if ( !DuplicateHandle(CurrentProcess, Semaphore, CurrentProcess, &v53, 0, 0, 2u) )
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)0x359,
             (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\rimdevicecollection.cpp",
             v28);
  v29 = v53;
  v51 = 0LL;
  v30 = CoreUICreate(&v51);
  v31 = v30;
  if ( v30 < 0 )
  {
    v40 = 1201LL;
LABEL_58:
    v41 = (unsigned int)v30;
    goto LABEL_59;
  }
  if ( !v51 )
  {
    v31 = -2147418113;
    v41 = 2147549183LL;
    v40 = 1205LL;
LABEL_59:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v40,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\rimdevicecollection.cpp",
      (const char *)v41,
      dwDesiredAccessc);
    Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease(&v51);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x35E,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\rimdevicecollection.cpp",
      (const char *)v31,
      dwDesiredAccessg);
    return v31;
  }
  v30 = (*(__int64 (__fastcall **)(__int64, HANDLE, __int64 (__fastcall *)(void *, unsigned int, void *), RIMDeviceCollection *))(*(_QWORD *)v51 + 272LL))(
          v51,
          v29,
          RIMDeviceCollection::OnRIMAsyncPnpWorkNotificationSemaphoreStatic,
          this);
  v31 = v30;
  if ( v30 < 0 )
  {
    v40 = 1211LL;
    goto LABEL_58;
  }
  v32 = v51;
  if ( v51 )
  {
    v51 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v32 + 16LL))(v32);
  }
  return 0LL;
}
