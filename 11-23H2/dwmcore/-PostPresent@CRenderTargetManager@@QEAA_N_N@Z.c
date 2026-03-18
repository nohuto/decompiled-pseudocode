/*
 * XREFs of ?PostPresent@CRenderTargetManager@@QEAA_N_N@Z @ 0x18004BD40
 * Callers:
 *     ?PostPresent@CComposition@@QEAAJ_N@Z @ 0x18004B780 (-PostPresent@CComposition@@QEAAJ_N@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18002731C (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?InternalQueryInterface@?$CMILCOMBaseT@UIUnknown@@@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180049EB8 (-InternalQueryInterface@-$CMILCOMBaseT@UIUnknown@@@@IEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?GetPrimaryMonitorTarget@CRenderTargetManager@@QEBAPEAVIMonitorTarget@@XZ @ 0x18004AEE0 (-GetPrimaryMonitorTarget@CRenderTargetManager@@QEBAPEAVIMonitorTarget@@XZ.c)
 *     ?HasActiveInk@CSuperWetInkManager@@QEBA_NXZ @ 0x18004B068 (-HasActiveInk@CSuperWetInkManager@@QEBA_NXZ.c)
 *     ?AdvanceFrame@CDeviceManager@@IEAAXXZ @ 0x18006ED84 (-AdvanceFrame@CDeviceManager@@IEAAXXZ.c)
 *     ?EnsureDxDisplayModeChangedEvent@CRenderTargetManager@@AEAAJXZ @ 0x1800D13C8 (-EnsureDxDisplayModeChangedEvent@CRenderTargetManager@@AEAAJXZ.c)
 *     ?EndTargetEnumeration@CRenderTargetManager@@AEAAXXZ @ 0x1800F1700 (-EndTargetEnumeration@CRenderTargetManager@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x18010EE30 (__security_check_cookie.c)
 *     memset_0 @ 0x18010FFF8 (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18011B6B0 (_guard_xfg_dispatch_icall_nop.c)
 *     McGenEventWrite_EventWriteTransfer @ 0x1801A2414 (McGenEventWrite_EventWriteTransfer.c)
 *     ??0?$com_ptr_t@VISwapChain@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVISwapChain@@@Z @ 0x1801B3780 (--0-$com_ptr_t@VISwapChain@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVISwapChain@@@Z.c)
 */

char __fastcall CRenderTargetManager::PostPresent(CRenderTargetManager *this, char a2)
{
  __int64 v4; // rcx
  __int64 v5; // rax
  char v6; // si
  char v7; // di
  __int64 *v9; // r14
  __int64 *i; // rdi
  __int64 v11; // rcx
  __int64 v12; // rdx
  struct IMonitorTarget *PrimaryMonitorTarget; // rax
  __int64 v14; // rax
  int (__fastcall ***v15)(_QWORD, GUID *, __int64 *); // rcx
  __int64 v16; // [rsp+38h] [rbp-39h] BYREF
  __int64 v17; // [rsp+40h] [rbp-31h] BYREF
  int v18; // [rsp+48h] [rbp-29h] BYREF
  _BYTE v19[72]; // [rsp+50h] [rbp-21h] BYREF

  v4 = *(_QWORD *)this;
  v5 = *(_QWORD *)(v4 + 216);
  v6 = (!*(_BYTE *)(v5 + 581) || *(_BYTE *)(v5 + 582))
    && (*(_DWORD *)(v4 + 1228) || CSuperWetInkManager::HasActiveInk(*(CSuperWetInkManager **)(v4 + 256)));
  if ( v6 != *((_BYTE *)this + 583) )
  {
    *((_BYTE *)this + 576) = 1;
    v9 = (__int64 *)*((_QWORD *)this + 2);
    for ( i = (__int64 *)*((_QWORD *)this + 1); i != v9; ++i )
    {
      v11 = *i;
      v16 = 0LL;
      if ( (int)CMILCOMBaseT<IUnknown>::InternalQueryInterface(v11, &GUID_246c9be3_da00_417e_8eb0_aefc3aebe2a9, &v16) >= 0 )
      {
        LOBYTE(v12) = v6;
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v16 + 112LL))(v16, v12);
      }
      wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v16);
    }
    CRenderTargetManager::EndTargetEnumeration(this);
    *((_BYTE *)this + 583) = v6;
  }
  v7 = *((_BYTE *)this + 578);
  *((_BYTE *)this + 578) = 0;
  CDeviceManager::AdvanceFrame((CDeviceManager *)v4);
  if ( !a2 && *(int *)(*(_QWORD *)this + 1104LL) >= 5 )
  {
    PrimaryMonitorTarget = CRenderTargetManager::GetPrimaryMonitorTarget(this);
    if ( PrimaryMonitorTarget )
    {
      v14 = (*(__int64 (__fastcall **)(struct IMonitorTarget *))(*(_QWORD *)PrimaryMonitorTarget + 144LL))(PrimaryMonitorTarget);
      wil::com_ptr_t<ISwapChain,wil::err_returncode_policy>::com_ptr_t<ISwapChain,wil::err_returncode_policy>(&v17, v14);
      if ( v17 )
      {
        v16 = 0LL;
        v15 = (int (__fastcall ***)(_QWORD, GUID *, __int64 *))(*(int *)(*(_QWORD *)(v17 + 8) + 4LL) + v17 + 8);
        if ( (**v15)(v15, &GUID_d56bd476_4f78_4415_941c_d6dd54681d7c, &v16) >= 0 )
        {
          v18 = 5;
          memset_0(v19, 0, 0x40uLL);
          (*(void (__fastcall **)(__int64, int *))(*(_QWORD *)v16 + 64LL))(v16, &v18);
          if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
            McGenEventWrite_EventWriteTransfer(
              &Microsoft_Windows_Dwm_Core_Provider_Context,
              &EVTDESC_DETECT_DESKTOP_ENDOFUPDATES);
        }
        wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v16);
      }
      wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v17);
    }
  }
  if ( v7 && (int)CRenderTargetManager::EnsureDxDisplayModeChangedEvent(this) >= 0 )
    SetEvent(*((HANDLE *)this + 66));
  return v7;
}
