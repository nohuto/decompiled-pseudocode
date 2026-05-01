/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_525ae591d05ed530c7ae5511c000eda7___::Run @ 0x1803DB590
 * Callers:
 *     <none>
 * Callees:
 *     ?OnAddRemoveGameTask@BroadcastDVRComponent@@AEAAXPEAUHWND__@@EW4ShellNotificationType@Internal@Capture@Media@Windows@@E@Z @ 0x1803D99DC (-OnAddRemoveGameTask@BroadcastDVRComponent@@AEAAXPEAUHWND__@@EW4ShellNotificationType@Internal@C.c)
 */

void __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_525ae591d05ed530c7ae5511c000eda7___::Run(
        __int64 a1)
{
  BroadcastDVRComponent::OnAddRemoveGameTask(
    *(_QWORD *)(a1 + 32),
    *(void **)(a1 + 16),
    *(_BYTE *)(a1 + 24),
    *(_DWORD *)(a1 + 28),
    *(_BYTE *)(a1 + 40));
}
