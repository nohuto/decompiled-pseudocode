/*
 * XREFs of ?Thunk_DisposeProxy_8@?$IBamoPeer_ISMBamos_AutoBamos_Receive@VBamoPeerImpl@ISMBamos_AutoBamos@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x180049BB0
 * Callers:
 *     <none>
 * Callees:
 *     ?TryGetItem@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAPEAVConversationItem@23@II@Z @ 0x180025250 (-TryGetItem@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAPEAVConversationItem@23@II@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C9C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AbandonOnDisconnect@BamoProxy@Bamo@Microsoft@@AEAAXXZ @ 0x180049CC8 (-AbandonOnDisconnect@BamoProxy@Bamo@Microsoft@@AEAAXXZ.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800581C4 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180058998 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 *     ?TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z @ 0x18009F9D0 (-TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z.c)
 */

__int64 __fastcall IBamoPeer_ISMBamos_AutoBamos_Receive<BamoImpl::ISMBamos_AutoBamos::BamoPeerImpl>::Thunk_DisposeProxy_8(
        __int64 a1,
        unsigned int **a2)
{
  char v3; // bp
  unsigned int v4; // r15d
  Microsoft::BamoImpl::BaseBamoConnectionImpl *v5; // r14
  struct Microsoft::BamoImpl::ConversationItem *Item; // rax
  unsigned int v7; // ebx
  __int64 v8; // rdi
  int v9; // eax
  const char *v10; // r9
  __int64 v11; // rax
  Microsoft::Bamo::BamoProxy *v12; // rax
  int v14; // eax
  unsigned int v15; // edi
  int v16; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v3 = *(_BYTE *)a2[1];
  v4 = **a2;
  v5 = *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(a1 + 24) + 32LL);
  Item = Microsoft::BamoImpl::BaseBamoConnectionImpl::TryGetItem(v5, *(unsigned int *)(a1 + 36), v4);
  v7 = 0;
  if ( Item
    && (v8 = (*(__int64 (__fastcall **)(struct Microsoft::BamoImpl::ConversationItem *))(*(_QWORD *)Item + 48LL))(Item)) != 0 )
  {
    v9 = (*(__int64 (__fastcall **)(_QWORD *, _QWORD, _QWORD, _QWORD))(**((_QWORD **)v5 + 8) + 40LL))(
           *((_QWORD **)v5 + 8),
           *(unsigned int *)(a1 + 36),
           v4,
           0LL);
    if ( v9 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x69C,
        (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
        (const char *)(unsigned int)v9,
        v16);
    if ( !v3 && *(int *)(v8 + 8) > 0 )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x6A4,
        (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
        v10);
    v11 = *(_QWORD *)v8;
    *(_BYTE *)(v8 + 29) = 1;
    v12 = (Microsoft::Bamo::BamoProxy *)(*(__int64 (__fastcall **)(__int64))(v11 + 56))(v8);
    Microsoft::Bamo::BamoProxy::AbandonOnDisconnect(v12);
    if ( v3 && !*(_BYTE *)(a1 + 49) )
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 88LL))(a1, v4);
  }
  else
  {
    v14 = Microsoft::BamoImpl::BaseBamoConnectionImpl::TrackError(v5, -2018375668, 0);
    v15 = v14;
    if ( v14 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x699,
        (__int64)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
        (const char *)(unsigned int)v14);
    return v15;
  }
  return v7;
}
