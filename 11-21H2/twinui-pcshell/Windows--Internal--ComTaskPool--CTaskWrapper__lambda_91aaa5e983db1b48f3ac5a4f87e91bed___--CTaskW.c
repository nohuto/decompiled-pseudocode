/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_91aaa5e983db1b48f3ac5a4f87e91bed___::CTaskWrapper__lambda_91aaa5e983db1b48f3ac5a4f87e91bed_____lambda_91aaa5e983db1b48f3ac5a4f87e91bed___ @ 0x1803F8D14
 * Callers:
 *     ?NotificationCallback@ConnectedStandbyHelper@@AEAAJK@Z @ 0x1803F91E0 (-NotificationCallback@ConnectedStandbyHelper@@AEAAJK@Z.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180087160 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_91aaa5e983db1b48f3ac5a4f87e91bed___::CTaskWrapper__lambda_91aaa5e983db1b48f3ac5a4f87e91bed_____lambda_91aaa5e983db1b48f3ac5a4f87e91bed___(
        __int64 a1,
        __int64 a2)
{
  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>(a1);
  *(_QWORD *)(a1 + 16) = *(_QWORD *)a2;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 24) = *(_QWORD *)(a2 + 8);
  *(_QWORD *)(a1 + 32) = *(_QWORD *)(a2 + 16);
  *(_QWORD *)(a2 + 8) = 0LL;
  *(_QWORD *)(a2 + 16) = 0LL;
  *(_DWORD *)(a1 + 40) = *(_DWORD *)(a2 + 24);
  *(_QWORD *)a1 = off_180653798;
  return a1;
}
