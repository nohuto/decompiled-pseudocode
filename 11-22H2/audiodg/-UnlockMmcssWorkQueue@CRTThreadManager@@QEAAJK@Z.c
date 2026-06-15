/*
 * XREFs of ?UnlockMmcssWorkQueue@CRTThreadManager@@QEAAJK@Z @ 0x140075244
 * Callers:
 *     ??1CAPOServiceProvider@@UEAA@XZ @ 0x14006EFD4 (--1CAPOServiceProvider@@UEAA@XZ.c)
 * Callees:
 *     std::list_wil::com_ptr_t_CLocalMmcssWorkQueue_wil::err_returncode_policy__std::allocator_wil::com_ptr_t_CLocalMmcssWorkQueue_wil::err_returncode_policy_____::remove_if__lambda_e0016ce6237c0b2005737692aaf38648___ @ 0x14007454C (std--list_wil--com_ptr_t_CLocalMmcssWorkQueue_wil--err_returncode_policy__std--allocator_wil--co.c)
 */

__int64 __fastcall CRTThreadManager::UnlockMmcssWorkQueue(CRTThreadManager *this, int a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rbx

  if ( ((*((_DWORD *)this + 4) - 2) & 0xFFFFFFFD) == 0 )
  {
    v4 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 40);
    EnterCriticalSection((LPCRITICAL_SECTION)this + 1);
    std::list_wil::com_ptr_t_CLocalMmcssWorkQueue_wil::err_returncode_policy__std::allocator_wil::com_ptr_t_CLocalMmcssWorkQueue_wil::err_returncode_policy_____::remove_if__lambda_e0016ce6237c0b2005737692aaf38648___(
      (__int64 ***)this + 10,
      a2);
    if ( v4 )
      LeaveCriticalSection(v4);
  }
  return 0LL;
}
