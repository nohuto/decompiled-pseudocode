/*
 * XREFs of ?Thunk_RequestDisposeProxy_5@?$IBamoPeer_ISMBamos_AutoBamos_Receive@VBamoPeerImpl@ISMBamos_AutoBamos@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x180025A90
 * Callers:
 *     <none>
 * Callees:
 *     ?TryGetItem@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAPEAVConversationItem@23@II@Z @ 0x180025C30 (-TryGetItem@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAPEAVConversationItem@23@II@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800334B8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?SendDisposeProxy@BamoPrincipalImpl@BamoImpl@Microsoft@@AEAAXPEAVBamoStubImpl@23@_N@Z @ 0x1800B1CBC (-SendDisposeProxy@BamoPrincipalImpl@BamoImpl@Microsoft@@AEAAXPEAVBamoStubImpl@23@_N@Z.c)
 *     ?TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z @ 0x1800B1F20 (-TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z.c)
 */

__int64 __fastcall IBamoPeer_ISMBamos_AutoBamos_Receive<BamoImpl::ISMBamos_AutoBamos::BamoPeerImpl>::Thunk_RequestDisposeProxy_5(
        __int64 a1,
        unsigned int **a2)
{
  unsigned int v3; // r8d
  __int64 v4; // rbx
  _DWORD *v5; // rax
  _DWORD *v6; // rcx
  struct Microsoft::BamoImpl::ConversationItem *Item; // rax
  __int64 v8; // rax
  __int64 v9; // rdx
  Microsoft::BamoImpl::BamoPrincipalImpl *v10; // rcx
  int v12; // ebx
  __int64 v13; // rdx
  int v14; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = **a2;
  v4 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 32LL);
  v5 = *(_DWORD **)(v4 + 192);
  v6 = *(_DWORD **)(v4 + 200);
  if ( v5 != v6 )
  {
    while ( *v5 != v3 )
    {
      if ( ++v5 == v6 )
        goto LABEL_2;
    }
LABEL_18:
    v12 = Microsoft::BamoImpl::BaseBamoConnectionImpl::TrackError(
            (Microsoft::BamoImpl::BaseBamoConnectionImpl *)v4,
            -2018375668,
            0);
    if ( v12 < 0 )
    {
      v13 = 1644LL;
      goto LABEL_20;
    }
    return (unsigned int)v12;
  }
LABEL_2:
  Item = Microsoft::BamoImpl::BaseBamoConnectionImpl::TryGetItem(
           (Microsoft::BamoImpl::BaseBamoConnectionImpl *)v4,
           *(_DWORD *)(v4 + 28),
           v3);
  if ( !Item )
    goto LABEL_18;
  v8 = (*(__int64 (__fastcall **)(struct Microsoft::BamoImpl::ConversationItem *))(*(_QWORD *)Item + 40LL))(Item);
  if ( !v8 )
    goto LABEL_18;
  v9 = *(_QWORD *)(v8 + 32);
  if ( !v9 )
  {
LABEL_16:
    v12 = Microsoft::BamoImpl::BaseBamoConnectionImpl::TrackError(
            (Microsoft::BamoImpl::BaseBamoConnectionImpl *)v4,
            -2018375668,
            0);
    if ( v12 < 0 )
    {
      v13 = 1653LL;
LABEL_20:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v13,
        (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
        (const char *)(unsigned int)v12,
        v14);
      return (unsigned int)v12;
    }
    return (unsigned int)v12;
  }
  v10 = (Microsoft::BamoImpl::BamoPrincipalImpl *)*(unsigned int *)(a1 + 36);
  while ( *(_DWORD *)(*(_QWORD *)(v9 + 32) + 36LL) != (_DWORD)v10 )
  {
    v9 = *(_QWORD *)(v9 + 40);
    if ( !v9 )
      goto LABEL_16;
  }
  if ( !*(_DWORD *)(v9 + 16) && !*(_BYTE *)(v9 + 58) )
    Microsoft::BamoImpl::BamoPrincipalImpl::SendDisposeProxy(v10, (struct Microsoft::BamoImpl::BamoStubImpl *)v9, 0);
  return 0LL;
}
