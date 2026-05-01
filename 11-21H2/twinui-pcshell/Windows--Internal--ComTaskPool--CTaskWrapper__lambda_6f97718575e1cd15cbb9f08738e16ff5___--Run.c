/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_6f97718575e1cd15cbb9f08738e16ff5___::Run @ 0x1803F1080
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_6f97718575e1cd15cbb9f08738e16ff5___::Run(
        __int64 a1)
{
  UwpWindowEventDispatcher::FlushRemovedPendingActivations(*(RTL_SRWLOCK **)(a1 + 16));
}
