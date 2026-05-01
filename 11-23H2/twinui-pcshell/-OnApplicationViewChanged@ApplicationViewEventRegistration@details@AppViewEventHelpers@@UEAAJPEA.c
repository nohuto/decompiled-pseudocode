/*
 * XREFs of ?OnApplicationViewChanged@ApplicationViewEventRegistration@details@AppViewEventHelpers@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x180062010
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?query@weak_query_policy@details@wil@@SAJPEAUIWeakReference@@AEBU_GUID@@PEAPEAX@Z @ 0x180062114 (-query@weak_query_policy@details@wil@@SAJPEAUIWeakReference@@AEBU_GUID@@PEAPEAX@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall AppViewEventHelpers::details::ApplicationViewEventRegistration::OnApplicationViewChanged(
        RTL_SRWLOCK *a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4)
{
  RTL_SRWLOCK *v8; // rbx
  void *v9; // rcx
  struct IWeakReference *Ptr; // rcx
  int v11; // eax
  unsigned int v12; // ebx
  int v14; // [rsp+20h] [rbp-38h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  void *v16; // [rsp+60h] [rbp+8h] BYREF

  v16 = 0LL;
  v8 = a1 + 7;
  AcquireSRWLockShared(a1 + 7);
  v9 = v16;
  v16 = 0LL;
  if ( v9 )
    (*(void (__fastcall **)(void *))(*(_QWORD *)v9 + 16LL))(v9);
  Ptr = (struct IWeakReference *)a1[8].Ptr;
  if ( Ptr )
  {
    v11 = wil::details::weak_query_policy::query(Ptr, &GUID_727f9e97_76ee_497b_a942_b6371328485c, &v16);
    if ( v11 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x1815,
        (unsigned int)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\result_macros.h",
        (const char *)(unsigned int)v11,
        v14);
    Ptr = (struct IWeakReference *)v16;
  }
  else
  {
    v16 = 0LL;
  }
  if ( v8 )
  {
    ReleaseSRWLockShared(v8);
    Ptr = (struct IWeakReference *)v16;
  }
  if ( Ptr )
  {
    v12 = ((__int64 (__fastcall *)(struct IWeakReference *, __int64, _QWORD, __int64))Ptr->lpVtbl->Resolve)(
            Ptr,
            a2,
            a3,
            a4);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v16);
    return v12;
  }
  else
  {
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v16);
    return 0LL;
  }
}
