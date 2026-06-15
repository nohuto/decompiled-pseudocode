/*
 * XREFs of std::_Func_impl_no_alloc__lambda_575e561af4240623508f6fe68ec23261__long_wil::com_ptr_t_CEndpointStore_wil::err_returncode_policy__&_::_Do_call @ 0x1800EA5F0
 * Callers:
 *     <none>
 * Callees:
 *     ?Disconnect@CAudioSessionManager@@QEAAJW4AudioServerSessionDisconnectReason@@_N@Z @ 0x18003B160 (-Disconnect@CAudioSessionManager@@QEAAJW4AudioServerSessionDisconnectReason@@_N@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x180067028 (--3@YAXPEAX_K@Z.c)
 *     ??1CAudioSessionManager@@QEAA@XZ @ 0x1800E7928 (--1CAudioSessionManager@@QEAA@XZ.c)
 */

__int64 __fastcall std::_Func_impl_no_alloc__lambda_575e561af4240623508f6fe68ec23261__long_wil::com_ptr_t_CEndpointStore_wil::err_returncode_policy____::_Do_call(
        __int64 a1,
        __int64 *a2)
{
  __int64 v3; // rax
  CAudioSessionManager *v4; // rbx

  CAudioSessionManager::Disconnect(*(CAudioSessionManager **)(*a2 + 96), 1, 1);
  v3 = *a2;
  v4 = *(CAudioSessionManager **)(*a2 + 96);
  *(_QWORD *)(v3 + 96) = 0LL;
  if ( v4 )
  {
    CAudioSessionManager::~CAudioSessionManager(v4);
    operator delete(v4);
  }
  return 0LL;
}
