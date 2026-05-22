/*
 * XREFs of ?Destroy@CompositionNineGridBrush@Composition@UI@Windows@@UEAAXXZ @ 0x18002BFD0
 * Callers:
 *     <none>
 * Callees:
 *     ?BeginKernelCommand@CDevice@DirectComposition@@AEAAXIPEAPEAX_N@Z @ 0x180032D60 (-BeginKernelCommand@CDevice@DirectComposition@@AEAAXIPEAPEAX_N@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall Windows::UI::Composition::CompositionNineGridBrush::Destroy(
        Windows::UI::Composition::CompositionNineGridBrush *this,
        __int64 a2)
{
  int v2; // esi
  DirectComposition::CDevice *v4; // rbx
  _DWORD *v5; // rax
  void (__fastcall ***v6)(_QWORD); // rcx
  volatile signed __int32 *v7; // rcx
  void *v8; // [rsp+30h] [rbp+8h] BYREF

  v2 = *((_DWORD *)this + 32);
  if ( v2 )
  {
    v4 = *(DirectComposition::CDevice **)(*((_QWORD *)this + 3) + 456LL);
    DirectComposition::CDevice::BeginKernelCommand(v4, 0x10u, &v8, 0);
    v5 = v8;
    *(_DWORD *)v8 = 13;
    v5[1] = v2;
    v5[2] = 7;
    v5[3] = 0;
    v6 = (void (__fastcall ***)(_QWORD))*((_QWORD *)v4 + 10);
    if ( v6 )
      (**v6)(v6);
  }
  v7 = (volatile signed __int32 *)*((_QWORD *)this + 21);
  if ( v7 )
  {
    *((_QWORD *)this + 21) = 0LL;
    if ( _InterlockedExchangeAdd(v7 + 4, 0xFFFFFFFF) == 1 )
    {
      LOBYTE(a2) = 1;
      (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v7 + 64LL))(v7, a2);
    }
  }
  Windows::UI::Composition::ProxyObject::Destroy(this);
}
