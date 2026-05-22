/*
 * XREFs of ?GetActivated@BamoActivationControllerProxy@@UEAA_NXZ @ 0x180017CB0
 * Callers:
 *     <none>
 * Callees:
 *     ?LeaveLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x1800221F0 (-LeaveLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800581C4 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
char __fastcall BamoActivationControllerProxy::GetActivated(BamoActivationControllerProxy *this)
{
  __int64 v2; // rdi
  __int64 v3; // rbx
  __int64 v4; // rbp
  const char *v5; // r9
  __int64 v6; // rcx
  char v7; // si
  signed __int32 v8; // edx
  bool v9; // sf
  signed __int32 v10; // edx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v13; // [rsp+30h] [rbp+8h]

  v2 = *(_QWORD *)(*((_QWORD *)this + 3) + 24LL);
  v3 = 0LL;
  v13 = 0LL;
  v4 = *(_QWORD *)(v2 + 32);
  if ( *(_DWORD *)(v4 + 184) == GetCurrentThreadId() )
  {
    v2 = 0LL;
    v6 = 0LL;
  }
  else
  {
    v13 = v2;
    _InterlockedIncrement((volatile signed __int32 *)(v2 + 8));
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v4 + 16) + 24LL))(*(_QWORD *)(v4 + 16));
    *(_DWORD *)(v4 + 184) = GetCurrentThreadId();
    v6 = v2;
    v3 = v2;
  }
  v7 = *((_BYTE *)this + 40);
  if ( v2 )
    Microsoft::BamoImpl::BaseBamoConnectionImpl::LeaveLock(*(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(v6 + 32));
  if ( v3 )
  {
    v8 = _InterlockedExchangeAdd((volatile signed __int32 *)(v3 + 8), 0xFFFFFFFF);
    v9 = v8 - 1 < 0;
    v10 = v8 - 1;
    if ( v9 )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x33,
        (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoImplObject.inl",
        v5);
    if ( !v10 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 24LL))(v13);
  }
  return v7;
}
