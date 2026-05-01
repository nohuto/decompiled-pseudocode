/*
 * XREFs of ??_EFamilyAppUsageManager@AppLimits@FamilySafety@Internal@Windows@@UEAAPEAXI@Z @ 0x180151890
 * Callers:
 *     ??_EFamilyAppUsageManager@AppLimits@FamilySafety@Internal@Windows@@WDA@EAAPEAXI@Z @ 0x18020D6F0 (--_EFamilyAppUsageManager@AppLimits@FamilySafety@Internal@Windows@@WDA@EAAPEAXI@Z.c)
 * Callees:
 *     ??1FamilyAppUsageManager@AppLimits@FamilySafety@Internal@Windows@@UEAA@XZ @ 0x1801518CC (--1FamilyAppUsageManager@AppLimits@FamilySafety@Internal@Windows@@UEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 */

Windows::Internal::FamilySafety::AppLimits::FamilyAppUsageManager *__fastcall Windows::Internal::FamilySafety::AppLimits::FamilyAppUsageManager::`vector deleting destructor'(
        Windows::Internal::FamilySafety::AppLimits::FamilyAppUsageManager *this,
        char a2)
{
  Windows::Internal::FamilySafety::AppLimits::FamilyAppUsageManager::~FamilyAppUsageManager(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, 0x110uLL);
  return this;
}
