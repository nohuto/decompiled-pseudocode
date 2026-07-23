/*
 * XREFs of PsChargeProcessPagedPoolQuota @ 0x1406A6F60
 * Callers:
 *     sub_1406A6AF8 @ 0x1406A6AF8 (sub_1406A6AF8.c)
 *     sub_1406A6F00 @ 0x1406A6F00 (sub_1406A6F00.c)
 *     sub_1407A7464 @ 0x1407A7464 (sub_1407A7464.c)
 * Callees:
 *     sub_1402AC010 @ 0x1402AC010 (sub_1402AC010.c)
 */

__int64 __fastcall PsChargeProcessPagedPoolQuota(__int64 a1, unsigned __int64 a2)
{
  if ( (PEPROCESS)a1 == PsInitialSystemProcess )
    return 0LL;
  else
    return sub_1402AC010(*(_QWORD *)(a1 + 1384), a1, 1, a2);
}
