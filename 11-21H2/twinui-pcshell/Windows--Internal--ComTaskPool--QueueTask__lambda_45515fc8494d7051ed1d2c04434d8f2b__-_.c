/*
 * XREFs of Windows::Internal::ComTaskPool::QueueTask__lambda_45515fc8494d7051ed1d2c04434d8f2b__&_ @ 0x180311BAC
 * Callers:
 *     ?v_RefreshEnterpriseIdIfNeeded@CWin32ApplicationView@@EEAAJXZ @ 0x18017EC20 (-v_RefreshEnterpriseIdIfNeeded@CWin32ApplicationView@@EEAAJXZ.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801883B0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_45515fc8494d7051ed1d2c04434d8f2b__&_::CTaskWrapper__lambda_45515fc8494d7051ed1d2c04434d8f2b__&___lambda_45515fc8494d7051ed1d2c04434d8f2b__&_ @ 0x180311A18 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_45515fc8494d7051ed1d2c04434d8f2b__-_--CTask.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::QueueTask__lambda_45515fc8494d7051ed1d2c04434d8f2b____(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 *a4)
{
  _QWORD *v6; // rax
  _QWORD *v7; // rbx
  unsigned int v8; // edi

  v6 = operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v6 )
    v7 = Windows::Internal::ComTaskPool::CTaskWrapper__lambda_45515fc8494d7051ed1d2c04434d8f2b____::CTaskWrapper__lambda_45515fc8494d7051ed1d2c04434d8f2b______lambda_45515fc8494d7051ed1d2c04434d8f2b____(
           v6,
           a4);
  else
    v7 = 0LL;
  v8 = SHTaskPoolQueueTask(3LL, 2LL, a3, 0LL, v7, 0LL);
  if ( v7 )
    (*(void (__fastcall **)(_QWORD *))(*v7 + 16LL))(v7);
  return v8;
}
