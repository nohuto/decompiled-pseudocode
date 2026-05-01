/*
 * XREFs of ?OnDeviceArrival@AccessibilityExperienceManager@@UEAAXPEBUDeviceInfo@@@Z @ 0x18053C850
 * Callers:
 *     <none>
 * Callees:
 *     CreationThreadDispatcher::RunAsync__lambda_5e7b84d80f3018ca142c76d505d1d45c___ @ 0x180175FF0 (CreationThreadDispatcher--RunAsync__lambda_5e7b84d80f3018ca142c76d505d1d45c___.c)
 *     ?SHRegSetBOOL@@YAJPEAUHKEY__@@PEBG1H@Z @ 0x1801BC580 (-SHRegSetBOOL@@YAJPEAUHKEY__@@PEBG1H@Z.c)
 */

void __fastcall AccessibilityExperienceManager::OnDeviceArrival(
        AccessibilityExperienceManager *this,
        const struct DeviceInfo *a2)
{
  if ( a2 && (*((_DWORD *)a2 + 1) & 0x4000) != 0 && ++*((_DWORD *)this + 78) == 1 )
  {
    SHRegSetBOOL(HKEY_CURRENT_USER, L"Software\\Microsoft\\Input\\EC", L"ECHardware", 1);
    CreationThreadDispatcher::RunAsync__lambda_5e7b84d80f3018ca142c76d505d1d45c___(
      *((_QWORD *)this + 17),
      (volatile int *)this - 38);
  }
}
