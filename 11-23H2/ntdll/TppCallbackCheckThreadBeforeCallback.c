/*
 * XREFs of TppCallbackCheckThreadBeforeCallback @ 0x18007E30C
 * Callers:
 *     TppCleanupGroupMemberDestroy @ 0x180033038 (TppCleanupGroupMemberDestroy.c)
 * Callees:
 *     TppCheckForTransactions @ 0x180035538 (TppCheckForTransactions.c)
 */

void __fastcall TppCallbackCheckThreadBeforeCallback(__int64 a1)
{
  __int64 v1; // rax
  int v2; // r8d
  int v3; // r8d
  __int64 v4; // r9
  void *v5; // r10

  if ( a1 )
  {
    v1 = *(_QWORD *)(a1 + 128);
    *(_GUID *)(a1 + 232) = NtCurrentTeb()->ActivityId;
    if ( v1 )
    {
      if ( (*(_BYTE *)(v1 + 436) & 1) == 0 )
      {
        v2 = *(_DWORD *)(a1 + 104) | 8;
        *(_DWORD *)(a1 + 104) = v2;
        if ( NtCurrentTeb()->IsImpersonating )
          *(_DWORD *)(a1 + 104) = v2 | 4;
        if ( TppCheckForTransactions() )
        {
          v3 |= 0x10u;
          *(_DWORD *)(v4 + 104) = v3;
        }
        if ( NtCurrentPeb()->LoaderLock->OwningThread == NtCurrentTeb()->ClientId.UniqueThread )
        {
          v3 |= 0x20u;
          *(_DWORD *)(v4 + 104) = v3;
        }
        if ( NtCurrentTeb()->PreferredLanguages != v5 )
        {
          v3 |= 0x40u;
          *(_DWORD *)(v4 + 104) = v3;
        }
        if ( NtCurrentTeb()->SavedPriorityState != v5 )
          *(_DWORD *)(v4 + 104) = v3 | 0x80;
      }
    }
  }
}
