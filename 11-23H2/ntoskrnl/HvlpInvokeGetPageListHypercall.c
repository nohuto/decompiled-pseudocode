/*
 * XREFs of HvlpInvokeGetPageListHypercall @ 0x14054A2C8
 * Callers:
 *     HvlpMarkHypervisorPagesForHibernation @ 0x140547114 (HvlpMarkHypervisorPagesForHibernation.c)
 *     HvlAddPagesCallbackRoutine @ 0x140547320 (HvlAddPagesCallbackRoutine.c)
 *     HvlpGetEncryptedDataFromHypervisor @ 0x140547CB8 (HvlpGetEncryptedDataFromHypervisor.c)
 *     HvlpGetPageList @ 0x14054A1F4 (HvlpGetPageList.c)
 * Callees:
 *     HvcallInitiateHypercall @ 0x1403CD360 (HvcallInitiateHypercall.c)
 *     __security_check_cookie @ 0x1403D7CE0 (__security_check_cookie.c)
 *     HvlpAcquireHypercallPage @ 0x1405407B0 (HvlpAcquireHypercallPage.c)
 *     HvlpReleaseHypercallPage @ 0x140541400 (HvlpReleaseHypercallPage.c)
 */

char __fastcall HvlpInvokeGetPageListHypercall(__int64 a1, LONGLONG a2)
{
  PHYSICAL_ADDRESS *v4; // rax
  __int128 v6; // [rsp+20h] [rbp-68h] BYREF
  __int64 v7; // [rsp+30h] [rbp-58h]
  __int64 v8; // [rsp+38h] [rbp-50h]
  __int64 v9; // [rsp+40h] [rbp-48h] BYREF

  v6 = 0LL;
  v7 = 0LL;
  LODWORD(v8) = 0;
  v4 = HvlpAcquireHypercallPage((__int64)&v6, 1, (__int64)&v9, 24LL);
  v4[1].QuadPart = -1LL;
  v4[2].QuadPart = 1LL;
  v4->QuadPart = a2;
  v4[2].QuadPart = *(_BYTE *)(a1 + 4) != 0 ? 3LL : 1LL;
  HvcallInitiateHypercall(151);
  return HvlpReleaseHypercallPage((__int64)&v6);
}
