/*
 * XREFs of ?OnActivate@BamoActivationListenerInputObjectProxy@@UEAAJW4InputActivationState@Input@UI@Windows@@@Z @ 0x180006380
 * Callers:
 *     <none>
 * Callees:
 *     ?OnActivate@BamoActivationListenerInputObjectProxyImpl@BamoImpl@@QEAAJW4InputActivationState@Input@UI@Windows@@@Z @ 0x1800064B0 (-OnActivate@BamoActivationListenerInputObjectProxyImpl@BamoImpl@@QEAAJW4InputActivationState@Inp.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800581C4 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall BamoActivationListenerInputObjectProxy::OnActivate(__int64 a1, unsigned int a2)
{
  __int64 v4; // rdi
  __int64 v5; // rbx
  __int64 v6; // rbp
  __int64 v7; // rbp
  __int64 v8; // rdx
  unsigned int v9; // esi
  __int64 v10; // r8
  __int64 v11; // rdi
  const char *v12; // r9
  int v13; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v16; // [rsp+40h] [rbp+8h]

  v4 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 24LL);
  v5 = 0LL;
  v16 = 0LL;
  v6 = *(_QWORD *)(v4 + 32);
  if ( *(_DWORD *)(v6 + 184) == GetCurrentThreadId() )
  {
    v4 = 0LL;
    v7 = 0LL;
  }
  else
  {
    v16 = v4;
    _InterlockedIncrement((volatile signed __int32 *)(v4 + 8));
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v6 + 16) + 24LL))(*(_QWORD *)(v6 + 16));
    *(_DWORD *)(v6 + 184) = GetCurrentThreadId();
    v7 = v4;
    v5 = v4;
  }
  v9 = BamoImpl::BamoActivationListenerInputObjectProxyImpl::OnActivate(a1 + 8, a2);
  if ( v4 )
  {
    v11 = *(_QWORD *)(v7 + 32);
    if ( *(_DWORD *)(v11 + 184) != GetCurrentThreadId() )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x93F,
        (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
        v12);
    *(_DWORD *)(v11 + 184) = 0;
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v11 + 16) + 32LL))(*(_QWORD *)(v11 + 16));
  }
  if ( v5 )
  {
    v13 = _InterlockedDecrement((volatile signed __int32 *)(v5 + 8));
    if ( v13 < 0 )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x33,
        (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoImplObject.inl",
        (const char *)retaddr);
    if ( !v13 )
      (*(void (__fastcall **)(__int64, __int64, __int64, wil::details::in1diag3 *))(*(_QWORD *)v16 + 24LL))(
        v16,
        v8,
        v10,
        retaddr);
  }
  return v9;
}
