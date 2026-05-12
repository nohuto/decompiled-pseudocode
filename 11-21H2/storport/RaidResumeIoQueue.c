/*
 * XREFs of RaidResumeIoQueue @ 0x1C0014CD4
 * Callers:
 *     RaidResumeUnitQueue @ 0x1C0014698 (RaidResumeUnitQueue.c)
 *     RaidResumeAndRestartUnitQueue @ 0x1C0054168 (RaidResumeAndRestartUnitQueue.c)
 * Callees:
 *     WPP_SF_ @ 0x1C003C48C (WPP_SF_.c)
 */

__int64 __fastcall RaidResumeIoQueue(__int64 a1)
{
  int v2; // eax
  unsigned int v3; // ecx

  v2 = _InterlockedDecrement((volatile signed __int32 *)(a1 + 44));
  if ( v2 < 0 )
  {
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u )
    {
      WPP_SF_(WPP_GLOBAL_Control->AttachedDevice, 10LL, &WPP_e5ec2f8d2a23345d0acacdba1b32319a_Traceguids);
    }
    _InterlockedAdd((volatile signed __int32 *)(a1 + 44), 1u);
    return 0;
  }
  else
  {
    v3 = 0;
    if ( !v2 )
    {
      v3 = 1;
      _InterlockedExchange((volatile __int32 *)(a1 + 160), 1);
    }
  }
  return v3;
}
