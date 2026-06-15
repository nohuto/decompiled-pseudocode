/*
 * XREFs of ??_GCCrossProcessClientMemory@@UEAAPEAXI@Z @ 0x1800427C0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CCrossProcessClientMemory@@UEAA@XZ @ 0x180042B5C (--1CCrossProcessClientMemory@@UEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x180067038 (--3@YAXPEAX_K@Z.c)
 */

CCrossProcessClientMemory *__fastcall CCrossProcessClientMemory::`scalar deleting destructor'(
        CCrossProcessClientMemory *this,
        char a2)
{
  CCrossProcessClientMemory::~CCrossProcessClientMemory(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, 0x30uLL);
  return this;
}
