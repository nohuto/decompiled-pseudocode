/*
 * XREFs of ?OnDisconnected@BaseBamoPeerImpl@BamoImpl@Microsoft@@QEAAX_NPEAPEAVBamoStubImpl@23@1@Z @ 0x180099C5C
 * Callers:
 *     ?DisconnectAllObjects@BaseBamoConnectionImpl@BamoImpl@Microsoft@@AEAAXPEAPEAUIMessageConversation@@PEAPEAVBaseBamoPeerImpl@23@PEAPEAVBamoStubImpl@23@PEAV?$vector@PEAVBamoProxyImpl@BamoImpl@Microsoft@@V?$allocator@PEAVBamoProxyImpl@BamoImpl@Microsoft@@@std@@@std@@@Z @ 0x1800985D0 (-DisconnectAllObjects@BaseBamoConnectionImpl@BamoImpl@Microsoft@@AEAAXPEAPEAUIMessageConversatio.c)
 *     ?OnPeerDisconnected@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJIPEAX_N@Z @ 0x18009A30C (-OnPeerDisconnected@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJIPEAX_N@Z.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18007BBB0 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?DisconnectFromPrincipal@BamoStubImpl@BamoImpl@Microsoft@@QEAAX_N@Z @ 0x1800879E8 (-DisconnectFromPrincipal@BamoStubImpl@BamoImpl@Microsoft@@QEAAX_N@Z.c)
 */

void __fastcall Microsoft::BamoImpl::BaseBamoPeerImpl::OnDisconnected(
        Microsoft::BamoImpl::BaseBamoPeerImpl *this,
        char a2,
        struct Microsoft::BamoImpl::BamoStubImpl **a3,
        struct Microsoft::BamoImpl::BamoStubImpl **a4)
{
  struct Microsoft::BamoImpl::BamoStubImpl *v4; // rax
  Microsoft::BamoImpl::BamoStubImpl *v7; // rbx
  __int64 v8; // r8
  Microsoft::BamoImpl::BamoStubImpl *v9; // rcx
  Microsoft::BamoImpl::BamoStubImpl *i; // rax
  __int64 v11; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = (struct Microsoft::BamoImpl::BamoStubImpl *)*((_QWORD *)this + 7);
  *((_BYTE *)this + 49) = 1;
  *a3 = v4;
  *a4 = 0LL;
  v7 = (Microsoft::BamoImpl::BamoStubImpl *)*((_QWORD *)this + 7);
  *((_QWORD *)this + 7) = 0LL;
  while ( v7 )
  {
    v8 = *((_QWORD *)v7 + 3);
    v9 = 0LL;
    for ( i = *(Microsoft::BamoImpl::BamoStubImpl **)(v8 + 32);
          i;
          i = (Microsoft::BamoImpl::BamoStubImpl *)*((_QWORD *)i + 6) )
    {
      if ( i == v7 )
      {
        v11 = *((_QWORD *)v7 + 6);
        if ( v9 )
          *((_QWORD *)v9 + 6) = v11;
        else
          *(_QWORD *)(v8 + 32) = v11;
        *((_QWORD *)v7 + 6) = 0LL;
        break;
      }
      v9 = i;
    }
    if ( !i )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        657LL,
        (__int64)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoPrincipal.inl",
        (const char *)a4);
    Microsoft::BamoImpl::BamoStubImpl::DisconnectFromPrincipal(v7, a2);
    *a4 = v7;
    v7 = (Microsoft::BamoImpl::BamoStubImpl *)*((_QWORD *)v7 + 7);
  }
}
