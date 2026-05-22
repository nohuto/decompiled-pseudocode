/*
 * XREFs of ??_GMPCSpatialGestureRecognizerHandler@@UEAAPEAXI@Z @ 0x1800D1C10
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180057770 (--3@YAXPEAX_K@Z.c)
 *     ??1MPCSpatialGestureRecognizerHandler@@UEAA@XZ @ 0x1800D1B10 (--1MPCSpatialGestureRecognizerHandler@@UEAA@XZ.c)
 */

MPCSpatialGestureRecognizerHandler *__fastcall MPCSpatialGestureRecognizerHandler::`scalar deleting destructor'(
        MPCSpatialGestureRecognizerHandler *this,
        char a2)
{
  MPCSpatialGestureRecognizerHandler::~MPCSpatialGestureRecognizerHandler(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
