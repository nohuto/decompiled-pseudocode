/*
 * XREFs of ExfUnblockPushLock @ 0x14041AC40
 * Callers:
 *     sub_14065CE0C @ 0x14065CE0C (sub_14065CE0C.c)
 *     sub_14067BE48 @ 0x14067BE48 (sub_14067BE48.c)
 *     sub_14067F520 @ 0x14067F520 (sub_14067F520.c)
 *     sub_140681670 @ 0x140681670 (sub_140681670.c)
 *     sub_140692E2C @ 0x140692E2C (sub_140692E2C.c)
 *     sub_14069E98C @ 0x14069E98C (sub_14069E98C.c)
 *     sub_1406A1000 @ 0x1406A1000 (sub_1406A1000.c)
 *     sub_1406A6520 @ 0x1406A6520 (sub_1406A6520.c)
 *     sub_1406A6990 @ 0x1406A6990 (sub_1406A6990.c)
 *     sub_1406A6A34 @ 0x1406A6A34 (sub_1406A6A34.c)
 *     sub_14071E230 @ 0x14071E230 (sub_14071E230.c)
 *     sub_140732D40 @ 0x140732D40 (sub_140732D40.c)
 *     sub_140734160 @ 0x140734160 (sub_140734160.c)
 *     sub_140735760 @ 0x140735760 (sub_140735760.c)
 *     sub_140741B7C @ 0x140741B7C (sub_140741B7C.c)
 *     sub_1407A0920 @ 0x1407A0920 (sub_1407A0920.c)
 *     ObWaitForMultipleObjects @ 0x1407A1400 (ObWaitForMultipleObjects.c)
 *     sub_1407A1A30 @ 0x1407A1A30 (sub_1407A1A30.c)
 *     ObSetHandleAttributes @ 0x1407A1B10 (ObSetHandleAttributes.c)
 *     sub_1407A2680 @ 0x1407A2680 (sub_1407A2680.c)
 *     ObQueryObjectAuditingByHandle @ 0x1407A2A70 (ObQueryObjectAuditingByHandle.c)
 *     sub_1407A2E10 @ 0x1407A2E10 (sub_1407A2E10.c)
 *     sub_1407A8900 @ 0x1407A8900 (sub_1407A8900.c)
 *     sub_1407ABD80 @ 0x1407ABD80 (sub_1407ABD80.c)
 *     sub_1407ED7E0 @ 0x1407ED7E0 (sub_1407ED7E0.c)
 *     sub_1407EDA2C @ 0x1407EDA2C (sub_1407EDA2C.c)
 *     sub_1407EDFC0 @ 0x1407EDFC0 (sub_1407EDFC0.c)
 *     sub_1407FC920 @ 0x1407FC920 (sub_1407FC920.c)
 *     sub_14080AB10 @ 0x14080AB10 (sub_14080AB10.c)
 *     sub_140881750 @ 0x140881750 (sub_140881750.c)
 *     sub_140883F24 @ 0x140883F24 (sub_140883F24.c)
 *     sub_1409465D0 @ 0x1409465D0 (sub_1409465D0.c)
 *     sub_140983E50 @ 0x140983E50 (sub_140983E50.c)
 *     sub_140984330 @ 0x140984330 (sub_140984330.c)
 *     sub_1409851A4 @ 0x1409851A4 (sub_1409851A4.c)
 *     sub_1409AF410 @ 0x1409AF410 (sub_1409AF410.c)
 *     sub_1409F8FB8 @ 0x1409F8FB8 (sub_1409F8FB8.c)
 * Callees:
 *     sub_140369634 @ 0x140369634 (sub_140369634.c)
 */

int __fastcall ExfUnblockPushLock(volatile __int64 *a1, void *a2)
{
  return sub_140369634(a1, a2, 0);
}
