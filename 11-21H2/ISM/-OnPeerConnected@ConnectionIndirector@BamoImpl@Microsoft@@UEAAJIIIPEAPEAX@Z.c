/*
 * XREFs of ?OnPeerConnected@ConnectionIndirector@BamoImpl@Microsoft@@UEAAJIIIPEAPEAX@Z @ 0x180006A30
 * Callers:
 *     <none>
 * Callees:
 *     ?OnPeerConnected@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJIIIPEAPEAX@Z @ 0x180006B80 (-OnPeerConnected@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJIIIPEAPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18007BBB0 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall Microsoft::BamoImpl::ConnectionIndirector::OnPeerConnected(
        Microsoft::BamoImpl::ConnectionIndirector *this,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        void **a5)
{
  volatile signed __int32 *v9; // rdi
  volatile signed __int32 *v10; // rbx
  __int64 v11; // rsi
  __int64 v12; // rdx
  unsigned int v13; // esi
  __int64 v14; // r8
  __int64 v15; // rbx
  const char *v16; // r9
  int v17; // eax
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v9 = (volatile signed __int32 *)((char *)this - 16);
  v10 = 0LL;
  v11 = *((_QWORD *)this + 2);
  if ( *(_DWORD *)(v11 + 184) == GetCurrentThreadId() )
  {
    v9 = 0LL;
  }
  else
  {
    _InterlockedIncrement(v9 + 2);
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v11 + 16) + 24LL))(*(_QWORD *)(v11 + 16));
    *(_DWORD *)(v11 + 184) = GetCurrentThreadId();
    v10 = v9;
  }
  v13 = Microsoft::BamoImpl::BaseBamoConnectionImpl::OnPeerConnected(
          *((Microsoft::BamoImpl::BaseBamoConnectionImpl **)this + 2),
          a2,
          a3,
          a4,
          a5);
  if ( v9 )
  {
    v15 = *((_QWORD *)v10 + 4);
    if ( *(_DWORD *)(v15 + 184) != GetCurrentThreadId() )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x8CF,
        (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
        v16);
    *(_DWORD *)(v15 + 184) = 0;
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v15 + 16) + 32LL))(*(_QWORD *)(v15 + 16));
  }
  if ( v9 )
  {
    v17 = _InterlockedDecrement(v9 + 2);
    if ( v17 < 0 )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x33,
        (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoImplObject.inl",
        (const char *)retaddr);
    if ( !v17 )
      (*(void (__fastcall **)(volatile signed __int32 *, __int64, __int64, wil::details::in1diag3 *))(*(_QWORD *)v9 + 24LL))(
        v9,
        v12,
        v14,
        retaddr);
  }
  return v13;
}
