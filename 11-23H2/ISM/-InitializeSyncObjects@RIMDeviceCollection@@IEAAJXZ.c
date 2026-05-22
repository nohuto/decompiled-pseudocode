/*
 * XREFs of ?InitializeSyncObjects@RIMDeviceCollection@@IEAAJXZ @ 0x180041598
 * Callers:
 *     ?Initialize@HIDDeviceCollection@@QEAAJKQEAU_RIM_USAGE_ANDPAGE@@KKPEAPEAX@Z @ 0x180041388 (-Initialize@HIDDeviceCollection@@QEAAJKQEAU_RIM_USAGE_ANDPAGE@@KKPEAPEAX@Z.c)
 *     ?Initialize@RIMDeviceCollection@@UEAAJKKPEAPEAX@Z @ 0x1800D5174 (-Initialize@RIMDeviceCollection@@UEAAJKKPEAPEAX@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ @ 0x180015974 (-InternalRelease@-$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C9C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18009509C (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall RIMDeviceCollection::InitializeSyncObjects(RIMDeviceCollection *this)
{
  HANDLE CurrentProcess; // rdi
  HANDLE EventW; // rax
  const char *v4; // r9
  HANDLE v5; // rax
  HANDLE v6; // r14
  int v7; // eax
  unsigned int v8; // ebx
  __int64 v9; // rcx
  HANDLE v10; // rax
  HANDLE v11; // r14
  int v12; // eax
  __int64 v13; // rcx
  HANDLE WaitableTimer; // rax
  HANDLE v15; // r14
  int v16; // eax
  __int64 v17; // rcx
  HANDLE Semaphore; // rax
  HANDLE v19; // rdi
  int v20; // eax
  __int64 v21; // rcx
  __int64 v23; // rdx
  __int64 v24; // rdx
  __int64 v25; // r9
  __int64 v26; // rdx
  __int64 v27; // rdx
  __int64 v28; // r9
  __int64 v29; // rdx
  __int64 v30; // r9
  __int64 v31; // rdx
  __int64 v32; // r9
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+28h]
  __int64 v34; // [rsp+70h] [rbp+30h] BYREF
  HANDLE TargetHandle; // [rsp+78h] [rbp+38h] BYREF
  HANDLE v36; // [rsp+80h] [rbp+40h] BYREF

  CurrentProcess = GetCurrentProcess();
  TargetHandle = 0LL;
  v36 = 0LL;
  EventW = CreateEventW(0LL, 0, 0, 0LL);
  *((_QWORD *)this + 5) = EventW;
  if ( !EventW )
  {
    v23 = 768LL;
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)v23,
             (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\rimdevicecollection.cpp",
             v4);
  }
  v5 = CreateEventW(0LL, 0, 0, 0LL);
  *((_QWORD *)this + 6) = v5;
  if ( !v5 )
  {
    v23 = 775LL;
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)v23,
             (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\rimdevicecollection.cpp",
             v4);
  }
  if ( !DuplicateHandle(CurrentProcess, v5, CurrentProcess, &TargetHandle, 0, 0, 2u) )
  {
    v23 = 784LL;
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)v23,
             (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\rimdevicecollection.cpp",
             v4);
  }
  v6 = TargetHandle;
  v34 = 0LL;
  v7 = CoreUICreate(&v34);
  v8 = v7;
  if ( v7 < 0 )
  {
    v24 = 1194LL;
LABEL_39:
    v25 = (unsigned int)v7;
    goto LABEL_40;
  }
  if ( !v34 )
  {
    v8 = -2147418113;
    v25 = 2147549183LL;
    v24 = 1198LL;
LABEL_40:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v24,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\rimdevicecollection.cpp",
      (const char *)v25);
    Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease(&v34);
    v26 = 789LL;
LABEL_44:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v26,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\rimdevicecollection.cpp",
      (const char *)v8);
    return v8;
  }
  v7 = (*(__int64 (__fastcall **)(__int64, HANDLE, __int64 (__fastcall *)(void *, unsigned int, void *), RIMDeviceCollection *))(*(_QWORD *)v34 + 272LL))(
         v34,
         v6,
         RIMDeviceCollection::OnRIMPnpEventStatic,
         this);
  v8 = v7;
  if ( v7 < 0 )
  {
    v24 = 1204LL;
    goto LABEL_39;
  }
  v9 = v34;
  if ( v34 )
  {
    v34 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
  v10 = CreateEventW(0LL, 0, 0, 0LL);
  *((_QWORD *)this + 7) = v10;
  if ( !v10 )
  {
    v23 = 796LL;
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)v23,
             (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\rimdevicecollection.cpp",
             v4);
  }
  if ( !DuplicateHandle(CurrentProcess, v10, CurrentProcess, &TargetHandle, 0, 0, 2u) )
  {
    v23 = 805LL;
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)v23,
             (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\rimdevicecollection.cpp",
             v4);
  }
  v11 = TargetHandle;
  v34 = 0LL;
  v12 = CoreUICreate(&v34);
  v8 = v12;
  if ( v12 < 0 )
  {
    v29 = 1194LL;
LABEL_50:
    v30 = (unsigned int)v12;
    goto LABEL_51;
  }
  if ( !v34 )
  {
    v8 = -2147418113;
    v30 = 2147549183LL;
    v29 = 1198LL;
LABEL_51:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v29,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\rimdevicecollection.cpp",
      (const char *)v30);
    Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease(&v34);
    v26 = 810LL;
    goto LABEL_44;
  }
  v12 = (*(__int64 (__fastcall **)(__int64, HANDLE, __int64 (__fastcall *)(void *, unsigned int, void *), RIMDeviceCollection *))(*(_QWORD *)v34 + 272LL))(
          v34,
          v11,
          RIMDeviceCollection::OnRIMDeferredRead,
          this);
  v8 = v12;
  if ( v12 < 0 )
  {
    v29 = 1204LL;
    goto LABEL_50;
  }
  v13 = v34;
  if ( v34 )
  {
    v34 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  }
  WaitableTimer = CreateWaitableTimerExW(0LL, 0LL, 0, 0x100002u);
  *((_QWORD *)this + 8) = WaitableTimer;
  if ( !WaitableTimer )
  {
    v23 = 818LL;
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)v23,
             (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\rimdevicecollection.cpp",
             v4);
  }
  if ( !DuplicateHandle(CurrentProcess, WaitableTimer, CurrentProcess, &TargetHandle, 0, 0, 2u) )
  {
    v23 = 827LL;
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)v23,
             (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\rimdevicecollection.cpp",
             v4);
  }
  v15 = TargetHandle;
  v34 = 0LL;
  v16 = CoreUICreate(&v34);
  v8 = v16;
  if ( v16 < 0 )
  {
    v31 = 1194LL;
LABEL_57:
    v32 = (unsigned int)v16;
    goto LABEL_58;
  }
  if ( !v34 )
  {
    v8 = -2147418113;
    v32 = 2147549183LL;
    v31 = 1198LL;
LABEL_58:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v31,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\rimdevicecollection.cpp",
      (const char *)v32);
    Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease(&v34);
    v26 = 832LL;
    goto LABEL_44;
  }
  v16 = (*(__int64 (__fastcall **)(__int64, HANDLE, __int64 (__fastcall *)(void *, unsigned int, void *), RIMDeviceCollection *))(*(_QWORD *)v34 + 272LL))(
          v34,
          v15,
          RIMDeviceCollection::OnRIMTimerEventStatic,
          this);
  v8 = v16;
  if ( v16 < 0 )
  {
    v31 = 1204LL;
    goto LABEL_57;
  }
  v17 = v34;
  if ( v34 )
  {
    v34 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
  }
  Semaphore = CreateSemaphoreExW(0LL, 0, 0x7FFFFFFF, 0LL, 0, 0x1F0003u);
  *((_QWORD *)this + 9) = Semaphore;
  if ( !Semaphore )
  {
    v23 = 842LL;
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)v23,
             (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\rimdevicecollection.cpp",
             v4);
  }
  if ( !DuplicateHandle(CurrentProcess, Semaphore, CurrentProcess, &v36, 0, 0, 2u) )
  {
    v23 = 851LL;
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)v23,
             (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\rimdevicecollection.cpp",
             v4);
  }
  v19 = v36;
  v34 = 0LL;
  v20 = CoreUICreate(&v34);
  v8 = v20;
  if ( v20 < 0 )
  {
    v27 = 1194LL;
    goto LABEL_42;
  }
  if ( !v34 )
  {
    v8 = -2147418113;
    v28 = 2147549183LL;
    v27 = 1198LL;
    goto LABEL_43;
  }
  v20 = (*(__int64 (__fastcall **)(__int64, HANDLE, __int64 (__fastcall *)(void *, unsigned int, void *), RIMDeviceCollection *))(*(_QWORD *)v34 + 272LL))(
          v34,
          v19,
          RIMDeviceCollection::OnRIMAsyncPnpWorkNotificationSemaphoreStatic,
          this);
  v8 = v20;
  if ( v20 < 0 )
  {
    v27 = 1204LL;
LABEL_42:
    v28 = (unsigned int)v20;
LABEL_43:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v27,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\rimdevicecollection.cpp",
      (const char *)v28);
    Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease(&v34);
    v26 = 856LL;
    goto LABEL_44;
  }
  v21 = v34;
  if ( v34 )
  {
    v34 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
  }
  return 0LL;
}
