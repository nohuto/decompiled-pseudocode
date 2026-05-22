/*
 * XREFs of ?OnDisconnectedThunk@BamoActivatableEntityStubImpl@BamoImpl@@UEAAJXZ @ 0x1800139F0
 * Callers:
 *     <none>
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800581C4 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180058998 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall BamoImpl::BamoActivatableEntityStubImpl::OnDisconnectedThunk(
        BamoImpl::BamoActivatableEntityStubImpl *this)
{
  unsigned int v2; // esi
  int *v3; // rbx
  int *v4; // r14
  __int64 v5; // rsi
  __int64 v6; // rdi
  const char *v7; // r9
  int v8; // eax
  int v9; // eax
  int v11; // [rsp+20h] [rbp-38h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v2 = 0;
  v3 = (int *)*((_QWORD *)this + 3);
  if ( v3[2] > 0 )
  {
    v4 = v3 - 4;
    v5 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 4) + 24LL) + 32LL);
    (**(void (__fastcall ***)(int *))v3)(v3);
    v6 = 0LL;
    v11 = 0;
    if ( !*(_DWORD *)(v5 + 188) )
    {
      v6 = v5;
      v11 = v5;
      if ( *(_DWORD *)(v5 + 184) != GetCurrentThreadId() )
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          (void *)0x93F,
          (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
          v7);
      *(_DWORD *)(v5 + 184) = 0;
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v5 + 16) + 32LL))(*(_QWORD *)(v5 + 16));
    }
    if ( v3 != 0LL )
    {
      v8 = (*(__int64 (__fastcall **)(int *))(*(_QWORD *)v4 + 40LL))(v3 - 4);
      if ( v8 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x76,
          (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
          (const char *)(unsigned int)v8,
          v11);
    }
    v2 = (*(__int64 (__fastcall **)(int *, char *))(*(_QWORD *)v4 + 80LL))(v3 - 4, (char *)this - 16);
    if ( (v3 != 0LL ? 2 : 0) != 0 )
    {
      v9 = (*(__int64 (__fastcall **)(int *))(*(_QWORD *)v4 + 48LL))(v3 - 4);
      if ( v9 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x87,
          (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
          (const char *)(unsigned int)v9,
          v11);
    }
    if ( v6 )
    {
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v6 + 16) + 24LL))(*(_QWORD *)(v6 + 16));
      *(_DWORD *)(v6 + 184) = GetCurrentThreadId();
    }
    (*(void (__fastcall **)(int *))(*(_QWORD *)v3 + 8LL))(v3);
  }
  return v2;
}
