/*
 * XREFs of std::find_if_std::_List_const_iterator_std::_List_val_std::_List_simple_types_std::pair_CAudioSessionInstanceId_const__wil::com_ptr_t_CAudioSession_wil::err_returncode_policy___________lambda_badcd54a9567467c8cd0af6fdc9e1627___ @ 0x1800E7198
 * Callers:
 *     ?FindExclusiveModeAudioSession@CAudioSessionManager@@QEAAJPEAPEAVCAudioSession@@@Z @ 0x1800E83A0 (-FindExclusiveModeAudioSession@CAudioSessionManager@@QEAAJPEAPEAVCAudioSession@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180005738 (--1-$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1CAudioSessionInstanceId@@QEAA@XZ @ 0x18001CDF4 (--1CAudioSessionInstanceId@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1800669B0 (__security_check_cookie.c)
 *     ?IsExclusiveModeSession@CAudioSession@@QEAAHXZ @ 0x1800E0E8C (-IsExclusiveModeSession@CAudioSession@@QEAAHXZ.c)
 *     ??$?0$$CBVCAudioSessionInstanceId@@V?$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@$0A@@?$pair@VCAudioSessionInstanceId@@V?$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@@std@@QEAA@AEBU?$pair@$$CBVCAudioSessionInstanceId@@V?$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@@1@@Z @ 0x1800E6DF4 (--$-0$$CBVCAudioSessionInstanceId@@V-$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil.c)
 */

_QWORD *__fastcall std::find_if_std::_List_const_iterator_std::_List_val_std::_List_simple_types_std::pair_CAudioSessionInstanceId_const__wil::com_ptr_t_CAudioSession_wil::err_returncode_policy___________lambda_badcd54a9567467c8cd0af6fdc9e1627___(
        _QWORD *a1,
        _QWORD *a2,
        _QWORD *a3)
{
  int IsExclusiveModeSession; // esi
  _BYTE v8[80]; // [rsp+20h] [rbp-78h] BYREF
  CAudioSession *v9; // [rsp+70h] [rbp-28h] BYREF

  while ( a2 != a3 )
  {
    std::pair<CAudioSessionInstanceId,wil::com_ptr_t<CAudioSession,wil::err_returncode_policy>>::pair<CAudioSessionInstanceId,wil::com_ptr_t<CAudioSession,wil::err_returncode_policy>>(
      (CAudioSessionInstanceId *)v8,
      a2 + 2);
    IsExclusiveModeSession = CAudioSession::IsExclusiveModeSession(v9);
    wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v9);
    CAudioSessionInstanceId::~CAudioSessionInstanceId((CAudioSessionInstanceId *)v8);
    if ( IsExclusiveModeSession )
      break;
    a2 = (_QWORD *)*a2;
  }
  *a1 = a2;
  return a1;
}
