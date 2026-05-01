/*
 * XREFs of Windows::Internal::ComTaskPool::QueueTask__lambda_250fcdf9c28934f08f14c2de8f45316a___ @ 0x1802DD804
 * Callers:
 *     _lambda_30895542713010bf0b1f8061f525305d_::operator() @ 0x1802E0794 (_lambda_30895542713010bf0b1f8061f525305d_--operator().c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801883B0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_250fcdf9c28934f08f14c2de8f45316a___::CTaskWrapper__lambda_250fcdf9c28934f08f14c2de8f45316a_____lambda_250fcdf9c28934f08f14c2de8f45316a___ @ 0x1802DBE10 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_250fcdf9c28934f08f14c2de8f45316a___--CTaskW.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::ComTaskPool::QueueTask__lambda_250fcdf9c28934f08f14c2de8f45316a___(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        _QWORD *a4)
{
  _QWORD *v6; // rax
  _QWORD *v7; // rbx
  unsigned int v8; // edi

  v6 = operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v6 )
    v7 = Windows::Internal::ComTaskPool::CTaskWrapper__lambda_250fcdf9c28934f08f14c2de8f45316a___::CTaskWrapper__lambda_250fcdf9c28934f08f14c2de8f45316a_____lambda_250fcdf9c28934f08f14c2de8f45316a___(
           v6,
           a4);
  else
    v7 = 0LL;
  v8 = SHTaskPoolQueueTask(3LL, 2LL, a3, 0LL, v7, 0LL);
  if ( v7 )
    (*(void (__fastcall **)(_QWORD *))(*v7 + 16LL))(v7);
  return v8;
}
