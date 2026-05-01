/*
 * XREFs of Windows::Internal::ComTaskPool::QueueTask__lambda_5e8a28c70af8a97deece4a0f72088676___ @ 0x1804C4838
 * Callers:
 *     AsyncFrameEvents::_NotifyFrameEvent__lambda_1cc7c4a545a2c54b98f9c323f6c45fc2___ @ 0x1804C4AA8 (AsyncFrameEvents--_NotifyFrameEvent__lambda_1cc7c4a545a2c54b98f9c323f6c45fc2___.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801883B0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_5e8a28c70af8a97deece4a0f72088676___::CTaskWrapper__lambda_5e8a28c70af8a97deece4a0f72088676_____lambda_5e8a28c70af8a97deece4a0f72088676___ @ 0x1804C4694 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_5e8a28c70af8a97deece4a0f72088676___--CTaskW.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::QueueTask__lambda_5e8a28c70af8a97deece4a0f72088676___(
        unsigned int a1,
        _QWORD *a2)
{
  _QWORD *v4; // rax
  _QWORD *v5; // rbx
  DWORD CurrentThreadId; // eax
  unsigned int v7; // edi

  v4 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v4 )
    v5 = Windows::Internal::ComTaskPool::CTaskWrapper__lambda_5e8a28c70af8a97deece4a0f72088676___::CTaskWrapper__lambda_5e8a28c70af8a97deece4a0f72088676_____lambda_5e8a28c70af8a97deece4a0f72088676___(
           v4,
           a2);
  else
    v5 = 0LL;
  CurrentThreadId = GetCurrentThreadId();
  v7 = SHTaskPoolQueueTask(a1, 0LL, CurrentThreadId, 0LL, v5, 0LL);
  if ( v5 )
    (*(void (__fastcall **)(_QWORD *))(*v5 + 16LL))(v5);
  return v7;
}
