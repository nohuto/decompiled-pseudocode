/*
 * XREFs of ?UnregisterStreamVolumeNotifications@CAudioStream@@UEAAJPEAUIAudioStreamVolumeCallback@@@Z @ 0x1800EE250
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Destroy_range@V?$allocator@V?$com_ptr_t@VCEndpointCharacteristics@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@VCEndpointCharacteristics@@Uerr_returncode_policy@wil@@@wil@@QEAV12@AEAV?$allocator@V?$com_ptr_t@VCEndpointCharacteristics@@Uerr_returncode_policy@wil@@@wil@@@0@@Z @ 0x180016D94 (--$_Destroy_range@V-$allocator@V-$com_ptr_t@VCEndpointCharacteristics@@Uerr_returncode_policy@wi.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_Move_unchecked@PEAV?$com_ptr_t@UIAudioStreamVolumeCallback@@Uerr_returncode_policy@wil@@@wil@@PEAV12@@std@@YAPEAV?$com_ptr_t@UIAudioStreamVolumeCallback@@Uerr_returncode_policy@wil@@@wil@@PEAV12@00@Z @ 0x1800EAECC (--$_Move_unchecked@PEAV-$com_ptr_t@UIAudioStreamVolumeCallback@@Uerr_returncode_policy@wil@@@wil.c)
 *     std::remove_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_wil::com_ptr_t_IAudioStreamVolumeCallback_wil::err_returncode_policy_________lambda_91f83696ad2c271a79dfe88b6adf0c8f___ @ 0x1800EB1D0 (std--remove_if_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_wil--com_ptr_t_IAudioSt.c)
 */

__int64 __fastcall CAudioStream::UnregisterStreamVolumeNotifications(
        CAudioStream *this,
        struct IAudioStreamVolumeCallback *a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rsi
  __int64 *v5; // rbx
  __int64 **v6; // rax
  __int64 *v7; // rbx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct IAudioStreamVolumeCallback *v9; // [rsp+38h] [rbp+10h] BYREF
  __int64 *v10; // [rsp+40h] [rbp+18h] BYREF

  v9 = a2;
  if ( a2 )
  {
    v4 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 256);
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 256));
    v5 = (__int64 *)*((_QWORD *)this + 38);
    v6 = std::remove_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_wil::com_ptr_t_IAudioStreamVolumeCallback_wil::err_returncode_policy_________lambda_91f83696ad2c271a79dfe88b6adf0c8f___(
           &v10,
           *((__int64 **)this + 37),
           v5,
           &v9);
    if ( *v6 != v5 )
    {
      v7 = std::_Move_unchecked<wil::com_ptr_t<IAudioStreamVolumeCallback,wil::err_returncode_policy> *,wil::com_ptr_t<IAudioStreamVolumeCallback,wil::err_returncode_policy> *>(
             v5,
             *((__int64 **)this + 38),
             *v6);
      std::_Destroy_range<std::allocator<wil::com_ptr_t<CEndpointCharacteristics,wil::err_returncode_policy>>>(
        v7,
        *((__int64 **)this + 38));
      *((_QWORD *)this + 38) = v7;
    }
    if ( v4 )
      LeaveCriticalSection(v4);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x301,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
      (const char *)0x80004003LL);
    return 2147500035LL;
  }
}
