/*
 * XREFs of ??9winrt@@YA_NAEBUhstring@0@0@Z @ 0x180455B48
 * Callers:
 *     ?Activate@UndockedSearchAppExperienceManager@@AEAAXAEBUSearchAppActivatedEventArgs@Shell@UI@WindowsUdk@winrt@@_N@Z @ 0x1800B0B84 (-Activate@UndockedSearchAppExperienceManager@@AEAAXAEBUSearchAppActivatedEventArgs@Shell@UI@Wind.c)
 * Callees:
 *     ??8winrt@@YA_NAEBUhstring@0@0@Z @ 0x18004CF30 (--8winrt@@YA_NAEBUhstring@0@0@Z.c)
 */

char __fastcall winrt::operator!=(__int64 a1, __int64 a2, __int64 a3)
{
  return winrt::operator==(a1, a2, a3) ^ 1;
}
