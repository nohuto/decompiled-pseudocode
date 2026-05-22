/*
 * XREFs of ??_GSharedD3DDevice@Internal@Composition@UI@Windows@@EEAAPEAXI@Z @ 0x1800A1320
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180095B64 (--3@YAXPEAX_K@Z.c)
 *     ??1SharedD3DDevice@Internal@Composition@UI@Windows@@EEAA@XZ @ 0x1800A275C (--1SharedD3DDevice@Internal@Composition@UI@Windows@@EEAA@XZ.c)
 */

Windows::UI::Composition::Internal::SharedD3DDevice *__fastcall Windows::UI::Composition::Internal::SharedD3DDevice::`scalar deleting destructor'(
        Windows::UI::Composition::Internal::SharedD3DDevice *this,
        char a2)
{
  Windows::UI::Composition::Internal::SharedD3DDevice::~SharedD3DDevice(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
