/*
 * XREFs of ?Initialize@SpatialRimDeviceCollection@@IEAAJPEAPEAX@Z @ 0x18002B630
 * Callers:
 *     ?Create@SpatialRimDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAUIMessageSession@@PEAPEAXPEAPEAV1@@Z @ 0x18002AA1C (-Create@SpatialRimDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAUIMessageS.c)
 * Callees:
 *     ?Initialize@HIDDeviceCollection@@QEAAJKQEAU_RIM_USAGE_ANDPAGE@@KKPEAPEAX@Z @ 0x18002B01C (-Initialize@HIDDeviceCollection@@QEAAJKQEAU_RIM_USAGE_ANDPAGE@@KKPEAPEAX@Z.c)
 *     ?GetInstance@MPC3DStateHelper@@SAPEAV1@XZ @ 0x18002C220 (-GetInstance@MPC3DStateHelper@@SAPEAV1@XZ.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockShared@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18002D48C (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockShared@@YA.c)
 *     ?RegisterFor3DCompositorRunningChanged@MPC3DStateHelper@@QEAAXV?$function@$$A6AX_N@Z@std@@PEAI@Z @ 0x18002D4B4 (-RegisterFor3DCompositorRunningChanged@MPC3DStateHelper@@QEAAXV-$function@$$A6AX_N@Z@std@@PEAI@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044BD0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CloseHandle@details@wil@@YAXPEAX@Z @ 0x1800480B0 (-CloseHandle@details@wil@@YAXPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180090E9C (-Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?OnCompositorRunningStateChanged@SpatialRimDeviceCollection@@AEAAX_N@Z @ 0x1800C0D00 (-OnCompositorRunningStateChanged@SpatialRimDeviceCollection@@AEAAX_N@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall SpatialRimDeviceCollection::Initialize(SpatialRimDeviceCollection *this, void **a2)
{
  void *v4; // rdx
  unsigned int v5; // r8d
  const char *v6; // r9
  HANDLE Event; // r15
  wil::details *v8; // rsi
  DWORD LastError; // ebx
  void *v10; // rdx
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // r9
  unsigned int v14; // ebx
  int v15; // eax
  unsigned int v16; // ebx
  struct MPC3DStateHelper *Instance; // rsi
  char v18; // bl
  unsigned int v20; // [rsp+20h] [rbp-68h]
  unsigned int v21; // [rsp+20h] [rbp-68h]
  _QWORD v22[2]; // [rsp+30h] [rbp-58h] BYREF
  char v23; // [rsp+40h] [rbp-48h]
  SpatialRimDeviceCollection *v24; // [rsp+48h] [rbp-40h]
  _QWORD *v25; // [rsp+68h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]
  struct MPC3DStateHelper *v27; // [rsp+90h] [rbp+8h] BYREF

  *((_DWORD *)this + 710) = GetCurrentThreadId();
  Event = CreateEventExW(0LL, 0LL, 0, 0x1F0003u);
  if ( !Event )
    wil::details::in1diag3::Throw_GetLastError(retaddr, v4, v5, v6);
  GetLastError();
  v8 = (wil::details *)*((_QWORD *)this + 372);
  if ( v8 )
  {
    LastError = GetLastError();
    wil::details::CloseHandle(v8, v10);
    SetLastError(LastError);
  }
  *((_QWORD *)this + 372) = Event;
  v11 = (*(__int64 (__fastcall **)(_QWORD, HANDLE, __int64 (__fastcall *)(struct SpatialRimDeviceCollection *, unsigned int, void *), SpatialRimDeviceCollection *))(**((_QWORD **)this + 345) + 272LL))(
          *((_QWORD *)this + 345),
          Event,
          SpatialRimDeviceCollection::OnCallbackOnInputThreadStatic,
          this);
  v14 = v11;
  if ( v11 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1BE,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\spatialrimdevicecollection.cpp",
      (const char *)(unsigned int)v11,
      v20);
    return v14;
  }
  else
  {
    v15 = HIDDeviceCollection::Initialize(
            (HANDLE *)this,
            v12,
            (struct _RIM_USAGE_ANDPAGE *const)&unk_180241FA0,
            v13,
            0x1Du,
            a2);
    v16 = v15;
    if ( v15 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1C5,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\spatialrimdevicecollection.cpp",
        (const char *)(unsigned int)v15,
        v21);
      return v16;
    }
    else
    {
      Instance = MPC3DStateHelper::GetInstance();
      AcquireSRWLockShared((PSRWLOCK)Instance);
      v27 = Instance;
      v18 = *((_BYTE *)Instance + 20);
      wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v27);
      if ( v18 )
      {
        SpatialRimDeviceCollection::OnCompositorRunningStateChanged(this, 1);
      }
      else
      {
        v22[0] = &std::_Func_impl_no_alloc<std::_Binder<std::_Unforced,void (SpatialRimDeviceCollection::*)(bool),SpatialRimDeviceCollection *,std::_Ph<1> const &>,void,bool>::`vftable';
        v22[1] = SpatialRimDeviceCollection::OnCompositorRunningStateChanged;
        v23 = (char)v27;
        v24 = this;
        v25 = v22;
        MPC3DStateHelper::RegisterFor3DCompositorRunningChanged((PSRWLOCK)Instance);
      }
      return 0LL;
    }
  }
}
