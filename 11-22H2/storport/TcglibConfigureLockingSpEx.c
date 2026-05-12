/*
 * XREFs of TcglibConfigureLockingSpEx @ 0x1C0079504
 * Callers:
 *     RaidActivateTcgLocking @ 0x1C0057A8C (RaidActivateTcgLocking.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00220A0 (__security_check_cookie.c)
 *     WPP_SF_ @ 0x1C003E820 (WPP_SF_.c)
 *     WPP_SF_d @ 0x1C003E84C (WPP_SF_d.c)
 *     TcglibpCheckContext @ 0x1C007AAC4 (TcglibpCheckContext.c)
 *     TcglibpCheckError @ 0x1C007AB10 (TcglibpCheckError.c)
 *     TcglibpConfigureLockingSp @ 0x1C007CFB4 (TcglibpConfigureLockingSp.c)
 *     TcglibpAuthenticateSession @ 0x1C007EC1C (TcglibpAuthenticateSession.c)
 */

__int64 __fastcall TcglibConfigureLockingSpEx(__int64 a1, __int64 a2, char a3)
{
  int v3; // r9d
  unsigned int v7; // ebx
  __int64 v8; // rdx
  __int64 *v9; // r10
  __int64 *v10; // r9
  __int64 v11; // r8
  unsigned int v12; // eax
  __int64 v14; // [rsp+20h] [rbp-38h] BYREF

  v3 = *(_DWORD *)(a1 + 32);
  v14 = 0LL;
  if ( v3 == 512 )
  {
    v7 = TcglibpCheckContext(a1);
    if ( v7 )
    {
      if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
        WPP_SF_d(
          (__int64)WPP_GLOBAL_Control->AttachedDevice,
          0x14u,
          (__int64)&WPP_e3b86e0063b23b92134308a1ea97245c_Traceguids,
          v7);
    }
    else if ( _InterlockedCompareExchange((volatile signed __int32 *)(v8 + 28), 1, 0) == 1 )
    {
      if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
        WPP_SF_(
          (__int64)WPP_GLOBAL_Control->AttachedDevice,
          0x15u,
          (__int64)&WPP_e3b86e0063b23b92134308a1ea97245c_Traceguids);
      return (unsigned int)-2147483631;
    }
    else
    {
      v10 = &v14;
      if ( v9 )
        v10 = v9;
      v7 = TcglibpAuthenticateSession(a1, v8, 0x900010001LL, v10);
      if ( v7 )
      {
        if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
          WPP_SF_d(
            (__int64)WPP_GLOBAL_Control->AttachedDevice,
            0x16u,
            (__int64)&WPP_e3b86e0063b23b92134308a1ea97245c_Traceguids,
            v7);
      }
      else
      {
        LOBYTE(v11) = a3;
        v12 = TcglibpConfigureLockingSp(a1, a2, v11);
        v7 = v12;
        if ( v12 )
          v7 = TcglibpCheckError(a1, a2, v12);
      }
      _InterlockedExchange((volatile __int32 *)(a2 + 28), 0);
    }
  }
  else
  {
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
      WPP_SF_d(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        0x13u,
        (__int64)&WPP_e3b86e0063b23b92134308a1ea97245c_Traceguids,
        v3);
    return (unsigned int)-1073741637;
  }
  return v7;
}
