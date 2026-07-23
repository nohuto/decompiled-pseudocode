/*
 * XREFs of sub_1406D804C @ 0x1406D804C
 * Callers:
 *     sub_1407B97B0 @ 0x1407B97B0 (sub_1407B97B0.c)
 *     sub_14096D778 @ 0x14096D778 (sub_14096D778.c)
 * Callees:
 *     PsReturnProcessNonPagedPoolQuota @ 0x1403107C0 (PsReturnProcessNonPagedPoolQuota.c)
 */

__int64 __fastcall sub_1406D804C(__int64 a1, __int64 a2)
{
  return PsReturnProcessNonPagedPoolQuota(
           a1,
           8 * ((*(_QWORD *)(a2 + 8) >> 6) + ((*(_QWORD *)(a2 + 8) & 0x3F) != 0) + 9LL));
}
