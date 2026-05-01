/*
 * XREFs of ?SetSite@CWRLObjectWithGITSite@@UEAAJPEAUIUnknown@@@Z @ 0x180130AA0
 * Callers:
 *     ?SetSite@DesktopBlueLightReductionManager@@UEAAJPEAUIUnknown@@@Z @ 0x180130820 (-SetSite@DesktopBlueLightReductionManager@@UEAAJPEAUIUnknown@@@Z.c)
 *     ?SetSite@TabletModeCoverWindow@@UEAAJPEAUIUnknown@@@Z @ 0x180130890 (-SetSite@TabletModeCoverWindow@@UEAAJPEAUIUnknown@@@Z.c)
 * Callees:
 *     ?IsAgile@@YA_NPEAUIUnknown@@@Z @ 0x180130C64 (-IsAgile@@YA_NPEAUIUnknown@@@Z.c)
 *     ?Revoke@GlobalInterfaceTable@@SAXK@Z @ 0x18013109C (-Revoke@GlobalInterfaceTable@@SAXK@Z.c)
 *     ?Marshal@GlobalInterfaceTable@@SAJPEAUIUnknown@@AEBU_GUID@@PEAK@Z @ 0x1801310E0 (-Marshal@GlobalInterfaceTable@@SAJPEAUIUnknown@@AEBU_GUID@@PEAK@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180132F90 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CWRLObjectWithGITSite::SetSite(RTL_SRWLOCK *this, struct IUnknown *a2)
{
  bool v4; // si
  PVOID v5; // rcx
  int v6; // esi
  PVOID v8; // rax
  unsigned int v9; // esi
  unsigned int Ptr; // r14d
  PVOID v11; // [rsp+48h] [rbp+28h] BYREF

  if ( a2 )
  {
    v11 = 0LL;
    v4 = !this
      || (*(int (__fastcall **)(RTL_SRWLOCK *, GUID *, PVOID *))this->Ptr)(
           this,
           &GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90,
           &v11) >= 0;
    v5 = v11;
    if ( v11 )
    {
      v11 = 0LL;
      (*(void (__fastcall **)(PVOID))(*(_QWORD *)v5 + 16LL))(v5);
    }
    if ( v4 && !IsAgile(a2) )
    {
      LODWORD(v11) = 0;
      v6 = GlobalInterfaceTable::Marshal(a2, &GUID_00000000_0000_0000_c000_000000000046, (unsigned int *)&v11);
      if ( v6 >= 0 )
      {
        AcquireSRWLockExclusive(this + 2);
        Ptr = (unsigned int)this[3].Ptr;
        LODWORD(this[3].Ptr) = (_DWORD)v11;
        ReleaseSRWLockExclusive(this + 2);
        if ( Ptr )
          GlobalInterfaceTable::Revoke(Ptr);
      }
    }
    else
    {
      AcquireSRWLockExclusive(this + 2);
      if ( this[4].Ptr != a2 )
      {
        ((void (__fastcall *)(struct IUnknown *))a2->lpVtbl->AddRef)(a2);
        v11 = this[4].Ptr;
        this[4].Ptr = a2;
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v11);
      }
      ReleaseSRWLockExclusive(this + 2);
      return 0;
    }
  }
  else
  {
    AcquireSRWLockExclusive(this + 2);
    v8 = this[4].Ptr;
    this[4].Ptr = 0LL;
    v11 = v8;
    v9 = (unsigned int)this[3].Ptr;
    LODWORD(this[3].Ptr) = 0;
    ReleaseSRWLockExclusive(this + 2);
    if ( v9 )
      GlobalInterfaceTable::Revoke(v9);
    else
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v11);
    v6 = 0;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v11);
  }
  return (unsigned int)v6;
}
