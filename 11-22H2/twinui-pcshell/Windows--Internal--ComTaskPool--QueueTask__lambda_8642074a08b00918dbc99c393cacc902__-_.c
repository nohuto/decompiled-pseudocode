/*
 * XREFs of Windows::Internal::ComTaskPool::QueueTask__lambda_8642074a08b00918dbc99c393cacc902__&_ @ 0x1803CD3F8
 * Callers:
 *     ?v_RefreshEnterpriseIdIfNeeded@CWin32ApplicationView@@EEAAJXZ @ 0x1800652F0 (-v_RefreshEnterpriseIdIfNeeded@CWin32ApplicationView@@EEAAJXZ.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801C6900 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_8642074a08b00918dbc99c393cacc902__&_::CTaskWrapper__lambda_8642074a08b00918dbc99c393cacc902__&___lambda_8642074a08b00918dbc99c393cacc902__&_ @ 0x1803CD16C (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_8642074a08b00918dbc99c393cacc902__-_--CTask.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::QueueTask__lambda_8642074a08b00918dbc99c393cacc902____(
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
    v7 = Windows::Internal::ComTaskPool::CTaskWrapper__lambda_8642074a08b00918dbc99c393cacc902____::CTaskWrapper__lambda_8642074a08b00918dbc99c393cacc902______lambda_8642074a08b00918dbc99c393cacc902____(
           v6,
           a4);
  else
    v7 = 0LL;
  v8 = SHTaskPoolQueueTask(3LL, 2LL, a3);
  if ( v7 )
    (*(void (__fastcall **)(_QWORD *))(*v7 + 16LL))(v7);
  return v8;
}
