/*
 * XREFs of ?_Destroy@?$_Ref_count_obj2@VCSebReference@@@std@@EEAAXXZ @ 0x18000D850
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// Hidden C++ exception states: #wind=1
int __fastcall std::_Ref_count_obj2<CSebReference>::_Destroy(__int64 a1)
{
  __int64 v1; // rdi
  int v2; // eax
  struct _TP_TIMER *v4; // rcx
  struct _FILETIME pftDueTime; // [rsp+30h] [rbp+8h] BYREF

  v1 = *(_QWORD *)(a1 + 16);
  v2 = _Mtx_lock((_Mtx_t)(v1 + 8));
  if ( v2 )
  {
    std::_Throw_C_error(v2);
    __debugbreak();
    JUMPOUT(0x180077315LL);
  }
  if ( (*(_DWORD *)v1)-- == 1 )
  {
    v4 = *(struct _TP_TIMER **)(v1 + 96);
    if ( v4 )
    {
      pftDueTime.dwLowDateTime = -200000000;
      pftDueTime.dwHighDateTime = -1;
      SetThreadpoolTimer(v4, &pftDueTime, 0, 0x64u);
    }
  }
  return _Mtx_unlock((_Mtx_t)(v1 + 8));
}
