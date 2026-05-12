/*
 * XREFs of TcglibEraseBand @ 0x1C0079868
 * Callers:
 *     RaidDeassignTcgLockingObject @ 0x1C0058938 (RaidDeassignTcgLockingObject.c)
 *     RaidEraseTcgLockingObject @ 0x1C0058E64 (RaidEraseTcgLockingObject.c)
 * Callees:
 *     WPP_SF_ @ 0x1C003E820 (WPP_SF_.c)
 *     WPP_SF_d @ 0x1C003E84C (WPP_SF_d.c)
 *     TcglibpCheckContext @ 0x1C007AAC4 (TcglibpCheckContext.c)
 *     TcglibpCheckError @ 0x1C007AB10 (TcglibpCheckError.c)
 *     TcglibpEraseBand @ 0x1C007B45C (TcglibpEraseBand.c)
 */

__int64 __fastcall TcglibEraseBand(__int64 a1, __int64 a2)
{
  __int64 v4; // rdx
  int v5; // ebx
  unsigned int v6; // r10d
  int v7; // eax

  v5 = TcglibpCheckContext(a1);
  if ( v5 >= 0 )
  {
    if ( _InterlockedCompareExchange((volatile signed __int32 *)(v4 + 28), 1, 0) == 1 )
    {
      if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
        WPP_SF_(
          (__int64)WPP_GLOBAL_Control->AttachedDevice,
          0x2Au,
          (__int64)&WPP_e3b86e0063b23b92134308a1ea97245c_Traceguids);
      return (unsigned int)-2147483631;
    }
    else
    {
      v7 = TcglibpEraseBand(a1, v4, v6);
      v5 = v7;
      if ( v7 < 0 )
        v5 = TcglibpCheckError(a1, a2, (unsigned int)v7);
      _InterlockedExchange((volatile __int32 *)(a2 + 28), 0);
    }
  }
  else if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
  {
    WPP_SF_d(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      0x29u,
      (__int64)&WPP_e3b86e0063b23b92134308a1ea97245c_Traceguids,
      v5);
  }
  return (unsigned int)v5;
}
