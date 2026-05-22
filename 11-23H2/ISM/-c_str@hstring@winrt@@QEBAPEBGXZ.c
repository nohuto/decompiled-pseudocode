/*
 * XREFs of ?c_str@hstring@winrt@@QEBAPEBGXZ @ 0x180099EBC
 * Callers:
 *     ?GetDescription@error_info_fallback@impl@winrt@@UEAAHPEAPEAG@Z @ 0x180098EF0 (-GetDescription@error_info_fallback@impl@winrt@@UEAAHPEAPEAG@Z.c)
 *     ?GetErrorDetails@error_info_fallback@impl@winrt@@UEAAHPEAPEAGPEAH00@Z @ 0x180098F30 (-GetErrorDetails@error_info_fallback@impl@winrt@@UEAAHPEAPEAGPEAH00@Z.c)
 *     ?MaybeGetExceptionString@details@wil@@YAXAEBUhresult_error@winrt@@PEAG_K@Z @ 0x1800E3710 (-MaybeGetExceptionString@details@wil@@YAXAEBUhresult_error@winrt@@PEAG_K@Z.c)
 * Callees:
 *     <none>
 */

const unsigned __int16 *__fastcall winrt::hstring::c_str(winrt::hstring *this)
{
  if ( *(_QWORD *)this )
    return *(const unsigned __int16 **)(*(_QWORD *)this + 16LL);
  else
    return &Src;
}
