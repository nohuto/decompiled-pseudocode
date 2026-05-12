/*
 * XREFs of TcglibSetBandPin @ 0x1C007A4AC
 * Callers:
 *     RaidSetTcgLockingObjectAuthKey @ 0x1C005B184 (RaidSetTcgLockingObjectAuthKey.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00220A0 (__security_check_cookie.c)
 *     WPP_SF_ @ 0x1C003E820 (WPP_SF_.c)
 *     WPP_SF_d @ 0x1C003E84C (WPP_SF_d.c)
 *     TcglibpCheckContext @ 0x1C007AAC4 (TcglibpCheckContext.c)
 *     TcglibpCheckError @ 0x1C007AB10 (TcglibpCheckError.c)
 *     TcglibpSetPin @ 0x1C007E01C (TcglibpSetPin.c)
 *     TcglibpAuthenticateSession @ 0x1C007EC1C (TcglibpAuthenticateSession.c)
 */

__int64 __fastcall TcglibSetBandPin(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 *a5)
{
  __int64 v7; // rdx
  int v8; // ebx
  __int64 *v9; // r10
  __int64 v10; // r11
  __int64 *v11; // r9
  __int64 v12; // r14
  __int64 *v13; // r9
  __int64 v15; // [rsp+20h] [rbp-48h] BYREF

  v15 = 0LL;
  v8 = TcglibpCheckContext(a1);
  if ( v8 >= 0 )
  {
    if ( _InterlockedCompareExchange((volatile signed __int32 *)(v7 + 28), 1, 0) == 1 )
    {
      if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
        WPP_SF_(
          (__int64)WPP_GLOBAL_Control->AttachedDevice,
          0x26u,
          (__int64)&WPP_e3b86e0063b23b92134308a1ea97245c_Traceguids);
      return (unsigned int)-2147483631;
    }
    else
    {
      v11 = &v15;
      if ( v9 )
        v11 = v9;
      v12 = v10;
      v8 = TcglibpAuthenticateSession(a1, v7, v10 + 0x900030001LL, v11);
      if ( v8 < 0 )
        goto LABEL_16;
      v13 = &v15;
      if ( a5 )
        v13 = a5;
      v8 = TcglibpSetPin(a1, a2, v12 + 0xB00030001LL, v13, v15);
      if ( v8 < 0 )
LABEL_16:
        v8 = TcglibpCheckError(a1, a2, (unsigned int)v8);
      _InterlockedExchange((volatile __int32 *)(a2 + 28), 0);
    }
  }
  else if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
  {
    WPP_SF_d(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      0x25u,
      (__int64)&WPP_e3b86e0063b23b92134308a1ea97245c_Traceguids,
      v8);
  }
  return (unsigned int)v8;
}
