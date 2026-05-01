/*
 * XREFs of ??_GSnapFlyoutHost@@UEAAPEAXI@Z @ 0x180592290
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 *     ??1SnapFlyoutHost@@UEAA@XZ @ 0x180591D88 (--1SnapFlyoutHost@@UEAA@XZ.c)
 */

SnapFlyoutHost *__fastcall SnapFlyoutHost::`scalar deleting destructor'(SnapFlyoutHost *this, char a2)
{
  SnapFlyoutHost::~SnapFlyoutHost(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
