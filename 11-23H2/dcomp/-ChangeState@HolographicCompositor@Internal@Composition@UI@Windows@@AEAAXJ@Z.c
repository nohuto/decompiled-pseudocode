/*
 * XREFs of ?ChangeState@HolographicCompositor@Internal@Composition@UI@Windows@@AEAAXJ@Z @ 0x180115F4C
 * Callers:
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::System::IDispatcherQueueHandler::_)(void)_::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::System::IDispatcherQueueHandler_Microsoft::WRL::FtmBase___lambda_5b9ed54f858535c6691bad576f69a793__&__1_::Invoke @ 0x1801172B0 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_Windows--System--IDispatch_ea_1801172B0.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D10Multithread@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180098554 (--1-$com_ptr_t@UID3D10Multithread@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?reset@?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18009938C (-reset@-$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ?query@weak_query_policy@details@wil@@SAJPEAUIWeakReference@@AEBU_GUID@@PEAPEAX@Z @ 0x180118930 (-query@weak_query_policy@details@wil@@SAJPEAUIWeakReference@@AEBU_GUID@@PEAPEAX@Z.c)
 */

void __fastcall Windows::UI::Composition::Internal::HolographicCompositor::ChangeState(
        Windows::UI::Composition::Internal::HolographicCompositor *this,
        int a2)
{
  RTL_SRWLOCK *v2; // rdi
  const struct _GUID *v5; // rdx
  struct IWeakReference *v6; // rcx
  void *v7; // [rsp+30h] [rbp+8h] BYREF

  v2 = (RTL_SRWLOCK *)((char *)this + 184);
  AcquireSRWLockExclusive((PSRWLOCK)this + 23);
  v6 = (struct IWeakReference *)*((_QWORD *)this + 22);
  *((_DWORD *)this + 48) = a2;
  *((_DWORD *)this + 49) = ((a2 >> 31) & 1) + 1;
  if ( v6 )
  {
    v7 = 0LL;
    wil::details::weak_query_policy::query(v6, v5, &v7);
    if ( v7 )
    {
      (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)v7 + 24LL))(v7, (unsigned int)a2);
      wil::com_ptr_t<IUnknown,wil::err_returncode_policy>::reset((__int64 *)this + 22);
    }
    wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>((__int64 *)&v7);
  }
  if ( v2 )
    ReleaseSRWLockExclusive(v2);
}
