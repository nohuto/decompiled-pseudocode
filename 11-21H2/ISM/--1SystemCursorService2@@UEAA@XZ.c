/*
 * XREFs of ??1SystemCursorService2@@UEAA@XZ @ 0x1800EB7D4
 * Callers:
 *     ??_ESystemCursorService2@@UEAAPEAXI@Z @ 0x1800EBAE4 (--_ESystemCursorService2@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002474 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000E6AC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??1?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18002BBF0 (--1-$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x18004ABE0 (--3@YAXPEAX_K@Z.c)
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CBKUtagPOINT@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBKUtagPOINT@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBKUtagPOINT@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x18008069C (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@$$CBKUtagPOINT@@@std@@PEAX@std@@@std@@@-$_L.c)
 *     ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x1800A88B8 (-_Decwref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CBIV?$shared_ptr@VCustomCursorApplication2@@@std@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBIV?$shared_ptr@VCustomCursorApplication2@@@std@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBIV?$shared_ptr@VCustomCursorApplication2@@@std@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x1800BE0D4 (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@$$CBIV-$shared_ptr@VCustomCursorApplication.c)
 */

void __fastcall SystemCursorService2::~SystemCursorService2(SystemCursorService2 *this)
{
  std::_Ref_count_base *v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx
  void *v6; // rdi
  std::_Ref_count_base *v7; // rcx

  v2 = (std::_Ref_count_base *)*((_QWORD *)this + 33);
  if ( v2 )
    std::_Ref_count_base::_Decwref(v2);
  std::_Deallocate<16,0>(
    *((void **)this + 26),
    (*((_QWORD *)this + 27) - *((_QWORD *)this + 26)) & 0xFFFFFFFFFFFFFFF8uLL);
  *((_QWORD *)this + 26) = 0LL;
  *((_QWORD *)this + 27) = 0LL;
  *((_QWORD *)this + 28) = 0LL;
  std::_List_node<std::pair<unsigned long const,tagPOINT>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<unsigned long const,tagPOINT>,void *>>>(
    v3,
    *((_QWORD ***)this + 24));
  std::_Deallocate<16,0>(*((void **)this + 24), 0x20uLL);
  std::_Deallocate<16,0>(
    *((void **)this + 18),
    (*((_QWORD *)this + 19) - *((_QWORD *)this + 18)) & 0xFFFFFFFFFFFFFFF8uLL);
  *((_QWORD *)this + 18) = 0LL;
  *((_QWORD *)this + 19) = 0LL;
  *((_QWORD *)this + 20) = 0LL;
  std::_List_node<std::pair<unsigned int const,std::shared_ptr<CustomCursorApplication2>>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<unsigned int const,std::shared_ptr<CustomCursorApplication2>>,void *>>>(
    v4,
    *((_QWORD ***)this + 16));
  std::_Deallocate<16,0>(*((void **)this + 16), 0x28uLL);
  std::_Deallocate<16,0>(
    *((void **)this + 10),
    (*((_QWORD *)this + 11) - *((_QWORD *)this + 10)) & 0xFFFFFFFFFFFFFFF8uLL);
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  std::_List_node<std::pair<unsigned int const,std::shared_ptr<CustomCursorApplication2>>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<unsigned int const,std::shared_ptr<CustomCursorApplication2>>,void *>>>(
    v5,
    *((_QWORD ***)this + 8));
  std::_Deallocate<16,0>(*((void **)this + 8), 0x28uLL);
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)this + 6);
  *((_QWORD *)this + 1) = &SystemCursorServiceBase::`vftable';
  v6 = (void *)*((_QWORD *)this + 3);
  if ( v6 )
  {
    wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::~com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>(*((__int64 **)this + 3));
    operator delete(v6);
  }
  v7 = (std::_Ref_count_base *)*((_QWORD *)this + 5);
  if ( v7 )
    std::_Ref_count_base::_Decwref(v7);
}
