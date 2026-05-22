/*
 * XREFs of ?RevokeProcessesForAnimation@GestureServices@@MEAAJPEAVBamoGestureServicesStub@@PEBIIPEAVBamoDragManagerClientProxy@@@Z @ 0x180153910
 * Callers:
 *     <none>
 * Callees:
 *     ??$emplace@I@?$_Hash@V?$_Uset_traits@IV?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@I@2@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@I@std@@@std@@@std@@_N@1@$$QEAI@Z @ 0x18003D1EC (--$emplace@I@-$_Hash@V-$_Uset_traits@IV-$_Uhash_compare@IU-$hash@I@std@@U-$equal_to@I@2@@std@@V-.c)
 *     ?IsShellClient@GestureServices@@AEBA_NPEAVDragManagerClientProxy@@@Z @ 0x180060BC4 (-IsShellClient@GestureServices@@AEBA_NPEAVDragManagerClientProxy@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x180097878 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ?erase@?$_Hash@V?$_Uset_traits@IV?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@I@2@$0A@@std@@@std@@QEAA_KAEBI@Z @ 0x1801542B0 (-erase@-$_Hash@V-$_Uset_traits@IV-$_Uhash_compare@IU-$hash@I@std@@U-$equal_to@I@2@@std@@V-$alloc.c)
 */

__int64 __fastcall GestureServices::RevokeProcessesForAnimation(
        GestureServices *this,
        struct BamoGestureServicesStub *a2,
        const unsigned int *a3,
        unsigned int a4,
        struct BamoDragManagerClientProxy *a5)
{
  struct BamoDragManagerClientProxy *v5; // rbp
  __int64 v7; // rdi
  const unsigned int *v9; // rdi
  _BYTE v11[24]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v5 = a5;
  v7 = a4;
  if ( GestureServices::IsShellClient(this, a5) )
  {
    LODWORD(a5) = *(_DWORD *)((*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)v5 + 4) + 16LL) + 8LL))(*(_QWORD *)(*((_QWORD *)v5 + 4) + 16LL))
                            + 32);
    std::_Hash<std::_Uset_traits<unsigned int,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<unsigned int>,0>>::emplace<unsigned int>(
      (_QWORD *)this + 17,
      (__int64)v11,
      (unsigned __int8 *)&a5);
    if ( a3 && (_DWORD)v7 )
    {
      v9 = &a3[v7];
      while ( a3 != v9 )
      {
        LODWORD(a5) = *a3;
        std::_Hash<std::_Uset_traits<unsigned int,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<unsigned int>,0>>::erase(
          (char *)this + 136,
          &a5);
        ++a3;
      }
    }
  }
  else
  {
    wil::details::in1diag3::Log_Hr(
      retaddr,
      592LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\components\\inputgestures\\system\\gestureservices.cpp",
      (const char *)0x80070005LL);
  }
  return 0LL;
}
