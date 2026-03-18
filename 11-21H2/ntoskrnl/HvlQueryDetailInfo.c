/*
 * XREFs of HvlQueryDetailInfo @ 0x140930DA8
 * Callers:
 *     ExpQuerySystemInformation @ 0x14073B5A0 (ExpQuerySystemInformation.c)
 * Callees:
 *     HviGetHypervisorFeatures @ 0x1403BF8B0 (HviGetHypervisorFeatures.c)
 *     HviGetEnlightenmentInformation @ 0x1403C02DC (HviGetEnlightenmentInformation.c)
 *     HviGetHypervisorInterface @ 0x1403C0360 (HviGetHypervisorInterface.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     HviGetHardwareFeatures @ 0x140647B00 (HviGetHardwareFeatures.c)
 *     HviGetHypervisorVendorAndMaxFunction @ 0x140647B74 (HviGetHypervisorVendorAndMaxFunction.c)
 *     HviGetHypervisorVersion @ 0x140647BBC (HviGetHypervisorVersion.c)
 *     HviGetImplementationLimits @ 0x140647C04 (HviGetImplementationLimits.c)
 */

__int64 __fastcall HvlQueryDetailInfo(_OWORD *a1, int a2, __int64 a3, _DWORD *a4)
{
  __int64 result; // rax
  __int64 v7; // rdx
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  _OWORD v11[7]; // [rsp+30h] [rbp-88h] BYREF

  if ( a2 == 112 )
  {
    memset(v11, 0, sizeof(v11));
    HviGetHypervisorVendorAndMaxFunction(v11);
    HviGetHypervisorInterface(&v11[1], v7);
    HviGetHypervisorVersion(&v11[2]);
    HviGetHypervisorFeatures(&v11[3]);
    HviGetHardwareFeatures((__int64)&v11[4], v8, v9, v10);
    HviGetEnlightenmentInformation(&v11[5]);
    HviGetImplementationLimits(&v11[6]);
    result = 0LL;
    *a1 = v11[0];
    a1[1] = v11[1];
    a1[2] = v11[2];
    a1[3] = v11[3];
    a1[4] = v11[4];
    a1[5] = v11[5];
    a1[6] = v11[6];
    *a4 = 112;
  }
  else
  {
    result = 3221225712LL;
    *a4 = 0;
  }
  return result;
}
