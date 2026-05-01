/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_6ef60caefbc91eed89ba36b9b01d9372___::CTaskWrapper__lambda_6ef60caefbc91eed89ba36b9b01d9372_____lambda_6ef60caefbc91eed89ba36b9b01d9372___ @ 0x1803015D0
 * Callers:
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_6ef60caefbc91eed89ba36b9b01d9372___ @ 0x180302630 (Windows--Internal--ComTaskPool--QueueTask__lambda_6ef60caefbc91eed89ba36b9b01d9372___.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180087160 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_6ef60caefbc91eed89ba36b9b01d9372___::CTaskWrapper__lambda_6ef60caefbc91eed89ba36b9b01d9372_____lambda_6ef60caefbc91eed89ba36b9b01d9372___(
        __int64 a1,
        __int64 a2)
{
  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>(a1);
  *(_QWORD *)(a1 + 16) = *(_QWORD *)a2;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)(a1 + 16));
  *(_QWORD *)(a1 + 24) = *(_QWORD *)(a2 + 8);
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)(a1 + 24));
  *(_DWORD *)(a1 + 32) = *(_DWORD *)(a2 + 16);
  *(_QWORD *)a1 = off_180648D78;
  return a1;
}
