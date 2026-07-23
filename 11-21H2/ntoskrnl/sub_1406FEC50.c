/*
 * XREFs of sub_1406FEC50 @ 0x1406FEC50
 * Callers:
 *     sub_14028DF40 @ 0x14028DF40 (sub_14028DF40.c)
 *     sub_14028E238 @ 0x14028E238 (sub_14028E238.c)
 *     sub_14029C5B0 @ 0x14029C5B0 (sub_14029C5B0.c)
 *     sub_1403198A0 @ 0x1403198A0 (sub_1403198A0.c)
 *     sub_1403199E0 @ 0x1403199E0 (sub_1403199E0.c)
 *     MmProbeAndLockPages @ 0x140319E90 (MmProbeAndLockPages.c)
 *     sub_14032C1B0 @ 0x14032C1B0 (sub_14032C1B0.c)
 *     sub_14032D1C0 @ 0x14032D1C0 (sub_14032D1C0.c)
 *     sub_14032EA60 @ 0x14032EA60 (sub_14032EA60.c)
 *     sub_1405845D4 @ 0x1405845D4 (sub_1405845D4.c)
 *     sub_1405A3818 @ 0x1405A3818 (sub_1405A3818.c)
 *     sub_1405B99AC @ 0x1405B99AC (sub_1405B99AC.c)
 *     sub_140693D80 @ 0x140693D80 (sub_140693D80.c)
 *     sub_1407B92D0 @ 0x1407B92D0 (sub_1407B92D0.c)
 *     sub_140983198 @ 0x140983198 (sub_140983198.c)
 * Callees:
 *     sub_14028CDA0 @ 0x14028CDA0 (sub_14028CDA0.c)
 *     sub_14028CE10 @ 0x14028CE10 (sub_14028CE10.c)
 *     sub_14032A72C @ 0x14032A72C (sub_14032A72C.c)
 */

__int64 __fastcall sub_1406FEC50(__int64 a1, __int64 a2)
{
  __int64 v4; // rax

  v4 = sub_14032A72C(a1);
  sub_14028CE10(v4, a2);
  return sub_14028CDA0(a1, a2);
}
