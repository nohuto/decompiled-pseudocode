/*
 * XREFs of ??_GDevice@GameInputServerProxy@@QEAAPEAXI@Z @ 0x180117F6C
 * Callers:
 *     ?NotifyRouterDeviceId@GameInputServerProxy@@UEAAXPEBGI@Z @ 0x18003F9C0 (-NotifyRouterDeviceId@GameInputServerProxy@@UEAAXPEBGI@Z.c)
 *     ??1GameInputServerProxy@@EEAA@XZ @ 0x180117E5C (--1GameInputServerProxy@@EEAA@XZ.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1800569E0 (--3@YAXPEAX_K@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x180056D48 (--_V@YAXPEAX@Z.c)
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
