/*
 * XREFs of ?DragLeave@CMultitaskingViewElementBase@@UEAAXXZ @ 0x1804B9470
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??4PointerTracking@CMultitaskingViewElementBase@@QEAAAEAU01@$$QEAU01@@Z @ 0x1804B9170 (--4PointerTracking@CMultitaskingViewElementBase@@QEAAAEAU01@$$QEAU01@@Z.c)
 */

void __fastcall CMultitaskingViewElementBase::DragLeave(CMultitaskingViewElementBase *this)
{
  __int64 v2; // rcx
  __int128 v3; // [rsp+20h] [rbp-50h] BYREF
  int v4; // [rsp+30h] [rbp-40h]
  int v5; // [rsp+34h] [rbp-3Ch]
  int v6; // [rsp+38h] [rbp-38h]
  int v7; // [rsp+3Ch] [rbp-34h]
  _OWORD v8[2]; // [rsp+40h] [rbp-30h] BYREF
  int v9; // [rsp+60h] [rbp-10h]
  int v10; // [rsp+64h] [rbp-Ch]

  v2 = *((_QWORD *)this + 17);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 464LL))(v2);
  v7 = 0;
  v10 = 0;
  v4 = 0;
  v5 = 0;
  v6 = 0;
  v9 = 0;
  v3 = 0LL;
  memset(v8, 0, sizeof(v8));
  CMultitaskingViewElementBase::PointerTracking::operator=((__int64)this + 96, (__int64)&v3);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)v8 + 1);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)v8);
  (*(void (__fastcall **)(CMultitaskingViewElementBase *))(*(_QWORD *)this + 624LL))(this);
}
