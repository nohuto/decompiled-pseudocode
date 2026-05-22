/*
 * XREFs of ?Release@BamoProxyImpl@BamoImpl@Microsoft@@UEAAKXZ @ 0x1800096C0
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@BamoImplObject@BamoImpl@Microsoft@@UEAAKXZ @ 0x18000F950 (-Release@BamoImplObject@BamoImpl@Microsoft@@UEAAKXZ.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18005907C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall Microsoft::BamoImpl::BamoProxyImpl::Release(Microsoft::BamoImpl::BamoProxyImpl *this)
{
  __int64 v2; // rbx
  __int64 v3; // rbx
  __int64 v4; // rdi
  const char *v5; // r9
  int v6; // edi
  __int64 v7; // rbp
  const char *v8; // r9
  int v9; // esi
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v12; // [rsp+40h] [rbp+8h]

  v2 = *((_QWORD *)this + 2);
  if ( v2 && (v3 = *(_QWORD *)(v2 + 24), v4 = *(_QWORD *)(v3 + 32), *(int *)(v4 + 8) > 0) )
  {
    v12 = 0LL;
    if ( *(_DWORD *)(v4 + 184) != GetCurrentThreadId() )
    {
      v12 = v3;
      if ( v3 )
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
      (*(void (__fastcall **)(Microsoft::BamoImpl::BamoProxyImpl *))(*(_QWORD *)this + 24LL))(this);
    if ( v12 )
    {
      v7 = *(_QWORD *)(v12 + 32);
      if ( *(_DWORD *)(v7 + 184) != GetCurrentThreadId() )
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          (void *)0x93F,
          (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
          v8);
      *(_DWORD *)(v7 + 184) = 0;
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v7 + 16) + 32LL))(*(_QWORD *)(v7 + 16));
    }
    if ( v12 )
    {
      v9 = _InterlockedDecrement((volatile signed __int32 *)(v12 + 8));
      if ( v9 < 0 )
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          (void *)0x33,
          (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoImplObject.inl",
          v5);
      if ( !v9 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 24LL))(v12);
    }
  }
  else
  {
    return Microsoft::BamoImpl::BamoImplObject::Release(this);
  }
  return (unsigned int)v6;
}
