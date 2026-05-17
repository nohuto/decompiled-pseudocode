/*
 * XREFs of RtlpCapabilityCheckSystemCapability @ 0x18000B7E8
 * Callers:
 *     RtlCapabilityCheck @ 0x180011970 (RtlCapabilityCheck.c)
 * Callees:
 *     RtlpGetPolicyValueForSystemCapability @ 0x18000C778 (RtlpGetPolicyValueForSystemCapability.c)
 *     RtlFreeUnicodeString @ 0x18000EB80 (RtlFreeUnicodeString.c)
 *     RtlInitializeSid @ 0x180013050 (RtlInitializeSid.c)
 *     RtlCheckTokenMembershipEx @ 0x180014560 (RtlCheckTokenMembershipEx.c)
 *     RtlCompareUnicodeString @ 0x180014C80 (RtlCompareUnicodeString.c)
 *     __security_check_cookie @ 0x18008E790 (__security_check_cookie.c)
 *     RtlpIsAppContainer @ 0x1800F3070 (RtlpIsAppContainer.c)
 */

__int64 __fastcall RtlpCapabilityCheckSystemCapability(__int64 a1, __int64 a2, _BYTE *a3)
{
  int PolicyValueForSystemCapability; // eax
  int IsAppContainer; // ebx
  __int64 v8; // r8
  __int64 v9; // r8
  char v10; // [rsp+20h] [rbp-40h] BYREF
  _BYTE v11[3]; // [rsp+21h] [rbp-3Fh] BYREF
  int v12; // [rsp+24h] [rbp-3Ch] BYREF
  __int16 v13; // [rsp+28h] [rbp-38h]
  UNICODE_STRING UnicodeString; // [rsp+30h] [rbp-30h] BYREF
  _BYTE v15[8]; // [rsp+40h] [rbp-20h] BYREF
  int v16; // [rsp+48h] [rbp-18h]
  int v17; // [rsp+4Ch] [rbp-14h]

  v12 = 0;
  v13 = 1280;
  v10 = 0;
  v11[0] = 0;
  UnicodeString = 0LL;
  PolicyValueForSystemCapability = RtlpGetPolicyValueForSystemCapability(a2, &UnicodeString);
  IsAppContainer = PolicyValueForSystemCapability;
  if ( PolicyValueForSystemCapability == -1073741772 )
  {
    IsAppContainer = 0;
  }
  else
  {
    *a3 = 0;
    if ( PolicyValueForSystemCapability >= 0 )
    {
      if ( (unsigned int)RtlCompareUnicodeString(&UnicodeString, &unk_180132858, 0LL) )
      {
        if ( (unsigned int)RtlCompareUnicodeString(&UnicodeString, &unk_180132848, 0LL) )
        {
          IsAppContainer = -1073741823;
          goto LABEL_3;
        }
        LOBYTE(v9) = 1;
        RtlInitializeSid(v15, &v12, v9);
        v16 = 4;
      }
      else
      {
        LOBYTE(v8) = 2;
        RtlInitializeSid(v15, &v12, v8);
        v16 = 32;
        v17 = 583;
      }
      IsAppContainer = RtlCheckTokenMembershipEx(a1, v15, 2LL, &v10);
      if ( IsAppContainer >= 0 )
      {
        if ( v10 )
        {
          IsAppContainer = RtlpIsAppContainer(a1, v11);
          if ( IsAppContainer >= 0 )
          {
            if ( v11[0] )
              *a3 = 1;
          }
        }
      }
    }
  }
LABEL_3:
  RtlFreeUnicodeString(&UnicodeString);
  return (unsigned int)IsAppContainer;
}
