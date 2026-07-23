/*
 * XREFs of TppCallbackCheckThreadBeforeCallback @ 0x180082C4C
 * Callers:
 *     TppCleanupGroupMemberDestroy @ 0x18001C480 (TppCleanupGroupMemberDestroy.c)
 * Callees:
 *     TppCheckForTransactions @ 0x1800169AC (TppCheckForTransactions.c)
 *     RtlIsCriticalSectionLockedByThread @ 0x18004D120 (RtlIsCriticalSectionLockedByThread.c)
 */

void __fastcall TppCallbackCheckThreadBeforeCallback(__int64 a1)
{
  __int64 v2; // rax
  int v3; // ebx

  if ( a1 )
  {
    v2 = *(_QWORD *)(a1 + 128);
    *(_GUID *)(a1 + 232) = NtCurrentTeb()->ActivityId;
    if ( v2 )
    {
      if ( (*(_BYTE *)(v2 + 436) & 1) == 0 )
      {
        v3 = *(_DWORD *)(a1 + 104) | 8;
        *(_DWORD *)(a1 + 104) = v3;
        if ( NtCurrentTeb()->IsImpersonating )
        {
          v3 |= 4u;
          *(_DWORD *)(a1 + 104) = v3;
        }
        if ( TppCheckForTransactions() )
        {
          v3 |= 0x10u;
          *(_DWORD *)(a1 + 104) = v3;
        }
        if ( RtlIsCriticalSectionLockedByThread(NtCurrentPeb()->LoaderLock) )
        {
          v3 |= 0x20u;
          *(_DWORD *)(a1 + 104) = v3;
        }
        if ( NtCurrentTeb()->PreferredLanguages )
        {
          v3 |= 0x40u;
          *(_DWORD *)(a1 + 104) = v3;
        }
        if ( NtCurrentTeb()->SavedPriorityState )
          *(_DWORD *)(a1 + 104) = v3 | 0x80;
      }
    }
  }
}
