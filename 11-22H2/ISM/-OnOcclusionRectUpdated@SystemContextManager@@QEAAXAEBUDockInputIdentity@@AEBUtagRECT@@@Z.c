/*
 * XREFs of ?OnOcclusionRectUpdated@SystemContextManager@@QEAAXAEBUDockInputIdentity@@AEBUtagRECT@@@Z @ 0x18015C9A0
 * Callers:
 *     ?OnOcclusionRectUpdated@DisplayOcclusionContextProvider@@QEAAJAEBUDockInputIdentity@@AEBUtagRECT@@@Z @ 0x1801CAA00 (-OnOcclusionRectUpdated@DisplayOcclusionContextProvider@@QEAAJAEBUDockInputIdentity@@AEBUtagRECT.c)
 * Callees:
 *     __security_check_cookie @ 0x1800574C0 (__security_check_cookie.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180059DB0 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800B3604 (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$GetStructAt@UDisplayOcclusionRect@@@Bamo@Microsoft@@YAAEBUDisplayOcclusionRect@@PEAVBaseBamoConnection@01@AEAV?$vector@UDisplayOcclusionRect@@V?$allocator@UDisplayOcclusionRect@@@std@@@std@@I@Z @ 0x1801574F0 (--$GetStructAt@UDisplayOcclusionRect@@@Bamo@Microsoft@@YAAEBUDisplayOcclusionRect@@PEAVBaseBamoC.c)
 *     ??0?$com_ptr_t@V?$ListPrincipal@UDisplayOcclusionRect@@@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAV?$ListPrincipal@UDisplayOcclusionRect@@@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@@Z @ 0x18015A208 (--0-$com_ptr_t@V-$ListPrincipal@UDisplayOcclusionRect@@@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@U.c)
 *     ??8@YA_NAEBUDockInputIdentity@@0@Z @ 0x18015A4F4 (--8@YA_NAEBUDockInputIdentity@@0@Z.c)
 *     ?Replace@?$ListPrincipalSimpleCommon@VBamoList_DisplayOcclusionRect_Principal@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@VBamoConnection@2@VBamoList_DisplayOcclusionRect_Stub@2345@UDisplayOcclusionRect@@AEBU8@@Bamo@Microsoft@@QEAAJIAEBUDisplayOcclusionRect@@@Z @ 0x18015EBC8 (-Replace@-$ListPrincipalSimpleCommon@VBamoList_DisplayOcclusionRect_Principal@ISMBamos_AutoBamos.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall SystemContextManager::OnOcclusionRectUpdated(
        SystemContextManager *this,
        const struct DockInputIdentity *a2,
        const struct tagRECT *a3)
{
  __int64 v5; // rdi
  __int64 v6; // rbp
  void (__fastcall ***v7)(_QWORD); // rax
  unsigned int v8; // esi
  _QWORD *v9; // rbx
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 Struct; // rax
  int v13; // eax
  __int64 v14[2]; // [rsp+20h] [rbp-108h] BYREF
  __int128 v15; // [rsp+30h] [rbp-F8h] BYREF
  __m256i v16; // [rsp+40h] [rbp-E8h]
  __int128 v17; // [rsp+60h] [rbp-C8h]
  __int128 v18; // [rsp+70h] [rbp-B8h]
  __int128 v19; // [rsp+80h] [rbp-A8h]
  __int128 v20; // [rsp+90h] [rbp-98h]
  __int128 v21; // [rsp+A0h] [rbp-88h]
  __int128 v22; // [rsp+B0h] [rbp-78h]
  __int128 v23; // [rsp+C0h] [rbp-68h]
  __int128 v24; // [rsp+D0h] [rbp-58h]
  wil::details::in1diag3 *retaddr; // [rsp+128h] [rbp+0h]

  v5 = *((_QWORD *)this + 7);
  v6 = *((_QWORD *)this + 8);
  while ( v5 != v6 )
  {
    v7 = (void (__fastcall ***)(_QWORD))(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)v5 + 8LL) + 32LL))(*(_QWORD *)v5 + 8LL);
    wil::com_ptr_t<Microsoft::Bamo::Lib::ISMBamos_AutoBamos::ListPrincipal<DisplayOcclusionRect>,wil::err_exception_policy>::com_ptr_t<Microsoft::Bamo::Lib::ISMBamos_AutoBamos::ListPrincipal<DisplayOcclusionRect>,wil::err_exception_policy>(
      v14,
      v7);
    v8 = 0;
    v9 = (_QWORD *)v14[0];
    while ( v8 < -1171354717 * (unsigned int)((__int64)(v9[8] - v9[7]) >> 4) )
    {
      v10 = *(_QWORD *)(v9[4] + 32LL);
      if ( *(int *)(v10 + 8) <= 0 )
        v11 = 0LL;
      else
        v11 = *(_QWORD *)(v10 + 16);
      Struct = Microsoft::Bamo::GetStructAt<DisplayOcclusionRect>(v11, v9 + 7, v8);
      v15 = *(_OWORD *)Struct;
      v16 = *(__m256i *)(Struct + 16);
      v17 = *(_OWORD *)(Struct + 48);
      v18 = *(_OWORD *)(Struct + 64);
      v19 = *(_OWORD *)(Struct + 80);
      v20 = *(_OWORD *)(Struct + 96);
      v21 = *(_OWORD *)(Struct + 112);
      v22 = *(_OWORD *)(Struct + 128);
      v23 = *(_OWORD *)(Struct + 144);
      v24 = *(_OWORD *)(Struct + 160);
      if ( operator==((__int64)&v15, (__int64)a2) )
      {
        *(struct tagRECT *)&v16.m256i_u64[1] = *a3;
        v13 = Microsoft::Bamo::ListPrincipalSimpleCommon<Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_DisplayOcclusionRect_Principal,ISMBamos_AutoBamos::BamoConnection,Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_DisplayOcclusionRect_Stub,DisplayOcclusionRect,DisplayOcclusionRect const &>::Replace(
                v9,
                v8,
                &v15);
        if ( v13 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0xA3,
            (int)"onecoreuap\\windows\\moderncore\\inputv2\\components\\systemcontext\\manager\\systemcontextmanager.cpp",
            (const char *)(unsigned int)v13);
        break;
      }
      ++v8;
    }
    wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>(v14);
    v5 += 8LL;
  }
}
