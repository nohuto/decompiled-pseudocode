/*
 * XREFs of ?IsPlatformDesktop@ToastSettingsHelper@@SA_NXZ @ 0x1804367F8
 * Callers:
 *     ?IsStackedPriorityToastsEnabled@ToastSettingsHelper@@SA_NXZ @ 0x1804369D0 (-IsStackedPriorityToastsEnabled@ToastSettingsHelper@@SA_NXZ.c)
 * Callees:
 *     ?IsPPIEdition@@YA_NXZ @ 0x18009FF88 (-IsPPIEdition@@YA_NXZ.c)
 *     ?IsWindowsLite@ToastSettingsHelper@@CA_NXZ @ 0x180436A0C (-IsWindowsLite@ToastSettingsHelper@@CA_NXZ.c)
 */

bool ToastSettingsHelper::IsPlatformDesktop(void)
{
  bool v0; // bl
  int v2; // [rsp+30h] [rbp+8h] BYREF

  AcquireSRWLockExclusive(&ToastSettingsHelper::m_platformCheckLock);
  if ( !ToastSettingsHelper::m_platformCached )
  {
    if ( IsPPIEdition() || ToastSettingsHelper::IsWindowsLite() || (RtlGetDeviceFamilyInfoEnum(0LL, &v2, 0LL), v2 == 10) )
      ToastSettingsHelper::m_isDesktopPlatform = 0;
    ToastSettingsHelper::m_platformCached = 1;
  }
  v0 = ToastSettingsHelper::m_isDesktopPlatform;
  ReleaseSRWLockExclusive(&ToastSettingsHelper::m_platformCheckLock);
  return v0;
}
