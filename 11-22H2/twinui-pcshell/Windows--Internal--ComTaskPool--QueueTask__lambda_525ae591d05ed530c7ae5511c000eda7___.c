/*
 * XREFs of Windows::Internal::ComTaskPool::QueueTask__lambda_525ae591d05ed530c7ae5511c000eda7___ @ 0x1803D1C78
 * Callers:
 *     ?OnAddRemoveGame@BroadcastDVRComponent@@UEAAJPEAUHWND__@@EI@Z @ 0x1803D98B0 (-OnAddRemoveGame@BroadcastDVRComponent@@UEAAJPEAUHWND__@@EI@Z.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801C6900 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_525ae591d05ed530c7ae5511c000eda7___::CTaskWrapper__lambda_525ae591d05ed530c7ae5511c000eda7_____lambda_525ae591d05ed530c7ae5511c000eda7___ @ 0x1803D11B0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_525ae591d05ed530c7ae5511c000eda7___--CTaskW.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::QueueTask__lambda_525ae591d05ed530c7ae5511c000eda7___(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4)
{
  void *v6; // rax
  __int64 v7; // rbx
  unsigned int v8; // edi

  v6 = operator new(0x30uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v6 )
    v7 = Windows::Internal::ComTaskPool::CTaskWrapper__lambda_525ae591d05ed530c7ae5511c000eda7___::CTaskWrapper__lambda_525ae591d05ed530c7ae5511c000eda7_____lambda_525ae591d05ed530c7ae5511c000eda7___(
           (__int64)v6,
           a4);
  else
    v7 = 0LL;
  v8 = SHTaskPoolQueueTask(3LL, 2LL, a3);
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  return v8;
}
