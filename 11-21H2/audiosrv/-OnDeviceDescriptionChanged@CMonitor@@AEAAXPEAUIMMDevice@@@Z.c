/*
 * XREFs of ?OnDeviceDescriptionChanged@CMonitor@@AEAAXPEAUIMMDevice@@@Z @ 0x180121D94
 * Callers:
 *     ?OnDeviceDescriptionChanged@CMonitorManager@@AEAAXPEBGPEBU_tagpropertykey@@@Z @ 0x18011D3A0 (-OnDeviceDescriptionChanged@CMonitorManager@@AEAAXPEBGPEBU_tagpropertykey@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180010930 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18004DA6C (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     WPP_SF_d @ 0x1800C6278 (WPP_SF_d.c)
 *     WPP_SF_qd @ 0x1800C9C78 (WPP_SF_qd.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CMonitor::OnDeviceDescriptionChanged(CMonitor *this, struct IMMDevice *a2)
{
  int v4; // eax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+30h] [rbp-30h] BYREF
  char v6; // [rsp+38h] [rbp-28h]
  PROPVARIANT pvar[2]; // [rsp+40h] [rbp-20h] BYREF
  __int64 v8; // [rsp+50h] [rbp-10h]
  __int64 v9; // [rsp+70h] [rbp+10h] BYREF

  v9 = 0LL;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 16);
  v6 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  if ( WPP_GLOBAL_Control != (CEndpointStoreCache *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_qd(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x1Cu,
      (__int64)&WPP_a37dfcc815523b32eaec5cff52282599_Traceguids,
      this,
      *((_DWORD *)this + 14));
  }
  if ( (unsigned int)(*((_DWORD *)this + 14) - 2) <= 2 )
  {
    *(_OWORD *)pvar = 0LL;
    v8 = 0LL;
    v4 = ((__int64 (__fastcall *)(struct IMMDevice *, _QWORD, __int64 *))a2->lpVtbl->OpenPropertyStore)(a2, 0LL, &v9);
    if ( v4 < 0
      || (v4 = (*(__int64 (__fastcall **)(__int64, const PROPERTYKEY *, PROPVARIANT *))(*(_QWORD *)v9 + 40LL))(
                 v9,
                 &PKEY_Device_FriendlyName,
                 pvar),
          v4 < 0)
      || LOWORD(pvar[0]) == 31
      && (v4 = (*(__int64 (__fastcall **)(_QWORD, PROPVARIANT, _QWORD))(**((_QWORD **)this + 29) + 40LL))(
                 *((_QWORD *)this + 29),
                 pvar[1],
                 0LL),
          v4 < 0) )
    {
      if ( WPP_GLOBAL_Control != (CEndpointStoreCache *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
      {
        WPP_SF_d(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          0x1Du,
          (__int64)&WPP_a37dfcc815523b32eaec5cff52282599_Traceguids,
          v4);
      }
    }
    PropVariantClear(pvar);
  }
  if ( v6 )
    LeaveCriticalSection(lpCriticalSection);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v9);
}
