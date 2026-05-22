/*
 * XREFs of ?OnTouchpadRemoved@SystemContextManager@@QEAAX_K@Z @ 0x18014EB2C
 * Callers:
 *     ?OnTouchpadRemoved@VirtualTouchpadContextProvider@@QEAAJ_K@Z @ 0x1801BC278 (-OnTouchpadRemoved@VirtualTouchpadContextProvider@@QEAAJ_K@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180096C94 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800A0FDC (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$GetStructAt@UVirtualTouchpadRect@@@Bamo@Microsoft@@YAAEBUVirtualTouchpadRect@@PEAVBaseBamoConnection@01@AEAV?$vector@UVirtualTouchpadRect@@V?$allocator@UVirtualTouchpadRect@@@std@@@std@@I@Z @ 0x18014A608 (--$GetStructAt@UVirtualTouchpadRect@@@Bamo@Microsoft@@YAAEBUVirtualTouchpadRect@@PEAVBaseBamoCon.c)
 *     ??0?$com_ptr_t@V?$ListPrincipal@UDisplayOcclusionRect@@@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAV?$ListPrincipal@UDisplayOcclusionRect@@@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@@Z @ 0x18014BF28 (--0-$com_ptr_t@V-$ListPrincipal@UDisplayOcclusionRect@@@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@U.c)
 *     ?RemoveAt@?$ListPrincipalCommon@VBamoList_VirtualTouchpadRect_Principal@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@VBamoConnection@2@UVirtualTouchpadRect@@@Bamo@Microsoft@@QEAAJI@Z @ 0x1801507C0 (-RemoveAt@-$ListPrincipalCommon@VBamoList_VirtualTouchpadRect_Principal@ISMBamos_AutoBamos@Lib@B.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall SystemContextManager::OnTouchpadRemoved(SystemContextManager *this, __int64 a2)
{
  __int64 v3; // rdi
  __int64 v4; // rbp
  void (__fastcall ***v5)(_QWORD); // rax
  unsigned int v6; // esi
  _QWORD *v7; // rbx
  __int64 v8; // rcx
  __int64 v9; // rcx
  int v10; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  _QWORD *v12; // [rsp+40h] [rbp+8h] BYREF

  v3 = *((_QWORD *)this + 7);
  v4 = *((_QWORD *)this + 8);
  while ( v3 != v4 )
  {
    v5 = (void (__fastcall ***)(_QWORD))(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)v3 + 8LL) + 48LL))(*(_QWORD *)v3 + 8LL);
    wil::com_ptr_t<Microsoft::Bamo::Lib::ISMBamos_AutoBamos::ListPrincipal<DisplayOcclusionRect>,wil::err_exception_policy>::com_ptr_t<Microsoft::Bamo::Lib::ISMBamos_AutoBamos::ListPrincipal<DisplayOcclusionRect>,wil::err_exception_policy>(
      &v12,
      v5);
    v6 = 0;
    v7 = v12;
    while ( v6 < -1431655765 * (unsigned int)((__int64)(v7[8] - v7[7]) >> 3) )
    {
      v8 = *(_QWORD *)(v7[4] + 32LL);
      if ( *(int *)(v8 + 8) <= 0 )
        v9 = 0LL;
      else
        v9 = *(_QWORD *)(v8 + 16);
      if ( *(_QWORD *)Microsoft::Bamo::GetStructAt<VirtualTouchpadRect>(v9, v7 + 7, v6) == a2 )
      {
        v10 = Microsoft::Bamo::ListPrincipalCommon<Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_VirtualTouchpadRect_Principal,ISMBamos_AutoBamos::BamoConnection,VirtualTouchpadRect>::RemoveAt(
                v7,
                v6);
        if ( v10 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            238LL,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\components\\systemcontext\\manager\\systemcontextmanager.cpp",
            (const char *)(unsigned int)v10);
        break;
      }
      ++v6;
    }
    wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>((__int64 *)&v12);
    v3 += 8LL;
  }
}
