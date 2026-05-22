/*
 * XREFs of ?OnIDFreed@ConnectionIndirector@BamoImpl@Microsoft@@UEAAJIIPEAX@Z @ 0x180049800
 * Callers:
 *     <none>
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18005907C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Disconnect@BamoProxyImpl@BamoImpl@Microsoft@@QEAAX_N@Z @ 0x1800C109C (-Disconnect@BamoProxyImpl@BamoImpl@Microsoft@@QEAAX_N@Z.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall Microsoft::BamoImpl::ConnectionIndirector::OnIDFreed(
        Microsoft::BamoImpl::ConnectionIndirector *this,
        __int64 a2,
        __int64 a3,
        Microsoft::BamoImpl::BamoProxyImpl *a4)
{
  volatile signed __int32 *v5; // rdi
  volatile signed __int32 *v6; // rbx
  __int64 v7; // rsi
  __int64 v8; // rdx
  __int64 v9; // r8
  volatile signed __int32 *v10; // rsi
  __int64 v11; // rdi
  const char *v12; // r9
  int v13; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  volatile signed __int32 *v16; // [rsp+30h] [rbp+8h]

  v5 = (volatile signed __int32 *)((char *)this - 16);
  v6 = 0LL;
  v16 = 0LL;
  v7 = *((_QWORD *)this + 2);
  if ( *(_DWORD *)(v7 + 184) == GetCurrentThreadId() )
  {
    v5 = 0LL;
    v10 = 0LL;
  }
  else
  {
    v16 = v5;
    _InterlockedIncrement(v5 + 2);
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v7 + 16) + 24LL))(*(_QWORD *)(v7 + 16));
    *(_DWORD *)(v7 + 184) = GetCurrentThreadId();
    v10 = v5;
    v6 = v5;
  }
  if ( a4 )
  {
    Microsoft::BamoImpl::BamoProxyImpl::Disconnect(a4, 0);
    v5 = v10;
  }
  if ( v5 )
  {
    v11 = *((_QWORD *)v6 + 4);
    if ( *(_DWORD *)(v11 + 184) != GetCurrentThreadId() )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x93F,
        (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
        v12);
    *(_DWORD *)(v11 + 184) = 0;
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v11 + 16) + 32LL))(*(_QWORD *)(v11 + 16));
  }
  if ( v6 )
  {
    v13 = _InterlockedDecrement(v6 + 2);
    if ( v13 < 0 )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x33,
        (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoImplObject.inl",
        (const char *)retaddr);
    if ( !v13 )
      (*(void (__fastcall **)(volatile signed __int32 *, __int64, __int64, wil::details::in1diag3 *))(*(_QWORD *)v16 + 24LL))(
        v16,
        v8,
        v9,
        retaddr);
  }
  return 0LL;
}
