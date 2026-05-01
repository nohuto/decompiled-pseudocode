/*
 * XREFs of Windows::Internal::ComTaskPool::QueueTask__lambda_42c463a65dbba8f6c2411568f097b711___ @ 0x1803D4718
 * Callers:
 *     ?LaunchPeoplePane@PeoplePaneViewManager@@UEAAJPEBG0@Z @ 0x1803D7FC0 (-LaunchPeoplePane@PeoplePaneViewManager@@UEAAJPEBG0@Z.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801883B0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_42c463a65dbba8f6c2411568f097b711___::CTaskWrapper__lambda_42c463a65dbba8f6c2411568f097b711_____lambda_42c463a65dbba8f6c2411568f097b711___ @ 0x1803D4204 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_42c463a65dbba8f6c2411568f097b711___--CTaskW.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::QueueTask__lambda_42c463a65dbba8f6c2411568f097b711___(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4)
{
  void *v6; // rax
  __int64 v7; // rbx
  unsigned int v8; // edi

  v6 = operator new(0x198uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v6 )
    v7 = Windows::Internal::ComTaskPool::CTaskWrapper__lambda_42c463a65dbba8f6c2411568f097b711___::CTaskWrapper__lambda_42c463a65dbba8f6c2411568f097b711_____lambda_42c463a65dbba8f6c2411568f097b711___(
           (__int64)v6,
           a4);
  else
    v7 = 0LL;
  v8 = SHTaskPoolQueueTask(0LL, 2LL, a3, 0LL, v7, 0LL);
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  return v8;
}
