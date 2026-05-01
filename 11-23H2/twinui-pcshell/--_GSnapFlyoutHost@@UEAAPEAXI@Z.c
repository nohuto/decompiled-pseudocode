/*
 * XREFs of ??_GSnapFlyoutHost@@UEAAPEAXI@Z @ 0x18065F9E0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     ??1SnapFlyoutHost@@UEAA@XZ @ 0x18065F4D8 (--1SnapFlyoutHost@@UEAA@XZ.c)
 */

SnapFlyoutHost *__fastcall SnapFlyoutHost::`scalar deleting destructor'(SnapFlyoutHost *this, char a2)
{
  SnapFlyoutHost::~SnapFlyoutHost(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
