/*
 * XREFs of ?OnDisconnected@BaseBamoPeerImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x18000B360
 * Callers:
 *     ?OnPeerDisconnected@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJIPEAX_N@Z @ 0x18000B204 (-OnPeerDisconnected@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJIPEAX_N@Z.c)
 * Callees:
 *     ?DisconnectFromPrincipal@BamoStubImpl@BamoImpl@Microsoft@@QEAAX_NPEAV?$vector@PEAVBamoPrincipalImpl@BamoImpl@Microsoft@@V?$allocator@PEAVBamoPrincipalImpl@BamoImpl@Microsoft@@@std@@@std@@@Z @ 0x18000B4A0 (-DisconnectFromPrincipal@BamoStubImpl@BamoImpl@Microsoft@@QEAAX_NPEAV-$vector@PEAVBamoPrincipalI.c)
 *     ?ReleaseStubsFromPeerList@BamoStubImpl@BamoImpl@Microsoft@@SAXPEAV123@@Z @ 0x18000B508 (-ReleaseStubsFromPeerList@BamoStubImpl@BamoImpl@Microsoft@@SAXPEAV123@@Z.c)
 *     ??0?$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVCalloutWrapperObject@12@W4PrologEpilogConfig@12@@Z @ 0x18000BAE0 (--0-$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@PEAVBase.c)
 *     ??1?$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x18000BCD0 (--1-$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001A954 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18005907C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180059D90 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall Microsoft::BamoImpl::BaseBamoPeerImpl::OnDisconnected(
        Microsoft::BamoImpl::BaseBamoPeerImpl *this,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  unsigned int v5; // esi
  __int64 v6; // rdi
  struct Microsoft::BamoImpl::BamoStubImpl *v7; // r12
  struct Microsoft::BamoImpl::BamoStubImpl *v8; // rbx
  __int64 v9; // r8
  struct Microsoft::BamoImpl::BamoStubImpl *v10; // rcx
  struct Microsoft::BamoImpl::BamoStubImpl *v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rbx
  _QWORD *i; // r14
  __int64 v15; // r8
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 (__fastcall *v19)(_QWORD); // rax
  int v20; // eax
  int v21[4]; // [rsp+20h] [rbp-48h] BYREF
  __int64 v22; // [rsp+30h] [rbp-38h]
  _BYTE v23[48]; // [rsp+38h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  *(_OWORD *)v21 = 0LL;
  v5 = 0;
  v6 = 0LL;
  v22 = 0LL;
  *((_BYTE *)this + 49) = 1;
  v7 = (struct Microsoft::BamoImpl::BamoStubImpl *)*((_QWORD *)this + 7);
  v8 = v7;
  *((_QWORD *)this + 7) = 0LL;
  if ( v7 )
  {
    do
    {
      v9 = *((_QWORD *)v8 + 3);
      v10 = 0LL;
      v11 = *(struct Microsoft::BamoImpl::BamoStubImpl **)(v9 + 32);
      if ( v11 )
      {
        while ( v11 != v8 )
        {
          v10 = v11;
          v11 = (struct Microsoft::BamoImpl::BamoStubImpl *)*((_QWORD *)v11 + 5);
          if ( !v11 )
            goto LABEL_9;
        }
        v12 = *((_QWORD *)v8 + 5);
        if ( v10 )
          *((_QWORD *)v10 + 5) = v12;
        else
          *(_QWORD *)(v9 + 32) = v12;
        *((_QWORD *)v8 + 5) = 0LL;
      }
LABEL_9:
      if ( !v11 )
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          (void *)0x2D7,
          (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoPrincipal.inl",
          a4);
      Microsoft::BamoImpl::BamoStubImpl::DisconnectFromPrincipal(v8, 0LL, v21);
      v8 = (struct Microsoft::BamoImpl::BamoStubImpl *)*((_QWORD *)v8 + 6);
    }
    while ( v8 );
    v6 = v22;
  }
  v13 = *(_QWORD *)v21;
  for ( i = *(_QWORD **)v21; i != *(_QWORD **)&v21[2]; ++i )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*i + 8LL))(*i);
  Microsoft::BamoImpl::BamoStubImpl::ReleaseStubsFromPeerList(v7);
  Microsoft::BamoImpl::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>(
    v23,
    *(_QWORD *)(*((_QWORD *)this + 3) + 32LL),
    v15,
    0LL);
  v16 = *((_QWORD *)this + 9);
  if ( (*((_QWORD *)this + 10) - v16) >> 5 )
  {
    v17 = 0LL;
    do
    {
      v18 = 32 * v17;
      v19 = *(__int64 (__fastcall **)(_QWORD))(v18 + v16 + 16);
      if ( v19 )
      {
        v20 = v19(*(_QWORD *)(v18 + v16 + 8));
        if ( v20 < 0 )
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            (void *)0xFB,
            (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoAsyncOperationCoordinator.inl",
            (const char *)(unsigned int)v20,
            v21[0]);
      }
      ++v5;
      v16 = *((_QWORD *)this + 9);
      v17 = v5;
    }
    while ( v5 < (unsigned __int64)((*((_QWORD *)this + 10) - v16) >> 5) );
  }
  Microsoft::BamoImpl::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>::~CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>(v23);
  *((_QWORD *)this + 10) = *((_QWORD *)this + 9);
  if ( v13 )
    std::_Deallocate<16,0>(v13, (v6 - v13) & 0xFFFFFFFFFFFFFFF8uLL);
}
