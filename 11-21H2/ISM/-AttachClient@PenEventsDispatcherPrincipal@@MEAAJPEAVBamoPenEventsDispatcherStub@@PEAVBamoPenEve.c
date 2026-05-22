/*
 * XREFs of ?AttachClient@PenEventsDispatcherPrincipal@@MEAAJPEAVBamoPenEventsDispatcherStub@@PEAVBamoPenEventsClientProxy@@@Z @ 0x18003A120
 * Callers:
 *     <none>
 * Callees:
 *     ??$emplace@AEBI@?$_Hash@V?$_Uset_traits@IV?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@I@2@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@I@std@@@std@@@std@@_N@1@AEBI@Z @ 0x18003A2C0 (--$emplace@AEBI@-$_Hash@V-$_Uset_traits@IV-$_Uhash_compare@IU-$hash@I@std@@U-$equal_to@I@2@@std@.c)
 *     ??$_Find_last@I@?$_Hash@V?$_Uset_traits@IV?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@I@2@$0A@@std@@@std@@IEBA?AU?$_Hash_find_last_result@PEAU?$_List_node@IPEAX@std@@@1@AEBI_K@Z @ 0x18003A408 (--$_Find_last@I@-$_Hash@V-$_Uset_traits@IV-$_Uhash_compare@IU-$hash@I@std@@U-$equal_to@I@2@@std@.c)
 *     ??$emplace@AEAIAEAV?$com_ptr_t@VPenEventsClientCustomProxy@@Uerr_exception_policy@wil@@@wil@@@?$_Hash@V?$_Umap_traits@IV?$com_ptr_t@VPenEventsClientCustomProxy@@Uerr_exception_policy@wil@@@wil@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIV?$com_ptr_t@VPenEventsClientCustomProxy@@Uerr_exception_policy@wil@@@wil@@@std@@@4@$00@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIV?$com_ptr_t@VPenEventsClientCustomProxy@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@std@@@1@AEAIAEAV?$com_ptr_t@VPenEventsClientCustomProxy@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x18003A43C (--$emplace@AEAIAEAV-$com_ptr_t@VPenEventsClientCustomProxy@@Uerr_exception_policy@wil@@@wil@@@-$.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007FD5C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall PenEventsDispatcherPrincipal::AttachClient(
        PenEventsDispatcherPrincipal *this,
        struct BamoPenEventsDispatcherStub *a2,
        struct BamoPenEventsClientProxy *a3)
{
  int v5; // eax
  __int64 v6; // rdx
  int v7; // eax
  struct BamoPenEventsClientProxy *v8; // rbx
  unsigned __int64 v9; // rdx
  __int64 v10; // r9
  int v12[10]; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  int v14; // [rsp+50h] [rbp+8h] BYREF
  struct BamoPenEventsClientProxy *v15; // [rsp+60h] [rbp+18h] BYREF
  char v16; // [rsp+68h] [rbp+20h] BYREF

  v15 = a3;
  if ( a3 )
    (**(void (__fastcall ***)(struct BamoPenEventsClientProxy *, struct BamoPenEventsDispatcherStub *))a3)(a3, a2);
  if ( *((_BYTE *)this + 196) && *((_DWORD *)this + 50) )
    LOBYTE(a2) = 1;
  else
    a2 = 0LL;
  v5 = (*(__int64 (__fastcall **)(char *, struct BamoPenEventsDispatcherStub *))(*((_QWORD *)a3 + 1) + 48LL))(
         (char *)a3 + 8,
         a2);
  if ( v5 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x96,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\stylus\\events\\server\\penevent"
                    "sdispatcherprincipal.cpp",
      (const char *)(unsigned int)v5,
      v12[0]);
  LOBYTE(v6) = *((_DWORD *)this + 51) != 0;
  v7 = (*(__int64 (__fastcall **)(char *, __int64))(*((_QWORD *)a3 + 1) + 72LL))((char *)a3 + 8, v6);
  if ( v7 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x97,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\stylus\\events\\server\\penevent"
                    "sdispatcherprincipal.cpp",
      (const char *)(unsigned int)v7,
      v12[0]);
  *((_QWORD *)a3 + 7) = this;
  v14 = *(_DWORD *)((*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)a3 + 4) + 16LL) + 8LL))(*(_QWORD *)(*((_QWORD *)a3 + 4) + 16LL))
                  + 32);
  std::_Hash<std::_Umap_traits<unsigned int,wil::com_ptr_t<PenEventsClientCustomProxy,wil::err_exception_policy>,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,wil::com_ptr_t<PenEventsClientCustomProxy,wil::err_exception_policy>>>,1>>::emplace<unsigned int &,wil::com_ptr_t<PenEventsClientCustomProxy,wil::err_exception_policy> &>(
    (char *)this + 64,
    &v16,
    &v14,
    &v15);
  v8 = v15;
  if ( (*(unsigned __int8 (__fastcall **)(__int64))(*((_QWORD *)v15 + 1) + 128LL))((__int64)v15 + 8) )
  {
    v9 = 0LL;
    v10 = 0xCBF29CE484222325uLL;
    do
      v10 = 0x100000001B3LL * (*((unsigned __int8 *)&v14 + v9++) ^ (unsigned __int64)v10);
    while ( v9 < 4 );
    if ( !*(_QWORD *)(std::_Hash<std::_Uset_traits<unsigned int,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<unsigned int>,0>>::_Find_last<unsigned int>(
                        (char *)this + 128,
                        v12,
                        &v14,
                        v10)
                    + 8) )
      std::_Hash<std::_Uset_traits<unsigned int,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<unsigned int>,0>>::emplace<unsigned int const &>(
        (char *)this + 128,
        v12,
        &v14);
  }
  (*(void (__fastcall **)(struct BamoPenEventsClientProxy *))(*(_QWORD *)v8 + 8LL))(v8);
  return 0LL;
}
