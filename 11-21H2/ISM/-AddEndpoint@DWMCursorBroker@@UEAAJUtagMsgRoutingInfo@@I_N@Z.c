/*
 * XREFs of ?AddEndpoint@DWMCursorBroker@@UEAAJUtagMsgRoutingInfo@@I_N@Z @ 0x1801CE010
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007FD5C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CreateMotionTransformAndVerifySend@DWMCursorBroker@@AEAAJPEAVDWMCursor@@I@Z @ 0x1801CE138 (-CreateMotionTransformAndVerifySend@DWMCursorBroker@@AEAAJPEAVDWMCursor@@I@Z.c)
 *     ?GetNextEndpointIndex@DWMCursorBroker@@AEAAJPEAI@Z @ 0x1801CE97C (-GetNextEndpointIndex@DWMCursorBroker@@AEAAJPEAI@Z.c)
 */

__int64 __fastcall DWMCursorBroker::AddEndpoint(__int64 a1, __int64 a2, int a3, char a4)
{
  int v8; // eax
  DWMCursorBroker *v9; // rsi
  int NextEndpointIndex; // eax
  __int64 v11; // rdx
  __int64 v12; // rbx
  __int64 v13; // rbp
  __int64 ***v14; // rdi
  __int64 **i; // rbx
  unsigned int v17[14]; // [rsp+20h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v8 = _Mtx_lock((_Mtx_t)&DWMCursorBroker::s_lock);
  if ( v8 )
  {
    std::_Throw_C_error(v8);
    __debugbreak();
  }
  v9 = (DWMCursorBroker *)(a1 - 8);
  NextEndpointIndex = DWMCursorBroker::GetNextEndpointIndex((DWMCursorBroker *)(a1 - 8), v17);
  if ( NextEndpointIndex < 0 )
  {
    v11 = 240LL;
LABEL_12:
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      v11,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\lib\\dwmcursorbroker.cpp",
      (const char *)(unsigned int)NextEndpointIndex);
    goto LABEL_13;
  }
  v12 = v17[0];
  v13 = 3LL * v17[0];
  NextEndpointIndex = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(**(_QWORD **)(a1 + 168) + 120LL))(
                        *(_QWORD *)(a1 + 168),
                        a2,
                        a1 + 8 * (v13 + 26));
  if ( NextEndpointIndex < 0 )
  {
    v11 = 244LL;
    goto LABEL_12;
  }
  *(_DWORD *)(a1 + 8 * v13 + 200) = a3;
  *(_BYTE *)(a1 + 24 * v12 + 216) = a4;
  v14 = *(__int64 ****)(a1 + 48);
  for ( i = *v14; i != (__int64 **)v14; i = (__int64 **)*i )
  {
    NextEndpointIndex = DWMCursorBroker::CreateMotionTransformAndVerifySend(v9, (struct DWMCursor *)i[3], v17[0]);
    if ( NextEndpointIndex < 0 )
    {
      v11 = 251LL;
      goto LABEL_12;
    }
  }
LABEL_13:
  _Mtx_unlock((_Mtx_t)&DWMCursorBroker::s_lock);
  return 0LL;
}
