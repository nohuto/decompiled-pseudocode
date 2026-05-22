/*
 * XREFs of ?OnZeroReferenceCount@BamoProxyImpl@BamoImpl@Microsoft@@EEAAXXZ @ 0x18000E480
 * Callers:
 *     <none>
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800581C4 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall Microsoft::BamoImpl::BamoProxyImpl::OnZeroReferenceCount(Microsoft::BamoImpl::BamoProxyImpl *this)
{
  _QWORD *v2; // rcx
  __int64 v3; // rdx
  __int64 v4; // rdi
  __int64 v5; // rsi
  const char *v6; // r9
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // r8
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  if ( *((_BYTE *)this + 28) )
  {
    v2 = (_QWORD *)*((_QWORD *)this + 2);
    v3 = *(_QWORD *)(v2[3] + 32LL);
    if ( *((_BYTE *)this + 29) )
      goto LABEL_7;
    if ( *(_QWORD *)(v3 + 64) )
      (*(void (__fastcall **)(_QWORD *, _QWORD))(*v2 + 72LL))(v2, *((unsigned int *)this + 6));
    if ( *((_BYTE *)this + 29) )
    {
LABEL_7:
      v4 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 24LL) + 32LL);
      v5 = 0LL;
      if ( v4 && *(_DWORD *)(v4 + 184) == GetCurrentThreadId() && !*(_DWORD *)(v4 + 188) )
      {
        v5 = v4;
        if ( *(_DWORD *)(v4 + 184) != GetCurrentThreadId() )
          wil::details::in1diag3::_FailFast_Unexpected(
            retaddr,
            (void *)0x93F,
            (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
            v6);
        *(_DWORD *)(v4 + 184) = 0;
        (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v4 + 16) + 32LL))(*(_QWORD *)(v4 + 16));
      }
      v7 = (*(__int64 (__fastcall **)(Microsoft::BamoImpl::BamoProxyImpl *, __int64))(*(_QWORD *)this + 56LL))(this, v3);
      v9 = v7;
      if ( v7 )
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v7 + 24LL))(v7, 1LL);
      if ( v5 )
      {
        (*(void (__fastcall **)(_QWORD, __int64, __int64))(**(_QWORD **)(v5 + 16) + 24LL))(*(_QWORD *)(v5 + 16), v8, v9);
        *(_DWORD *)(v5 + 184) = GetCurrentThreadId();
      }
    }
  }
}
