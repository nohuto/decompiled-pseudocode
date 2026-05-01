/*
 * XREFs of ??_GModernResourceManagerProxy@@UEAAPEAXI@Z @ 0x18001B490
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18000AAC8 (--3@YAXPEAX@Z.c)
 *     ??1ModernResourceManagerProxy@@UEAA@XZ @ 0x18001B42C (--1ModernResourceManagerProxy@@UEAA@XZ.c)
 */

ModernResourceManagerProxy *__fastcall ModernResourceManagerProxy::`scalar deleting destructor'(
        ModernResourceManagerProxy *this,
        char a2)
{
  ModernResourceManagerProxy::~ModernResourceManagerProxy(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
