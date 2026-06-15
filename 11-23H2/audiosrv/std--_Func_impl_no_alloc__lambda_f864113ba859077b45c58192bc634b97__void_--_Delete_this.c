/*
 * XREFs of std::_Func_impl_no_alloc__lambda_f864113ba859077b45c58192bc634b97__void_::_Delete_this @ 0x18010E5C0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180005738 (--1-$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x180067038 (--3@YAXPEAX_K@Z.c)
 */

void __fastcall std::_Func_impl_no_alloc__lambda_f864113ba859077b45c58192bc634b97__void_::_Delete_this(
        __int64 *a1,
        char a2)
{
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(a1 + 1);
  if ( a2 )
    operator delete(a1);
}
