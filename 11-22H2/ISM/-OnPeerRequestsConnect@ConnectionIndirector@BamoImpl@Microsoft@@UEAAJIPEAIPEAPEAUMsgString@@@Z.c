/*
 * XREFs of ?OnPeerRequestsConnect@ConnectionIndirector@BamoImpl@Microsoft@@UEAAJIPEAIPEAPEAUMsgString@@@Z @ 0x1800135C0
 * Callers:
 *     <none>
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18005907C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall Microsoft::BamoImpl::ConnectionIndirector::OnPeerRequestsConnect(
        Microsoft::BamoImpl::ConnectionIndirector *this,
        unsigned int a2,
        unsigned int *a3,
        struct MsgString **a4)
{
  volatile signed __int32 *v8; // rdi
  volatile signed __int32 *v9; // rbx
  __int64 v10; // rsi
  volatile signed __int32 *v11; // rsi
  unsigned int v12; // ebp
  const char *v13; // r9
  __int64 v14; // rdi
  const char *v15; // r9
  signed __int32 v16; // edx
  bool v17; // sf
  signed __int32 v18; // edx
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  volatile signed __int32 *v21; // [rsp+60h] [rbp+8h]

  v8 = (volatile signed __int32 *)((char *)this - 24);
  v9 = 0LL;
  v21 = 0LL;
  v10 = *((_QWORD *)this + 1);
  if ( *(_DWORD *)(v10 + 184) == GetCurrentThreadId() )
  {
    v8 = 0LL;
    v11 = 0LL;
  }
  else
  {
    v21 = v8;
    _InterlockedIncrement(v8 + 2);
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v10 + 16) + 24LL))(*(_QWORD *)(v10 + 16));
    *(_DWORD *)(v10 + 184) = GetCurrentThreadId();
    v11 = v8;
    v9 = v8;
  }
  v12 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, unsigned int *, struct MsgString **))(**((_QWORD **)this + 1) + 32LL))(
          *((_QWORD *)this + 1),
          a2,
          a3,
          a4);
  if ( v8 )
  {
    v14 = *((_QWORD *)v11 + 4);
    if ( *(_DWORD *)(v14 + 184) != GetCurrentThreadId() )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x93F,
        (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
        v15);
    *(_DWORD *)(v14 + 184) = 0;
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v14 + 16) + 32LL))(*(_QWORD *)(v14 + 16));
  }
  if ( v9 )
  {
    v16 = _InterlockedExchangeAdd(v9 + 2, 0xFFFFFFFF);
    v17 = v16 - 1 < 0;
    v18 = v16 - 1;
    if ( v17 )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x33,
        (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoImplObject.inl",
        v13);
    if ( !v18 )
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v21 + 24LL))(v21);
  }
  return v12;
}
