/*
 * XREFs of Windows::Internal::ComTaskPool::QueueTask__lambda_a1f8daa8914a455a54260b3e38b00a83__&_ @ 0x18054277C
 * Callers:
 *     ?OnMessage@CVirtualDesktopManager@@UEAAJI_K_J@Z @ 0x180044340 (-OnMessage@CVirtualDesktopManager@@UEAAJI_K_J@Z.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801883B0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_a1f8daa8914a455a54260b3e38b00a83__&_::CTaskWrapper__lambda_a1f8daa8914a455a54260b3e38b00a83__&___lambda_a1f8daa8914a455a54260b3e38b00a83__&_ @ 0x180542468 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_a1f8daa8914a455a54260b3e38b00a83__-_--CTask.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::QueueTask__lambda_a1f8daa8914a455a54260b3e38b00a83____(
        __int64 a1,
        _QWORD *a2)
{
  _QWORD *v3; // rax
  _QWORD *v4; // rbx
  DWORD CurrentThreadId; // eax
  unsigned int v6; // edi

  v3 = operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v3 )
    v4 = Windows::Internal::ComTaskPool::CTaskWrapper__lambda_a1f8daa8914a455a54260b3e38b00a83____::CTaskWrapper__lambda_a1f8daa8914a455a54260b3e38b00a83______lambda_a1f8daa8914a455a54260b3e38b00a83____(
           v3,
           a2);
  else
    v4 = 0LL;
  CurrentThreadId = GetCurrentThreadId();
  v6 = SHTaskPoolQueueTask(3LL, 0LL, CurrentThreadId, 0LL, v4, 0LL);
  if ( v4 )
    (*(void (__fastcall **)(_QWORD *))(*v4 + 16LL))(v4);
  return v6;
}
