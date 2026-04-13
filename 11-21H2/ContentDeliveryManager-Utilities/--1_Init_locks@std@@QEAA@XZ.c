/*
 * XREFs of ??1_Init_locks@std@@QEAA@XZ @ 0x180004C70
 * Callers:
 *     std::_dynamic_atexit_destructor_for__initlocks__ @ 0x1800F7720 (std--_dynamic_atexit_destructor_for__initlocks__.c)
 *     std::_dynamic_atexit_destructor_for__initlocks___0 @ 0x1800F7850 (std--_dynamic_atexit_destructor_for__initlocks___0.c)
 * Callees:
 *     _Mtxdst @ 0x18000C4EC (_Mtxdst.c)
 */

void __fastcall std::_Init_locks::~_Init_locks(std::_Init_locks *this)
{
  struct _RTL_CRITICAL_SECTION *v1; // rbx
  __int64 v2; // rdi

  if ( _InterlockedDecrement(&dword_1801AE170) < 0 )
  {
    v1 = &stru_1801AE3A0;
    v2 = 4LL;
    do
    {
      Mtxdst(v1++);
      --v2;
    }
    while ( v2 );
  }
}
