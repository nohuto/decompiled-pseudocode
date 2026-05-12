/*
 * XREFs of TcglibAssignNamespaceLocking @ 0x1C00792A4
 * Callers:
 *     RaidAssignTcgNamespaceLockingObject @ 0x1C0057D08 (RaidAssignTcgNamespaceLockingObject.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00220A0 (__security_check_cookie.c)
 *     WPP_SF_ @ 0x1C003E820 (WPP_SF_.c)
 *     WPP_SF_d @ 0x1C003E84C (WPP_SF_d.c)
 *     TcglibpCheckContext @ 0x1C007AAC4 (TcglibpCheckContext.c)
 *     TcglibpCheckError @ 0x1C007AB10 (TcglibpCheckError.c)
 *     TcglibpAssignNamespaceLocking @ 0x1C007B320 (TcglibpAssignNamespaceLocking.c)
 *     TcglibpAuthenticateSession @ 0x1C007EC1C (TcglibpAuthenticateSession.c)
 */

__int64 __fastcall TcglibAssignNamespaceLocking(__int64 a1, __int64 a2, unsigned int a3, __int64 a4, __int64 a5)
{
  __int64 v8; // rdx
  int v9; // ebx
  __int64 *v10; // r10
  __int64 *v11; // r9
  __int64 v13; // [rsp+20h] [rbp-48h] BYREF

  v13 = 0LL;
  if ( a3 && a5 )
  {
    v9 = TcglibpCheckContext(a1);
    if ( v9 )
    {
      if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
        WPP_SF_d(
          (__int64)WPP_GLOBAL_Control->AttachedDevice,
          0x21u,
          (__int64)&WPP_e3b86e0063b23b92134308a1ea97245c_Traceguids,
          v9);
    }
    else if ( _InterlockedCompareExchange((volatile signed __int32 *)(v8 + 28), 1, 0) == 1 )
    {
      if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
        WPP_SF_(
          (__int64)WPP_GLOBAL_Control->AttachedDevice,
          0x22u,
          (__int64)&WPP_e3b86e0063b23b92134308a1ea97245c_Traceguids);
      return (unsigned int)-2147483631;
    }
    else
    {
      v11 = &v13;
      if ( v10 )
        v11 = v10;
      v9 = TcglibpAuthenticateSession(a1, v8, 0x900010001LL, v11);
      if ( v9 < 0 || (v9 = TcglibpAssignNamespaceLocking(a1, a2, a3, a5, v13), v9 < 0) )
        v9 = TcglibpCheckError(a1, a2, (unsigned int)v9);
      _InterlockedExchange((volatile __int32 *)(a2 + 28), 0);
    }
  }
  else
  {
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
      WPP_SF_(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        0x20u,
        (__int64)&WPP_e3b86e0063b23b92134308a1ea97245c_Traceguids);
    return (unsigned int)-1073741811;
  }
  return (unsigned int)v9;
}
