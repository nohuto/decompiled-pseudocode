/*
 * XREFs of Windows::Internal::ComTaskPool::QueueTask__lambda_c1e1bf6016a03158d50952b4558ffdc8___ @ 0x18013DD4C
 * Callers:
 *     ?RuntimeClassInitialize@GamingOverlayExperienceManager@@QEAAJXZ @ 0x18013DAB0 (-RuntimeClassInitialize@GamingOverlayExperienceManager@@QEAAJXZ.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180087160 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801883B0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 Windows::Internal::ComTaskPool::QueueTask__lambda_c1e1bf6016a03158d50952b4558ffdc8___()
{
  void *v0; // rax
  void *v1; // rbx
  DWORD CurrentThreadId; // eax
  unsigned int v3; // edi

  v0 = operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
  v1 = v0;
  if ( v0 )
  {
    Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>((__int64)v0);
    *(_QWORD *)v1 = off_18063AD20;
  }
  else
  {
    v1 = 0LL;
  }
  CurrentThreadId = GetCurrentThreadId();
  v3 = SHTaskPoolQueueTask(3LL, 0LL, CurrentThreadId, 0LL, v1, 0LL);
  if ( v1 )
    (*(void (__fastcall **)(void *))(*(_QWORD *)v1 + 16LL))(v1);
  return v3;
}
