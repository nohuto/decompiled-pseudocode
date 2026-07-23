/*
 * XREFs of HvlpInvokeGetPageListHypercall @ 0x14054A988
 * Callers:
 *     HvlpMarkHypervisorPagesForHibernation @ 0x1405477D4 (HvlpMarkHypervisorPagesForHibernation.c)
 *     HvlAddPagesCallbackRoutine @ 0x1405479E0 (HvlAddPagesCallbackRoutine.c)
 *     HvlpGetEncryptedDataFromHypervisor @ 0x140548378 (HvlpGetEncryptedDataFromHypervisor.c)
 *     HvlpGetPageList @ 0x14054A8B4 (HvlpGetPageList.c)
 * Callees:
 *     HvcallInitiateHypercall @ 0x1403CD540 (HvcallInitiateHypercall.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     HvlpAcquireHypercallPage @ 0x140540E70 (HvlpAcquireHypercallPage.c)
 *     HvlpReleaseHypercallPage @ 0x140541AC0 (HvlpReleaseHypercallPage.c)
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
