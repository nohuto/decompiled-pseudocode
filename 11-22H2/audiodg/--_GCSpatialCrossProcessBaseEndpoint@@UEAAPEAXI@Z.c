/*
 * XREFs of ??_GCSpatialCrossProcessBaseEndpoint@@UEAAPEAXI@Z @ 0x140099B70
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x140028498 (--3@YAXPEAX_K@Z.c)
 *     ??1CSpatialCrossProcessBaseEndpoint@@UEAA@XZ @ 0x1400996DC (--1CSpatialCrossProcessBaseEndpoint@@UEAA@XZ.c)
 */

CSpatialCrossProcessBaseEndpoint *__fastcall CSpatialCrossProcessBaseEndpoint::`scalar deleting destructor'(
        CSpatialCrossProcessBaseEndpoint *this,
        char a2)
{
  CSpatialCrossProcessBaseEndpoint::~CSpatialCrossProcessBaseEndpoint(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
