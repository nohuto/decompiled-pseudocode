/*
 * XREFs of ?Initialize@SpatialRimDeviceCollection@@IEAAJPEAPEAX@Z @ 0x1800423D0
 * Callers:
 *     ?Create@SpatialRimDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAUIMessageSession@@PEAPEAXPEAPEAV1@@Z @ 0x180037444 (-Create@SpatialRimDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAUIMessageS.c)
 * Callees:
 *     ?CloseHandle@details@wil@@YAXPEAX@Z @ 0x180033434 (-CloseHandle@details@wil@@YAXPEAX@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800334B8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RegisterFor3DCompositorRunningChanged@MPC3DStateHelper@@QEAAXV?$function@$$A6AX_N@Z@std@@PEAI@Z @ 0x18003F364 (-RegisterFor3DCompositorRunningChanged@MPC3DStateHelper@@QEAAXV-$function@$$A6AX_N@Z@std@@PEAI@Z.c)
 *     ?Is3DCompositorRunning@MPC3DStateHelper@@QEAA_NXZ @ 0x180041C98 (-Is3DCompositorRunning@MPC3DStateHelper@@QEAA_NXZ.c)
 *     ?Initialize@HIDDeviceCollection@@QEAAJKQEAU_RIM_USAGE_ANDPAGE@@KKPEAPEAX@Z @ 0x180041DD0 (-Initialize@HIDDeviceCollection@@QEAAJKQEAU_RIM_USAGE_ANDPAGE@@KKPEAPEAX@Z.c)
 *     ?GetInstance@MPC3DStateHelper@@SAPEAV1@XZ @ 0x1800428A8 (-GetInstance@MPC3DStateHelper@@SAPEAV1@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800A9F54 (-Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?OnCompositorRunningStateChanged@SpatialRimDeviceCollection@@AEAAX_N@Z @ 0x1800E8C20 (-OnCompositorRunningStateChanged@SpatialRimDeviceCollection@@AEAAX_N@Z.c)
 */

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
  RTL_SRWLOCK *Instance; // rbx
  _QWORD v19[2]; // [rsp+30h] [rbp-58h] BYREF
  char v20; // [rsp+40h] [rbp-48h]
  SpatialRimDeviceCollection *v21; // [rsp+48h] [rbp-40h]
  _QWORD *v22; // [rsp+68h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]
  char v24; // [rsp+90h] [rbp+8h]

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
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\spatialrimdevicecollection.cpp",
      (const char *)(unsigned int)v11);
    return v14;
  }
  else
  {
    v15 = HIDDeviceCollection::Initialize(
            (HANDLE *)this,
            v12,
            (struct _RIM_USAGE_ANDPAGE *const)&unk_180276FE0,
            v13,
            0x1Du,
            a2);
    v16 = v15;
    if ( v15 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1C5,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\spatialrimdevicecollection.cpp",
        (const char *)(unsigned int)v15);
      return v16;
    }
    else
    {
      Instance = (RTL_SRWLOCK *)MPC3DStateHelper::GetInstance();
      if ( MPC3DStateHelper::Is3DCompositorRunning(Instance) )
      {
        SpatialRimDeviceCollection::OnCompositorRunningStateChanged(this, 1);
      }
      else
      {
        v19[0] = &std::_Func_impl_no_alloc<std::_Binder<std::_Unforced,void (SpatialRimDeviceCollection::*)(bool),SpatialRimDeviceCollection *,std::_Ph<1> const &>,void,bool>::`vftable';
        v19[1] = SpatialRimDeviceCollection::OnCompositorRunningStateChanged;
        v20 = v24;
        v21 = this;
        v22 = v19;
        MPC3DStateHelper::RegisterFor3DCompositorRunningChanged(Instance, (__int64)v19, (_DWORD *)this + 725);
      }
      return 0LL;
    }
  }
}
