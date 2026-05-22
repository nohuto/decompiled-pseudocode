/*
 * XREFs of ?OnPeerConnected@ConnectionIndirector@BamoImpl@Microsoft@@UEAAJIIIPEAPEAX@Z @ 0x18000F070
 * Callers:
 *     <none>
 * Callees:
 *     ?OnPeerConnected@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJIIIPEAPEAX@Z @ 0x18000F1B0 (-OnPeerConnected@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJIIIPEAPEAX@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18005907C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
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
  volatile signed __int32 *v12; // rsi
  unsigned int v13; // ebp
  const char *v14; // r9
  __int64 v15; // rdi
  const char *v16; // r9
  signed __int32 v17; // edx
  bool v18; // sf
  signed __int32 v19; // edx
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  volatile signed __int32 *v22; // [rsp+60h] [rbp+8h]

  v9 = (volatile signed __int32 *)((char *)this - 16);
  v10 = 0LL;
  v22 = 0LL;
  v11 = *((_QWORD *)this + 2);
  if ( *(_DWORD *)(v11 + 184) == GetCurrentThreadId() )
  {
    v9 = 0LL;
    v12 = 0LL;
  }
  else
  {
    v22 = v9;
    _InterlockedIncrement(v9 + 2);
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v11 + 16) + 24LL))(*(_QWORD *)(v11 + 16));
    *(_DWORD *)(v11 + 184) = GetCurrentThreadId();
    v12 = v9;
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
    v15 = *((_QWORD *)v12 + 4);
    if ( *(_DWORD *)(v15 + 184) != GetCurrentThreadId() )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x93F,
        (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
        v16);
    *(_DWORD *)(v15 + 184) = 0;
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v15 + 16) + 32LL))(*(_QWORD *)(v15 + 16));
  }
  if ( v10 )
  {
    v17 = _InterlockedExchangeAdd(v10 + 2, 0xFFFFFFFF);
    v18 = v17 - 1 < 0;
    v19 = v17 - 1;
    if ( v18 )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x33,
        (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoImplObject.inl",
        v14);
    if ( !v19 )
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v22 + 24LL))(v22);
  }
  return v13;
}
