/*
 * XREFs of ?Remove@Edges@@QEAAJPEBGPEAVEdgyControllerClientProxy@@@Z @ 0x1801CA27C
 * Callers:
 *     ?OnDisconnected@EdgyControllerClientProxy@@MEAAJXZ @ 0x18016AE90 (-OnDisconnected@EdgyControllerClientProxy@@MEAAJXZ.c)
 * Callees:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x180047EFC (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     __security_check_cookie @ 0x180056730 (__security_check_cookie.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800581C4 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?InternalRelease@?$ComPtr@VShellGesturesClientProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x1800972EC (-InternalRelease@-$ComPtr@VShellGesturesClientProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180099AF0 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ??4?$ComPtr@VShellGesturesClientProxy@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18016EBD4 (--4-$ComPtr@VShellGesturesClientProxy@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@@std@@@std@@YAXPEAV?$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@QEAV123@AEAV?$allocator@V?$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@@0@@Z @ 0x1801C77B4 (--$_Destroy_range@V-$allocator@V-$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@@std@@@std@.c)
 *     ??$_Move_unchecked@PEAV?$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@PEAV123@@std@@YAPEAV?$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@PEAV123@00@Z @ 0x1801C8E10 (--$_Move_unchecked@PEAV-$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@PEAV123@@std@@YAPEAV.c)
 *     std::remove_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_EdgyControllerClientProxy_________lambda_b79d973a0130aec0526ca960f8d1cf59___ @ 0x1801C904C (std--remove_if_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_Microsoft-_ea_1801C904C.c)
 *     ?FindEdge@Edges@@AEBAHPEBG@Z @ 0x1801C9824 (-FindEdge@Edges@@AEBAHPEBG@Z.c)
 *     ?IsClientPresent@Edge@@QEBA_NW4EdgyClient@@@Z @ 0x1801C9EF0 (-IsClientPresent@Edge@@QEBA_NW4EdgyClient@@@Z.c)
 *     ?erase@?$vector@VEdge@@V?$allocator@VEdge@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@VEdge@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@VEdge@@@std@@@std@@@2@@Z @ 0x1801CA80C (-erase@-$vector@VEdge@@V-$allocator@VEdge@@@std@@@std@@QEAA-AV-$_Vector_iterator@V-$_Vector_val@.c)
 */

__int64 __fastcall Edges::Remove(Edges *this, const unsigned __int16 *a2, struct EdgyControllerClientProxy *a3)
{
  int Edge; // eax
  __int64 v5; // rsi
  _QWORD *v6; // rdi
  const char *v7; // r9
  _WORD *v8; // rdx
  __int64 *v9; // rdx
  __int64 v10; // rbx
  _QWORD *v11; // rbx
  __int64 *v12; // rax
  __int64 *v13; // rbx
  __int64 v15; // [rsp+20h] [rbp-48h] BYREF
  _QWORD v16[4]; // [rsp+28h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  struct EdgyControllerClientProxy *v18; // [rsp+80h] [rbp+18h] BYREF

  v18 = a3;
  Edge = Edges::FindEdge(this, a2);
  if ( Edge < 0 )
    return 2147942487LL;
  v5 = (__int64)Edge << 7;
  v6 = (_QWORD *)(v5 + *(_QWORD *)this);
  if ( Edge::IsClientPresent((__int64)v6, 2) )
  {
    v9 = (__int64 *)v6[13];
    if ( v9 == (__int64 *)v6[14] )
    {
      if ( v18 && v18 == (struct EdgyControllerClientProxy *)v6[5] )
        Microsoft::WRL::ComPtr<ShellGesturesClientProxy>::InternalRelease(v6 + 5);
    }
    else if ( v18 && v18 == (struct EdgyControllerClientProxy *)v6[5] )
    {
      Microsoft::WRL::ComPtr<ShellGesturesClientProxy>::operator=(v6 + 5, v9);
      v10 = *(_QWORD *)this;
      std::_Move_unchecked<Microsoft::WRL::ComPtr<EdgyControllerClientProxy> *,Microsoft::WRL::ComPtr<EdgyControllerClientProxy> *>(
        *(_QWORD *)(v5 + v10 + 104) + 8LL,
        *(_QWORD *)(v5 + v10 + 112),
        *(_QWORD *)(v5 + v10 + 104));
      Microsoft::WRL::ComPtr<ShellGesturesClientProxy>::InternalRelease((__int64 *)(*(_QWORD *)(v5 + v10 + 112) - 8LL));
      *(_QWORD *)(v5 + v10 + 112) -= 8LL;
    }
    else
    {
      v11 = (_QWORD *)v6[14];
      v12 = std::remove_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_EdgyControllerClientProxy_________lambda_b79d973a0130aec0526ca960f8d1cf59___(
              &v15,
              v9,
              v11,
              &v18);
      if ( (_QWORD *)*v12 != v11 )
      {
        v13 = (__int64 *)std::_Move_unchecked<Microsoft::WRL::ComPtr<EdgyControllerClientProxy> *,Microsoft::WRL::ComPtr<EdgyControllerClientProxy> *>(
                           (__int64)v11,
                           v6[14],
                           *v12);
        std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<EdgyControllerClientProxy>>>(v13, (__int64 *)v6[14]);
        v6[14] = v13;
      }
    }
  }
  else
  {
    if ( !v18 || v18 != (struct EdgyControllerClientProxy *)v6[5] )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x196,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\edgylegacy\\processor\\edges.cpp",
        v7);
    v8 = v6 + 1;
    if ( v6[4] >= 8uLL )
      v8 = *(_WORD **)v8;
    std::wstring::wstring(v16, v8);
    std::vector<Edge>::erase(this, &v15, v5 + *(_QWORD *)this);
    std::wstring::_Tidy_deallocate((__int64)v16);
  }
  return 0LL;
}
