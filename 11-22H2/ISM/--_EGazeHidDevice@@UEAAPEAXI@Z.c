/*
 * XREFs of ??_EGazeHidDevice@@UEAAPEAXI@Z @ 0x1800F0460
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180057770 (--3@YAXPEAX_K@Z.c)
 *     ??1GazeHidDevice@@UEAA@XZ @ 0x1800F5044 (--1GazeHidDevice@@UEAA@XZ.c)
 */

GazeHidDevice *__fastcall GazeHidDevice::`vector deleting destructor'(GazeHidDevice *this, char a2)
{
  GazeHidDevice::~GazeHidDevice(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
