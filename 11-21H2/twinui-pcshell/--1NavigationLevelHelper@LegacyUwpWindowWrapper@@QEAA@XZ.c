/*
 * XREFs of ??1NavigationLevelHelper@LegacyUwpWindowWrapper@@QEAA@XZ @ 0x180407764
 * Callers:
 *     _LegacyWindowWrapper::LegacyWindowWrapper_::_1_::dtor$2 @ 0x1803FB154 (_LegacyWindowWrapper--LegacyWindowWrapper_--_1_--dtor$2.c)
 *     ??1LegacyWindowWrapper@@UEAA@XZ @ 0x1803FB1C0 (--1LegacyWindowWrapper@@UEAA@XZ.c)
 *     _LegacyUwpWindowWrapper::LegacyUwpWindowWrapper_::_1_::dtor$2 @ 0x180403D51 (_LegacyUwpWindowWrapper--LegacyUwpWindowWrapper_--_1_--dtor$2.c)
 *     ??1LegacyUwpWindowWrapper@@UEAA@XZ @ 0x180403FCC (--1LegacyUwpWindowWrapper@@UEAA@XZ.c)
 * Callees:
 *     <none>
 */

void __fastcall LegacyUwpWindowWrapper::NavigationLevelHelper::~NavigationLevelHelper(
        LegacyUwpWindowWrapper::NavigationLevelHelper *this)
{
  struct _TP_TIMER *v2; // rcx

  v2 = (struct _TP_TIMER *)*((_QWORD *)this + 1);
  if ( v2 )
  {
    SetThreadpoolTimer(v2, 0LL, 0, 0);
    WaitForThreadpoolTimerCallbacks(*((PTP_TIMER *)this + 1), 1);
    CloseThreadpoolTimer(*((PTP_TIMER *)this + 1));
  }
}
