/*
 * XREFs of ?Leave@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x1800AF55C
 * Callers:
 *     ?OnZeroReferenceCount@BaseBamoConnectionImpl@BamoImpl@Microsoft@@EEAAXXZ @ 0x1800B0FA0 (-OnZeroReferenceCount@BaseBamoConnectionImpl@BamoImpl@Microsoft@@EEAAXXZ.c)
 * Callees:
 *     ?ReleaseStubsFromPeerList@BamoStubImpl@BamoImpl@Microsoft@@SAXPEAV123@@Z @ 0x18000B098 (-ReleaseStubsFromPeerList@BamoStubImpl@BamoImpl@Microsoft@@SAXPEAV123@@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001A124 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180058998 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 *     ?DisconnectAllObjects@BaseBamoConnectionImpl@BamoImpl@Microsoft@@AEAAXPEAPEAUIMessageConversation@@PEAPEAVBaseBamoPeerImpl@23@PEAPEAVBamoStubImpl@23@PEAV?$vector@PEAVBamoPrincipalImpl@BamoImpl@Microsoft@@V?$allocator@PEAVBamoPrincipalImpl@BamoImpl@Microsoft@@@std@@@std@@PEAV?$vector@PEAVBamoProxyImpl@BamoImpl@Microsoft@@V?$allocator@PEAVBamoProxyImpl@BamoImpl@Microsoft@@@std@@@8@@Z @ 0x1800AED24 (-DisconnectAllObjects@BaseBamoConnectionImpl@BamoImpl@Microsoft@@AEAAXPEAPEAUIMessageConversatio.c)
 *     ?reset@?$com_ptr_t@UIPerceptionTimestamp@Perception@Windows@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x1800B2B10 (-reset@-$com_ptr_t@UIPerceptionTimestamp@Perception@Windows@@Uerr_exception_policy@wil@@@wil@@QE.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall Microsoft::BamoImpl::BaseBamoConnectionImpl::Leave(
        struct Microsoft::BamoImpl::ConnectionIndirector **this)
{
  _QWORD *i; // rbx
  _QWORD *v3; // rcx
  _QWORD *v4; // rbx
  struct Microsoft::BamoImpl::ConnectionIndirector *v5; // rcx
  struct Microsoft::BamoImpl::ConnectionIndirector *v6; // rcx
  int v7; // eax
  int v8; // [rsp+20h] [rbp-40h]
  __int64 v9[2]; // [rsp+48h] [rbp-18h] BYREF
  __int64 v10; // [rsp+58h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]
  struct Microsoft::BamoImpl::BamoStubImpl *v12; // [rsp+80h] [rbp+20h] BYREF
  _QWORD *v13; // [rsp+88h] [rbp+28h] BYREF
  struct Microsoft::BamoImpl::ConnectionIndirector *v14; // [rsp+90h] [rbp+30h] BYREF

  *(_OWORD *)v9 = 0LL;
  v10 = 0LL;
  Microsoft::BamoImpl::BaseBamoConnectionImpl::DisconnectAllObjects(this, &v14, &v13, &v12, (__int64)v9);
  for ( i = (_QWORD *)v9[0]; i != (_QWORD *)v9[1]; ++i )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*i + 8LL))(*i);
  Microsoft::BamoImpl::BamoStubImpl::ReleaseStubsFromPeerList(v12);
  v3 = v13;
  if ( v13 )
  {
    do
    {
      v4 = (_QWORD *)v3[8];
      v3[8] = 0LL;
      (*(void (__fastcall **)(_QWORD *))(*v3 + 8LL))(v3);
      v3 = v4;
    }
    while ( v4 );
  }
  (*(void (__fastcall **)(struct Microsoft::BamoImpl::ConnectionIndirector *))(*(_QWORD *)v14 + 16LL))(v14);
  wil::com_ptr_t<Windows::Perception::IPerceptionTimestamp,wil::err_exception_policy>::reset(this + 9);
  wil::com_ptr_t<Windows::Perception::IPerceptionTimestamp,wil::err_exception_policy>::reset(this + 10);
  v5 = this[11];
  this[11] = 0LL;
  if ( v5 )
    (*(void (__fastcall **)(struct Microsoft::BamoImpl::ConnectionIndirector *))(*(_QWORD *)v5 + 8LL))(v5);
  v6 = this[15];
  this[15] = 0LL;
  if ( v6 )
    (*(void (__fastcall **)(struct Microsoft::BamoImpl::ConnectionIndirector *))(*(_QWORD *)v6 + 8LL))(v6);
  wil::com_ptr_t<Windows::Perception::IPerceptionTimestamp,wil::err_exception_policy>::reset(this + 7);
  wil::com_ptr_t<Windows::Perception::IPerceptionTimestamp,wil::err_exception_policy>::reset(this + 6);
  *((_BYTE *)this + 218) = 1;
  v7 = (*(__int64 (__fastcall **)(struct Microsoft::BamoImpl::ConnectionIndirector *))(*(_QWORD *)this[2] + 16LL))(this[2]);
  if ( v7 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x3A1,
      (int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
      (const char *)(unsigned int)v7,
      v8);
  if ( v9[0] )
    std::_Deallocate<16,0>((void *)v9[0], (v10 - v9[0]) & 0xFFFFFFFFFFFFFFF8uLL);
}
