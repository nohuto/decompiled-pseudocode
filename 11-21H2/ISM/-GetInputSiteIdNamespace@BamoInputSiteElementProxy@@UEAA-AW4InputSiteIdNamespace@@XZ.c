/*
 * XREFs of ?GetInputSiteIdNamespace@BamoInputSiteElementProxy@@UEAA?AW4InputSiteIdNamespace@@XZ @ 0x18001ACD0
 * Callers:
 *     <none>
 * Callees:
 *     ?LeaveLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x180019910 (-LeaveLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18007BBB0 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall BamoInputSiteElementProxy::GetInputSiteIdNamespace(__int64 a1)
{
  __int64 v2; // rdi
  __int64 v3; // rbx
  __int64 v4; // rbp
  unsigned int v5; // esi
  __int64 v6; // rdx
  __int64 v7; // r8
  int v8; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 24LL);
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
  v5 = *(_DWORD *)(a1 + 40);
  if ( v2 )
  {
    Microsoft::BamoImpl::BaseBamoConnectionImpl::LeaveLock(*(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(v3 + 32));
    v8 = _InterlockedDecrement((volatile signed __int32 *)(v2 + 8));
    if ( v8 < 0 )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x33,
        (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoImplObject.inl",
        (const char *)retaddr);
    if ( !v8 )
      (*(void (__fastcall **)(__int64, __int64, __int64, wil::details::in1diag3 *))(*(_QWORD *)v2 + 24LL))(
        v2,
        v6,
        v7,
        retaddr);
  }
  return v5;
}
