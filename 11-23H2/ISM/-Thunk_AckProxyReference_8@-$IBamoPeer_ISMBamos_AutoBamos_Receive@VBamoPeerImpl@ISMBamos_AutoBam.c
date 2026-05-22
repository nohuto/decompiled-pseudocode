/*
 * XREFs of ?Thunk_AckProxyReference_8@?$IBamoPeer_ISMBamos_AutoBamos_Receive@VBamoPeerImpl@ISMBamos_AutoBamos@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x180025170
 * Callers:
 *     <none>
 * Callees:
 *     ?TryGetItem@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAPEAVConversationItem@23@II@Z @ 0x180025250 (-TryGetItem@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAPEAVConversationItem@23@II@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C9C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800581C4 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 *     ?SendDisposeProxy@BamoPrincipalImpl@BamoImpl@Microsoft@@AEAAXPEAVBamoStubImpl@23@_N@Z @ 0x18009F76C (-SendDisposeProxy@BamoPrincipalImpl@BamoImpl@Microsoft@@AEAAXPEAVBamoStubImpl@23@_N@Z.c)
 *     ?TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z @ 0x18009F9D0 (-TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z.c)
 */

__int64 __fastcall IBamoPeer_ISMBamos_AutoBamos_Receive<BamoImpl::ISMBamos_AutoBamos::BamoPeerImpl>::Thunk_AckProxyReference_8(
        __int64 a1,
        __int64 a2)
{
  char v3; // si
  unsigned int v4; // r8d
  __int64 v5; // rbx
  _DWORD *v6; // rax
  _DWORD *v7; // rcx
  struct Microsoft::BamoImpl::ConversationItem *Item; // rax
  __int64 v9; // rax
  const char *v10; // r9
  __int64 v11; // rdx
  Microsoft::BamoImpl::BamoPrincipalImpl *v12; // rcx
  int v13; // eax
  int v14; // eax
  unsigned int v15; // ebx
  int v17; // eax
  __int64 v18; // rdx
  int v19; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = **(_BYTE **)(a2 + 8);
  v4 = **(_DWORD **)a2;
  v5 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 32LL);
  v6 = *(_DWORD **)(v5 + 192);
  v7 = *(_DWORD **)(v5 + 200);
  if ( v6 != v7 )
  {
    while ( *v6 != v4 )
    {
      if ( ++v6 == v7 )
        goto LABEL_2;
    }
    goto LABEL_22;
  }
LABEL_2:
  Item = Microsoft::BamoImpl::BaseBamoConnectionImpl::TryGetItem(
           (Microsoft::BamoImpl::BaseBamoConnectionImpl *)v5,
           *(_DWORD *)(v5 + 28),
           v4);
  if ( !Item
    || (v9 = (*(__int64 (__fastcall **)(struct Microsoft::BamoImpl::ConversationItem *))(*(_QWORD *)Item + 40LL))(Item)) == 0 )
  {
LABEL_22:
    v17 = Microsoft::BamoImpl::BaseBamoConnectionImpl::TrackError(
            (Microsoft::BamoImpl::BaseBamoConnectionImpl *)v5,
            -2018375668,
            0);
    v15 = v17;
    if ( v17 >= 0 )
      return v15;
    v18 = 1604LL;
    goto LABEL_24;
  }
  v11 = *(_QWORD *)(v9 + 32);
  if ( !v11 )
  {
LABEL_20:
    v17 = Microsoft::BamoImpl::BaseBamoConnectionImpl::TrackError(
            (Microsoft::BamoImpl::BaseBamoConnectionImpl *)v5,
            -2018375668,
            0);
    v15 = v17;
    if ( v17 >= 0 )
      return v15;
    v18 = 1613LL;
LABEL_24:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v18,
      (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
      (const char *)(unsigned int)v17,
      v19);
    return v15;
  }
  v12 = (Microsoft::BamoImpl::BamoPrincipalImpl *)*(unsigned int *)(a1 + 36);
  while ( *(_DWORD *)(*(_QWORD *)(v11 + 32) + 36LL) != (_DWORD)v12 )
  {
    v11 = *(_QWORD *)(v11 + 40);
    if ( !v11 )
      goto LABEL_20;
  }
  v13 = *(_DWORD *)(v11 + 16);
  if ( !v13 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0xD5,
      (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoStub.inl",
      v10);
  v14 = v13 - 1;
  *(_DWORD *)(v11 + 16) = v14;
  if ( !v3 && !v14 && !*(_BYTE *)(v11 + 58) )
    Microsoft::BamoImpl::BamoPrincipalImpl::SendDisposeProxy(v12, (struct Microsoft::BamoImpl::BamoStubImpl *)v11, 0);
  return 0;
}
