/*
 * XREFs of ??_EDeviceClient@Internal@Composition@UI@Windows@@UEAAPEAXI@Z @ 0x1800A5400
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180095B64 (--3@YAXPEAX_K@Z.c)
 *     ??1DeviceClient@Internal@Composition@UI@Windows@@UEAA@XZ @ 0x1800A5030 (--1DeviceClient@Internal@Composition@UI@Windows@@UEAA@XZ.c)
 */

Windows::UI::Composition::Internal::DeviceClient *__fastcall Windows::UI::Composition::Internal::DeviceClient::`vector deleting destructor'(
        Windows::UI::Composition::Internal::DeviceClient *this,
        volatile int *a2)
{
  char v2; // bl

  v2 = (char)a2;
  Windows::UI::Composition::Internal::DeviceClient::~DeviceClient(this, a2);
  if ( (v2 & 1) != 0 )
    operator delete(this);
  return this;
}
