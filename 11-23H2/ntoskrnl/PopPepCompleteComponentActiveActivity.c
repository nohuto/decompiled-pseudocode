/*
 * XREFs of PopPepCompleteComponentActiveActivity @ 0x140310B50
 * Callers:
 *     <none>
 * Callees:
 *     PopPepComponentGetResidencyIdleState @ 0x140310BC8 (PopPepComponentGetResidencyIdleState.c)
 *     PopPepTryPowerDownComponent @ 0x140310C08 (PopPepTryPowerDownComponent.c)
 *     PopPepUpdateIdleState @ 0x140310C48 (PopPepUpdateIdleState.c)
 */

void __fastcall PopPepCompleteComponentActiveActivity(__int64 a1, __int64 a2)
{
  int ResidencyIdleState; // eax

  if ( a2 )
  {
    *(_QWORD *)(a2 + 136) = MEMORY[0xFFFFF78000000008];
    *(_DWORD *)(a2 + 152) = *(_DWORD *)(a2 + 188) - 1;
    ResidencyIdleState = PopPepComponentGetResidencyIdleState(a2, *(_QWORD *)(a2 + 120));
    *(_DWORD *)(a2 + 4) &= ~1u;
    *(_DWORD *)(a2 + 160) = ResidencyIdleState;
    PopPepUpdateIdleState(a1, a2, 0LL);
    PopPepTryPowerDownComponent(a1, a2);
  }
}
