/*
 * XREFs of sub_140930DA8 @ 0x140930DA8
 * Callers:
 *     sub_14073B5A0 @ 0x14073B5A0 (sub_14073B5A0.c)
 * Callees:
 *     HviGetHypervisorFeatures @ 0x1403BF8B0 (HviGetHypervisorFeatures.c)
 *     sub_1403C02DC @ 0x1403C02DC (sub_1403C02DC.c)
 *     sub_1403C0360 @ 0x1403C0360 (sub_1403C0360.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     HviGetHardwareFeatures @ 0x140647B00 (HviGetHardwareFeatures.c)
 *     sub_140647B74 @ 0x140647B74 (sub_140647B74.c)
 *     sub_140647BBC @ 0x140647BBC (sub_140647BBC.c)
 *     sub_140647C04 @ 0x140647C04 (sub_140647C04.c)
 */

__int64 __fastcall sub_140930DA8(_OWORD *a1, int a2, __int64 a3, _DWORD *a4)
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
    sub_140647B74(v11);
    sub_1403C0360(&v11[1], v7);
    sub_140647BBC(&v11[2]);
    HviGetHypervisorFeatures(&v11[3]);
    HviGetHardwareFeatures((__int64)&v11[4], v8, v9, v10);
    sub_1403C02DC(&v11[5]);
    sub_140647C04(&v11[6]);
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
