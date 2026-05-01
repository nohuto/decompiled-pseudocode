/*
 * XREFs of ?SetSite@CWRLObjectWithGITSite@@UEAAJPEAUIUnknown@@@Z @ 0x1800B70F0
 * Callers:
 *     ?SetSite@DesktopBlueLightReductionManager@@UEAAJPEAUIUnknown@@@Z @ 0x1800B66C0 (-SetSite@DesktopBlueLightReductionManager@@UEAAJPEAUIUnknown@@@Z.c)
 *     ?SetSite@TabletModeCoverWindow@@UEAAJPEAUIUnknown@@@Z @ 0x1800B6730 (-SetSite@TabletModeCoverWindow@@UEAAJPEAUIUnknown@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x1800A02C0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Revoke@GlobalInterfaceTable@@SAXK@Z @ 0x1800B7328 (-Revoke@GlobalInterfaceTable@@SAXK@Z.c)
 *     ?Marshal@GlobalInterfaceTable@@SAJPEAUIUnknown@@AEBU_GUID@@PEAK@Z @ 0x1800B736C (-Marshal@GlobalInterfaceTable@@SAJPEAUIUnknown@@AEBU_GUID@@PEAK@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CWRLObjectWithGITSite::SetSite(RTL_SRWLOCK *this, struct IUnknown *a2)
{
  bool v4; // si
  __int64 v5; // rcx
  bool v6; // si
  __int64 v7; // rcx
  int v8; // esi
  __int64 v10; // rsi
  unsigned int v11; // r14d
  unsigned int Ptr; // r14d
  __int64 v13; // [rsp+48h] [rbp+28h] BYREF

  if ( a2 )
  {
    v13 = 0LL;
    v4 = !this
      || (*(int (__fastcall **)(RTL_SRWLOCK *, GUID *, __int64 *))this->Ptr)(
           this,
           &GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90,
           &v13) >= 0;
    v5 = v13;
    if ( v13 )
    {
      v13 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
    }
    if ( !v4 )
      goto LABEL_11;
    v13 = 0LL;
    v6 = ((__int64 (__fastcall *)(struct IUnknown *, GUID *, __int64 *))a2->lpVtbl->QueryInterface)(
           a2,
           &GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90,
           &v13) >= 0;
    v7 = v13;
    if ( v13 )
    {
      v13 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    }
    if ( !v6 )
    {
      LODWORD(v13) = 0;
      v8 = GlobalInterfaceTable::Marshal(a2, &GUID_00000000_0000_0000_c000_000000000046, (unsigned int *)&v13);
      if ( v8 >= 0 )
      {
        AcquireSRWLockExclusive(this + 2);
        Ptr = (unsigned int)this[3].Ptr;
        LODWORD(this[3].Ptr) = v13;
        ReleaseSRWLockExclusive(this + 2);
        if ( Ptr )
          GlobalInterfaceTable::Revoke(Ptr);
      }
    }
    else
    {
LABEL_11:
      AcquireSRWLockExclusive(this + 2);
      if ( this[4].Ptr != a2 )
      {
        ((void (__fastcall *)(struct IUnknown *))a2->lpVtbl->AddRef)(a2);
        v13 = (__int64)this[4].Ptr;
        this[4].Ptr = a2;
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v13);
      }
      ReleaseSRWLockExclusive(this + 2);
      return 0;
    }
  }
  else
  {
    AcquireSRWLockExclusive(this + 2);
    v10 = (__int64)this[4].Ptr;
    this[4].Ptr = 0LL;
    v13 = v10;
    v11 = (unsigned int)this[3].Ptr;
    LODWORD(this[3].Ptr) = 0;
    ReleaseSRWLockExclusive(this + 2);
    if ( v11 )
    {
      GlobalInterfaceTable::Revoke(v11);
    }
    else if ( v10 )
    {
      v13 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    }
    v8 = 0;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v13);
  }
  return (unsigned int)v8;
}
