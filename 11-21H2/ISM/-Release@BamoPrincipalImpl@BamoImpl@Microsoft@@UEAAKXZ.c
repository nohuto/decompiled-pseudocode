/*
 * XREFs of ?Release@BamoPrincipalImpl@BamoImpl@Microsoft@@UEAAKXZ @ 0x180005320
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18007BBB0 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall Microsoft::BamoImpl::BamoPrincipalImpl::Release(Microsoft::BamoImpl::BamoPrincipalImpl *this)
{
  __int64 v2; // rbx
  __int64 v3; // rdi
  const char *v4; // r9
  int v5; // edi
  __int64 v6; // r14
  const char *v7; // r9
  int v8; // ebp
  __int64 v10; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v12; // [rsp+40h] [rbp+8h]

  v2 = *((_QWORD *)this + 2);
  v12 = 0LL;
  v3 = *(_QWORD *)(v2 + 32);
  if ( *(_DWORD *)(v3 + 184) != GetCurrentThreadId() )
  {
    v12 = v2;
    _InterlockedIncrement((volatile signed __int32 *)(v2 + 8));
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v3 + 16) + 24LL))(*(_QWORD *)(v3 + 16));
    *(_DWORD *)(v3 + 184) = GetCurrentThreadId();
  }
  v5 = _InterlockedDecrement((volatile signed __int32 *)this + 2);
  if ( v5 < 0 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x33,
      (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoImplObject.inl",
      v4);
  if ( !v5 )
    (*(void (__fastcall **)(Microsoft::BamoImpl::BamoPrincipalImpl *))(*(_QWORD *)this + 24LL))(this);
  if ( v12 )
  {
    v6 = *(_QWORD *)(v12 + 32);
    if ( *(_DWORD *)(v6 + 184) != GetCurrentThreadId() )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x8CF,
        (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
        v7);
    *(_DWORD *)(v6 + 184) = 0;
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v6 + 16) + 32LL))(*(_QWORD *)(v6 + 16));
  }
  if ( v12 )
  {
    v8 = _InterlockedDecrement((volatile signed __int32 *)(v12 + 8));
    if ( v8 < 0 )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x33,
        (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoImplObject.inl",
        v4);
    if ( !v8 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 24LL))(v12);
  }
  if ( !v5 )
  {
    v10 = (*(__int64 (__fastcall **)(Microsoft::BamoImpl::BamoPrincipalImpl *))(*(_QWORD *)this + 56LL))(this);
    if ( v10 )
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v10 + 24LL))(v10, 1LL);
  }
  return (unsigned int)v5;
}
