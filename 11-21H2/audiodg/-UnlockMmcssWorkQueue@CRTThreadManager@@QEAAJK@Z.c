/*
 * XREFs of ?UnlockMmcssWorkQueue@CRTThreadManager@@QEAAJK@Z @ 0x14006C88C
 * Callers:
 *     ??1CAPOServiceProvider@@UEAA@XZ @ 0x140067404 (--1CAPOServiceProvider@@UEAA@XZ.c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x140019A00 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1-LeaveCriticalSe.c)
 *     std::list_wil::com_ptr_t_CLocalMmcssWorkQueue_wil::err_returncode_policy__std::allocator_wil::com_ptr_t_CLocalMmcssWorkQueue_wil::err_returncode_policy_____::remove_if__lambda_e0016ce6237c0b2005737692aaf38648___ @ 0x14006BF94 (std--list_wil--com_ptr_t_CLocalMmcssWorkQueue_wil--err_returncode_policy__std--allocator_wil--co.c)
 */

__int64 __fastcall CRTThreadManager::UnlockMmcssWorkQueue(CRTThreadManager *this, int a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rbx
  struct _RTL_CRITICAL_SECTION *v6; // [rsp+30h] [rbp+8h] BYREF

  if ( ((*((_DWORD *)this + 4) - 2) & 0xFFFFFFFD) == 0 )
  {
    v4 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 40);
    EnterCriticalSection((LPCRITICAL_SECTION)this + 1);
    v6 = v4;
    std::list_wil::com_ptr_t_CLocalMmcssWorkQueue_wil::err_returncode_policy__std::allocator_wil::com_ptr_t_CLocalMmcssWorkQueue_wil::err_returncode_policy_____::remove_if__lambda_e0016ce6237c0b2005737692aaf38648___(
      (__int64 ***)this + 10,
      a2);
    wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>(&v6);
  }
  return 0LL;
}
