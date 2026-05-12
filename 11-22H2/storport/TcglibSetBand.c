/*
 * XREFs of TcglibSetBand @ 0x1C0079FC0
 * Callers:
 *     RaidAssignTcgNamespaceLockingObject @ 0x1C0057D08 (RaidAssignTcgNamespaceLockingObject.c)
 *     RaidAssignTcgRangeLockingObject @ 0x1C005806C (RaidAssignTcgRangeLockingObject.c)
 *     RaidDeassignTcgLockingObject @ 0x1C0058938 (RaidDeassignTcgLockingObject.c)
 *     RaidSetTcgLockingObject @ 0x1C005AEF8 (RaidSetTcgLockingObject.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00220A0 (__security_check_cookie.c)
 *     WPP_SF_ @ 0x1C003E820 (WPP_SF_.c)
 *     WPP_SF_d @ 0x1C003E84C (WPP_SF_d.c)
 *     TcglibpCheckContext @ 0x1C007AAC4 (TcglibpCheckContext.c)
 *     TcglibpCheckError @ 0x1C007AB10 (TcglibpCheckError.c)
 *     TcglibpSetBand @ 0x1C007B8E4 (TcglibpSetBand.c)
 *     TcglibpAuthenticateSession @ 0x1C007EC1C (TcglibpAuthenticateSession.c)
 */

__int64 __fastcall TcglibSetBand(__int64 a1, __int64 a2, unsigned int a3, int a4, int a5, char a6, char a7, __int64 a8)
{
  __int64 v10; // r12
  __int64 v12; // rdx
  int v13; // ebx
  __int64 *v14; // r10
  __int64 *v15; // r9
  __int64 v17; // [rsp+40h] [rbp-48h] BYREF

  v10 = a3;
  v17 = 0LL;
  if ( a3 > *(_DWORD *)(a1 + 48) || (unsigned int)(a4 - 1) > 2 || (unsigned int)(a5 - 1) > 2 )
  {
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
      WPP_SF_(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        0x1Du,
        (__int64)&WPP_e3b86e0063b23b92134308a1ea97245c_Traceguids);
    return (unsigned int)-1073741811;
  }
  else
  {
    v13 = TcglibpCheckContext(a1);
    if ( v13 )
    {
      if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
        WPP_SF_d(
          (__int64)WPP_GLOBAL_Control->AttachedDevice,
          0x1Eu,
          (__int64)&WPP_e3b86e0063b23b92134308a1ea97245c_Traceguids,
          v13);
    }
    else if ( _InterlockedCompareExchange((volatile signed __int32 *)(v12 + 28), 1, 0) == 1 )
    {
      if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
        WPP_SF_(
          (__int64)WPP_GLOBAL_Control->AttachedDevice,
          0x1Fu,
          (__int64)&WPP_e3b86e0063b23b92134308a1ea97245c_Traceguids);
      return (unsigned int)-2147483631;
    }
    else
    {
      v15 = &v17;
      if ( v14 )
        v15 = v14;
      v13 = TcglibpAuthenticateSession(a1, v12, v10 + 0x900030001LL, v15);
      if ( v13 < 0 || (v13 = TcglibpSetBand(a1, a2, v10, a4, a5, a6, a7, a8), v13 < 0) )
        v13 = TcglibpCheckError(a1, a2, (unsigned int)v13);
      _InterlockedExchange((volatile __int32 *)(a2 + 28), 0);
    }
  }
  return (unsigned int)v13;
}
