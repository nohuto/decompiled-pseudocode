/*
 * XREFs of shell::TaskScheduler::AddTask__lambda_9bfc867a9c7100a4740d0e4b48179e18___ @ 0x1806C9678
 * Callers:
 *     ?_EnsureMenu@CLauncherTipContextMenu@@AEAAJPEAUtagPOINT@@@Z @ 0x1806DE264 (-_EnsureMenu@CLauncherTipContextMenu@@AEAAJPEAUtagPOINT@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801C6900 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     shell::TaskScheduler::CSimpleRunnableTask__lambda_9bfc867a9c7100a4740d0e4b48179e18___::CSimpleRunnableTask__lambda_9bfc867a9c7100a4740d0e4b48179e18___ @ 0x1806CB66C (shell--TaskScheduler--CSimpleRunnableTask__lambda_9bfc867a9c7100a4740d0e4b48179e18___--CSimpleRu.c)
 */

__int64 __fastcall shell::TaskScheduler::AddTask__lambda_9bfc867a9c7100a4740d0e4b48179e18___(__int64 a1, __int64 a2)
{
  void *v4; // rax
  __int64 v5; // rdi
  unsigned int v6; // ebx

  v4 = operator new(0x60uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v4
    && (v5 = shell::TaskScheduler::CSimpleRunnableTask__lambda_9bfc867a9c7100a4740d0e4b48179e18___::CSimpleRunnableTask__lambda_9bfc867a9c7100a4740d0e4b48179e18___(
               v4,
               a2)) != 0 )
  {
    v6 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, __int64, int))(**(_QWORD **)(a1 + 16) + 24LL))(
           *(_QWORD *)(a1 + 16),
           v5,
           a1,
           a1,
           0x10000000);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v6;
}
