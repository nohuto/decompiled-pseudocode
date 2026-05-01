/*
 * XREFs of ??_GTrayInfoTipDisplayInfo@SystemTray@@EEAAPEAXI@Z @ 0x1805477C0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     ??1TrayInfoTipDisplayInfo@SystemTray@@EEAA@XZ @ 0x180547778 (--1TrayInfoTipDisplayInfo@SystemTray@@EEAA@XZ.c)
 */

SystemTray::TrayInfoTipDisplayInfo *__fastcall SystemTray::TrayInfoTipDisplayInfo::`scalar deleting destructor'(
        SystemTray::TrayInfoTipDisplayInfo *this,
        char a2)
{
  SystemTray::TrayInfoTipDisplayInfo::~TrayInfoTipDisplayInfo(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
