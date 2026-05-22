/*
 * XREFs of ?OnDeviceChange@DWMInputRouter@@IEAAJPEAUDeviceInfo@@_N@Z @ 0x18019AFD0
 * Callers:
 *     ?OnDeviceRemoval@DWMInputRouter@@UEAAJPEAUDeviceInfo@@@Z @ 0x18019B1B0 (-OnDeviceRemoval@DWMInputRouter@@UEAAJPEAUDeviceInfo@@@Z.c)
 *     ?OnDeviceUpdate@DWMInputRouter@@UEAAJPEAUDeviceInfo@@@Z @ 0x18019B220 (-OnDeviceUpdate@DWMInputRouter@@UEAAJPEAUDeviceInfo@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002474 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$_Try_emplace@AEBK$$V@?$_Hash@V?$_Umap_traits@KPEAUDeviceInfo@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKPEAUDeviceInfo@@@std@@@3@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@$$CBKPEAUDeviceInfo@@@std@@PEAX@std@@_N@1@AEBK@Z @ 0x1800419DC (--$_Try_emplace@AEBK$$V@-$_Hash@V-$_Umap_traits@KPEAUDeviceInfo@@V-$_Uhash_compare@KU-$hash@K@st.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C7A4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?erase@?$_Hash@V?$_Umap_traits@KUtagPOINT@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUtagPOINT@@@std@@@3@$0A@@std@@@std@@QEAA_KAEBK@Z @ 0x1800B367C (-erase@-$_Hash@V-$_Umap_traits@KUtagPOINT@@V-$_Uhash_compare@KU-$hash@K@std@@U-$equal_to@K@2@@st.c)
 *     ??$find@X@?$_Hash@V?$_Umap_traits@KUPointerCache@EdgyProcessor@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUPointerCache@EdgyProcessor@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUPointerCache@EdgyProcessor@@@std@@@std@@@std@@@1@AEBK@Z @ 0x1800BE564 (--$find@X@-$_Hash@V-$_Umap_traits@KUPointerCache@EdgyProcessor@@V-$_Uhash_compare@KU-$hash@K@std.c)
 *     ?RemoveTarget@DWMInputRouter@@AEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUtagMsgRoutingInfo@@PEAUIInputTarget@@@std@@@std@@@std@@@std@@V23@@Z @ 0x18019B61C (-RemoveTarget@DWMInputRouter@@AEAA-AV-$_List_iterator@V-$_List_val@U-$_List_simple_types@U-$pair.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall DWMInputRouter::OnDeviceChange(DWMInputRouter *this, struct DeviceInfo *a2, char a3)
{
  char v6; // r15
  char *v7; // rbx
  _QWORD *v8; // rcx
  _QWORD *v9; // rbx
  __int64 (__fastcall ***v10)(_QWORD, GUID *, _QWORD **); // rsi
  __int64 (__fastcall *v11)(_QWORD, GUID *, _QWORD **); // rdi
  int v12; // eax
  __int64 (__fastcall **v13)(_QWORD, _QWORD); // rax
  int v14; // eax
  int v16[14]; // [rsp+20h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  _QWORD *v18; // [rsp+78h] [rbp+20h] BYREF

  v6 = 0;
  v7 = (char *)this + 192;
  v8 = (_QWORD *)((char *)this + 192);
  if ( a3 )
  {
    if ( *std::_Hash<std::_Umap_traits<unsigned long,EdgyProcessor::PointerCache,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,EdgyProcessor::PointerCache>>,0>>::find<void>(
            v8,
            &v18,
            (const unsigned __int8 *)a2) == *((_QWORD *)this + 25) )
      *(_QWORD *)(*(_QWORD *)std::_Hash<std::_Umap_traits<unsigned long,DeviceInfo *,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,DeviceInfo *>>,0>>::_Try_emplace<unsigned long const &,>(
                               (__int64)v7,
                               (__int64)v16,
                               a2)
                + 24LL) = a2;
    else
      v6 = 1;
  }
  else if ( !std::_Hash<std::_Umap_traits<unsigned long,tagPOINT,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,tagPOINT>>,0>>::erase(
               v8,
               (const unsigned __int8 *)a2) )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x428,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
      (const char *)0x80004005LL,
      v16[0]);
  }
  v9 = (_QWORD *)**((_QWORD **)this + 12);
  while ( v9 != *((_QWORD **)this + 12) )
  {
    v10 = (__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD **))v9[7];
    v18 = 0LL;
    v11 = **v10;
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)&v18);
    v12 = v11(v10, &GUID_ce017166_b885_4259_a1c9_31032455b8b4, &v18);
    if ( v12 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x438,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
        (const char *)(unsigned int)v12,
        v16[0]);
    if ( !v18 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x43C,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
        (const char *)0x8000FFFFLL,
        v16[0]);
    v13 = (__int64 (__fastcall **)(_QWORD, _QWORD))*v18;
    if ( a3 )
    {
      if ( v6 )
        v14 = ((__int64 (__fastcall **)(_QWORD *, struct DeviceInfo *))v13)[4](v18, a2);
      else
        v14 = ((__int64 (__fastcall **)(_QWORD *, struct DeviceInfo *))v13)[3](v18, a2);
    }
    else
    {
      v14 = ((__int64 (__fastcall **)(_QWORD *, struct DeviceInfo *))v13)[5](v18, a2);
    }
    if ( v14 >= 0 )
      v9 = (_QWORD *)*v9;
    else
      v9 = *(_QWORD **)DWMInputRouter::RemoveTarget(this, v16, v9);
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)&v18);
  }
  return 0LL;
}
