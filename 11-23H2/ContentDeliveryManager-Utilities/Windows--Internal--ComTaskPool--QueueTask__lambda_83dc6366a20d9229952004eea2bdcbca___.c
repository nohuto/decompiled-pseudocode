/*
 * XREFs of Windows::Internal::ComTaskPool::QueueTask__lambda_83dc6366a20d9229952004eea2bdcbca___ @ 0x180066080
 * Callers:
 *     _lambda_c4f33cd8951f7dbea74fc386c4e48681_::operator() @ 0x180067854 (_lambda_c4f33cd8951f7dbea74fc386c4e48681_--operator().c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIWnfNameResolver@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18003D9A0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIWnfNameResolver.c)
 *     Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_83dc6366a20d9229952004eea2bdcbca_____lambda_83dc6366a20d9229952004eea2bdcbca___ @ 0x180065F48 (Microsoft--WRL--Details--Make_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_83dc6366a20d9.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800D4310 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::ComTaskPool::QueueTask__lambda_83dc6366a20d9229952004eea2bdcbca___(
        __int64 a1,
        _QWORD *a2)
{
  __int64 *v2; // rax
  volatile int *v3; // rdx
  __int64 v4; // rbx
  __int64 v5; // rcx
  DWORD CurrentThreadId; // eax
  unsigned int v7; // edi
  __int64 v9; // [rsp+50h] [rbp+18h] BYREF

  v2 = Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_83dc6366a20d9229952004eea2bdcbca_____lambda_83dc6366a20d9229952004eea2bdcbca___(
         &v9,
         a2);
  v4 = *v2;
  *v2 = 0LL;
  v5 = v9;
  if ( v9 )
  {
    v9 = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IWnfNameResolver>::Release(
      v5,
      v3);
  }
  CurrentThreadId = GetCurrentThreadId();
  v7 = SHTaskPoolQueueTask(0LL, 0LL, CurrentThreadId, 0LL, v4, 0LL);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  return v7;
}
