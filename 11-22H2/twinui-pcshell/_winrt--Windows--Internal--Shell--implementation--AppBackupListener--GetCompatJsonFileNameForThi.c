/*
 * XREFs of _winrt::Windows::Internal::Shell::implementation::AppBackupListener::GetCompatJsonFileNameForThisUser_::_1_::dtor$7 @ 0x180259FD7
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$unique_ptr@U_TOKEN_USER@@U?$default_delete@U_TOKEN_USER@@@wistd@@@wistd@@QEAA@XZ @ 0x1804FFE0C (--1-$unique_ptr@U_TOKEN_USER@@U-$default_delete@U_TOKEN_USER@@@wistd@@@wistd@@QEAA@XZ.c)
 */

__int64 __fastcall winrt::Windows::Internal::Shell::implementation::AppBackupListener::GetCompatJsonFileNameForThisUser_::_1_::dtor_7(
        __int64 a1,
        __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 40) & 8;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 40) &= ~8u;
    return wistd::unique_ptr<_TOKEN_USER,wistd::default_delete<_TOKEN_USER>>::~unique_ptr<_TOKEN_USER,wistd::default_delete<_TOKEN_USER>>(a2 + 48);
  }
  return result;
}
