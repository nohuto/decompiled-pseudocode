/*
 * XREFs of ??_ECSpatialCrossProcessClientEndpoint@@UEAAPEAXI@Z @ 0x14008D830
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x14002FC18 (--3@YAXPEAX_K@Z.c)
 *     ??1CSpatialCrossProcessClientEndpoint@@UEAA@XZ @ 0x14008D448 (--1CSpatialCrossProcessClientEndpoint@@UEAA@XZ.c)
 */

CSpatialCrossProcessClientEndpoint *__fastcall CSpatialCrossProcessClientEndpoint::`vector deleting destructor'(
        CSpatialCrossProcessClientEndpoint *this,
        int a2,
        int a3)
{
  char v3; // bl

  v3 = a2;
  CSpatialCrossProcessClientEndpoint::~CSpatialCrossProcessClientEndpoint(this, a2, a3);
  if ( (v3 & 1) != 0 )
    operator delete(this);
  return this;
}
