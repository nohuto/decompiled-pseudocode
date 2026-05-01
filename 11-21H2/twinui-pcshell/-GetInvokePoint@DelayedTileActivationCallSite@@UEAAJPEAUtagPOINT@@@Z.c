/*
 * XREFs of ?GetInvokePoint@DelayedTileActivationCallSite@@UEAAJPEAUtagPOINT@@@Z @ 0x1804E79E0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?QueryService@CopyToViewValueSetBase@@UEAAJAEBU_GUID@@0PEAPEAX@Z @ 0x1804E8480 (-QueryService@CopyToViewValueSetBase@@UEAAJAEBU_GUID@@0PEAPEAX@Z.c)
 */

__int64 __fastcall DelayedTileActivationCallSite::GetInvokePoint(
        DelayedTileActivationCallSite *this,
        struct tagPOINT *a2)
{
  unsigned int v4; // ebx
  void *v6; // [rsp+30h] [rbp+8h] BYREF

  *a2 = 0LL;
  v6 = 0LL;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v6);
  if ( (int)CopyToViewValueSetBase::QueryService(
              (DelayedTileActivationCallSite *)((char *)this - 88),
              &IID_IAppActivationUIInfo,
              &GUID_abad189d_9fa3_4278_b3ca_8ca448a88dcb,
              &v6) >= 0 )
    v4 = (*(__int64 (__fastcall **)(void *, struct tagPOINT *))(*(_QWORD *)v6 + 32LL))(v6, a2);
  else
    v4 = -2147023728;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v6);
  return v4;
}
