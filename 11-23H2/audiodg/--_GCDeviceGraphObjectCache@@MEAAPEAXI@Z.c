/*
 * XREFs of ??_GCDeviceGraphObjectCache@@MEAAPEAXI@Z @ 0x140038860
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x140028498 (--3@YAXPEAX_K@Z.c)
 *     ??1CDeviceGraphObjectCache@@MEAA@XZ @ 0x1400709A8 (--1CDeviceGraphObjectCache@@MEAA@XZ.c)
 */

CDeviceGraphObjectCache *__fastcall CDeviceGraphObjectCache::`scalar deleting destructor'(
        CDeviceGraphObjectCache *this,
        char a2)
{
  CDeviceGraphObjectCache::~CDeviceGraphObjectCache(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
