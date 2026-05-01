/*
 * XREFs of Windows::Internal::ComTaskPool::QueueTask__lambda_f4067639e63611d5d8388fe1412d05ee___ @ 0x1804BBF10
 * Callers:
 *     ?InvokeSwitchItem@CMultitaskingViewControllerBase@@UEAAXPEAUISwitchItem@@@Z @ 0x1804BC520 (-InvokeSwitchItem@CMultitaskingViewControllerBase@@UEAAXPEAUISwitchItem@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801883B0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_f4067639e63611d5d8388fe1412d05ee___::CTaskWrapper__lambda_f4067639e63611d5d8388fe1412d05ee_____lambda_f4067639e63611d5d8388fe1412d05ee___ @ 0x1804BBE9C (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_f4067639e63611d5d8388fe1412d05ee___--CTaskW.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::QueueTask__lambda_f4067639e63611d5d8388fe1412d05ee___(
        __int64 a1,
        _QWORD *a2)
{
  _QWORD *v3; // rax
  _QWORD *v4; // rbx
  DWORD CurrentThreadId; // eax
  unsigned int v6; // edi

  v3 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v3 )
    v4 = Windows::Internal::ComTaskPool::CTaskWrapper__lambda_f4067639e63611d5d8388fe1412d05ee___::CTaskWrapper__lambda_f4067639e63611d5d8388fe1412d05ee_____lambda_f4067639e63611d5d8388fe1412d05ee___(
           v3,
           a2);
  else
    v4 = 0LL;
  CurrentThreadId = GetCurrentThreadId();
  v6 = SHTaskPoolQueueTask(1LL, 0LL, CurrentThreadId, 0LL, v4, 0LL);
  if ( v4 )
    (*(void (__fastcall **)(_QWORD *))(*v4 + 16LL))(v4);
  return v6;
}
