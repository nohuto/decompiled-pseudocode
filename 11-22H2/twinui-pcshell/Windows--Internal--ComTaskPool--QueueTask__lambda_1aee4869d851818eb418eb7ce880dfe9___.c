/*
 * XREFs of Windows::Internal::ComTaskPool::QueueTask__lambda_1aee4869d851818eb418eb7ce880dfe9___ @ 0x1802E4A4C
 * Callers:
 *     AsyncFrameEvents::_NotifyFrameEvent__lambda_e640755ae9c094dc0d06fd44d037b19e___ @ 0x18057F780 (AsyncFrameEvents--_NotifyFrameEvent__lambda_e640755ae9c094dc0d06fd44d037b19e___.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801C6900 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_1aee4869d851818eb418eb7ce880dfe9___::CTaskWrapper__lambda_1aee4869d851818eb418eb7ce880dfe9_____lambda_1aee4869d851818eb418eb7ce880dfe9___ @ 0x18057EFB4 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_1aee4869d851818eb418eb7ce880dfe9___--CTaskW.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::ComTaskPool::QueueTask__lambda_1aee4869d851818eb418eb7ce880dfe9___(
        unsigned int a1,
        __int64 a2)
{
  void *v4; // rax
  __int64 v5; // rbx
  DWORD CurrentThreadId; // eax
  unsigned int v7; // edi

  v4 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v4 )
    v5 = Windows::Internal::ComTaskPool::CTaskWrapper__lambda_1aee4869d851818eb418eb7ce880dfe9___::CTaskWrapper__lambda_1aee4869d851818eb418eb7ce880dfe9_____lambda_1aee4869d851818eb418eb7ce880dfe9___(
           v4,
           a2);
  else
    v5 = 0LL;
  CurrentThreadId = GetCurrentThreadId();
  v7 = SHTaskPoolQueueTask(a1, 0LL, CurrentThreadId);
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  return v7;
}
