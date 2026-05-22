/*
 * XREFs of ?AddBuffer@CPresentationManager@@QEAA_NPEAUIUnknown@@@Z @ 0x1800A733C
 * Callers:
 *     ?Initialize@CPresentationBuffer@@IEAAJPEAUIUnknown@@@Z @ 0x1801AF3A8 (-Initialize@CPresentationBuffer@@IEAAJPEAUIUnknown@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D10Multithread@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180098554 (--1-$com_ptr_t@UID3D10Multithread@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?reset@?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18009938C (-reset@-$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??$_Emplace@PEAUIUnknown@@@?$_Tree@V?$_Tset_traits@PEAUIUnknown@@U?$less@PEAUIUnknown@@@std@@V?$allocator@PEAUIUnknown@@@3@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_Tree_node@PEAUIUnknown@@PEAX@std@@_N@1@$$QEAPEAUIUnknown@@@Z @ 0x1800A701C (--$_Emplace@PEAUIUnknown@@@-$_Tree@V-$_Tset_traits@PEAUIUnknown@@U-$less@PEAUIUnknown@@@std@@V-$.c)
 *     ??$_Find_lower_bound@PEAUIUnknown@@@?$_Tree@V?$_Tset_traits@PEAUIUnknown@@U?$less@PEAUIUnknown@@@std@@V?$allocator@PEAUIUnknown@@@3@$0A@@std@@@std@@IEBA?AU?$_Tree_find_result@PEAU?$_Tree_node@PEAUIUnknown@@PEAX@std@@@1@AEBQEAUIUnknown@@@Z @ 0x1800A7244 (--$_Find_lower_bound@PEAUIUnknown@@@-$_Tree@V-$_Tset_traits@PEAUIUnknown@@U-$less@PEAUIUnknown@@.c)
 *     ??$QueryInterface@UIUnknown@@@IUnknown@@QEAAJPEAPEAU0@@Z @ 0x1800E94E4 (--$QueryInterface@UIUnknown@@@IUnknown@@QEAAJPEAPEAU0@@Z.c)
 */

char __fastcall CPresentationManager::AddBuffer(CPresentationManager *this, struct IUnknown *a2)
{
  char v3; // si
  unsigned __int64 v5; // r10
  _BYTE v7[16]; // [rsp+20h] [rbp-20h] BYREF
  __int64 v8; // [rsp+30h] [rbp-10h]
  unsigned __int64 v9; // [rsp+60h] [rbp+20h] BYREF
  unsigned __int64 v10; // [rsp+70h] [rbp+30h] BYREF

  v3 = 0;
  v9 = 0LL;
  wil::com_ptr_t<IUnknown,wil::err_returncode_policy>::reset((__int64 *)&v9);
  IUnknown::QueryInterface<IUnknown>(a2, &v9);
  v10 = v9;
  std::_Tree<std::_Tset_traits<IUnknown *,std::less<IUnknown *>,std::allocator<IUnknown *>,0>>::_Find_lower_bound<IUnknown *>(
    (__int64 *)this + 11,
    (__int64)v7,
    &v10);
  if ( *(_BYTE *)(v8 + 25) || v5 < *(_QWORD *)(v8 + 32) || v8 == *((_QWORD *)this + 11) )
  {
    v10 = v5;
    std::_Tree<std::_Tset_traits<IUnknown *,std::less<IUnknown *>,std::allocator<IUnknown *>,0>>::_Emplace<IUnknown *>(
      (__int64 *)this + 11,
      (__int64)v7);
    v3 = 1;
  }
  wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>((__int64 *)&v9);
  return v3;
}
