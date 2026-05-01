/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_1ec5a9652c39672d7f6d58af325930b6___::CTaskWrapper__lambda_1ec5a9652c39672d7f6d58af325930b6_____lambda_1ec5a9652c39672d7f6d58af325930b6___ @ 0x180486D8C
 * Callers:
 *     CreationThreadDispatcher::RunAsync__lambda_ee2a45cc5bdcc8019082ab40d4404685___ @ 0x1804870F8 (CreationThreadDispatcher--RunAsync__lambda_ee2a45cc5bdcc8019082ab40d4404685___.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180087160 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_1ec5a9652c39672d7f6d58af325930b6___::CTaskWrapper__lambda_1ec5a9652c39672d7f6d58af325930b6_____lambda_1ec5a9652c39672d7f6d58af325930b6___(
        __int64 a1,
        __int64 a2)
{
  __int64 v4; // xmm1_8
  _QWORD *v5; // rbx

  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>(a1);
  *(_OWORD *)(a1 + 16) = *(_OWORD *)a2;
  v4 = *(_QWORD *)(a2 + 16);
  v5 = (_QWORD *)(a2 + 24);
  *(_QWORD *)(a1 + 32) = v4;
  *(_QWORD *)(a1 + 40) = 0LL;
  if ( (_QWORD *)(a1 + 40) != v5 )
  {
    *(_QWORD *)(a1 + 40) = *v5;
    *v5 = 0LL;
  }
  *(_QWORD *)a1 = off_180658E60;
  return a1;
}
