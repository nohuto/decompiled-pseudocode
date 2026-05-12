/*
 * XREFs of TcglibRevertLockingSpEx @ 0x1C0079D28
 * Callers:
 *     RaidRevertTcgConfiguration @ 0x1C005ABA4 (RaidRevertTcgConfiguration.c)
 * Callees:
 *     WPP_SF_ @ 0x1C003E820 (WPP_SF_.c)
 *     WPP_SF_d @ 0x1C003E84C (WPP_SF_d.c)
 *     TcglibpCheckContext @ 0x1C007AAC4 (TcglibpCheckContext.c)
 *     TcglibpCheckError @ 0x1C007AB10 (TcglibpCheckError.c)
 *     TcglibpRevertLockingSp @ 0x1C007D0A4 (TcglibpRevertLockingSp.c)
 *     TcglibpAuthenticateSession @ 0x1C007EC1C (TcglibpAuthenticateSession.c)
 */

__int64 __fastcall TcglibRevertLockingSpEx(__int64 a1, __int64 a2)
{
  int v2; // r9d
  int v5; // ebx
  __int64 v6; // rdx
  char v7; // r10
  __int64 v8; // r11

  v2 = *(_DWORD *)(a1 + 32);
  if ( v2 == 512 )
  {
    v5 = TcglibpCheckContext(a1);
    if ( v5 )
    {
      if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
        WPP_SF_d(
          (__int64)WPP_GLOBAL_Control->AttachedDevice,
          0x11u,
          (__int64)&WPP_e3b86e0063b23b92134308a1ea97245c_Traceguids,
          v5);
    }
    else if ( _InterlockedCompareExchange((volatile signed __int32 *)(v6 + 28), 1, 0) == 1 )
    {
      if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
        WPP_SF_(
          (__int64)WPP_GLOBAL_Control->AttachedDevice,
          0x12u,
          (__int64)&WPP_e3b86e0063b23b92134308a1ea97245c_Traceguids);
      return (unsigned int)-2147483631;
    }
    else
    {
      v5 = TcglibpAuthenticateSession(a1, v6, v7 != 0 ? 0x90001FF01LL : 0x900000006LL, v8);
      if ( v5 < 0 || (v5 = TcglibpRevertLockingSp(a1, a2), v5 < 0) )
        v5 = TcglibpCheckError(a1, a2, (unsigned int)v5);
      _InterlockedExchange((volatile __int32 *)(a2 + 28), 0);
    }
  }
  else
  {
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
      WPP_SF_d(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        0x10u,
        (__int64)&WPP_e3b86e0063b23b92134308a1ea97245c_Traceguids,
        v2);
    return (unsigned int)-1073741637;
  }
  return (unsigned int)v5;
}
