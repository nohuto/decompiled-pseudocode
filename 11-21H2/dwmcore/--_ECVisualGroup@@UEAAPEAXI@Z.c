/*
 * XREFs of ??_ECVisualGroup@@UEAAPEAXI@Z @ 0x180192CE0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CResource@@MEAA@XZ @ 0x180049CEC (--1CResource@@MEAA@XZ.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x18008FCE4 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800D7338 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x1800F9294 (-__global_delete@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$unique_ptr@VCExcludeVisualReference@@U?$default_delete@VCExcludeVisualReference@@@std@@@std@@@std@@@std@@YAXPEAV?$unique_ptr@VCExcludeVisualReference@@U?$default_delete@VCExcludeVisualReference@@@std@@@0@QEAV10@AEAV?$allocator@V?$unique_ptr@VCExcludeVisualReference@@U?$default_delete@VCExcludeVisualReference@@@std@@@std@@@0@@Z @ 0x18019208C (--$_Destroy_range@V-$allocator@V-$unique_ptr@VCExcludeVisualReference@@U-$default_delete@VCExclu.c)
 */

CVisualGroup *__fastcall CVisualGroup::`vector deleting destructor'(CVisualGroup *this, char a2)
{
  CExcludeVisualReference **v4; // rcx

  v4 = (CExcludeVisualReference **)*((_QWORD *)this + 8);
  if ( v4 )
  {
    std::_Destroy_range<std::allocator<std::unique_ptr<CExcludeVisualReference>>>(
      v4,
      *((CExcludeVisualReference ***)this + 9));
    std::_Deallocate<16,0>(
      *((void **)this + 8),
      (*((_QWORD *)this + 10) - *((_QWORD *)this + 8)) & 0xFFFFFFFFFFFFFFF8uLL);
    *((_QWORD *)this + 8) = 0LL;
    *((_QWORD *)this + 9) = 0LL;
    *((_QWORD *)this + 10) = 0LL;
  }
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
