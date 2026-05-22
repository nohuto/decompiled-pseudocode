/*
 * XREFs of ?RequestProxiedCallbackId@CDevice@DirectComposition@@QEAAJIPEAXPEAI@Z @ 0x1800F4178
 * Callers:
 *     ?EnsureCallbackId@CAnimationInstance@DirectComposition@@AEAAJXZ @ 0x1800E8AAC (-EnsureCallbackId@CAnimationInstance@DirectComposition@@AEAAJXZ.c)
 * Callees:
 *     ?AssertIsOwned@CDeviceLock@DirectComposition@@QEBAXXZ @ 0x180032860 (-AssertIsOwned@CDeviceLock@DirectComposition@@QEBAXXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x180043FCC (--2@YAPEAX_K@Z.c)
 *     ?ResourceSetCallbackId@CDevice@DirectComposition@@QEAAXII@Z @ 0x180058A80 (-ResourceSetCallbackId@CDevice@DirectComposition@@QEAAXII@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x180095B64 (--3@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CDevice::RequestProxiedCallbackId(
        DirectComposition::CDevice *this,
        int a2,
        void *a3,
        unsigned int *a4)
{
  int *v8; // rax
  int *v9; // rbx
  int *v10; // r14
  int v11; // edi

  DirectComposition::CDeviceLock::AssertIsOwned((DirectComposition::CDevice *)((char *)this + 96));
  v8 = (int *)operator new(0x18uLL);
  v9 = v8;
  if ( v8 )
  {
    v10 = v8 + 2;
    *(_OWORD *)v8 = 0LL;
    *((_QWORD *)v8 + 2) = 0LL;
    *((_QWORD *)v8 + 2) = 0LL;
    *(_QWORD *)v8 = a3;
    v11 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, int *, int *))(**(_QWORD **)(*((_QWORD *)this + 83) + 32LL) + 24LL))(
            *(_QWORD *)(*((_QWORD *)this + 83) + 32LL),
            *(unsigned int *)(*((_QWORD *)this + 83) + 64LL),
            v8,
            v8 + 2);
    if ( v11 < 0 )
    {
      operator delete(v9);
    }
    else
    {
      DirectComposition::CDevice::ResourceSetCallbackId(this, a2, *v10);
      *a4 = *v10;
    }
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v11;
}
