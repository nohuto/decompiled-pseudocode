/*
 * XREFs of ?OnDisconnected@BaseBamoPeerImpl@BamoImpl@Microsoft@@QEAAX_NPEAV?$vector@PEAVBamoPrincipalImpl@BamoImpl@Microsoft@@V?$allocator@PEAVBamoPrincipalImpl@BamoImpl@Microsoft@@@std@@@std@@PEAPEAVBamoStubImpl@23@2@Z @ 0x1800B072C
 * Callers:
 *     ?DisconnectAllObjects@BaseBamoConnectionImpl@BamoImpl@Microsoft@@AEAAXPEAPEAUIMessageConversation@@PEAPEAVBaseBamoPeerImpl@23@PEAPEAVBamoStubImpl@23@PEAV?$vector@PEAVBamoPrincipalImpl@BamoImpl@Microsoft@@V?$allocator@PEAVBamoPrincipalImpl@BamoImpl@Microsoft@@@std@@@std@@PEAV?$vector@PEAVBamoProxyImpl@BamoImpl@Microsoft@@V?$allocator@PEAVBamoProxyImpl@BamoImpl@Microsoft@@@std@@@8@@Z @ 0x1800AED24 (-DisconnectAllObjects@BaseBamoConnectionImpl@BamoImpl@Microsoft@@AEAAXPEAPEAUIMessageConversatio.c)
 * Callees:
 *     ?DisconnectFromPrincipal@BamoStubImpl@BamoImpl@Microsoft@@QEAAX_NPEAV?$vector@PEAVBamoPrincipalImpl@BamoImpl@Microsoft@@V?$allocator@PEAVBamoPrincipalImpl@BamoImpl@Microsoft@@@std@@@std@@@Z @ 0x18000B030 (-DisconnectFromPrincipal@BamoStubImpl@BamoImpl@Microsoft@@QEAAX_NPEAV-$vector@PEAVBamoPrincipalI.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800581C4 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

char __fastcall Microsoft::BamoImpl::BaseBamoPeerImpl::OnDisconnected(
        __int64 a1,
        char a2,
        _QWORD **a3,
        char *a4,
        _QWORD *a5)
{
  __int64 v5; // rax
  _QWORD *v8; // rbx
  __int64 v9; // r8
  _QWORD *v10; // rcx
  _QWORD *i; // rax
  __int64 v12; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v5 = *(_QWORD *)(a1 + 56);
  *(_BYTE *)(a1 + 49) = 1;
  *(_QWORD *)a4 = v5;
  *a5 = 0LL;
  v8 = *(_QWORD **)(a1 + 56);
  *(_QWORD *)(a1 + 56) = 0LL;
  while ( v8 )
  {
    v9 = v8[3];
    v10 = 0LL;
    for ( i = *(_QWORD **)(v9 + 32); i; i = (_QWORD *)i[5] )
    {
      if ( i == v8 )
      {
        v12 = v8[5];
        if ( v10 )
          v10[5] = v12;
        else
          *(_QWORD *)(v9 + 32) = v12;
        v8[5] = 0LL;
        break;
      }
      v10 = i;
    }
    if ( !i )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x2D7,
        (int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoPrincipal.inl",
        a4);
    LOBYTE(v5) = Microsoft::BamoImpl::BamoStubImpl::DisconnectFromPrincipal((__int64)v8, a2, a3);
    *a5 = v8;
    v8 = (_QWORD *)v8[6];
  }
  return v5;
}
