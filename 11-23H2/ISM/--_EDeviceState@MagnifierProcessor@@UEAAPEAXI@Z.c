/*
 * XREFs of ??_EDeviceState@MagnifierProcessor@@UEAAPEAXI@Z @ 0x1801CDB70
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1800569E0 (--3@YAXPEAX_K@Z.c)
 *     ??1DeviceState@MagnifierProcessor@@UEAA@XZ @ 0x1801CD9E4 (--1DeviceState@MagnifierProcessor@@UEAA@XZ.c)
 */

MagnifierProcessor::DeviceState *__fastcall MagnifierProcessor::DeviceState::`vector deleting destructor'(
        MagnifierProcessor::DeviceState *this,
        char a2)
{
  MagnifierProcessor::DeviceState::~DeviceState(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
