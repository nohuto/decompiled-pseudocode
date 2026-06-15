/*
 * XREFs of std::find_if_std::_List_const_iterator_std::_List_val_std::_List_simple_types_std::pair_CAudioSessionInstanceId_const__wil::com_ptr_t_CAudioSession_wil::err_returncode_policy___________lambda_c88a87a408b415d98ab081b1d6082a95___ @ 0x1800E7244
 * Callers:
 *     ?FindAudioSession@CAudioSessionManager@@IEAAJKPEBU_GUID@@PEAPEAVCAudioSession@@@Z @ 0x1800E82A0 (-FindAudioSession@CAudioSessionManager@@IEAAJKPEBU_GUID@@PEAPEAVCAudioSession@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180005738 (--1-$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1CAudioSessionInstanceId@@QEAA@XZ @ 0x18001CDF4 (--1CAudioSessionInstanceId@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1800669B0 (__security_check_cookie.c)
 *     ??$?0$$CBVCAudioSessionInstanceId@@V?$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@$0A@@?$pair@VCAudioSessionInstanceId@@V?$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@@std@@QEAA@AEBU?$pair@$$CBVCAudioSessionInstanceId@@V?$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@@1@@Z @ 0x1800E6DF4 (--$-0$$CBVCAudioSessionInstanceId@@V-$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil.c)
 */

_QWORD *__fastcall std::find_if_std::_List_const_iterator_std::_List_val_std::_List_simple_types_std::pair_CAudioSessionInstanceId_const__wil::com_ptr_t_CAudioSession_wil::err_returncode_policy___________lambda_c88a87a408b415d98ab081b1d6082a95___(
        _QWORD *a1,
        _QWORD *a2,
        _QWORD *a3,
        __int64 a4)
{
  int v8; // esi
  _QWORD *v9; // rcx
  __int64 v10; // rax
  _BYTE v12[80]; // [rsp+20h] [rbp-88h] BYREF
  __int64 v13; // [rsp+70h] [rbp-38h] BYREF

  while ( a2 != a3 )
  {
    std::pair<CAudioSessionInstanceId,wil::com_ptr_t<CAudioSession,wil::err_returncode_policy>>::pair<CAudioSessionInstanceId,wil::com_ptr_t<CAudioSession,wil::err_returncode_policy>>(
      (CAudioSessionInstanceId *)v12,
      a2 + 2);
    if ( *(_DWORD *)(v13 + 644) != **(_DWORD **)a4 )
      goto LABEL_3;
    v9 = **(_QWORD ***)(a4 + 8);
    if ( !v9 )
      goto LABEL_8;
    v10 = *(_QWORD *)(v13 + 608) - *v9;
    if ( !v10 )
      v10 = *(_QWORD *)(v13 + 616) - v9[1];
    if ( v10 )
LABEL_3:
      v8 = 0;
    else
LABEL_8:
      v8 = 1;
    wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v13);
    CAudioSessionInstanceId::~CAudioSessionInstanceId((CAudioSessionInstanceId *)v12);
    if ( v8 )
      break;
    a2 = (_QWORD *)*a2;
  }
  *a1 = a2;
  return a1;
}
