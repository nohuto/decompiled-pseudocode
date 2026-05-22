/*
 * XREFs of ?Release@BamoPrincipalImpl@BamoImpl@Microsoft@@UEAAKXZ @ 0x18000BB10
 * Callers:
 *     <none>
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800581C4 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 *     ?TryDisposeAndNotifyRemoteProxies@BamoPrincipalImpl@BamoImpl@Microsoft@@AEAA_NXZ @ 0x18009FB20 (-TryDisposeAndNotifyRemoteProxies@BamoPrincipalImpl@BamoImpl@Microsoft@@AEAA_NXZ.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall Microsoft::BamoImpl::BamoPrincipalImpl::Release(Microsoft::BamoImpl::BamoPrincipalImpl *this)
{
  bool v2; // r14
  __int64 v3; // rbx
  __int64 v4; // rdi
  const char *v5; // r9
  int v6; // edi
  __int64 v8; // r15
  const char *v9; // r9
  int v10; // ebp
  __int64 v11; // rax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v13; // [rsp+50h] [rbp+8h]

  v2 = 0;
  v3 = *((_QWORD *)this + 2);
  v13 = 0LL;
  v4 = *(_QWORD *)(v3 + 32);
  if ( *(_DWORD *)(v4 + 184) != GetCurrentThreadId() )
  {
    v13 = v3;
    _InterlockedIncrement((volatile signed __int32 *)(v3 + 8));
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v4 + 16) + 24LL))(*(_QWORD *)(v4 + 16));
    *(_DWORD *)(v4 + 184) = GetCurrentThreadId();
  }
  v6 = _InterlockedDecrement((volatile signed __int32 *)this + 2);
  if ( v6 < 0 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x33,
      (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoImplObject.inl",
      v5);
  if ( !v6 )
  {
    (*(void (__fastcall **)(Microsoft::BamoImpl::BamoPrincipalImpl *))(*(_QWORD *)this + 24LL))(this);
    v2 = Microsoft::BamoImpl::BamoPrincipalImpl::TryDisposeAndNotifyRemoteProxies(this);
  }
  if ( v13 )
  {
    v8 = *(_QWORD *)(v13 + 32);
    if ( *(_DWORD *)(v8 + 184) != GetCurrentThreadId() )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x93F,
        (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
        v9);
    *(_DWORD *)(v8 + 184) = 0;
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v8 + 16) + 32LL))(*(_QWORD *)(v8 + 16));
  }
  if ( v13 )
  {
    v10 = _InterlockedDecrement((volatile signed __int32 *)(v13 + 8));
    if ( v10 < 0 )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x33,
        (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoImplObject.inl",
        v5);
    if ( !v10 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 24LL))(v13);
  }
  if ( v2 )
  {
    v11 = (*(__int64 (__fastcall **)(Microsoft::BamoImpl::BamoPrincipalImpl *))(*(_QWORD *)this + 56LL))(this);
    if ( v11 )
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v11 + 24LL))(v11, 1LL);
  }
  return (unsigned int)v6;
}
