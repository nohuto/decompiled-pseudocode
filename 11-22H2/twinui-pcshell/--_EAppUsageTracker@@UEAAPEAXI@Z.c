/*
 * XREFs of ??_EAppUsageTracker@@UEAAPEAXI@Z @ 0x1801BE670
 * Callers:
 *     <none>
 * Callees:
 *     ??1AppUsageTracker@@UEAA@XZ @ 0x1800AA348 (--1AppUsageTracker@@UEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 */

AppUsageTracker *__fastcall AppUsageTracker::`vector deleting destructor'(AppUsageTracker *this, char a2)
{
  AppUsageTracker::~AppUsageTracker(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, 0x70uLL);
  return this;
}
