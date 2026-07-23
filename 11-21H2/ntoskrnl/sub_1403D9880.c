/*
 * XREFs of sub_1403D9880 @ 0x1403D9880
 * Callers:
 *     <none>
 * Callees:
 *     KeQueryPerformanceCounter @ 0x1403027F0 (KeQueryPerformanceCounter.c)
 *     sub_1403D98F0 @ 0x1403D98F0 (sub_1403D98F0.c)
 */

__int64 __fastcall sub_1403D9880(__int64 a1, KSPIN_LOCK *a2, KSPIN_LOCK *a3)
{
  KeQueryPerformanceCounter(0LL);
  sub_1403D98F0(a2);
  *(_QWORD *)(a1 + 34040) = a2;
  if ( a3 )
  {
    sub_1403D98F0(a3);
    *(_QWORD *)(a1 + 34048) = a3;
  }
  return 0LL;
}
