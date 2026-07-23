/*
 * XREFs of PopPepCompleteComponentIdleStateChangeActivity @ 0x14035E000
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x14023C6B0 (KeSetEvent.c)
 *     PopPepTryPowerDownComponent @ 0x140310C08 (PopPepTryPowerDownComponent.c)
 *     PopPepUpdateIdleState @ 0x140310C48 (PopPepUpdateIdleState.c)
 *     PopFxUpdateComponentAccountingEnhanced @ 0x14035E0D0 (PopFxUpdateComponentAccountingEnhanced.c)
 *     PopPepUpdateIdleStateRefCount @ 0x14035E14C (PopPepUpdateIdleStateRefCount.c)
 *     PopFxUpdateComponentPerfStateNominalChange @ 0x14058C5E0 (PopFxUpdateComponentPerfStateNominalChange.c)
 */

void __fastcall PopPepCompleteComponentIdleStateChangeActivity(__int64 a1, __int64 a2)
{
  __int64 v4; // rbx
  __int64 v5; // rax

  if ( a2 )
  {
    *(_DWORD *)(*(_QWORD *)(a2 + 64) + 12LL) = 0;
    *(_BYTE *)(*(_QWORD *)(a2 + 64) + 16LL) = 0;
    if ( *(_BYTE *)(a2 + 184) )
    {
      if ( *(_BYTE *)(a1 + 124) )
      {
        v5 = *(_QWORD *)(a2 + 24);
        if ( (v5 & 4) != 0 || *(_DWORD *)(a2 + 180) && !*(_DWORD *)(a2 + 176) && (v5 & 2) != 0 )
          PopFxUpdateComponentPerfStateNominalChange(
            *(_QWORD *)(a1 + 32),
            *(unsigned int *)(a2 + 8),
            0LL,
            *(unsigned int *)(a2 + 176));
      }
    }
    if ( !*(_DWORD *)(a2 + 176) )
      KeSetEvent((PRKEVENT)(a2 + 32), 0, 0);
    PopPepUpdateIdleState(a1, a2, 0);
    PopPepTryPowerDownComponent(a1, (_DWORD *)a2);
    v4 = *(unsigned int *)(a2 + 176);
    PopPepUpdateIdleStateRefCount(
      *(unsigned int *)(*(_QWORD *)(a2 + 200) + 24LL * *(unsigned int *)(a2 + 180) + 16),
      *(unsigned int *)(*(_QWORD *)(a2 + 200) + 24 * v4 + 16),
      0LL,
      a2 + 192);
    PopFxUpdateComponentAccountingEnhanced(*(_QWORD *)(a1 + 32), *(unsigned int *)(a2 + 8), (unsigned int)v4, 1LL);
  }
}
