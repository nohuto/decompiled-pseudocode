/*
 * XREFs of ??_GDEVICE_EVENT@@UEAAPEAXI@Z @ 0x180150B50
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18005EFB8 (--3@YAXPEAX_K@Z.c)
 *     ??1DEVICE_EVENT@@UEAA@XZ @ 0x180150B08 (--1DEVICE_EVENT@@UEAA@XZ.c)
 */

DEVICE_EVENT *__fastcall DEVICE_EVENT::`scalar deleting destructor'(DEVICE_EVENT *this, char a2)
{
  DEVICE_EVENT::~DEVICE_EVENT(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
