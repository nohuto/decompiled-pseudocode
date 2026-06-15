/*
 * XREFs of std::_Func_impl_no_alloc__lambda_78bc9aa717e0c7ae8337a2b0ddd14613__void_::_Copy @ 0x180030C20
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$com_ptr_t@VCProcess@@Uerr_returncode_policy@wil@@@wil@@QEAA@AEBV01@@Z @ 0x18000BCD0 (--0-$com_ptr_t@VCProcess@@Uerr_returncode_policy@wil@@@wil@@QEAA@AEBV01@@Z.c)
 *     ??0?$com_ptr_t@UIAudioStreamInfo@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAUIAudioStreamInfo@@@Z @ 0x180015F48 (--0-$com_ptr_t@UIAudioStreamInfo@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAUIAudioStreamInfo@@@.c)
 *     ??0?$com_ptr_t@UIAudioSessionInfo@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAUIAudioSessionInfo@@@Z @ 0x180020150 (--0-$com_ptr_t@UIAudioSessionInfo@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAUIAudioSessionInfo@.c)
 */

_QWORD *__fastcall std::_Func_impl_no_alloc__lambda_78bc9aa717e0c7ae8337a2b0ddd14613__void_::_Copy(
        __int64 a1,
        _QWORD *a2)
{
  __int64 v3; // rdi

  v3 = a1 + 8;
  *a2 = off_18004FD80;
  wil::com_ptr_t<CProcess,wil::err_returncode_policy>::com_ptr_t<CProcess,wil::err_returncode_policy>(
    a2 + 1,
    (__int64 *)(a1 + 8));
  wil::com_ptr_t<IAudioSessionInfo,wil::err_returncode_policy>::com_ptr_t<IAudioSessionInfo,wil::err_returncode_policy>(
    a2 + 2,
    *(_QWORD *)(v3 + 8));
  wil::com_ptr_t<IAudioStreamInfo,wil::err_returncode_policy>::com_ptr_t<IAudioStreamInfo,wil::err_returncode_policy>(
    a2 + 3,
    *(_QWORD *)(v3 + 16));
  return a2;
}
