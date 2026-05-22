/*
 * XREFs of ?Thunk_AckProxyReference_8@?$IBamoPeer_ISMBamos_AutoBamos_Receive@VBamoPeerImpl@ISMBamos_AutoBamos@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x18001C410
 * Callers:
 *     <none>
 * Callees:
 *     ?TryGetItem@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAPEAVConversationItem@23@II@Z @ 0x18001C4E0 (-TryGetItem@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAPEAVConversationItem@23@II@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18007BBB0 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

__int64 __fastcall IBamoPeer_ISMBamos_AutoBamos_Receive<BamoImpl::ISMBamos_AutoBamos::BamoPeerImpl>::Thunk_AckProxyReference_8(
        __int64 a1,
        __int64 a2)
{
  char v3; // si
  unsigned int v4; // r8d
  __int64 v5; // rcx
  _DWORD *v6; // rax
  _DWORD *v7; // rdx
  struct Microsoft::BamoImpl::ConversationItem *Item; // rax
  __int64 v9; // rax
  const char *v10; // r9
  __int64 *i; // rbx
  __int64 v13; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = **(_BYTE **)(a2 + 8);
  v4 = **(_DWORD **)a2;
  v5 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 32LL);
  v6 = *(_DWORD **)(v5 + 192);
  v7 = *(_DWORD **)(v5 + 200);
  if ( v6 == v7 )
  {
LABEL_2:
    Item = Microsoft::BamoImpl::BaseBamoConnectionImpl::TryGetItem(
             (Microsoft::BamoImpl::BaseBamoConnectionImpl *)v5,
             *(_DWORD *)(v5 + 28),
             v4);
    if ( Item )
    {
      v9 = (*(__int64 (__fastcall **)(struct Microsoft::BamoImpl::ConversationItem *))(*(_QWORD *)Item + 40LL))(Item);
      if ( v9 )
      {
        for ( i = *(__int64 **)(v9 + 32); i; i = (__int64 *)i[6] )
        {
          if ( *(_DWORD *)(i[5] + 36) == *(_DWORD *)(a1 + 36) )
            break;
        }
        if ( !*((_DWORD *)i + 4) )
          wil::details::in1diag3::_FailFast_Unexpected(
            retaddr,
            (void *)0xBA,
            (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoStub.inl",
            v10);
        _InterlockedDecrement((volatile signed __int32 *)i + 4);
        if ( !v3 && *((int *)i + 4) <= 0 )
        {
          (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 80LL))(a1, *(unsigned int *)(v9 + 24));
          v13 = *i;
          *((_BYTE *)i + 32) = 0;
          (*(void (__fastcall **)(__int64 *))(v13 + 56))(i);
        }
      }
    }
  }
  else
  {
    while ( *v6 != v4 )
    {
      if ( ++v6 == v7 )
        goto LABEL_2;
    }
  }
  return 0LL;
}
