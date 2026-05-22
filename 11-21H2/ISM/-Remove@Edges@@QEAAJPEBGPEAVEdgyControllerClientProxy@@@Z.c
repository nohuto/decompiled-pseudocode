/*
 * XREFs of ?Remove@Edges@@QEAAJPEBGPEAVEdgyControllerClientProxy@@@Z @ 0x1801ABE84
 * Callers:
 *     ?OnDisconnected@EdgyControllerClientProxy@@MEAAJXZ @ 0x18014C640 (-OnDisconnected@EdgyControllerClientProxy@@MEAAJXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x18004A930 (__security_check_cookie.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18007BBB0 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?InternalRelease@?$ComPtr@VShellGesturesClientProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x180080384 (-InternalRelease@-$ComPtr@VShellGesturesClientProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180082A64 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x180094448 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ??4?$ComPtr@VShellGesturesClientProxy@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180150AEC (--4-$ComPtr@VShellGesturesClientProxy@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@@std@@@std@@YAXPEAV?$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@QEAV123@AEAV?$allocator@V?$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@@0@@Z @ 0x1801A93F8 (--$_Destroy_range@V-$allocator@V-$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@@std@@@std@.c)
 *     ??$_Move_unchecked@PEAV?$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@PEAV123@@std@@YAPEAV?$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@PEAV123@00@Z @ 0x1801AAA3C (--$_Move_unchecked@PEAV-$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@PEAV123@@std@@YAPEAV.c)
 *     std::remove_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_EdgyControllerClientProxy_________lambda_b79d973a0130aec0526ca960f8d1cf59___ @ 0x1801AABF0 (std--remove_if_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_Microsoft-_ea_1801AABF0.c)
 *     ?FindEdge@Edges@@AEBAHPEBG@Z @ 0x1801AB44C (-FindEdge@Edges@@AEBAHPEBG@Z.c)
 *     ?IsClientPresent@Edge@@QEBA_NW4EdgyClient@@@Z @ 0x1801ABAF8 (-IsClientPresent@Edge@@QEBA_NW4EdgyClient@@@Z.c)
 *     ?erase@?$vector@VEdge@@V?$allocator@VEdge@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@VEdge@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@VEdge@@@std@@@std@@@2@@Z @ 0x1801AC41C (-erase@-$vector@VEdge@@V-$allocator@VEdge@@@std@@@std@@QEAA-AV-$_Vector_iterator@V-$_Vector_val@.c)
 */

__int64 __fastcall Edges::Remove(Edges *this, const unsigned __int16 *a2, struct EdgyControllerClientProxy *a3)
{
  int Edge; // eax
  __int64 v5; // rsi
  __int64 v6; // rdi
  _QWORD *v7; // rcx
  const char *v8; // r9
  _WORD *v9; // rdx
  __int64 *v10; // rdx
  __int64 *v11; // rcx
  __int64 v12; // rbx
  _QWORD *v13; // rbx
  __int64 *v14; // rax
  __int64 *v15; // rbx
  __int64 v17; // [rsp+20h] [rbp-48h] BYREF
  _BYTE v18[32]; // [rsp+28h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  struct EdgyControllerClientProxy *v20; // [rsp+80h] [rbp+18h] BYREF

  v20 = a3;
  Edge = Edges::FindEdge(this, a2);
  if ( Edge < 0 )
    return 2147942487LL;
  v5 = *(_QWORD *)this;
  v6 = (__int64)Edge << 7;
  if ( Edge::IsClientPresent(v6 + *(_QWORD *)this, 2) )
  {
    v10 = (__int64 *)v7[13];
    if ( v10 == (__int64 *)v7[14] )
    {
      if ( v20 )
      {
        v11 = v7 + 5;
        if ( v20 == (struct EdgyControllerClientProxy *)*v11 )
          Microsoft::WRL::ComPtr<ShellGesturesClientProxy>::InternalRelease(v11);
      }
    }
    else if ( v20 && v20 == (struct EdgyControllerClientProxy *)v7[5] )
    {
      Microsoft::WRL::ComPtr<ShellGesturesClientProxy>::operator=(v7 + 5, v10);
      v12 = *(_QWORD *)this;
      std::_Move_unchecked<Microsoft::WRL::ComPtr<EdgyControllerClientProxy> *,Microsoft::WRL::ComPtr<EdgyControllerClientProxy> *>(
        *(_QWORD *)(v6 + v12 + 104) + 8LL,
        *(_QWORD *)(v6 + v12 + 112),
        *(_QWORD *)(v6 + v12 + 104));
      Microsoft::WRL::ComPtr<ShellGesturesClientProxy>::InternalRelease((__int64 *)(*(_QWORD *)(v6 + v12 + 112) - 8LL));
      *(_QWORD *)(v6 + v12 + 112) -= 8LL;
    }
    else
    {
      v13 = (_QWORD *)v7[14];
      v14 = std::remove_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_EdgyControllerClientProxy_________lambda_b79d973a0130aec0526ca960f8d1cf59___(
              &v17,
              v10,
              v13,
              &v20);
      if ( (_QWORD *)*v14 != v13 )
      {
        v15 = (__int64 *)std::_Move_unchecked<Microsoft::WRL::ComPtr<EdgyControllerClientProxy> *,Microsoft::WRL::ComPtr<EdgyControllerClientProxy> *>(
                           (__int64)v13,
                           *(_QWORD *)(v6 + v5 + 112),
                           *v14);
        std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<EdgyControllerClientProxy>>>(
          v15,
          *(__int64 **)(v6 + v5 + 112));
        *(_QWORD *)(v6 + v5 + 112) = v15;
      }
    }
  }
  else
  {
    if ( !v20 || v20 != (struct EdgyControllerClientProxy *)v7[5] )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        406LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\edgylegacy\\processor\\edges.cpp",
        v8);
    v9 = v7 + 1;
    if ( v7[4] >= 8uLL )
      v9 = *(_WORD **)v9;
    std::wstring::wstring((__int64)v18, v9);
    std::vector<Edge>::erase(this, &v17, v6 + *(_QWORD *)this);
    std::wstring::_Tidy_deallocate((__int64)v18);
  }
  return 0LL;
}
