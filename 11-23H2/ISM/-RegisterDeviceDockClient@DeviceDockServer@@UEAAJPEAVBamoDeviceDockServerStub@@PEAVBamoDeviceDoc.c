/*
 * XREFs of ?RegisterDeviceDockClient@DeviceDockServer@@UEAAJPEAVBamoDeviceDockServerStub@@PEAVBamoDeviceDockClientProxy@@W4DockWatcherRoutingPolicy@Input@Internal@UI@Windows@@@Z @ 0x18019DF20
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@VBamoSimpleHapticsControllerProxy@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180054ABC (--1-$com_ptr_t@VBamoSimpleHapticsControllerProxy@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800581C4 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180096C94 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUDockInputIdentity@@UDockInputInfo@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x1800A6FE0 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBUDockInputIde.c)
 *     ??$_Emplace_reallocate@V?$com_ptr_t@VBamoDeviceDockClientProxy@@Uerr_returncode_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@VBamoDeviceDockClientProxy@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VBamoDeviceDockClientProxy@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAPEAV?$com_ptr_t@VBamoDeviceDockClientProxy@@Uerr_returncode_policy@wil@@@wil@@QEAV23@$$QEAV23@@Z @ 0x18019B35C (--$_Emplace_reallocate@V-$com_ptr_t@VBamoDeviceDockClientProxy@@Uerr_returncode_policy@wil@@@wil.c)
 *     ??4?$com_ptr_t@VBamoDeviceDockClientProxy@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVBamoDeviceDockClientProxy@@@Z @ 0x18019BEC8 (--4-$com_ptr_t@VBamoDeviceDockClientProxy@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVBamo.c)
 *     ?RegisterClient@DeviceDock@InputTraceLogging@@SAXPEBXW4DockWatcherRoutingPolicy@Input@Internal@UI@Windows@@@Z @ 0x18019DCC0 (-RegisterClient@DeviceDock@InputTraceLogging@@SAXPEBXW4DockWatcherRoutingPolicy@Input@Internal@U.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall DeviceDockServer::RegisterDeviceDockClient(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  const char *v7; // r9
  _QWORD *i; // rax
  char v9; // al
  __int64 *v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rsi
  int v13; // eax
  __int64 v14; // rcx
  int v15; // eax
  __int64 v16; // rcx
  __int64 v17; // rax
  int v18; // eax
  int v19; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+18h]
  __int64 j; // [rsp+40h] [rbp+20h] BYREF

  InputTraceLogging::DeviceDock::RegisterClient(a3, a4);
  for ( i = *(_QWORD **)(a1 + 56); ; ++i )
  {
    if ( i == *(_QWORD **)(a1 + 64) )
    {
      v9 = 0;
      goto LABEL_6;
    }
    if ( *i == a3 )
      break;
  }
  v9 = 1;
LABEL_6:
  if ( v9 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x1F,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\dock\\server\\devicedockserver.cpp",
      v7);
  j = a3;
  if ( a3 )
    (**(void (__fastcall ***)(__int64))a3)(a3);
  v10 = *(__int64 **)(a1 + 64);
  if ( v10 == *(__int64 **)(a1 + 72) )
  {
    std::vector<wil::com_ptr_t<BamoDeviceDockClientProxy,wil::err_returncode_policy>>::_Emplace_reallocate<wil::com_ptr_t<BamoDeviceDockClientProxy,wil::err_returncode_policy>>(
      (__int64 **)(a1 + 56),
      v10,
      &j);
  }
  else
  {
    j = 0LL;
    *v10 = a3;
    *(_QWORD *)(a1 + 64) += 8LL;
  }
  wil::com_ptr_t<BamoSimpleHapticsControllerProxy,wil::err_returncode_policy>::~com_ptr_t<BamoSimpleHapticsControllerProxy,wil::err_returncode_policy>(&j);
  if ( a4 == 1 && !*(_QWORD *)(a1 + 80) )
    wil::com_ptr_t<BamoDeviceDockClientProxy,wil::err_returncode_policy>::operator=(
      (__int64 *)(a1 + 80),
      (void (__fastcall ***)(_QWORD))a3);
  v11 = **(_QWORD **)(a1 + 88);
  j = v11;
  v12 = a3 + 8;
  while ( !*(_BYTE *)(v11 + 25) )
  {
    v12 = a3 + 8;
    v13 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)(a3 + 8) + 48LL))(
            a3 + 8,
            *(unsigned int *)(v11 + 32),
            *(_QWORD *)(v11 + 40));
    if ( v13 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        48LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\dock\\server\\devicedockserver.cpp",
        (const char *)(unsigned int)v13);
    std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<DockInputIdentity const,DockInputInfo>>>,std::_Iterator_base0>::operator++(&j);
    v11 = j;
  }
  v14 = **(_QWORD **)(a1 + 104);
  j = v14;
  while ( !*(_BYTE *)(v14 + 25) )
  {
    v15 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v12 + 24LL))(
            v12,
            *(unsigned int *)(v14 + 32),
            *(_QWORD *)(v14 + 40));
    if ( v15 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        52LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\dock\\server\\devicedockserver.cpp",
        (const char *)(unsigned int)v15);
    std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<DockInputIdentity const,DockInputInfo>>>,std::_Iterator_base0>::operator++(&j);
    v12 = a3 + 8;
    v14 = j;
  }
  v16 = **(_QWORD **)(a1 + 120);
  for ( j = v16; ; v16 = j )
  {
    v17 = *(_QWORD *)v12;
    if ( *(_BYTE *)(v16 + 25) )
      break;
    v18 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(v17 + 40))(v12, *(unsigned int *)(v16 + 32), v16 + 56);
    if ( v18 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        56LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\dock\\server\\devicedockserver.cpp",
        (const char *)(unsigned int)v18);
    std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<DockInputIdentity const,DockInputInfo>>>,std::_Iterator_base0>::operator++(&j);
  }
  v19 = (*(__int64 (__fastcall **)(__int64))(v17 + 64))(v12);
  if ( v19 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      58LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\dock\\server\\devicedockserver.cpp",
      (const char *)(unsigned int)v19);
  return 0LL;
}
