/*
 * XREFs of ??_GCDeviceGraphObjectCache@@MEAAPEAXI@Z @ 0x140022410
 * Callers:
 *     <none>
 * Callees:
 *     ??1CDeviceGraphObjectCache@@MEAA@XZ @ 0x140021FBC (--1CDeviceGraphObjectCache@@MEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x14002FC18 (--3@YAXPEAX_K@Z.c)
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
