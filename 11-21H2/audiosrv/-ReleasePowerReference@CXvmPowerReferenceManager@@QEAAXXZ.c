/*
 * XREFs of ?ReleasePowerReference@CXvmPowerReferenceManager@@QEAAXXZ @ 0x1801047A4
 * Callers:
 *     ?_Destroy@?$_Ref_count_obj2@VCXvmPowerReference@@@std@@EEAAXXZ @ 0x180104AB0 (-_Destroy@-$_Ref_count_obj2@VCXvmPowerReference@@@std@@EEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CXvmPowerReferenceManager::ReleasePowerReference(CXvmPowerReferenceManager *this)
{
  int v2; // eax
  struct _TP_TIMER *v4; // rcx
  struct _FILETIME pftDueTime; // [rsp+30h] [rbp+8h] BYREF

  v2 = _Mtx_lock((CXvmPowerReferenceManager *)((char *)this + 40));
  if ( v2 )
  {
    std::_Throw_C_error(v2);
    __debugbreak();
  }
  if ( (*((_DWORD *)this + 8))-- == 1 )
  {
    v4 = (struct _TP_TIMER *)*((_QWORD *)this + 15);
    if ( v4 )
    {
      pftDueTime.dwLowDateTime = -200000000;
      pftDueTime.dwHighDateTime = -1;
      SetThreadpoolTimer(v4, &pftDueTime, 0, 0x64u);
    }
  }
  _Mtx_unlock((CXvmPowerReferenceManager *)((char *)this + 40));
}
