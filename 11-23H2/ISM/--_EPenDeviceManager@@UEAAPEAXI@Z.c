/*
 * XREFs of ??_EPenDeviceManager@@UEAAPEAXI@Z @ 0x1801A4B50
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1800569E0 (--3@YAXPEAX_K@Z.c)
 *     ??1PenDeviceManager@@UEAA@XZ @ 0x1801A4AA0 (--1PenDeviceManager@@UEAA@XZ.c)
 */

PenDeviceManager *__fastcall PenDeviceManager::`vector deleting destructor'(PenDeviceManager *this, char a2)
{
  PenDeviceManager::~PenDeviceManager(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
