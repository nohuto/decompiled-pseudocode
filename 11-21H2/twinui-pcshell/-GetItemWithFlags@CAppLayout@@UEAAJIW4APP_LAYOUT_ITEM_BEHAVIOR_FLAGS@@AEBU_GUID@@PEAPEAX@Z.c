/*
 * XREFs of ?GetItemWithFlags@CAppLayout@@UEAAJIW4APP_LAYOUT_ITEM_BEHAVIOR_FLAGS@@AEBU_GUID@@PEAPEAX@Z @ 0x180616DB0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockShared@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x180096D00 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockShared@@YA.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAppLayout::GetItemWithFlags(RTL_SRWLOCK *a1, int a2, int a3, __int64 a4, RTL_SRWLOCK *a5)
{
  RTL_SRWLOCK *v9; // r15
  RTL_SRWLOCK *v10; // rbx
  unsigned int v11; // ebp
  PVOID Ptr; // r14
  unsigned __int64 v13; // rbx
  __int64 v14; // rcx
  __int64 (__fastcall ***v15)(_QWORD, __int64, RTL_SRWLOCK *); // rcx

  v9 = a5;
  a5->Ptr = 0LL;
  v10 = a1 + 2;
  AcquireSRWLockShared(a1 + 2);
  a5 = v10;
  v11 = -2147024809;
  Ptr = a1[9].Ptr;
  v13 = 0LL;
  if ( Ptr )
  {
    do
    {
      v14 = *((_QWORD *)a1[8].Ptr + v13);
      if ( (a3 & (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v14 + 32LL))(v14)) == a3 )
      {
        if ( !a2 )
        {
          v15 = (__int64 (__fastcall ***)(_QWORD, __int64, RTL_SRWLOCK *))*((_QWORD *)a1[8].Ptr + v13);
          v11 = (**v15)(v15, a4, v9);
          break;
        }
        --a2;
      }
      ++v13;
    }
    while ( v13 < (unsigned __int64)Ptr );
  }
  wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&a5);
  return v11;
}
