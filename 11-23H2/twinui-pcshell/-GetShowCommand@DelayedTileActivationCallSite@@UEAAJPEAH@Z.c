/*
 * XREFs of ?GetShowCommand@DelayedTileActivationCallSite@@UEAAJPEAH@Z @ 0x1805A0040
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?QueryService@CopyToViewValueSetBase@@UEAAJAEBU_GUID@@0PEAPEAX@Z @ 0x1805A0930 (-QueryService@CopyToViewValueSetBase@@UEAAJAEBU_GUID@@0PEAPEAX@Z.c)
 */

__int64 __fastcall DelayedTileActivationCallSite::GetShowCommand(DelayedTileActivationCallSite *this, int *a2)
{
  unsigned int v5; // ebx
  void *v6; // [rsp+30h] [rbp+8h] BYREF

  if ( *((_BYTE *)this + 36) )
  {
    *a2 = *((_DWORD *)this + 8);
    return 0LL;
  }
  else
  {
    *a2 = 5;
    v6 = 0LL;
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v6);
    if ( (int)CopyToViewValueSetBase::QueryService(
                (DelayedTileActivationCallSite *)((char *)this - 88),
                &IID_IAppActivationUIInfo,
                &GUID_abad189d_9fa3_4278_b3ca_8ca448a88dcb,
                &v6) >= 0 )
    {
      v5 = (*(__int64 (__fastcall **)(void *, int *))(*(_QWORD *)v6 + 40LL))(v6, a2);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v6);
      return v5;
    }
    else
    {
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v6);
      return 2147943568LL;
    }
  }
}
