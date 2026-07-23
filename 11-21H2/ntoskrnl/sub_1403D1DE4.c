/*
 * XREFs of sub_1403D1DE4 @ 0x1403D1DE4
 * Callers:
 *     sub_1403D1870 @ 0x1403D1870 (sub_1403D1870.c)
 *     sub_1405C6FB0 @ 0x1405C6FB0 (sub_1405C6FB0.c)
 * Callees:
 *     sub_14023BC48 @ 0x14023BC48 (sub_14023BC48.c)
 *     KeQueryPerformanceCounter @ 0x1403027F0 (KeQueryPerformanceCounter.c)
 *     sub_1403D1E20 @ 0x1403D1E20 (sub_1403D1E20.c)
 *     sub_1403D1F00 @ 0x1403D1F00 (sub_1403D1F00.c)
 */

void __fastcall sub_1403D1DE4(_QWORD *a1)
{
  LARGE_INTEGER PerformanceCounter; // rax

  if ( *a1 )
  {
    sub_1403D1F00();
    sub_14023BC48((__int64)a1);
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
    ((void (__fastcall *)(_QWORD, _QWORD))sub_1403D1E20)(a1[1], (LARGE_INTEGER)PerformanceCounter.QuadPart);
  }
}
