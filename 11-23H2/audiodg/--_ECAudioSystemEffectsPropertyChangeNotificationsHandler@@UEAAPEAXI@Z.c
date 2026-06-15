/*
 * XREFs of ??_ECAudioSystemEffectsPropertyChangeNotificationsHandler@@UEAAPEAXI@Z @ 0x14006BEF0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x140028498 (--3@YAXPEAX_K@Z.c)
 *     ??1CAudioSystemEffectsPropertyChangeNotificationsHandler@@UEAA@XZ @ 0x140072B28 (--1CAudioSystemEffectsPropertyChangeNotificationsHandler@@UEAA@XZ.c)
 */

CAudioSystemEffectsPropertyChangeNotificationsHandler *__fastcall CAudioSystemEffectsPropertyChangeNotificationsHandler::`vector deleting destructor'(
        CAudioSystemEffectsPropertyChangeNotificationsHandler *this,
        char a2)
{
  CAudioSystemEffectsPropertyChangeNotificationsHandler::~CAudioSystemEffectsPropertyChangeNotificationsHandler(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
