/*
 * XREFs of DSA_EnumCallback @ 0x18074A808
 * Callers:
 *     ??1CPinList@@QEAA@XZ @ 0x180751A34 (--1CPinList@@QEAA@XZ.c)
 *     ?Save@CPinList@@QEAAJPEAVCPinnedList@@@Z @ 0x18075B358 (-Save@CPinList@@QEAAJPEAVCPinnedList@@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     DSA_GetItemPtr @ 0x18074A880 (DSA_GetItemPtr.c)
 */

void __stdcall DSA_EnumCallback(HDSA hdsa, PFNDAENUMCALLBACK pfnCB, void *pData)
{
  int i; // ebx
  PVOID ItemPtr; // rax

  if ( hdsa )
  {
    if ( pfnCB )
    {
      for ( i = 0; i < *(_DWORD *)hdsa; ++i )
      {
        ItemPtr = DSA_GetItemPtr(hdsa, i);
        if ( !((unsigned int (__fastcall *)(PVOID, void *))pfnCB)(ItemPtr, pData) )
          break;
      }
    }
  }
}
