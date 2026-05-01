/*
 * XREFs of ??1?$CCoTaskMemPtr@E@@QEAA@XZ @ 0x1803B71E0
 * Callers:
 *     _VirtualDesktopPersistence::RestoreVirtualDesktopState_::_1_::dtor$2 @ 0x18021F7AB (_VirtualDesktopPersistence--RestoreVirtualDesktopState_--_1_--dtor$2.c)
 *     _VirtualDesktopPersistence::RestoreVirtualDesktopState_::_1_::dtor$4 @ 0x18021F7CF (_VirtualDesktopPersistence--RestoreVirtualDesktopState_--_1_--dtor$4.c)
 * Callees:
 *     <none>
 */

void __fastcall CCoTaskMemPtr<unsigned char>::~CCoTaskMemPtr<unsigned char>(void **a1)
{
  void *v2; // rcx

  v2 = *a1;
  *a1 = 0LL;
  CoTaskMemFree(v2);
}
