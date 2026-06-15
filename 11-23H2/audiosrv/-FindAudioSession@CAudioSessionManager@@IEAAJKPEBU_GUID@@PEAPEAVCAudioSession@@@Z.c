/*
 * XREFs of ?FindAudioSession@CAudioSessionManager@@IEAAJKPEBU_GUID@@PEAPEAVCAudioSession@@@Z @ 0x1800E82A0
 * Callers:
 *     ?DisconnectSessionsForTsSession@CAudioSessionManager@@QEAAJKW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@@Z @ 0x1800E8058 (-DisconnectSessionsForTsSession@CAudioSessionManager@@QEAAJKW4__MIDL___MIDL_itf_mmdeviceapi_0000.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$copy_to@VCAudioSession@@@?$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@QEBAJPEAPEAVCAudioSession@@@Z @ 0x180055834 (--$copy_to@VCAudioSession@@@-$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@QEBAJP.c)
 *     std::find_if_std::_List_const_iterator_std::_List_val_std::_List_simple_types_std::pair_CAudioSessionInstanceId_const__wil::com_ptr_t_CAudioSession_wil::err_returncode_policy___________lambda_c88a87a408b415d98ab081b1d6082a95___ @ 0x1800E7244 (std--find_if_std--_List_const_iterator_std--_List_val_std--_List_simple_types_std--_ea_1800E7244.c)
 */

__int64 __fastcall CAudioSessionManager::FindAudioSession(
        CAudioSessionManager *this,
        int a2,
        const struct _GUID *a3,
        struct CAudioSession **a4)
{
  struct _RTL_CRITICAL_SECTION *v6; // rdi
  _QWORD *v7; // r8
  int v8; // eax
  unsigned int v9; // ebx
  int v11[2]; // [rsp+20h] [rbp-28h] BYREF
  _QWORD v12[3]; // [rsp+30h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  int v14; // [rsp+58h] [rbp+10h] BYREF
  const struct _GUID *v15; // [rsp+60h] [rbp+18h] BYREF

  v15 = a3;
  v14 = a2;
  *(_QWORD *)v11 = &GUID_SystemSounds_AudioSessionId;
  *a4 = 0LL;
  v6 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 8);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 8));
  v7 = (_QWORD *)*((_QWORD *)this + 7);
  v12[0] = &v14;
  v12[1] = v11;
  std::find_if_std::_List_const_iterator_std::_List_val_std::_List_simple_types_std::pair_CAudioSessionInstanceId_const__wil::com_ptr_t_CAudioSession_wil::err_returncode_policy___________lambda_c88a87a408b415d98ab081b1d6082a95___(
    &v15,
    (_QWORD *)*v7,
    v7,
    (__int64)v12);
  if ( v15 == *((const struct _GUID **)this + 7) )
  {
    if ( v6 )
      LeaveCriticalSection(v6);
    return 2147942402LL;
  }
  else
  {
    v8 = wil::com_ptr_t<CAudioSession,wil::err_returncode_policy>::copy_to<CAudioSession>((__int64 *)&v15[6], a4);
    v9 = v8;
    if ( v8 >= 0 )
    {
      if ( v6 )
        LeaveCriticalSection(v6);
      return 0LL;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x49,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanager.cpp",
        (const char *)(unsigned int)v8);
      if ( v6 )
        LeaveCriticalSection(v6);
      return v9;
    }
  }
}
