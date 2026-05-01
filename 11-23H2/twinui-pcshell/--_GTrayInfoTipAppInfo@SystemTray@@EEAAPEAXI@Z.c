/*
 * XREFs of ??_GTrayInfoTipAppInfo@SystemTray@@EEAAPEAXI@Z @ 0x180546360
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     ??1TrayInfoTipAppInfo@SystemTray@@EEAA@XZ @ 0x18054631C (--1TrayInfoTipAppInfo@SystemTray@@EEAA@XZ.c)
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
