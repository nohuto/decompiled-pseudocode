/*
 * XREFs of HvlQueryDetailInfo @ 0x140940F08
 * Callers:
 *     ExpQuerySystemInformation @ 0x1407268C0 (ExpQuerySystemInformation.c)
 * Callees:
 *     HviGetEnlightenmentInformation @ 0x140381E54 (HviGetEnlightenmentInformation.c)
 *     HviGetHypervisorInterface @ 0x140382E68 (HviGetHypervisorInterface.c)
 *     HviGetHypervisorFeatures @ 0x140383390 (HviGetHypervisorFeatures.c)
 *     __security_check_cookie @ 0x1403D7680 (__security_check_cookie.c)
 *     memset @ 0x140435400 (memset.c)
 *     HviGetHardwareFeatures @ 0x140615410 (HviGetHardwareFeatures.c)
 *     HviGetHypervisorVendorAndMaxFunction @ 0x140615484 (HviGetHypervisorVendorAndMaxFunction.c)
 *     HviGetHypervisorVersion @ 0x1406154CC (HviGetHypervisorVersion.c)
 *     HviGetImplementationLimits @ 0x140615514 (HviGetImplementationLimits.c)
 */

__int64 __fastcall HvlQueryDetailInfo(_OWORD *a1, int a2, __int64 a3, _DWORD *a4)
{
  __int64 result; // rax
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  _OWORD v10[7]; // [rsp+30h] [rbp-88h] BYREF

  if ( a2 == 112 )
  {
    memset(v10, 0, sizeof(v10));
    HviGetHypervisorVendorAndMaxFunction(v10);
    HviGetHypervisorInterface(&v10[1]);
    HviGetHypervisorVersion(&v10[2]);
    HviGetHypervisorFeatures(&v10[3]);
    HviGetHardwareFeatures((__int64)&v10[4], v7, v8, v9);
    HviGetEnlightenmentInformation(&v10[5]);
    HviGetImplementationLimits(&v10[6]);
    result = 0LL;
    *a1 = v10[0];
    a1[1] = v10[1];
    a1[2] = v10[2];
    a1[3] = v10[3];
    a1[4] = v10[4];
    a1[5] = v10[5];
    a1[6] = v10[6];
    *a4 = 112;
  }
  else
  {
    result = 3221225712LL;
    *a4 = 0;
  }
  return result;
}
