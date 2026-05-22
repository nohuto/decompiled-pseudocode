/*
 * XREFs of ?ProcessInputConfigMessage@SystemContextManager@@AEAAJAEBUInputConfigContextMessage@@PEAVBamoSystemContextEndpointProxy@@@Z @ 0x1801346CC
 * Callers:
 *     ?Broadcast@InputConfigContextProvider@@AEAAXXZ @ 0x180029E7C (-Broadcast@InputConfigContextProvider@@AEAAXXZ.c)
 *     ?RegisterSystemContextEndpoint@SystemContextManager@@UEAAJPEAVBamoSystemContextManagerStub@@PEAVBamoSystemContextEndpointProxy@@@Z @ 0x180135170 (-RegisterSystemContextEndpoint@SystemContextManager@@UEAAJPEAVBamoSystemContextManagerStub@@PEAV.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000E6AC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??0BamoPrincipalImpl@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnection@Bamo@2@@Z @ 0x180037BD8 (--0BamoPrincipalImpl@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnection@Bamo@2@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18004AF08 (--2@YAPEAX_K@Z.c)
 *     ??0?$extent_type@$0?0@details@gsl@@QEAA@_K@Z @ 0x18004C898 (--0-$extent_type@$0-0@details@gsl@@QEAA@_K@Z.c)
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18004CA28 (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?GetConnection@BamoSystemContextManagerPrincipal@@QEBAPEAVBamoConnection@ISMBamos_AutoBamos@@XZ @ 0x18004E150 (-GetConnection@BamoSystemContextManagerPrincipal@@QEBAPEAVBamoConnection@ISMBamos_AutoBamos@@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$_Destroy_range@V?$allocator@V?$com_ptr_t@VAsyncStringPrincipal@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@VAsyncStringPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAV12@AEAV?$allocator@V?$com_ptr_t@VAsyncStringPrincipal@@Uerr_exception_policy@wil@@@wil@@@0@@Z @ 0x1800894A0 (--$_Destroy_range@V-$allocator@V-$com_ptr_t@VAsyncStringPrincipal@@Uerr_exception_policy@wil@@@w.c)
 *     ??$_Emplace_reallocate@PEAVBamoInputSpacePayloadPrincipal@@@?$vector@PEAVBamoInputSpacePayloadPrincipal@@V?$allocator@PEAVBamoInputSpacePayloadPrincipal@@@std@@@std@@QEAAPEAPEAVBamoInputSpacePayloadPrincipal@@QEAPEAV2@$$QEAPEAV2@@Z @ 0x180131268 (--$_Emplace_reallocate@PEAVBamoInputSpacePayloadPrincipal@@@-$vector@PEAVBamoInputSpacePayloadPr.c)
 *     ??$_Emplace_reallocate@PEAVBamoInputSpacePayloadPrincipal@@@?$vector@V?$com_ptr_t@VBamoInputSpacePayloadPrincipal@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VBamoInputSpacePayloadPrincipal@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@QEAAPEAV?$com_ptr_t@VBamoInputSpacePayloadPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAV23@$$QEAPEAVBamoInputSpacePayloadPrincipal@@@Z @ 0x1801313A4 (--$_Emplace_reallocate@PEAVBamoInputSpacePayloadPrincipal@@@-$vector@V-$com_ptr_t@VBamoInputSpac.c)
 *     ??0?$com_ptr_t@VBamoInputSpacePayloadPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVBamoInputSpacePayloadPrincipal@@@Z @ 0x180131A64 (--0-$com_ptr_t@VBamoInputSpacePayloadPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVBamoIn.c)
 *     ?_Reallocate_exactly@?$vector@PEAVBamoInputSpacePayloadPrincipal@@V?$allocator@PEAVBamoInputSpacePayloadPrincipal@@@std@@@std@@AEAAX_K@Z @ 0x1801370D8 (-_Reallocate_exactly@-$vector@PEAVBamoInputSpacePayloadPrincipal@@V-$allocator@PEAVBamoInputSpac.c)
 *     ?_Reallocate_exactly@?$vector@V?$com_ptr_t@VBamoInputSpacePayloadPrincipal@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VBamoInputSpacePayloadPrincipal@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@AEAAX_K@Z @ 0x180137174 (-_Reallocate_exactly@-$vector@V-$com_ptr_t@VBamoInputSpacePayloadPrincipal@@Uerr_exception_polic.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall SystemContextManager::ProcessInputConfigMessage(
        SystemContextManager *this,
        const struct InputConfigContextMessage *a2,
        struct BamoSystemContextEndpointProxy *a3,
        __int64 a4)
{
  SystemContextManager *v5; // rdi
  __int64 *v6; // r14
  __int64 v7; // rax
  _BYTE *v8; // r15
  __int64 v9; // r13
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 *v14; // r12
  _BYTE *v15; // rsi
  _QWORD *v16; // rdi
  struct Microsoft::Bamo::BaseBamoConnection *Connection; // rax
  __int64 *v18; // rax
  __int64 v19; // rbx
  __int64 v20; // rdi
  void *v21; // rbx
  __int64 v22; // r13
  __int64 v23; // rsi
  __int64 v24; // rax
  __int64 v25; // rdi
  __int64 v26; // rbx
  void *v27; // rbx
  __int64 v29; // [rsp+20h] [rbp-58h]
  _QWORD *v30; // [rsp+28h] [rbp-50h] BYREF
  __int128 v31; // [rsp+38h] [rbp-40h] BYREF
  _BYTE *v32; // [rsp+48h] [rbp-30h]
  __int128 v33; // [rsp+50h] [rbp-28h] BYREF
  __int64 *v34; // [rsp+60h] [rbp-18h]
  __int64 v36; // [rsp+C8h] [rbp+50h] BYREF
  struct BamoSystemContextEndpointProxy *v37; // [rsp+D0h] [rbp+58h]
  _QWORD *v38; // [rsp+D8h] [rbp+60h] BYREF

  v37 = a3;
  v5 = this;
  v33 = 0LL;
  v6 = 0LL;
  v34 = 0LL;
  v7 = *(unsigned int *)a2;
  if ( *(_DWORD *)a2 )
  {
    std::vector<wil::com_ptr_t<BamoInputSpacePayloadPrincipal,wil::err_exception_policy>>::_Reallocate_exactly(
      &v33,
      *(unsigned int *)a2);
    v7 = *(unsigned int *)a2;
    v6 = v34;
  }
  v31 = 0LL;
  v8 = 0LL;
  v32 = 0LL;
  if ( v7 )
  {
    std::vector<BamoInputSpacePayloadPrincipal *>::_Reallocate_exactly(&v31, v7);
    LODWORD(v7) = *(_DWORD *)a2;
    v8 = v32;
  }
  v9 = *((_QWORD *)a2 + 1);
  gsl::details::extent_type<-1>::extent_type<-1>(&v30, (unsigned int)v7, (__int64)a3, a4);
  if ( v30 == (_QWORD *)-1LL || !v9 && v30 )
  {
    _o_terminate(v11, v10, v12, v13);
    return SystemContextManager::ProcessInputConfigMessage_::_1_::dtor_0();
  }
  else
  {
    v29 = v9 + 24LL * (_QWORD)v30;
    v14 = (__int64 *)*((_QWORD *)&v33 + 1);
    v15 = (_BYTE *)*((_QWORD *)&v31 + 1);
    if ( v9 != v29 )
    {
      do
      {
        v16 = operator new(0x58uLL);
        v30 = v16;
        Connection = BamoSystemContextManagerPrincipal::GetConnection(this);
        *v16 = &BamoInputSpacePayloadPrincipal::`vftable'{for `Microsoft::Bamo::BamoPrincipal'};
        v16[1] = &BamoInputSpacePayloadPrincipal::`vftable'{for `IInputSpacePayloadPrincipal'};
        Microsoft::BamoImpl::BamoPrincipalImpl::BamoPrincipalImpl(
          (Microsoft::BamoImpl::BamoPrincipalImpl *)(v16 + 2),
          Connection);
        v16[2] = &BamoImpl::BamoInputSpacePayloadPrincipalImpl::`vftable';
        v16[7] = 0LL;
        *((_DWORD *)v16 + 16) = 0;
        v16[9] = 0LL;
        *((_DWORD *)v16 + 20) = 0;
        v38 = v16;
        if ( v14 == v6 )
        {
          v18 = std::vector<wil::com_ptr_t<BamoInputSpacePayloadPrincipal,wil::err_exception_policy>>::_Emplace_reallocate<BamoInputSpacePayloadPrincipal *>(
                  (__int64 **)&v33,
                  v14,
                  &v38);
          v6 = v34;
          v14 = (__int64 *)*((_QWORD *)&v33 + 1);
        }
        else
        {
          wil::com_ptr_t<BamoInputSpacePayloadPrincipal,wil::err_exception_policy>::com_ptr_t<BamoInputSpacePayloadPrincipal,wil::err_exception_policy>(
            v14,
            (void (__fastcall ***)(_QWORD))v16);
          v18 = v14++;
          *((_QWORD *)&v33 + 1) = v14;
        }
        wil::com_ptr_t<BamoInputSpacePayloadPrincipal,wil::err_exception_policy>::com_ptr_t<BamoInputSpacePayloadPrincipal,wil::err_exception_policy>(
          &v36,
          (void (__fastcall ***)(_QWORD))*v18);
        v19 = v36;
        v20 = v36 + 8;
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)(v36 + 8) + 32LL))(v36 + 8, v9);
        (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v20 + 48LL))(
          v20,
          *(_QWORD *)(v9 + 16),
          *(unsigned int *)(v9 + 12));
        v38 = (_QWORD *)v19;
        if ( v15 == v8 )
        {
          std::vector<BamoInputSpacePayloadPrincipal *>::_Emplace_reallocate<BamoInputSpacePayloadPrincipal *>(
            (const void **)&v31,
            v15,
            &v38);
          v8 = v32;
          v15 = (_BYTE *)*((_QWORD *)&v31 + 1);
        }
        else
        {
          *(_QWORD *)v15 = v19;
          v15 += 8;
          *((_QWORD *)&v31 + 1) = v15;
        }
        wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>(&v36);
        v9 += 24LL;
      }
      while ( v9 != v29 );
      v5 = this;
    }
    v21 = (void *)v31;
    v22 = v31;
    if ( (_BYTE *)v31 == v15 )
      v22 = 0LL;
    v23 = (__int64)&v15[-v31] >> 3;
    if ( v37 )
    {
      (*(void (__fastcall **)(__int64, __int64, _QWORD))(*((_QWORD *)v37 + 1) + 24LL))(
        (__int64)v37 + 8,
        v22,
        (unsigned int)v23);
    }
    else
    {
      v24 = *((_QWORD *)v5 + 8);
      v25 = *((_QWORD *)v5 + 7);
      if ( v25 != v24 )
      {
        v26 = v24;
        do
        {
          (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)(*(_QWORD *)v25 + 8LL) + 24LL))(
            *(_QWORD *)v25 + 8LL,
            v22,
            (unsigned int)v23);
          v25 += 8LL;
        }
        while ( v25 != v26 );
        v21 = (void *)v31;
      }
    }
    if ( v21 )
      std::_Deallocate<16,0>(v21, 8 * ((v8 - (_BYTE *)v21) >> 3));
    v27 = (void *)v33;
    if ( (_QWORD)v33 )
    {
      std::_Destroy_range<std::allocator<wil::com_ptr_t<AsyncStringPrincipal,wil::err_exception_policy>>>(
        (__int64 *)v33,
        v14);
      std::_Deallocate<16,0>(v27, ((char *)v6 - (_BYTE *)v27) & 0xFFFFFFFFFFFFFFF8uLL);
    }
    return 0LL;
  }
}
