/*
 * XREFs of ?GetPendingActivationData@UwpWindowEventDispatcher@@UEAAJ_KPEAPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1803EE060
 * Callers:
 *     <none>
 * Callees:
 *     ??$copy_to@UIPropertySet@Collections@Foundation@Windows@@@?$com_ptr_t@UIPropertySet@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEBAXPEAPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180059D18 (--$copy_to@UIPropertySet@Collections@Foundation@Windows@@@-$com_ptr_t@UIPropertySet@Collections@.c)
 *     ??$PendingActivationFind@AEA_KPEBG@ViewManagerInteropTraceLogging@@SAXAEA_K$$QEAPEBG@Z @ 0x180059D48 (--$PendingActivationFind@AEA_KPEBG@ViewManagerInteropTraceLogging@@SAXAEA_K$$QEAPEBG@Z.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockShared@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x180096D00 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockShared@@YA.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall UwpWindowEventDispatcher::GetPendingActivationData(
        RTL_SRWLOCK *this,
        __int64 a2,
        struct Windows::Foundation::Collections::IPropertySet **a3)
{
  RTL_SRWLOCK *v6; // rbx
  _QWORD *Ptr; // rbx
  __int64 v9; // rcx
  const char *v10; // r9
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  RTL_SRWLOCK *v12; // [rsp+40h] [rbp+8h] BYREF
  __int64 v13; // [rsp+48h] [rbp+10h] BYREF
  PCWSTR StringRawBuffer; // [rsp+50h] [rbp+18h] BYREF

  v13 = a2;
  *a3 = 0LL;
  v6 = this + 56;
  AcquireSRWLockShared(this + 56);
  v12 = v6;
  Ptr = this[63].Ptr;
  while ( 1 )
  {
    Ptr = (_QWORD *)*Ptr;
    if ( Ptr == this[63].Ptr )
      break;
    v9 = Ptr[2];
    if ( *(_QWORD *)(v9 + 8) == a2 )
    {
      StringRawBuffer = WindowsGetStringRawBuffer(*(HSTRING *)(v9 + 16), 0LL);
      ViewManagerInteropTraceLogging::PendingActivationFind<unsigned __int64 &,unsigned short const *>(
        &v13,
        (__int64 *)&StringRawBuffer);
      try
      {
        wil::com_ptr_t<Windows::Foundation::Collections::IPropertySet,wil::err_exception_policy>::copy_to<Windows::Foundation::Collections::IPropertySet>(
          (__int64 *)(Ptr[2] + 32LL),
          a3);
      }
      catch ( ... )
      {
        return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                               retaddr,
                               (void *)0x855,
                               (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
                               v10);
      }
    }
  }
  wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v12);
  return 0LL;
}
