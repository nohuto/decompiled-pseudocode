/*
 * XREFs of ??_GCDeviceResource@@MEAAPEAXI@Z @ 0x180288720
 * Callers:
 *     <none>
 * Callees:
 *     ??1CDeviceResource@@MEAA@XZ @ 0x1800A1034 (--1CDeviceResource@@MEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x18010F3C8 (--3@YAXPEAX_K@Z.c)
 */

CDeviceResource *__fastcall CDeviceResource::`scalar deleting destructor'(CDeviceResource *this, char a2)
{
  CDeviceResource::~CDeviceResource(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
