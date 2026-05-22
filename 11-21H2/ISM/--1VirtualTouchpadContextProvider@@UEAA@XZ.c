/*
 * XREFs of ??1VirtualTouchpadContextProvider@@UEAA@XZ @ 0x18019DB10
 * Callers:
 *     ??_GVirtualTouchpadContextProvider@@UEAAPEAXI@Z @ 0x18019DB48 (--_GVirtualTouchpadContextProvider@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?_Tidy@?$vector@UVirtualTouchpadRect@@V?$allocator@UVirtualTouchpadRect@@@std@@@std@@AEAAXXZ @ 0x1800FA354 (-_Tidy@-$vector@UVirtualTouchpadRect@@V-$allocator@UVirtualTouchpadRect@@@std@@@std@@AEAAXXZ.c)
 */

void __fastcall VirtualTouchpadContextProvider::~VirtualTouchpadContextProvider(VirtualTouchpadContextProvider *this)
{
  std::vector<VirtualTouchpadRect>::_Tidy((__int64)this + 128);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 88));
  SystemContextProvider::~SystemContextProvider(this);
}
