/*
 * XREFs of atexit @ 0x18000AE2C
 * Callers:
 *     sub_180001540 @ 0x180001540 (sub_180001540.c)
 *     sub_180001580 @ 0x180001580 (sub_180001580.c)
 *     sub_1800015B0 @ 0x1800015B0 (sub_1800015B0.c)
 *     sub_180001710 @ 0x180001710 (sub_180001710.c)
 *     sub_180001730 @ 0x180001730 (sub_180001730.c)
 *     sub_180001750 @ 0x180001750 (sub_180001750.c)
 *     sub_180001780 @ 0x180001780 (sub_180001780.c)
 *     sub_1800017B0 @ 0x1800017B0 (sub_1800017B0.c)
 *     sub_1800017E0 @ 0x1800017E0 (sub_1800017E0.c)
 * Callees:
 *     sub_18000AD8C @ 0x18000AD8C (sub_18000AD8C.c)
 */

int __cdecl atexit(void (__cdecl *a1)())
{
  return (sub_18000AD8C((__int64)a1) != 0) - 1;
}
