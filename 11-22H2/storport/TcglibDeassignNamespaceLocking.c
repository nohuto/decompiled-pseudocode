/*
 * XREFs of TcglibDeassignNamespaceLocking @ 0x1C00796A4
 * Callers:
 *     RaidDeassignTcgLockingObject @ 0x1C0058938 (RaidDeassignTcgLockingObject.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00220A0 (__security_check_cookie.c)
 *     WPP_SF_ @ 0x1C003E820 (WPP_SF_.c)
 *     WPP_SF_d @ 0x1C003E84C (WPP_SF_d.c)
 *     TcglibpCheckContext @ 0x1C007AAC4 (TcglibpCheckContext.c)
 *     TcglibpCheckError @ 0x1C007AB10 (TcglibpCheckError.c)
 *     TcglibpDeassignNamespaceLocking @ 0x1C007B3C8 (TcglibpDeassignNamespaceLocking.c)
 *     TcglibpAuthenticateSession @ 0x1C007EC1C (TcglibpAuthenticateSession.c)
 */

__int64 __fastcall TcglibDeassignNamespaceLocking(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v7; // rdx
  int v8; // ebx
  __int64 *v9; // r10
  __int64 *v10; // r9
  __int64 v12; // [rsp+20h] [rbp-38h] BYREF

  v12 = 0LL;
  v8 = TcglibpCheckContext(a1);
  if ( v8 )
  {
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
      WPP_SF_d(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        0x23u,
        (__int64)&WPP_e3b86e0063b23b92134308a1ea97245c_Traceguids,
        v8);
  }
  else if ( _InterlockedCompareExchange((volatile signed __int32 *)(v7 + 28), 1, 0) == 1 )
  {
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
      WPP_SF_(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        0x24u,
        (__int64)&WPP_e3b86e0063b23b92134308a1ea97245c_Traceguids);
    return (unsigned int)-2147483631;
  }
  else
  {
    v10 = &v12;
    if ( v9 )
      v10 = v9;
    v8 = TcglibpAuthenticateSession(a1, v7, 0x900010001LL, v10);
    if ( v8 < 0 || (v8 = TcglibpDeassignNamespaceLocking(a1, a2, a4), v8 < 0) )
      v8 = TcglibpCheckError(a1, a2, (unsigned int)v8);
    _InterlockedExchange((volatile __int32 *)(a2 + 28), 0);
  }
  return (unsigned int)v8;
}
