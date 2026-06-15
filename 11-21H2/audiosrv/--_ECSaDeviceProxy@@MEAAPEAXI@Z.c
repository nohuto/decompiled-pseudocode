/*
 * XREFs of ??_ECSaDeviceProxy@@MEAAPEAXI@Z @ 0x18003CDB0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CSaDeviceProxy@@MEAA@XZ @ 0x18003CDF0 (--1CSaDeviceProxy@@MEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x18005EFB8 (--3@YAXPEAX_K@Z.c)
 */

CSaDeviceProxy *__fastcall CSaDeviceProxy::`vector deleting destructor'(CSaDeviceProxy *this, char a2)
{
  CSaDeviceProxy::~CSaDeviceProxy(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, 0x78uLL);
  return this;
}
