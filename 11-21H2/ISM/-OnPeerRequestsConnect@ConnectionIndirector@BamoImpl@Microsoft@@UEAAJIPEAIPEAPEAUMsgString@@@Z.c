/*
 * XREFs of ?OnPeerRequestsConnect@ConnectionIndirector@BamoImpl@Microsoft@@UEAAJIPEAIPEAPEAUMsgString@@@Z @ 0x18000A780
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18007BBB0 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
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
  __int64 v11; // rdx
  unsigned int v12; // esi
  __int64 v13; // r8
  __int64 v14; // rbx
  const char *v15; // r9
  int v16; // eax
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v8 = (volatile signed __int32 *)((char *)this - 24);
  v9 = 0LL;
  v10 = *((_QWORD *)this + 1);
  if ( *(_DWORD *)(v10 + 184) == GetCurrentThreadId() )
  {
    v8 = 0LL;
  }
  else
  {
    _InterlockedIncrement(v8 + 2);
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v10 + 16) + 24LL))(*(_QWORD *)(v10 + 16));
    *(_DWORD *)(v10 + 184) = GetCurrentThreadId();
    v9 = v8;
  }
  v12 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, unsigned int *, struct MsgString **))(**((_QWORD **)this + 1) + 32LL))(
          *((_QWORD *)this + 1),
          a2,
          a3,
          a4);
  if ( v8 )
  {
    v14 = *((_QWORD *)v9 + 4);
    if ( *(_DWORD *)(v14 + 184) != GetCurrentThreadId() )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x8CF,
        (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
        v15);
    *(_DWORD *)(v14 + 184) = 0;
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v14 + 16) + 32LL))(*(_QWORD *)(v14 + 16));
  }
  if ( v8 )
  {
    v16 = _InterlockedDecrement(v8 + 2);
    if ( v16 < 0 )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x33,
        (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoImplObject.inl",
        (const char *)retaddr);
    if ( !v16 )
      (*(void (__fastcall **)(volatile signed __int32 *, __int64, __int64, wil::details::in1diag3 *))(*(_QWORD *)v8 + 24LL))(
        v8,
        v11,
        v13,
        retaddr);
  }
  return v12;
}
