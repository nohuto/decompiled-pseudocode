/*
 * XREFs of ?Thunk_AckProxyReference_13@?$IBamoPeer_dataprovider_AutoBamos_Receive@VBamoPeerImpl@dataprovider_AutoBamos@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x1800448C0
 * Callers:
 *     <none>
 * Callees:
 *     ?TryGetItem@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAPEAVConversationItem@23@II@Z @ 0x18001C4E0 (-TryGetItem@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAPEAVConversationItem@23@II@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18007BBB0 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

__int64 __fastcall IBamoPeer_dataprovider_AutoBamos_Receive<BamoImpl::dataprovider_AutoBamos::BamoPeerImpl>::Thunk_AckProxyReference_13(
        __int64 a1,
        unsigned int **a2)
{
  char v3; // si
  __int64 v4; // r8
  __int64 v5; // rcx
  _DWORD *i; // rax
  struct Microsoft::BamoImpl::ConversationItem *Item; // rax
  __int64 v8; // rax
  const char *v9; // r9
  __int64 *j; // rbx
  __int64 v12; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = *(_BYTE *)a2[1];
  v4 = **a2;
  v5 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 32LL);
  for ( i = *(_DWORD **)(v5 + 192); i != *(_DWORD **)(v5 + 200); ++i )
  {
    if ( *i == (_DWORD)v4 )
      return 0LL;
  }
  Item = Microsoft::BamoImpl::BaseBamoConnectionImpl::TryGetItem(
           (Microsoft::BamoImpl::BaseBamoConnectionImpl *)v5,
           *(unsigned int *)(v5 + 28),
           v4);
  if ( Item )
  {
    v8 = (*(__int64 (__fastcall **)(struct Microsoft::BamoImpl::ConversationItem *))(*(_QWORD *)Item + 40LL))(Item);
    if ( v8 )
    {
      for ( j = *(__int64 **)(v8 + 32); j; j = (__int64 *)j[6] )
      {
        if ( *(_DWORD *)(j[5] + 36) == *(_DWORD *)(a1 + 36) )
          break;
      }
      if ( !*((_DWORD *)j + 4) )
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          (void *)0xBA,
          (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoStub.inl",
          v9);
      _InterlockedDecrement((volatile signed __int32 *)j + 4);
      if ( !v3 && *((int *)j + 4) <= 0 )
      {
        (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 80LL))(a1, *(unsigned int *)(v8 + 24));
        v12 = *j;
        *((_BYTE *)j + 32) = 0;
        (*(void (__fastcall **)(__int64 *))(v12 + 56))(j);
      }
    }
  }
  return 0LL;
}
