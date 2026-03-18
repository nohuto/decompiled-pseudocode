/*
 * XREFs of ??_ECSpatialRemarshaler@@UEAAPEAXI@Z @ 0x18023EF80
 * Callers:
 *     <none>
 * Callees:
 *     ??1CResource@@MEAA@XZ @ 0x180049CEC (--1CResource@@MEAA@XZ.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x18008FCE4 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x1800F9294 (-__global_delete@@YAXPEAX_K@Z.c)
 */

CSpatialRemarshaler *__fastcall CSpatialRemarshaler::`vector deleting destructor'(CSpatialRemarshaler *this, char a2)
{
  *((_QWORD *)this + 9) = &CSpatialRemarshaler::`vftable'{for `ISceneNotificationListener'};
  *(_QWORD *)this = &CNotificationResource::`vftable';
  CResource::~CResource(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this);
    else
      DefaultHeap::Free(this);
  }
  return this;
}
