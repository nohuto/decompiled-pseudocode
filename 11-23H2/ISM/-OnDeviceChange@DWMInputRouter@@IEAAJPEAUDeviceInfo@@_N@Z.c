/*
 * XREFs of ?OnDeviceChange@DWMInputRouter@@IEAAJPEAUDeviceInfo@@_N@Z @ 0x18004CF0C
 * Callers:
 *     ?OnDeviceAttach@DWMInputRouter@@UEAAJPEAUDeviceInfo@@@Z @ 0x18004CE80 (-OnDeviceAttach@DWMInputRouter@@UEAAJPEAUDeviceInfo@@@Z.c)
 *     ?OnDeviceRemoval@DWMInputRouter@@UEAAJPEAUDeviceInfo@@@Z @ 0x1801B99F0 (-OnDeviceRemoval@DWMInputRouter@@UEAAJPEAUDeviceInfo@@@Z.c)
 *     ?OnDeviceUpdate@DWMInputRouter@@UEAAJPEAUDeviceInfo@@@Z @ 0x1801B9A60 (-OnDeviceUpdate@DWMInputRouter@@UEAAJPEAUDeviceInfo@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002BA4 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?RemoveTarget@DWMInputRouter@@AEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUtagMsgRoutingInfo@@PEAUIInputTarget@@@std@@@std@@@std@@@std@@V23@@Z @ 0x1800154A0 (-RemoveTarget@DWMInputRouter@@AEAA-AV-$_List_iterator@V-$_List_val@U-$_List_simple_types@U-$pair.c)
 *     ??$_Find_last@K@?$_Hash@V?$_Umap_traits@KPEAUIRawInputProvider@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKPEAUIRawInputProvider@@@std@@@3@$0A@@std@@@std@@IEBA?AU?$_Hash_find_last_result@PEAU?$_List_node@U?$pair@$$CBKPEAUIRawInputProvider@@@std@@PEAX@std@@@1@AEBK_K@Z @ 0x18001A404 (--$_Find_last@K@-$_Hash@V-$_Umap_traits@KPEAUIRawInputProvider@@V-$_Uhash_compare@KU-$hash@K@std.c)
 *     ??$_Try_emplace@AEBK$$V@?$_Hash@V?$_Umap_traits@KPEAUDeviceInfo@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKPEAUDeviceInfo@@@std@@@3@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@$$CBKPEAUDeviceInfo@@@std@@PEAX@std@@_N@1@AEBK@Z @ 0x18004CCD4 (--$_Try_emplace@AEBK$$V@-$_Hash@V-$_Umap_traits@KPEAUDeviceInfo@@V-$_Uhash_compare@KU-$hash@K@st.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180058998 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 *     ?erase@?$_Hash@V?$_Umap_traits@KPEAUIRawInputProvider@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKPEAUIRawInputProvider@@@std@@@3@$0A@@std@@@std@@QEAA_KAEBK@Z @ 0x1800CC67C (-erase@-$_Hash@V-$_Umap_traits@KPEAUIRawInputProvider@@V-$_Uhash_compare@KU-$hash@K@std@@U-$equa.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall DWMInputRouter::OnDeviceChange(DWMInputRouter *this, struct DeviceInfo *a2, char a3)
{
  char v6; // r15
  float *v7; // rbx
  unsigned __int64 v8; // rcx
  __int64 v9; // r9
  __int64 v10; // rcx
  _DWORD *v11; // r8
  _QWORD *v12; // rbx
  __int64 (__fastcall ***v14)(_QWORD, GUID *, _QWORD **); // rsi
  __int64 (__fastcall *v15)(_QWORD, GUID *, _QWORD **); // rdi
  int v16; // eax
  __int64 (__fastcall **v17)(_QWORD, _QWORD); // rax
  int v18; // eax
  int v19[14]; // [rsp+20h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  _QWORD *v21; // [rsp+78h] [rbp+20h] BYREF

  v6 = 0;
  v7 = (float *)((char *)this + 192);
  if ( a3 )
  {
    v8 = 0LL;
    v9 = 0xCBF29CE484222325uLL;
    do
      v9 = 0x100000001B3LL * (*((unsigned __int8 *)a2 + v8++) ^ (unsigned __int64)v9);
    while ( v8 < 4 );
    v10 = std::_Hash<std::_Umap_traits<unsigned long,IRawInputProvider *,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,IRawInputProvider *>>,0>>::_Find_last<unsigned long>(
            v7,
            v19,
            a2,
            v9)[1];
    if ( !v10 )
      v10 = *((_QWORD *)v7 + 1);
    if ( v10 == *((_QWORD *)this + 25) )
      *(_QWORD *)(*(_QWORD *)std::_Hash<std::_Umap_traits<unsigned long,DeviceInfo *,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,DeviceInfo *>>,0>>::_Try_emplace<unsigned long const &,>(
                               v7,
                               (__int64)v19,
                               v11)
                + 24LL) = a2;
    else
      v6 = 1;
  }
  else if ( !std::_Hash<std::_Umap_traits<unsigned long,IRawInputProvider *,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,IRawInputProvider *>>,0>>::erase((char *)this + 192) )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x448,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
      (const char *)0x80004005LL,
      v19[0]);
  }
  v12 = (_QWORD *)**((_QWORD **)this + 12);
  while ( v12 != *((_QWORD **)this + 12) )
  {
    v14 = (__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD **))v12[7];
    v21 = 0LL;
    v15 = **v14;
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)&v21);
    v16 = v15(v14, &GUID_ce017166_b885_4259_a1c9_31032455b8b4, &v21);
    if ( v16 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x458,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
        (const char *)(unsigned int)v16,
        v19[0]);
    if ( !v21 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x45C,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
        (const char *)0x8000FFFFLL,
        v19[0]);
    v17 = (__int64 (__fastcall **)(_QWORD, _QWORD))*v21;
    if ( a3 )
    {
      if ( v6 )
        v18 = ((__int64 (__fastcall **)(_QWORD *, struct DeviceInfo *))v17)[4](v21, a2);
      else
        v18 = ((__int64 (__fastcall **)(_QWORD *, struct DeviceInfo *))v17)[3](v21, a2);
    }
    else
    {
      v18 = ((__int64 (__fastcall **)(_QWORD *, struct DeviceInfo *))v17)[5](v21, a2);
    }
    if ( v18 >= 0 )
      v12 = (_QWORD *)*v12;
    else
      v12 = (_QWORD *)*DWMInputRouter::RemoveTarget(this, v19, v12);
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)&v21);
  }
  return 0LL;
}
