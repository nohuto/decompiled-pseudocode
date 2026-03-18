/*
 * XREFs of ??_E?$TValueResource@U_D3DCOLORVALUE@@UtagMILCMD_COLORRESOURCE@@$0BH@@@MEAAPEAXI@Z @ 0x18019E8C0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CResource@@MEAA@XZ @ 0x180049CEC (--1CResource@@MEAA@XZ.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x18008FCE4 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x1800F9294 (-__global_delete@@YAXPEAX_K@Z.c)
 */

CResource *__fastcall TValueResource<_D3DCOLORVALUE,tagMILCMD_COLORRESOURCE,23>::`vector deleting destructor'(
        CResource *a1,
        char a2)
{
  *(_QWORD *)a1 = &TValueResource<_D3DCOLORVALUE,tagMILCMD_COLORRESOURCE,23>::`vftable';
  CResource::~CResource(a1);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(a1);
    else
      DefaultHeap::Free(a1);
  }
  return a1;
}
