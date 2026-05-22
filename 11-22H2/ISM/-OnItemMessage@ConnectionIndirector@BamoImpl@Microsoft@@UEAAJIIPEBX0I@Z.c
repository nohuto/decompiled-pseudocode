/*
 * XREFs of ?OnItemMessage@ConnectionIndirector@BamoImpl@Microsoft@@UEAAJIIPEBX0I@Z @ 0x1800034B0
 * Callers:
 *     <none>
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18005907C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall Microsoft::BamoImpl::ConnectionIndirector::OnItemMessage(
        Microsoft::BamoImpl::ConnectionIndirector *this,
        int a2,
        int a3,
        const void *a4,
        const void *a5,
        unsigned int a6)
{
  char *v10; // rdi
  char *v11; // rbx
  __int64 v12; // rbp
  __int64 v13; // r8
  __int64 v14; // rdi
  _DWORD *v15; // rax
  _DWORD *v16; // rcx
  unsigned int v17; // esi
  __int64 v18; // rdi
  const char *v19; // r9
  int v20; // eax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  _QWORD *v23; // [rsp+50h] [rbp+8h]

  v10 = (char *)this - 16;
  v11 = 0LL;
  v23 = 0LL;
  v12 = *((_QWORD *)this + 2);
  if ( *(_DWORD *)(v12 + 184) != GetCurrentThreadId() )
  {
    v23 = v10;
    _InterlockedIncrement((volatile signed __int32 *)v10 + 2);
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v12 + 16) + 24LL))(*(_QWORD *)(v12 + 16));
    *(_DWORD *)(v12 + 184) = GetCurrentThreadId();
    v11 = v10;
  }
  v14 = *((_QWORD *)this + 2);
  v15 = *(_DWORD **)(v14 + 192);
  v16 = *(_DWORD **)(v14 + 200);
  if ( v15 == v16 )
  {
LABEL_4:
    *(_DWORD *)(v14 + 32) = a2;
    v17 = (*(__int64 (__fastcall **)(const void *, const void *, _QWORD))(*(_QWORD *)a4 + 32LL))(a4, a5, a6);
    *(_DWORD *)(v14 + 32) = 0;
  }
  else
  {
    while ( *v15 != a3 )
    {
      if ( ++v15 == v16 )
        goto LABEL_4;
    }
    v17 = 0;
  }
  if ( v11 )
  {
    v18 = *((_QWORD *)v11 + 4);
    if ( *(_DWORD *)(v18 + 184) != GetCurrentThreadId() )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x93F,
        (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
        v19);
    *(_DWORD *)(v18 + 184) = 0;
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v18 + 16) + 32LL))(*(_QWORD *)(v18 + 16));
  }
  if ( v11 )
  {
    v20 = _InterlockedDecrement((volatile signed __int32 *)v11 + 2);
    if ( v20 < 0 )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x33,
        (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoImplObject.inl",
        (const char *)retaddr);
    if ( !v20 )
      (*(void (__fastcall **)(_QWORD *, _QWORD, __int64, wil::details::in1diag3 *))(*v23 + 24LL))(
        v23,
        *v23,
        v13,
        retaddr);
  }
  return v17;
}
