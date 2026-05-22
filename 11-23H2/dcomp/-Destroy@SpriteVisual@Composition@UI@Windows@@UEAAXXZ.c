/*
 * XREFs of ?Destroy@SpriteVisual@Composition@UI@Windows@@UEAAXXZ @ 0x180027F60
 * Callers:
 *     <none>
 * Callees:
 *     ?ResourceSetReferenceProperty@CDevice@DirectComposition@@QEAAXIII@Z @ 0x18002BDA8 (-ResourceSetReferenceProperty@CDevice@DirectComposition@@QEAAXIII@Z.c)
 *     ?BeginKernelCommand@CDevice@DirectComposition@@AEAAXIPEAPEAX_N@Z @ 0x180032D60 (-BeginKernelCommand@CDevice@DirectComposition@@AEAAXIPEAPEAX_N@Z.c)
 *     ?SetReference@CSparseStorage@@QEAAXIPEAXPEBVReferenceAdapter@1@@Z @ 0x180078828 (-SetReference@CSparseStorage@@QEAAXIPEAXPEBVReferenceAdapter@1@@Z.c)
 *     ?GetReference@CSparseStorage@@QEBAPEAXI@Z @ 0x18007CDA8 (-GetReference@CSparseStorage@@QEBAPEAXI@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall Windows::UI::Composition::SpriteVisual::Destroy(
        Windows::UI::Composition::SpriteVisual *this,
        __int64 a2)
{
  int v3; // esi
  DirectComposition::CDevice *v4; // rbx
  _DWORD *v5; // rax
  void (__fastcall ***v6)(_QWORD); // rcx
  volatile signed __int32 *v7; // rcx
  void *v8; // [rsp+30h] [rbp+8h] BYREF

  if ( *((_QWORD *)this + 42) )
  {
    v3 = *((_DWORD *)this + 32);
    if ( v3 )
    {
      v4 = *(DirectComposition::CDevice **)(*((_QWORD *)this + 3) + 456LL);
      DirectComposition::CDevice::BeginKernelCommand(v4, 0x10u, &v8, 0);
      v5 = v8;
      *(_DWORD *)v8 = 13;
      v5[1] = v3;
      v5[2] = 52;
      v5[3] = 0;
      v6 = (void (__fastcall ***)(_QWORD))*((_QWORD *)v4 + 10);
      if ( v6 )
        (**v6)(v6);
    }
    v7 = (volatile signed __int32 *)*((_QWORD *)this + 42);
    if ( v7 )
    {
      *((_QWORD *)this + 42) = 0LL;
      if ( _InterlockedExchangeAdd(v7 + 4, 0xFFFFFFFF) == 1 )
      {
        LOBYTE(a2) = 1;
        (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v7 + 64LL))(v7, a2);
      }
    }
  }
  if ( CSparseStorage::GetReference((Windows::UI::Composition::SpriteVisual *)((char *)this + 112), 0x10u) )
  {
    DirectComposition::CDevice::ResourceSetReferenceProperty(
      *(DirectComposition::CDevice **)(*((_QWORD *)this + 3) + 456LL),
      *((_DWORD *)this + 32),
      0x35u,
      0);
    CSparseStorage::SetReference(
      (Windows::UI::Composition::SpriteVisual *)((char *)this + 112),
      0x10u,
      0LL,
      (const struct CSparseStorage::ReferenceAdapter *)&Windows::UI::Composition::SparsePropertyStore::g_adapter_NestableRuntimeClass);
  }
  Windows::UI::Composition::Visual::Destroy(this);
}
