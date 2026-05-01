/*
 * XREFs of ??_GTrayInfoTipAppInfo@SystemTray@@EEAAPEAXI@Z @ 0x180490870
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 *     ??1TrayInfoTipAppInfo@SystemTray@@EEAA@XZ @ 0x180490820 (--1TrayInfoTipAppInfo@SystemTray@@EEAA@XZ.c)
 */

SystemTray::TrayInfoTipAppInfo *__fastcall SystemTray::TrayInfoTipAppInfo::`scalar deleting destructor'(
        SystemTray::TrayInfoTipAppInfo *this,
        char a2)
{
  SystemTray::TrayInfoTipAppInfo::~TrayInfoTipAppInfo(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
