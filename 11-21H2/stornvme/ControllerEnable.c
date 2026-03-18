/*
 * XREFs of ControllerEnable @ 0x1C0009298
 * Callers:
 *     NVMeControllerInitPart1 @ 0x1C0007384 (NVMeControllerInitPart1.c)
 * Callees:
 *     CheckDpcWatchdogTimerExpireSoon @ 0x1C000A3FC (CheckDpcWatchdogTimerExpireSoon.c)
 */

__int64 __fastcall ControllerEnable(__int64 a1)
{
  unsigned int v2; // r14d
  char v3; // di
  __int64 v4; // rax
  unsigned int i; // ebp
  int v6; // ebx
  signed __int32 v8[10]; // [rsp+0h] [rbp-28h] BYREF

  v2 = *(_DWORD *)(a1 + 204) / 0xAu;
  v3 = 0;
  *(_DWORD *)(*(_QWORD *)(a1 + 176) + 20LL) |= 1u;
  _InterlockedOr(v8, 0);
  v4 = *(_QWORD *)(a1 + 176);
  for ( i = 0; ; ++i )
  {
    v6 = *(_DWORD *)(v4 + 28);
    if ( (v6 & 1) != 0 || i >= v2 )
      break;
    if ( (unsigned __int8)CheckDpcWatchdogTimerExpireSoon(a1, 0LL) )
    {
      _InterlockedIncrement((volatile signed __int32 *)(a1 + 4072));
      v3 = 1;
      break;
    }
    StorPortStallExecution(10000LL);
    v4 = *(_QWORD *)(a1 + 176);
  }
  if ( (v6 & 1) != 0 )
    return 0LL;
  else
    return v3 != 0 ? -1056964596 : -1056964607;
}
