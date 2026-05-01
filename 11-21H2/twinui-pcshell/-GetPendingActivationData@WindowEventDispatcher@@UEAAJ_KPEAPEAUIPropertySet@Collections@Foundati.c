/*
 * XREFs of ?GetPendingActivationData@WindowEventDispatcher@@UEAAJ_KPEAPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180059C60
 * Callers:
 *     ?TryShowAsStandaloneAsync@WindowEventDispatcher@@AEAAXIIW4ViewSizePreference@ViewManagement@UI@Windows@@0_KPEAUIAsyncCallback@@@Z @ 0x1800596A4 (-TryShowAsStandaloneAsync@WindowEventDispatcher@@AEAAXIIW4ViewSizePreference@ViewManagement@UI@W.c)
 * Callees:
 *     ??$copy_to@UIPropertySet@Collections@Foundation@Windows@@@?$com_ptr_t@UIPropertySet@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEBAXPEAPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180059D18 (--$copy_to@UIPropertySet@Collections@Foundation@Windows@@@-$com_ptr_t@UIPropertySet@Collections@.c)
 *     ??$PendingActivationFind@AEA_KPEBG@ViewManagerInteropTraceLogging@@SAXAEA_K$$QEAPEBG@Z @ 0x180059D48 (--$PendingActivationFind@AEA_KPEBG@ViewManagerInteropTraceLogging@@SAXAEA_K$$QEAPEBG@Z.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockShared@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x180096D00 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockShared@@YA.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall WindowEventDispatcher::GetPendingActivationData(
        RTL_SRWLOCK *this,
        __int64 a2,
        struct Windows::Foundation::Collections::IPropertySet **a3)
{
  RTL_SRWLOCK *v5; // rbx
  _QWORD *Ptr; // rbx
  __int64 v8; // rcx
  const char *v9; // r9
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  RTL_SRWLOCK *v11; // [rsp+40h] [rbp+8h] BYREF
  __int64 v12; // [rsp+48h] [rbp+10h] BYREF
  PCWSTR StringRawBuffer; // [rsp+50h] [rbp+18h] BYREF

  v12 = a2;
  *a3 = 0LL;
  v5 = this + 56;
  AcquireSRWLockShared(this + 56);
  v11 = v5;
  Ptr = this[60].Ptr;
  while ( 1 )
  {
    Ptr = (_QWORD *)*Ptr;
    if ( Ptr == this[60].Ptr )
      break;
    v8 = Ptr[2];
    if ( *(_QWORD *)(v8 + 8) == a2 )
    {
      StringRawBuffer = WindowsGetStringRawBuffer(*(HSTRING *)(v8 + 16), 0LL);
      ViewManagerInteropTraceLogging::PendingActivationFind<unsigned __int64 &,unsigned short const *>(
        &v12,
        &StringRawBuffer);
      try
      {
        wil::com_ptr_t<Windows::Foundation::Collections::IPropertySet,wil::err_exception_policy>::copy_to<Windows::Foundation::Collections::IPropertySet>();
      }
      catch ( ... )
      {
        return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                               retaddr,
                               (void *)0x77D,
                               (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
                               v9);
      }
    }
  }
  wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v11);
  return 0LL;
}
