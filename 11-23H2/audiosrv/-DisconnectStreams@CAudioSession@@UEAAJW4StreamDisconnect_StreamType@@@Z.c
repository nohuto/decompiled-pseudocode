/*
 * XREFs of ?DisconnectStreams@CAudioSession@@UEAAJW4StreamDisconnect_StreamType@@@Z @ 0x1800DF760
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Move_unchecked@PEAV?$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@PEAV12@@std@@YAPEAV?$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@PEAV12@00@Z @ 0x180017214 (--$_Move_unchecked@PEAV-$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@PEAV12@@std@.c)
 *     ??$_Destroy_range@V?$allocator@V?$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@QEAV12@AEAV?$allocator@V?$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@@0@@Z @ 0x18001C500 (--$_Destroy_range@V-$allocator@V-$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@@st.c)
 *     ?DisconnectStreamList@CAudioSession@@AEAAJXZ @ 0x1800510AC (-DisconnectStreamList@CAudioSession@@AEAAJXZ.c)
 *     WPP_SF_S @ 0x1800DDDDC (WPP_SF_S.c)
 *     std::remove_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_wil::com_ptr_t_CAudioStream_wil::err_returncode_policy_________lambda_6c82d168c37c23bf8bb15eab1fa87461___ @ 0x1800DE984 (std--remove_if_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_wil--com_ptr_t_CAudioSt.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAudioSession::DisconnectStreams(__int64 a1, int a2)
{
  struct _RTL_CRITICAL_SECTION *v3; // rsi
  __int64 *v4; // rcx
  __int64 *v5; // rbx
  const char *v6; // r9
  __int64 result; // rax
  _QWORD v8[5]; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 *v10; // [rsp+50h] [rbp+8h] BYREF
  int v11; // [rsp+58h] [rbp+10h] BYREF
  struct _RTL_CRITICAL_SECTION *v12; // [rsp+60h] [rbp+18h]

  v11 = a2;
  v3 = (struct _RTL_CRITICAL_SECTION *)(a1 + 56);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 56));
  v12 = v3;
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x5Au, (__int64)&WPP_bb8c20e8cc9f3f3c48250634c7540f80_Traceguids, 0LL);
  }
  v8[0] = &v11;
  v8[1] = a1 - 8;
  try
  {
    std::remove_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_wil::com_ptr_t_CAudioStream_wil::err_returncode_policy_________lambda_6c82d168c37c23bf8bb15eab1fa87461___(
      &v10,
      *(__int64 **)(a1 + 104),
      *(__int64 **)(a1 + 112),
      (__int64)v8);
    v4 = *(__int64 **)(a1 + 112);
    if ( v10 != v4 )
    {
      v5 = std::_Move_unchecked<wil::com_ptr_t<CAudioStream,wil::err_returncode_policy> *,wil::com_ptr_t<CAudioStream,wil::err_returncode_policy> *>(
             v4,
             *(__int64 **)(a1 + 112),
             v10);
      std::_Destroy_range<std::allocator<wil::com_ptr_t<CAudioStream,wil::err_returncode_policy>>>(
        v5,
        *(__int64 **)(a1 + 112));
      *(_QWORD *)(a1 + 112) = v5;
    }
    if ( v3 )
      LeaveCriticalSection(v3);
    CAudioSession::DisconnectStreamList((CAudioSession *)(a1 - 8));
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x12AD,
                           (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
                           v6);
  }
  return result;
}
