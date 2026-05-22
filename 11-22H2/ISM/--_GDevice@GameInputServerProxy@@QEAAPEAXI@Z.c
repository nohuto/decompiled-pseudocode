/*
 * XREFs of ??_GDevice@GameInputServerProxy@@QEAAPEAXI@Z @ 0x180125FF4
 * Callers:
 *     ?NotifyRouterDeviceId@GameInputServerProxy@@UEAAXPEBGI@Z @ 0x1800410A0 (-NotifyRouterDeviceId@GameInputServerProxy@@UEAAXPEBGI@Z.c)
 *     ??1GameInputServerProxy@@EEAA@XZ @ 0x180125EE4 (--1GameInputServerProxy@@EEAA@XZ.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180057770 (--3@YAXPEAX_K@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x180057AD8 (--_V@YAXPEAX@Z.c)
 */

GameInputServerProxy::Device *__fastcall GameInputServerProxy::Device::`scalar deleting destructor'(
        GameInputServerProxy::Device *this)
{
  void *v2; // rcx

  v2 = (void *)*((_QWORD *)this + 3);
  if ( v2 )
    operator delete[](v2);
  operator delete(this);
  return this;
}
