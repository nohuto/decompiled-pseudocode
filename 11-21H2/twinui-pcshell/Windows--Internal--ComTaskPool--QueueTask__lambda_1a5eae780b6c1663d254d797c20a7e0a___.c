/*
 * XREFs of Windows::Internal::ComTaskPool::QueueTask__lambda_1a5eae780b6c1663d254d797c20a7e0a___ @ 0x180030F98
 * Callers:
 *     ?CloseView@ApplicationViewHelpers@@YAJPEAUIApplicationView@@PEAUIImmersiveAppCrusher@@W4APPCRUSHER_INPUT@@W4APPCRUSHER_SOURCE@@W4APPCRUSHER_CLOSE_OPTIONS@@@Z @ 0x180053F84 (-CloseView@ApplicationViewHelpers@@YAJPEAUIApplicationView@@PEAUIImmersiveAppCrusher@@W4APPCRUSH.c)
 * Callees:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_1a5eae780b6c1663d254d797c20a7e0a___::CTaskWrapper__lambda_1a5eae780b6c1663d254d797c20a7e0a_____lambda_1a5eae780b6c1663d254d797c20a7e0a___ @ 0x180031018 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_1a5eae780b6c1663d254d797c20a7e0a___--CTaskW.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801883B0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::QueueTask__lambda_1a5eae780b6c1663d254d797c20a7e0a___(
        __int64 a1,
        __int64 a2)
{
  void *v3; // rax
  __int64 v4; // rbx
  DWORD CurrentThreadId; // eax
  unsigned int v6; // ebx
  __int64 v8; // [rsp+50h] [rbp+18h] BYREF

  v3 = operator new(0x30uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v3 )
    v4 = Windows::Internal::ComTaskPool::CTaskWrapper__lambda_1a5eae780b6c1663d254d797c20a7e0a___::CTaskWrapper__lambda_1a5eae780b6c1663d254d797c20a7e0a_____lambda_1a5eae780b6c1663d254d797c20a7e0a___(
           v3,
           a2);
  else
    v4 = 0LL;
  v8 = v4;
  CurrentThreadId = GetCurrentThreadId();
  v6 = SHTaskPoolQueueTask(1LL, 0LL, CurrentThreadId, 0LL, v4, 0LL);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v8);
  return v6;
}
