/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_362f4c4eb4ca595a2ded14b60ff82544___::Run @ 0x1803F1060
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_362f4c4eb4ca595a2ded14b60ff82544___::Run(
        __int64 a1)
{
  UwpWindowEventDispatcher::RemovePendingActivationResume(*(RTL_SRWLOCK **)(a1 + 16), *(_DWORD *)(a1 + 24));
}
