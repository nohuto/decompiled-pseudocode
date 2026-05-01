/*
 * XREFs of ??1KBViewInfo@@QEAA@XZ @ 0x18045AE1C
 * Callers:
 *     ?_Destroy@?$_Ref_count_obj2@UKBViewInfo@@@std@@EEAAXXZ @ 0x18046A520 (-_Destroy@-$_Ref_count_obj2@UKBViewInfo@@@std@@EEAAXXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x180040860 (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18013E4BC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?_Tidy@?$vector@UCRect@Geometry@@V?$allocator@UCRect@Geometry@@@std@@@std@@AEAAXXZ @ 0x18022B92C (-_Tidy@-$vector@UCRect@Geometry@@V-$allocator@UCRect@Geometry@@@std@@@std@@AEAAXXZ.c)
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CBI_N@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBI_N@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBI_N@std@@PEAX@std@@@1@PEAU01@@Z @ 0x180459F40 (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@$$CBI_N@std@@PEAX@std@@@std@@@-$_List_node@.c)
 */

void __fastcall KBViewInfo::~KBViewInfo(KBViewInfo *this)
{
  __int64 v2; // rcx

  std::vector<Geometry::CRect>::_Tidy((__int64)this + 184);
  WindowsDeleteString(*((HSTRING *)this + 14));
  *((_QWORD *)this + 14) = 0LL;
  std::_Deallocate<16,0>(*((void **)this + 8), (*((_QWORD *)this + 9) - *((_QWORD *)this + 8)) & 0xFFFFFFFFFFFFFFF8uLL);
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  std::_List_node<std::pair<unsigned int const,bool>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<unsigned int const,bool>,void *>>>(
    v2,
    *((_QWORD ***)this + 6));
  std::_Deallocate<16,0>(*((void **)this + 6), 0x18uLL);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 2);
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)this + 1);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this);
}
