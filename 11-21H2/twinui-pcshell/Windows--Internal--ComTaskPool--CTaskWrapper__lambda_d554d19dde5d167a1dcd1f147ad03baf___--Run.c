/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_d554d19dde5d167a1dcd1f147ad03baf___::Run @ 0x1803F10A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_d554d19dde5d167a1dcd1f147ad03baf___::Run(
        __int64 a1)
{
  return UwpWindowEventDispatcher::RemovePendingActivation(
           (RTL_SRWLOCK *)(*(_QWORD *)(a1 + 16) + 24LL),
           *(_QWORD *)(a1 + 32));
}
