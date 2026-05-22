/*
 * XREFs of ?Leave@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x180098DF0
 * Callers:
 *     ?OnZeroReferenceCount@BaseBamoConnectionImpl@BamoImpl@Microsoft@@EEAAXXZ @ 0x18009A630 (-OnZeroReferenceCount@BaseBamoConnectionImpl@BamoImpl@Microsoft@@EEAAXXZ.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000E6AC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C7A4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?DisconnectAllObjects@BaseBamoConnectionImpl@BamoImpl@Microsoft@@AEAAXPEAPEAUIMessageConversation@@PEAPEAVBaseBamoPeerImpl@23@PEAPEAVBamoStubImpl@23@PEAV?$vector@PEAVBamoProxyImpl@BamoImpl@Microsoft@@V?$allocator@PEAVBamoProxyImpl@BamoImpl@Microsoft@@@std@@@std@@@Z @ 0x1800985D0 (-DisconnectAllObjects@BaseBamoConnectionImpl@BamoImpl@Microsoft@@AEAAXPEAPEAUIMessageConversatio.c)
 *     ?reset@?$com_ptr_t@UIPerceptionTimestamp@Perception@Windows@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x18009BFB4 (-reset@-$com_ptr_t@UIPerceptionTimestamp@Perception@Windows@@Uerr_exception_policy@wil@@@wil@@QE.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall Microsoft::BamoImpl::BaseBamoConnectionImpl::Leave(
        struct Microsoft::BamoImpl::ConnectionIndirector **this)
{
  struct Microsoft::BamoImpl::BamoStubImpl *v2; // rcx
  struct Microsoft::BamoImpl::BamoStubImpl *v3; // rbx
  _QWORD *v4; // rcx
  _QWORD *v5; // rbx
  struct Microsoft::BamoImpl::ConnectionIndirector *v6; // rcx
  struct Microsoft::BamoImpl::ConnectionIndirector *v7; // rcx
  int v8; // eax
  __int64 v9[2]; // [rsp+30h] [rbp-20h] BYREF
  __int64 v10; // [rsp+40h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]
  struct Microsoft::BamoImpl::BamoStubImpl *v12; // [rsp+70h] [rbp+20h] BYREF
  _QWORD *v13; // [rsp+78h] [rbp+28h] BYREF
  struct Microsoft::BamoImpl::ConnectionIndirector *v14; // [rsp+80h] [rbp+30h] BYREF

  *(_OWORD *)v9 = 0LL;
  v10 = 0LL;
  Microsoft::BamoImpl::BaseBamoConnectionImpl::DisconnectAllObjects(this, &v14, &v13, &v12);
  v2 = v12;
  if ( v12 )
  {
    do
    {
      v3 = (struct Microsoft::BamoImpl::BamoStubImpl *)*((_QWORD *)v2 + 7);
      *((_QWORD *)v2 + 7) = 0LL;
      (*(void (__fastcall **)(struct Microsoft::BamoImpl::BamoStubImpl *))(*(_QWORD *)v2 + 8LL))(v2);
      v2 = v3;
    }
    while ( v3 );
  }
  v4 = v13;
  if ( v13 )
  {
    do
    {
      v5 = (_QWORD *)v4[8];
      v4[8] = 0LL;
      (*(void (__fastcall **)(_QWORD *))(*v4 + 8LL))(v4);
      v4 = v5;
    }
    while ( v5 );
  }
  (*(void (__fastcall **)(struct Microsoft::BamoImpl::ConnectionIndirector *))(*(_QWORD *)v14 + 16LL))(v14);
  wil::com_ptr_t<Windows::Perception::IPerceptionTimestamp,wil::err_exception_policy>::reset(this + 9);
  wil::com_ptr_t<Windows::Perception::IPerceptionTimestamp,wil::err_exception_policy>::reset(this + 10);
  v6 = this[11];
  this[11] = 0LL;
  if ( v6 )
    (*(void (__fastcall **)(struct Microsoft::BamoImpl::ConnectionIndirector *))(*(_QWORD *)v6 + 8LL))(v6);
  v7 = this[15];
  this[15] = 0LL;
  if ( v7 )
    (*(void (__fastcall **)(struct Microsoft::BamoImpl::ConnectionIndirector *))(*(_QWORD *)v7 + 8LL))(v7);
  wil::com_ptr_t<Windows::Perception::IPerceptionTimestamp,wil::err_exception_policy>::reset(this + 7);
  wil::com_ptr_t<Windows::Perception::IPerceptionTimestamp,wil::err_exception_policy>::reset(this + 6);
  *((_BYTE *)this + 218) = 1;
  v8 = (*(__int64 (__fastcall **)(struct Microsoft::BamoImpl::ConnectionIndirector *))(*(_QWORD *)this[2] + 16LL))(this[2]);
  if ( v8 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x37E,
      (int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
      (const char *)(unsigned int)v8,
      (int)v9);
  if ( v9[0] )
    std::_Deallocate<16,0>((void *)v9[0], (v10 - v9[0]) & 0xFFFFFFFFFFFFFFF8uLL);
}
