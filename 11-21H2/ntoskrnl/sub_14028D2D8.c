/*
 * XREFs of sub_14028D2D8 @ 0x14028D2D8
 * Callers:
 *     sub_1402459E8 @ 0x1402459E8 (sub_1402459E8.c)
 *     sub_14027AA30 @ 0x14027AA30 (sub_14027AA30.c)
 *     sub_14028C230 @ 0x14028C230 (sub_14028C230.c)
 *     sub_14031C860 @ 0x14031C860 (sub_14031C860.c)
 *     sub_140329730 @ 0x140329730 (sub_140329730.c)
 *     sub_1405803C8 @ 0x1405803C8 (sub_1405803C8.c)
 *     sub_1407063CC @ 0x1407063CC (sub_1407063CC.c)
 *     sub_14096C4AC @ 0x14096C4AC (sub_14096C4AC.c)
 * Callees:
 *     FsRtlIsTotalDeviceFailure @ 0x14028D390 (FsRtlIsTotalDeviceFailure.c)
 */

_BOOL8 __fastcall sub_14028D2D8(NTSTATUS a1, unsigned __int64 a2)
{
  return a1 == -1073741670 || a1 == -1073741663 || a1 == -1073741801 || a2 > 0x1000 && !FsRtlIsTotalDeviceFailure(a1);
}
