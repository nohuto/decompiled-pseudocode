/*
 * XREFs of ?GetId@BamoActivationControllerProxy@@UEAA_KXZ @ 0x18001B5A0
 * Callers:
 *     <none>
 * Callees:
 *     ?LeaveLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x180019910 (-LeaveLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18007BBB0 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall BamoActivationControllerProxy::GetId(BamoActivationControllerProxy *this)
{
  __int64 v2; // rdi
  __int64 v3; // rbx
  __int64 v4; // rbp
  __int64 v5; // rsi
  const char *v6; // r9
  signed __int32 v7; // edx
  bool v8; // sf
  signed __int32 v9; // edx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = *(_QWORD *)(*((_QWORD *)this + 3) + 24LL);
  v3 = 0LL;
  v4 = *(_QWORD *)(v2 + 32);
  if ( *(_DWORD *)(v4 + 184) == GetCurrentThreadId() )
  {
    v2 = 0LL;
  }
  else
  {
    _InterlockedIncrement((volatile signed __int32 *)(v2 + 8));
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v4 + 16) + 24LL))(*(_QWORD *)(v4 + 16));
    *(_DWORD *)(v4 + 184) = GetCurrentThreadId();
    v3 = v2;
  }
  v5 = *((_QWORD *)this + 6);
  if ( v2 )
  {
    Microsoft::BamoImpl::BaseBamoConnectionImpl::LeaveLock(*(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(v3 + 32));
    v7 = _InterlockedExchangeAdd((volatile signed __int32 *)(v2 + 8), 0xFFFFFFFF);
    v8 = v7 - 1 < 0;
    v9 = v7 - 1;
    if ( v8 )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x33,
        (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoImplObject.inl",
        v6);
    if ( !v9 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 24LL))(v2);
  }
  return v5;
}
