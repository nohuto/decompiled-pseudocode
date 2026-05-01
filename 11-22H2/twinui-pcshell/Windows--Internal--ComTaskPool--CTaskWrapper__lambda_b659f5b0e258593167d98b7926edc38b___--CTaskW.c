/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_b659f5b0e258593167d98b7926edc38b___::CTaskWrapper__lambda_b659f5b0e258593167d98b7926edc38b_____lambda_b659f5b0e258593167d98b7926edc38b___ @ 0x1801E4900
 * Callers:
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_b659f5b0e258593167d98b7926edc38b___ @ 0x1801E4CA0 (Windows--Internal--ComTaskPool--QueueTask__lambda_b659f5b0e258593167d98b7926edc38b___.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x1800C7AD8 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_b659f5b0e258593167d98b7926edc38b___::CTaskWrapper__lambda_b659f5b0e258593167d98b7926edc38b_____lambda_b659f5b0e258593167d98b7926edc38b___(
        __int64 a1,
        __int64 a2)
{
  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>(a1);
  *(_BYTE *)(a1 + 16) = *(_BYTE *)a2;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_QWORD *)(a1 + 48) = 0LL;
  *(_OWORD *)(a1 + 24) = *(_OWORD *)(a2 + 8);
  *(_OWORD *)(a1 + 40) = *(_OWORD *)(a2 + 24);
  *(_QWORD *)(a2 + 24) = 0LL;
  *(_WORD *)(a2 + 8) = 0;
  *(_QWORD *)(a2 + 32) = 7LL;
  *(_QWORD *)a1 = off_1807C4F88;
  return a1;
}
