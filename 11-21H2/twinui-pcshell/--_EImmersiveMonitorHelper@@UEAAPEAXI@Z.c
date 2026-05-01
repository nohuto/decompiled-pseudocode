/*
 * XREFs of ??_EImmersiveMonitorHelper@@UEAAPEAXI@Z @ 0x18017C640
 * Callers:
 *     <none>
 * Callees:
 *     ??1ImmersiveMonitorHelper@@UEAA@XZ @ 0x18017C67C (--1ImmersiveMonitorHelper@@UEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 */

ImmersiveMonitorHelper *__fastcall ImmersiveMonitorHelper::`vector deleting destructor'(
        ImmersiveMonitorHelper *this,
        char a2)
{
  ImmersiveMonitorHelper::~ImmersiveMonitorHelper(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, 0x60uLL);
  return this;
}
