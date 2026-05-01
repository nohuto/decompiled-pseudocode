/*
 * XREFs of ?PointerLeave@CMultitaskingViewElementBase@@UEAAXXZ @ 0x180575220
 * Callers:
 *     ?PointerLeave@CMultitaskingViewButtonElement@@UEAAXXZ @ 0x1802E4BC0 (-PointerLeave@CMultitaskingViewButtonElement@@UEAAXXZ.c)
 *     ?PointerLeave@HotTrackingElement@@UEAAXXZ @ 0x180569B70 (-PointerLeave@HotTrackingElement@@UEAAXXZ.c)
 *     ?PointerLeave@CMultitaskingViewFrameElement@@UEAAXXZ @ 0x18057D6B0 (-PointerLeave@CMultitaskingViewFrameElement@@UEAAXXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0PointerTracking@CMultitaskingViewElementBase@@QEAA@AEBU01@@Z @ 0x180573BA4 (--0PointerTracking@CMultitaskingViewElementBase@@QEAA@AEBU01@@Z.c)
 *     ??4PointerTracking@CMultitaskingViewElementBase@@QEAAAEAU01@$$QEAU01@@Z @ 0x180573CB0 (--4PointerTracking@CMultitaskingViewElementBase@@QEAAAEAU01@$$QEAU01@@Z.c)
 *     ??4PointerTracking@CMultitaskingViewElementBase@@QEAAAEAU01@AEBU01@@Z @ 0x180573D18 (--4PointerTracking@CMultitaskingViewElementBase@@QEAAAEAU01@AEBU01@@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CMultitaskingViewElementBase::PointerLeave(CMultitaskingViewElementBase *this)
{
  __int64 v2; // rcx
  __int128 v3; // [rsp+20h] [rbp-49h] BYREF
  int v4; // [rsp+30h] [rbp-39h]
  int v5; // [rsp+34h] [rbp-35h]
  int v6; // [rsp+38h] [rbp-31h]
  int v7; // [rsp+3Ch] [rbp-2Dh]
  _OWORD v8[2]; // [rsp+40h] [rbp-29h] BYREF
  int v9; // [rsp+60h] [rbp-9h]
  int v10; // [rsp+64h] [rbp-5h]
  _DWORD v11[8]; // [rsp+70h] [rbp+7h] BYREF
  __int64 v12; // [rsp+90h] [rbp+27h] BYREF
  __int64 v13; // [rsp+98h] [rbp+2Fh] BYREF
  __int128 v14; // [rsp+A0h] [rbp+37h]
  int v15; // [rsp+B0h] [rbp+47h]

  CMultitaskingViewElementBase::PointerTracking::PointerTracking(
    (CMultitaskingViewElementBase::PointerTracking *)v11,
    (CMultitaskingViewElementBase *)((char *)this + 96));
  if ( *((_DWORD *)this + 25) )
  {
    v11[0] = 0;
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v13);
    v14 = 0LL;
    v15 = 0;
  }
  else
  {
    v7 = 0;
    v10 = 0;
    v3 = 0LL;
    v4 = 0;
    v5 = 0;
    v6 = 0;
    memset(v8, 0, sizeof(v8));
    v9 = 0;
    CMultitaskingViewElementBase::PointerTracking::operator=((__int64)v11, (__int64)&v3);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)v8 + 1);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)v8);
  }
  v2 = *((_QWORD *)this + 17);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 216LL))(v2);
  CMultitaskingViewElementBase::PointerTracking::operator=((__int64)this + 96, (__int64)v11);
  (*(void (__fastcall **)(CMultitaskingViewElementBase *))(*(_QWORD *)this + 568LL))(this);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v13);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v12);
}
