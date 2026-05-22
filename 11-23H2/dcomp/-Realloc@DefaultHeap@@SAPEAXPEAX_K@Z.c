/*
 * XREFs of ?Realloc@DefaultHeap@@SAPEAXPEAX_K@Z @ 0x180078A40
 * Callers:
 *     ?put_ImplicitAnimations@Api@CompositionObject@Composition@UI@Windows@@UEAAJPEAUIImplicitAnimationCollection@345@@Z @ 0x180036860 (-put_ImplicitAnimations@Api@CompositionObject@Composition@UI@Windows@@UEAAJPEAUIImplicitAnimatio.c)
 *     ?GetProperties@CompositionObject@Composition@UI@Windows@@UEAAPEAVCompositionPropertySet@234@_N@Z @ 0x180055540 (-GetProperties@CompositionObject@Composition@UI@Windows@@UEAAPEAVCompositionPropertySet@234@_N@Z.c)
 *     ?FindSlotForData@CSparseStorage@@AEAAAEAVDataInfo@1@II@Z @ 0x18005B3B4 (-FindSlotForData@CSparseStorage@@AEAAAEAVDataInfo@1@II@Z.c)
 *     ?Grow@?$DynArrayImpl@$00@@IEAAJIIHPEAPEBX@Z @ 0x180078698 (-Grow@-$DynArrayImpl@$00@@IEAAJIIHPEAPEBX@Z.c)
 *     ?SetReference@CSparseStorage@@QEAAXIPEAXPEBVReferenceAdapter@1@@Z @ 0x180078828 (-SetReference@CSparseStorage@@QEAAXIPEAXPEBVReferenceAdapter@1@@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x18007C16C (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 * Callees:
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18004400C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 */

LPVOID __fastcall DefaultHeap::Realloc(void *lpMem, SIZE_T a2)
{
  HANDLE ProcessHeap; // rax

  if ( !lpMem )
    return DefaultHeap::Alloc(a2);
  ProcessHeap = GetProcessHeap();
  return HeapReAlloc(ProcessHeap, 0, lpMem, a2);
}
