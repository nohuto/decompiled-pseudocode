/*
 * XREFs of ??_GTrayNotifyCallback@SystemTray@@EEAAPEAXI@Z @ 0x1804924A0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 *     ??1TrayNotifyCallback@SystemTray@@EEAA@XZ @ 0x180492420 (--1TrayNotifyCallback@SystemTray@@EEAA@XZ.c)
 */

SystemTray::TrayNotifyCallback *__fastcall SystemTray::TrayNotifyCallback::`scalar deleting destructor'(
        SystemTray::TrayNotifyCallback *this,
        char a2)
{
  SystemTray::TrayNotifyCallback::~TrayNotifyCallback(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
