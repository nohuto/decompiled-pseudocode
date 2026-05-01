/*
 * XREFs of ??1KBViewInfo@@QEAA@XZ @ 0x18050C484
 * Callers:
 *     ?_Destroy@?$_Ref_count_obj2@UKBViewInfo@@@std@@EEAAXXZ @ 0x18051C660 (-_Destroy@-$_Ref_count_obj2@UKBViewInfo@@@std@@EEAAXXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x18006BCD8 (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180168F3C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CBW4CloudPCState@Shell@Internal@Windows@winrt@@I@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBW4CloudPCState@Shell@Internal@Windows@winrt@@I@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBW4CloudPCState@Shell@Internal@Windows@winrt@@I@std@@PEAX@std@@@1@PEAU01@@Z @ 0x18022058C (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@$$CBW4CloudPCState@Shell@Internal@Windows@w.c)
 *     ?_Tidy@?$vector@UCRect@Geometry@@V?$allocator@UCRect@Geometry@@@std@@@std@@AEAAXXZ @ 0x1802D2954 (-_Tidy@-$vector@UCRect@Geometry@@V-$allocator@UCRect@Geometry@@@std@@@std@@AEAAXXZ.c)
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
  std::_List_node<std::pair<enum winrt::Windows::Internal::Shell::CloudPCState const,unsigned int>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<enum winrt::Windows::Internal::Shell::CloudPCState const,unsigned int>,void *>>>(
    v2,
    *((_QWORD ***)this + 6));
  std::_Deallocate<16,0>(*((void **)this + 6), 0x18uLL);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 2);
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)this + 1);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this);
}
