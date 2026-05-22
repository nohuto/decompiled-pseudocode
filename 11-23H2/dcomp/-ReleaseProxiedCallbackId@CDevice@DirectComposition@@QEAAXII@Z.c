/*
 * XREFs of ?ReleaseProxiedCallbackId@CDevice@DirectComposition@@QEAAXII@Z @ 0x1800F3DFC
 * Callers:
 *     ?ReleaseProxiedCallbackId@CAnimationInstance@DirectComposition@@AEAAXXZ @ 0x1800E901C (-ReleaseProxiedCallbackId@CAnimationInstance@DirectComposition@@AEAAXXZ.c)
 * Callees:
 *     ?AssertIsOwned@CDeviceLock@DirectComposition@@QEBAXXZ @ 0x180032860 (-AssertIsOwned@CDeviceLock@DirectComposition@@QEBAXXZ.c)
 *     ?ResourceSetCallbackId@CDevice@DirectComposition@@QEAAXII@Z @ 0x180058A80 (-ResourceSetCallbackId@CDevice@DirectComposition@@QEAAXII@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x180095B64 (--3@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall DirectComposition::CDevice::ReleaseProxiedCallbackId(
        DirectComposition::CDevice *this,
        unsigned int a2,
        int a3)
{
  __int64 *v6; // rsi
  DWORD CurrentThreadId; // eax
  __int64 v8; // r11
  __int64 v9; // rcx
  void *v10; // [rsp+40h] [rbp+8h] BYREF

  DirectComposition::CDeviceLock::AssertIsOwned((DirectComposition::CDevice *)((char *)this + 96));
  v6 = *(__int64 **)(*((_QWORD *)this + 83) + 32LL);
  v10 = 0LL;
  DirectComposition::CDevice::ResourceSetCallbackId(this, a3, 0);
  CurrentThreadId = GetCurrentThreadId();
  v8 = *v6;
  v9 = *((_QWORD *)this + 83);
  if ( CurrentThreadId == *((_DWORD *)this + 170) )
  {
    (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD, void **))(v8 + 48))(
      v6,
      *(unsigned int *)(v9 + 64),
      a2,
      0LL,
      &v10);
    operator delete(v10);
  }
  else
  {
    (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD, void **))(v8 + 56))(v6, *(unsigned int *)(v9 + 64), a2, &v10);
    *(_QWORD *)v10 = 0LL;
    if ( !*((_QWORD *)this + 84) )
    {
      (*(void (__fastcall **)(DirectComposition::CDevice *))(*(_QWORD *)this + 8LL))(this);
      (*(void (__fastcall **)(_QWORD, __int64 (__fastcall *)(void *), DirectComposition::CDevice *, __int64))(**((_QWORD **)this + 82) + 152LL))(
        *((_QWORD *)this + 82),
        DirectComposition::CDevice::s_ProcessPendingCallbackDeletions_NoLock,
        this,
        3LL);
    }
    *((_QWORD *)v10 + 2) = *((_QWORD *)this + 84);
    *((_QWORD *)this + 84) = v10;
  }
}
