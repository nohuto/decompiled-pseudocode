/*
 * XREFs of Windows::Internal::ComTaskPool::QueueTask__lambda_e93b07e05eb73953e8a67c4fda015070___ @ 0x1800A3154
 * Callers:
 *     ?Launch@CSingleViewShellExperience@@QEAAJXZ @ 0x1800A2F28 (-Launch@CSingleViewShellExperience@@QEAAJXZ.c)
 * Callees:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_e93b07e05eb73953e8a67c4fda015070___::CTaskWrapper__lambda_e93b07e05eb73953e8a67c4fda015070_____lambda_e93b07e05eb73953e8a67c4fda015070___ @ 0x1800A31E8 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_e93b07e05eb73953e8a67c4fda015070___--CTaskW.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801883B0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::QueueTask__lambda_e93b07e05eb73953e8a67c4fda015070___(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4)
{
  void *v6; // rax
  __int64 v7; // rbx
  unsigned int v8; // edi

  v6 = operator new(0x170uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v6 )
    v7 = Windows::Internal::ComTaskPool::CTaskWrapper__lambda_e93b07e05eb73953e8a67c4fda015070___::CTaskWrapper__lambda_e93b07e05eb73953e8a67c4fda015070_____lambda_e93b07e05eb73953e8a67c4fda015070___(
           v6,
           a4);
  else
    v7 = 0LL;
  v8 = SHTaskPoolQueueTask(0LL, 2LL, a3, 0LL, v7, 0LL);
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  return v8;
}
