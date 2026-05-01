/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_634a8efdf62851cb3d468a5f6e943be4___::CTaskWrapper__lambda_634a8efdf62851cb3d468a5f6e943be4_____lambda_634a8efdf62851cb3d468a5f6e943be4___ @ 0x180787C2C
 * Callers:
 *     CreationThreadDispatcher::RunAsync__lambda_6bd17a0f38fc15379b652e4a7dca1691___ @ 0x1807882A8 (CreationThreadDispatcher--RunAsync__lambda_6bd17a0f38fc15379b652e4a7dca1691___.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x1800C7AD8 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 *     _lambda_6bd17a0f38fc15379b652e4a7dca1691_::_lambda_6bd17a0f38fc15379b652e4a7dca1691_ @ 0x180788564 (_lambda_6bd17a0f38fc15379b652e4a7dca1691_--_lambda_6bd17a0f38fc15379b652e4a7dca1691_.c)
 */

_QWORD *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_634a8efdf62851cb3d468a5f6e943be4___::CTaskWrapper__lambda_634a8efdf62851cb3d468a5f6e943be4_____lambda_634a8efdf62851cb3d468a5f6e943be4___(
        _QWORD *a1,
        __int64 a2)
{
  _QWORD *v4; // rdi

  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>((__int64)a1);
  lambda_6bd17a0f38fc15379b652e4a7dca1691_::_lambda_6bd17a0f38fc15379b652e4a7dca1691_(a1 + 2, a2);
  v4 = (_QWORD *)(a2 + 24);
  a1[5] = 0LL;
  if ( a1 + 5 != v4 )
  {
    a1[5] = *v4;
    *v4 = 0LL;
  }
  *a1 = off_18098A2B0;
  return a1;
}
