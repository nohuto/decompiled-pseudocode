/*
 * XREFs of ??$QueueTask@V_lambda_dff7b450e7eee25fd5a246545de8ddb9_@@@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@12@W4TaskOptions@12@K$$QEAV_lambda_dff7b450e7eee25fd5a246545de8ddb9_@@@Z @ 0x180152FF8
 * Callers:
 *     ?_ShutdownServiceProviders@CApplicationManager@@AEAAXXZ @ 0x180152E84 (-_ShutdownServiceProviders@CApplicationManager@@AEAAXXZ.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180087160 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801883B0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::ComTaskPool::QueueTask<_lambda_dff7b450e7eee25fd5a246545de8ddb9_>(
        __int64 a1,
        unsigned int a2,
        unsigned int a3)
{
  void *v5; // rax
  void *v6; // rbx
  unsigned int v7; // edi

  v5 = operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
  v6 = v5;
  if ( v5 )
  {
    Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>((__int64)v5);
    *(_QWORD *)v6 = &Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_dff7b450e7eee25fd5a246545de8ddb9_>::`vftable';
  }
  else
  {
    v6 = 0LL;
  }
  v7 = SHTaskPoolQueueTask(3LL, a2, a3, 0LL, v6, 0LL);
  if ( v6 )
    (*(void (__fastcall **)(void *))(*(_QWORD *)v6 + 16LL))(v6);
  return v7;
}
