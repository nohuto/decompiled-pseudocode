/*
 * XREFs of ?OnDeviceAttach@DWMInputRouter@@UEAAJPEAUDeviceInfo@@@Z @ 0x180041D30
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002474 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$_Try_emplace@AEBK$$V@?$_Hash@V?$_Umap_traits@KPEAUDeviceInfo@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKPEAUDeviceInfo@@@std@@@3@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@$$CBKPEAUDeviceInfo@@@std@@PEAX@std@@_N@1@AEBK@Z @ 0x1800419DC (--$_Try_emplace@AEBK$$V@-$_Hash@V-$_Umap_traits@KPEAUDeviceInfo@@V-$_Uhash_compare@KU-$hash@K@st.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C7A4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?RemoveTarget@DWMInputRouter@@AEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUtagMsgRoutingInfo@@PEAUIInputTarget@@@std@@@std@@@std@@@std@@V23@@Z @ 0x18019B61C (-RemoveTarget@DWMInputRouter@@AEAA-AV-$_List_iterator@V-$_List_val@U-$_List_simple_types@U-$pair.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall DWMInputRouter::OnDeviceAttach(DWMInputRouter *this, struct DeviceInfo *a2)
{
  char v4; // r15
  _QWORD *v5; // r9
  __int64 v6; // rdx
  unsigned __int64 i; // rcx
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rax
  _QWORD *v11; // rbx
  __int64 v12; // rbx
  __int64 v13; // rdi
  __int64 v14; // rcx
  __int64 (__fastcall ***v16)(_QWORD, GUID *, struct DeviceInfo **); // rsi
  __int64 (__fastcall *v17)(_QWORD, GUID *, struct DeviceInfo **); // rdi
  int v18; // eax
  __int64 v19; // rax
  int v20; // eax
  int v21[14]; // [rsp+20h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  struct DeviceInfo *v23; // [rsp+70h] [rbp+18h] BYREF
  char v24; // [rsp+78h] [rbp+20h] BYREF

  v4 = 0;
  v5 = (_QWORD *)((char *)this + 192);
  v6 = 0xCBF29CE484222325uLL;
  for ( i = 0LL; i < 4; ++i )
    v6 = 0x100000001B3LL * (*((unsigned __int8 *)a2 + i) ^ (unsigned __int64)v6);
  v8 = 2 * (v6 & v5[6]);
  v9 = v5[3];
  v10 = *(_QWORD *)(v9 + 8 * v8 + 8);
  if ( v10 == v5[1] )
    goto LABEL_4;
  while ( *(_DWORD *)a2 != *(_DWORD *)(v10 + 16) )
  {
    if ( v10 == *(_QWORD *)(v9 + 8 * v8) )
      goto LABEL_4;
    v10 = *(_QWORD *)(v10 + 8);
  }
  if ( !v10 )
LABEL_4:
    v10 = v5[1];
  if ( v10 == *((_QWORD *)this + 25) )
    *(_QWORD *)(*(_QWORD *)std::_Hash<std::_Umap_traits<unsigned long,DeviceInfo *,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,DeviceInfo *>>,0>>::_Try_emplace<unsigned long const &,>(
                             (__int64)v5,
                             (__int64)v21,
                             a2)
              + 24LL) = a2;
  else
    v4 = 1;
  v11 = (_QWORD *)**((_QWORD **)this + 12);
  while ( v11 != *((_QWORD **)this + 12) )
  {
    v16 = (__int64 (__fastcall ***)(_QWORD, GUID *, struct DeviceInfo **))v11[7];
    v23 = 0LL;
    v17 = **v16;
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)&v23);
    v18 = v17(v16, &GUID_ce017166_b885_4259_a1c9_31032455b8b4, &v23);
    if ( v18 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x438,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
        (const char *)(unsigned int)v18,
        v21[0]);
    if ( !v23 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x43C,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
        (const char *)0x8000FFFFLL,
        v21[0]);
    v19 = *(_QWORD *)v23;
    if ( v4 )
      v20 = (*(__int64 (__fastcall **)(struct DeviceInfo *, struct DeviceInfo *))(v19 + 32))(v23, a2);
    else
      v20 = (*(__int64 (__fastcall **)(struct DeviceInfo *, struct DeviceInfo *))(v19 + 24))(v23, a2);
    if ( v20 >= 0 )
      v11 = (_QWORD *)*v11;
    else
      v11 = *(_QWORD **)DWMInputRouter::RemoveTarget(this, &v24, v11);
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)&v23);
  }
  v12 = *((_QWORD *)this + 82);
  v13 = *((_QWORD *)this + 83);
  while ( v12 != v13 )
  {
    v23 = a2;
    v14 = *(_QWORD *)(*(_QWORD *)v12 + 56LL);
    if ( !v14 )
    {
      std::_Xbad_function_call();
      __debugbreak();
      JUMPOUT(0x18007686DLL);
    }
    (*(void (__fastcall **)(__int64, struct DeviceInfo **))(*(_QWORD *)v14 + 16LL))(v14, &v23);
    v12 += 8LL;
  }
  return 0LL;
}
