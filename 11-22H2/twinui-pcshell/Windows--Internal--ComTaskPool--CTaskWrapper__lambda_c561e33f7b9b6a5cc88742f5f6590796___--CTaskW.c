/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_c561e33f7b9b6a5cc88742f5f6590796___::CTaskWrapper__lambda_c561e33f7b9b6a5cc88742f5f6590796_____lambda_c561e33f7b9b6a5cc88742f5f6590796___ @ 0x1803BD640
 * Callers:
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_c561e33f7b9b6a5cc88742f5f6590796___ @ 0x1803BE630 (Windows--Internal--ComTaskPool--QueueTask__lambda_c561e33f7b9b6a5cc88742f5f6590796___.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x1800C7AD8 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_c561e33f7b9b6a5cc88742f5f6590796___::CTaskWrapper__lambda_c561e33f7b9b6a5cc88742f5f6590796_____lambda_c561e33f7b9b6a5cc88742f5f6590796___(
        __int64 a1,
        __int64 a2)
{
  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>(a1);
  *(_QWORD *)(a1 + 16) = *(_QWORD *)a2;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)(a1 + 16));
  *(_QWORD *)(a1 + 24) = *(_QWORD *)(a2 + 8);
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)(a1 + 24));
  *(_DWORD *)(a1 + 32) = *(_DWORD *)(a2 + 16);
  *(_QWORD *)a1 = off_1807D0358;
  return a1;
}
