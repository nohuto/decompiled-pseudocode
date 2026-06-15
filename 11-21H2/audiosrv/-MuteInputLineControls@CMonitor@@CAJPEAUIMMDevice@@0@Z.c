/*
 * XREFs of ?MuteInputLineControls@CMonitor@@CAJPEAUIMMDevice@@0@Z @ 0x180121B04
 * Callers:
 *     ?Initialize@CMonitor@@QEAAJPEAUIMMDevice@@0KAEA_N@Z @ 0x180120400 (-Initialize@CMonitor@@QEAAJPEAUIMMDevice@@0KAEA_N@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180010930 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     WPP_SF_ @ 0x1800C61A0 (WPP_SF_.c)
 *     WPP_SF_d @ 0x1800C6278 (WPP_SF_d.c)
 *     WPP_SF_qq @ 0x1800DB994 (WPP_SF_qq.c)
 *     ?GetTopologyPartForDevice@CMonitor@@CAJPEAUIMMDevice@@PEAPEAUIPart@@@Z @ 0x1801201D8 (-GetTopologyPartForDevice@CMonitor@@CAJPEAUIMMDevice@@PEAPEAUIPart@@@Z.c)
 *     ?MuteControlsOnPath@CMonitor@@CAJPEAUIPartsList@@@Z @ 0x180121884 (-MuteControlsOnPath@CMonitor@@CAJPEAUIPartsList@@@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CMonitor::MuteInputLineControls(struct IMMDevice *a1, struct IMMDevice *a2)
{
  int TopologyPartForDevice; // ebx
  int v5; // eax
  struct IPartsList *v7; // [rsp+30h] [rbp-10h] BYREF
  struct IPart *v8; // [rsp+38h] [rbp-8h] BYREF
  struct IPart *v9; // [rsp+70h] [rbp+30h] BYREF
  __int64 v10; // [rsp+78h] [rbp+38h] BYREF

  v9 = 0LL;
  v8 = 0LL;
  v7 = 0LL;
  if ( WPP_GLOBAL_Control != (CEndpointStoreCache *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x42u,
      (__int64)&WPP_a37dfcc815523b32eaec5cff52282599_Traceguids,
      a1,
      a2);
  }
  TopologyPartForDevice = CMonitor::GetTopologyPartForDevice(a1, &v9);
  if ( TopologyPartForDevice < 0 )
    goto LABEL_19;
  TopologyPartForDevice = CMonitor::GetTopologyPartForDevice(a2, &v8);
  if ( TopologyPartForDevice < 0 )
    goto LABEL_19;
  v10 = 0LL;
  TopologyPartForDevice = ((__int64 (__fastcall *)(struct IPart *, __int64 *))v9->lpVtbl->GetTopologyObject)(v9, &v10);
  if ( TopologyPartForDevice >= 0 )
  {
    v5 = (*(__int64 (__fastcall **)(__int64, struct IPart *, struct IPart *, _QWORD, struct IPartsList **))(*(_QWORD *)v10 + 72LL))(
           v10,
           v9,
           v8,
           0LL,
           &v7);
    TopologyPartForDevice = v5;
    if ( v5 >= 0 )
    {
      TopologyPartForDevice = CMonitor::MuteControlsOnPath(v7);
    }
    else if ( v5 == -2147023728 )
    {
      if ( WPP_GLOBAL_Control != (CEndpointStoreCache *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x43u, (__int64)&WPP_a37dfcc815523b32eaec5cff52282599_Traceguids);
      }
      TopologyPartForDevice = 0;
    }
  }
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v10);
  if ( TopologyPartForDevice < 0 )
  {
LABEL_19:
    if ( WPP_GLOBAL_Control != (CEndpointStoreCache *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x44u,
        (__int64)&WPP_a37dfcc815523b32eaec5cff52282599_Traceguids,
        TopologyPartForDevice);
    }
  }
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v7);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v8);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v9);
  return (unsigned int)TopologyPartForDevice;
}
