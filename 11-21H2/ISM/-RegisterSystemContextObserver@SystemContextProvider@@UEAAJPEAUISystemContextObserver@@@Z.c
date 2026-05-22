/*
 * XREFs of ?RegisterSystemContextObserver@SystemContextProvider@@UEAAJPEAUISystemContextObserver@@@Z @ 0x180042860
 * Callers:
 *     <none>
 * Callees:
 *     ??$emplace@AEBQEAUISystemContextObserver@@@?$_Hash@V?$_Uset_traits@PEAUISystemContextObserver@@V?$_Uhash_compare@PEAUISystemContextObserver@@U?$hash@PEAUISystemContextObserver@@@std@@U?$equal_to@PEAUISystemContextObserver@@@3@@std@@V?$allocator@PEAUISystemContextObserver@@@3@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@PEAUISystemContextObserver@@@std@@@std@@@std@@_N@1@AEBQEAUISystemContextObserver@@@Z @ 0x1800428F8 (--$emplace@AEBQEAUISystemContextObserver@@@-$_Hash@V-$_Uset_traits@PEAUISystemContextObserver@@V.c)
 *     ??$_Find_last@PEAUISystemContextObserver@@@?$_Hash@V?$_Uset_traits@PEAUISystemContextObserver@@V?$_Uhash_compare@PEAUISystemContextObserver@@U?$hash@PEAUISystemContextObserver@@@std@@U?$equal_to@PEAUISystemContextObserver@@@3@@std@@V?$allocator@PEAUISystemContextObserver@@@3@$0A@@std@@@std@@IEBA?AU?$_Hash_find_last_result@PEAU?$_List_node@PEAUISystemContextObserver@@PEAX@std@@@1@AEBQEAUISystemContextObserver@@_K@Z @ 0x180042A40 (--$_Find_last@PEAUISystemContextObserver@@@-$_Hash@V-$_Uset_traits@PEAUISystemContextObserver@@V.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044BD0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall SystemContextProvider::RegisterSystemContextObserver(
        SystemContextProvider *this,
        struct ISystemContextObserver *a2)
{
  unsigned __int64 v3; // rcx
  __int64 v4; // r9
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v8; // rdx
  int v9[6]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct ISystemContextObserver *v11; // [rsp+48h] [rbp+10h] BYREF

  v11 = a2;
  if ( a2 )
  {
    v3 = 0LL;
    v4 = 0xCBF29CE484222325uLL;
    do
    {
      v5 = *((unsigned __int8 *)&v11 + v3++);
      v4 = 0x100000001B3LL * (v5 ^ v4);
    }
    while ( v3 < 8 );
    v6 = *(_QWORD *)(std::_Hash<std::_Uset_traits<ISystemContextObserver *,std::_Uhash_compare<ISystemContextObserver *,std::hash<ISystemContextObserver *>,std::equal_to<ISystemContextObserver *>>,std::allocator<ISystemContextObserver *>,0>>::_Find_last<ISystemContextObserver *>(
                       (char *)this + 24,
                       v9,
                       &v11,
                       v4)
                   + 8);
    if ( !v6 )
      v6 = *((_QWORD *)this + 4);
    if ( v6 == *((_QWORD *)this + 4) )
    {
      std::_Hash<std::_Uset_traits<ISystemContextObserver *,std::_Uhash_compare<ISystemContextObserver *,std::hash<ISystemContextObserver *>,std::equal_to<ISystemContextObserver *>>,std::allocator<ISystemContextObserver *>,0>>::emplace<ISystemContextObserver * const &>(
        (char *)this + 24,
        v9,
        &v11);
      return 0LL;
    }
    v8 = 57LL;
  }
  else
  {
    v8 = 51LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v8,
    (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\systemcontextprovider\\lib\\systemcontextprovider.cpp",
    (const char *)0x80070057LL,
    v9[0]);
  return 2147942487LL;
}
