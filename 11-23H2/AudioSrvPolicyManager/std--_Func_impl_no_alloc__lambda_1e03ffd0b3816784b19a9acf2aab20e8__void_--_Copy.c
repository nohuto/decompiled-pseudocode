/*
 * XREFs of std::_Func_impl_no_alloc__lambda_1e03ffd0b3816784b19a9acf2aab20e8__void_::_Copy @ 0x180022DA0
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$com_ptr_t@UIAudioSessionInfo@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAUIAudioSessionInfo@@@Z @ 0x18001FF60 (--0-$com_ptr_t@UIAudioSessionInfo@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAUIAudioSessionInfo@.c)
 *     ??0?$com_ptr_t@UIDuckingController@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAUIDuckingController@@@Z @ 0x18001FF9C (--0-$com_ptr_t@UIDuckingController@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAUIDuckingControlle.c)
 */

_QWORD *__fastcall std::_Func_impl_no_alloc__lambda_1e03ffd0b3816784b19a9acf2aab20e8__void_::_Copy(
        __int64 *a1,
        _QWORD *a2)
{
  *a2 = off_18004E448;
  wil::com_ptr_t<IAudioSessionInfo,wil::err_returncode_policy>::com_ptr_t<IAudioSessionInfo,wil::err_returncode_policy>(
    a2 + 1,
    a1[1]);
  a2[2] = a1[2];
  wil::com_ptr_t<IDuckingController,wil::err_returncode_policy>::com_ptr_t<IDuckingController,wil::err_returncode_policy>(
    a2 + 3,
    a1[3]);
  return a2;
}
