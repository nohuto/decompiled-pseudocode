/*
 * XREFs of _StartupRegKeyNotification::StartupRegKeyNotification_::_1_::dtor$3 @ 0x1805846C1
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall StartupRegKeyNotification::StartupRegKeyNotification_::_1_::dtor_3(__int64 a1, __int64 a2)
{
  StartupNotification::~StartupNotification(*(HKEY **)(a2 + 80));
}
