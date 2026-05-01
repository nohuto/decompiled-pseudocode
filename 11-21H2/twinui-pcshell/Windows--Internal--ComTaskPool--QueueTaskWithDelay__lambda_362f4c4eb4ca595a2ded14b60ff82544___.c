/*
 * XREFs of Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_362f4c4eb4ca595a2ded14b60ff82544___ @ 0x1803E96DC
 * Callers:
 *     ?AddPendingActivationResumeWithLock@UwpWindowEventDispatcher@@AEAAXPEAUIUwpWindowWrapperInternal@@@Z @ 0x1803EB32C (-AddPendingActivationResumeWithLock@UwpWindowEventDispatcher@@AEAAXPEAUIUwpWindowWrapperInternal.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180087160 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801883B0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_362f4c4eb4ca595a2ded14b60ff82544___(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        int a5,
        __int64 *a6)
{
  _QWORD *v7; // rax
  _QWORD *v8; // rbx
  __int64 v9; // rax
  unsigned int v10; // edi

  v7 = operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
  v8 = v7;
  if ( v7 )
  {
    Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>((__int64)v7);
    v9 = *a6;
    *a6 = 0LL;
    v8[2] = v9;
    *((_DWORD *)v8 + 6) = *((_DWORD *)a6 + 2);
    *v8 = off_180652A00;
  }
  else
  {
    v8 = 0LL;
  }
  v10 = SHTaskPoolQueueTask(0LL, 0LL, a3, 5000LL, v8, 0LL);
  if ( v8 )
    (*(void (__fastcall **)(_QWORD *))(*v8 + 16LL))(v8);
  return v10;
}
