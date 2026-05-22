/*
 * XREFs of ?GetHWND@BamoActivationListenerInputObjectProxy@@UEAA_KXZ @ 0x180024840
 * Callers:
 *     <none>
 * Callees:
 *     ?LeaveLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x1800221F0 (-LeaveLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800581C4 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall BamoActivationListenerInputObjectProxy::GetHWND(BamoActivationListenerInputObjectProxy *this)
{
  __int64 v2; // rdi
  __int64 v3; // rbx
  __int64 v4; // rbp
  __int64 v5; // r8
  __int64 v6; // rcx
  __int64 v7; // rsi
  int v8; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  _QWORD *v11; // [rsp+30h] [rbp+8h]

  v2 = *(_QWORD *)(*((_QWORD *)this + 3) + 24LL);
  v3 = 0LL;
  v11 = 0LL;
  v4 = *(_QWORD *)(v2 + 32);
  if ( *(_DWORD *)(v4 + 184) == GetCurrentThreadId() )
  {
    v2 = 0LL;
    v6 = 0LL;
  }
  else
  {
    v11 = (_QWORD *)v2;
    _InterlockedIncrement((volatile signed __int32 *)(v2 + 8));
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v4 + 16) + 24LL))(*(_QWORD *)(v4 + 16));
    *(_DWORD *)(v4 + 184) = GetCurrentThreadId();
    v6 = v2;
    v3 = v2;
  }
  v7 = *((_QWORD *)this + 5);
  if ( v2 )
    Microsoft::BamoImpl::BaseBamoConnectionImpl::LeaveLock(*(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(v6 + 32));
  if ( v3 )
  {
    v8 = _InterlockedDecrement((volatile signed __int32 *)(v3 + 8));
    if ( v8 < 0 )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x33,
        (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoImplObject.inl",
        (const char *)retaddr);
    if ( !v8 )
      (*(void (__fastcall **)(_QWORD *, _QWORD, __int64, wil::details::in1diag3 *))(*v11 + 24LL))(
        v11,
        *v11,
        v5,
        retaddr);
  }
  return v7;
}
