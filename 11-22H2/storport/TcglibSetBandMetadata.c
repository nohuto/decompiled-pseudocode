/*
 * XREFs of TcglibSetBandMetadata @ 0x1C007A358
 * Callers:
 *     RaidSetTcgLockingObjectMetadata @ 0x1C005B384 (RaidSetTcgLockingObjectMetadata.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00220A0 (__security_check_cookie.c)
 *     WPP_SF_ @ 0x1C003E820 (WPP_SF_.c)
 *     WPP_SF_d @ 0x1C003E84C (WPP_SF_d.c)
 *     TcglibpCheckContext @ 0x1C007AAC4 (TcglibpCheckContext.c)
 *     TcglibpCheckError @ 0x1C007AB10 (TcglibpCheckError.c)
 *     TcglibpSetBandMetadata @ 0x1C007BE18 (TcglibpSetBandMetadata.c)
 *     TcglibpAuthenticateSession @ 0x1C007EC1C (TcglibpAuthenticateSession.c)
 */

__int64 __fastcall TcglibSetBandMetadata(__int64 a1, __int64 a2, unsigned int a3, __int64 a4, int a5, __int64 a6)
{
  __int64 v8; // r14
  __int64 v9; // rdx
  int v10; // ebx
  __int64 *v11; // r10
  __int64 *v12; // r9
  int v13; // r9d
  int v14; // eax
  __int64 v16; // [rsp+30h] [rbp-38h] BYREF

  v16 = 0LL;
  v8 = a3;
  v10 = TcglibpCheckContext(a1);
  if ( v10 >= 0 )
  {
    if ( _InterlockedCompareExchange((volatile signed __int32 *)(v9 + 28), 1, 0) == 1 )
    {
      if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
        WPP_SF_(
          (__int64)WPP_GLOBAL_Control->AttachedDevice,
          0x2Eu,
          (__int64)&WPP_e3b86e0063b23b92134308a1ea97245c_Traceguids);
      return (unsigned int)-2147483631;
    }
    else
    {
      v12 = &v16;
      if ( v11 )
        v12 = v11;
      v10 = TcglibpAuthenticateSession(a1, v9, v8 + 0x900030001LL, v12);
      if ( v10 >= 0 )
      {
        v14 = TcglibpSetBandMetadata(a1, a2, v8, v13, a5, a6);
        v10 = v14;
        if ( v14 < 0 )
          v10 = TcglibpCheckError(a1, a2, (unsigned int)v14);
      }
      _InterlockedExchange((volatile __int32 *)(a2 + 28), 0);
    }
  }
  else if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
  {
    WPP_SF_d(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      0x2Du,
      (__int64)&WPP_e3b86e0063b23b92134308a1ea97245c_Traceguids,
      v10);
  }
  return (unsigned int)v10;
}
