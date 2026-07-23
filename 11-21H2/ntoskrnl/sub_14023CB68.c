/*
 * XREFs of sub_14023CB68 @ 0x14023CB68
 * Callers:
 *     sub_14023C9F8 @ 0x14023C9F8 (sub_14023C9F8.c)
 *     MmProbeAndLockSelectedPages @ 0x140247CF0 (MmProbeAndLockSelectedPages.c)
 *     sub_14031B810 @ 0x14031B810 (sub_14031B810.c)
 *     sub_14031C290 @ 0x14031C290 (sub_14031C290.c)
 *     sub_140385584 @ 0x140385584 (sub_140385584.c)
 *     sub_1405845D4 @ 0x1405845D4 (sub_1405845D4.c)
 * Callees:
 *     sub_14020D8D0 @ 0x14020D8D0 (sub_14020D8D0.c)
 *     sub_1402B0CE0 @ 0x1402B0CE0 (sub_1402B0CE0.c)
 */

__int64 __fastcall sub_14023CB68(__int64 a1)
{
  unsigned __int64 v1; // rdx

  v1 = *(_QWORD *)(a1 + 40);
  if ( v1 )
  {
    sub_14020D8D0(*(_QWORD *)(a1 + 104), v1);
    *(_QWORD *)(a1 + 40) = 0LL;
  }
  LOBYTE(v1) = *(_BYTE *)(a1 + 76);
  return sub_1402B0CE0(*(_QWORD *)(a1 + 104), v1);
}
