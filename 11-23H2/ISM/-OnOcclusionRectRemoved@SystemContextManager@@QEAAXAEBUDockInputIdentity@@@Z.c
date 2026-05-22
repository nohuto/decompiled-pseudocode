/*
 * XREFs of ?OnOcclusionRectRemoved@SystemContextManager@@QEAAXAEBUDockInputIdentity@@@Z @ 0x18014E5A4
 * Callers:
 *     ?OnOcclusionRectRemoved@DisplayOcclusionContextProvider@@QEAAJAEBUDockInputIdentity@@@Z @ 0x1801BD04C (-OnOcclusionRectRemoved@DisplayOcclusionContextProvider@@QEAAJAEBUDockInputIdentity@@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180096C94 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800A0FDC (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$GetStructAt@UDisplayOcclusionRect@@@Bamo@Microsoft@@YAAEBUDisplayOcclusionRect@@PEAVBaseBamoConnection@01@AEAV?$vector@UDisplayOcclusionRect@@V?$allocator@UDisplayOcclusionRect@@@std@@@std@@I@Z @ 0x180149210 (--$GetStructAt@UDisplayOcclusionRect@@@Bamo@Microsoft@@YAAEBUDisplayOcclusionRect@@PEAVBaseBamoC.c)
 *     ??0?$com_ptr_t@V?$ListPrincipal@UDisplayOcclusionRect@@@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAV?$ListPrincipal@UDisplayOcclusionRect@@@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@@Z @ 0x18014BF28 (--0-$com_ptr_t@V-$ListPrincipal@UDisplayOcclusionRect@@@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@U.c)
 *     ??8@YA_NAEBUDockInputIdentity@@0@Z @ 0x18014C214 (--8@YA_NAEBUDockInputIdentity@@0@Z.c)
 *     ?RemoveAt@?$ListPrincipalCommon@VBamoList_DisplayOcclusionRect_Principal@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@VBamoConnection@2@UDisplayOcclusionRect@@@Bamo@Microsoft@@QEAAJI@Z @ 0x18015068C (-RemoveAt@-$ListPrincipalCommon@VBamoList_DisplayOcclusionRect_Principal@ISMBamos_AutoBamos@Lib@.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall SystemContextManager::OnOcclusionRectRemoved(
        SystemContextManager *this,
        const struct DockInputIdentity *a2)
{
  __int64 v3; // rdi
  __int64 v4; // rbp
  void (__fastcall ***v5)(_QWORD); // rax
  unsigned int v6; // esi
  _QWORD *v7; // rbx
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 Struct; // rax
  int v11; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  _QWORD *v13; // [rsp+40h] [rbp+8h] BYREF

  v3 = *((_QWORD *)this + 7);
  v4 = *((_QWORD *)this + 8);
  while ( v3 != v4 )
  {
    v5 = (void (__fastcall ***)(_QWORD))(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)v3 + 8LL) + 32LL))(*(_QWORD *)v3 + 8LL);
    wil::com_ptr_t<Microsoft::Bamo::Lib::ISMBamos_AutoBamos::ListPrincipal<DisplayOcclusionRect>,wil::err_exception_policy>::com_ptr_t<Microsoft::Bamo::Lib::ISMBamos_AutoBamos::ListPrincipal<DisplayOcclusionRect>,wil::err_exception_policy>(
      &v13,
      v5);
    v6 = 0;
    v7 = v13;
    while ( v6 < -1171354717 * (unsigned int)((__int64)(v7[8] - v7[7]) >> 4) )
    {
      v8 = *(_QWORD *)(v7[4] + 32LL);
      if ( *(int *)(v8 + 8) <= 0 )
        v9 = 0LL;
      else
        v9 = *(_QWORD *)(v8 + 16);
      Struct = Microsoft::Bamo::GetStructAt<DisplayOcclusionRect>(v9, v7 + 7, v6);
      if ( operator==(Struct, (__int64)a2) )
      {
        v11 = Microsoft::Bamo::ListPrincipalCommon<Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_DisplayOcclusionRect_Principal,ISMBamos_AutoBamos::BamoConnection,DisplayOcclusionRect>::RemoveAt(
                v7,
                v6);
        if ( v11 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            184LL,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\components\\systemcontext\\manager\\systemcontextmanager.cpp",
            (const char *)(unsigned int)v11);
        break;
      }
      ++v6;
    }
    wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>((__int64 *)&v13);
    v3 += 8LL;
  }
}
