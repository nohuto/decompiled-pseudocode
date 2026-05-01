/*
 * XREFs of ?GetPendingActivationData@UwpWindowEventDispatcher@@UEAAJ_KPEAPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1804D11F0
 * Callers:
 *     ?TryShowAsViewModeAsync@UwpWindowEventDispatcher@@AEAAXIIW4ApplicationViewMode@ViewManagement@UI@Windows@@W4ExperienceKind@WindowManagement@ApplicationModel@Internal@5@W4ViewSizePreference@345@2USize@Foundation@5@W4ViewGroupingPreference@7895@_KPEAUIAsyncCallback@@@Z @ 0x1804D2944 (-TryShowAsViewModeAsync@UwpWindowEventDispatcher@@AEAAXIIW4ApplicationViewMode@ViewManagement@UI.c)
 * Callees:
 *     ??$PendingActivationFind@AEA_KPEBG@ViewManagerInteropTraceLogging@@SAXAEA_K$$QEAPEBG@Z @ 0x1804BA04C (--$PendingActivationFind@AEA_KPEBG@ViewManagerInteropTraceLogging@@SAXAEA_K$$QEAPEBG@Z.c)
 *     ??$copy_to@UIPropertySet@Collections@Foundation@Windows@@@?$com_ptr_t@UIPropertySet@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEBAXPEAPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1804BB1D0 (--$copy_to@UIPropertySet@Collections@Foundation@Windows@@@-$com_ptr_t@UIPropertySet@Collections@.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall UwpWindowEventDispatcher::GetPendingActivationData(
        RTL_SRWLOCK *this,
        __int64 a2,
        struct Windows::Foundation::Collections::IPropertySet **a3)
{
  RTL_SRWLOCK *v6; // rdi
  _QWORD *Ptr; // rbx
  __int64 v9; // rcx
  const char *v10; // r9
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  PCWSTR StringRawBuffer; // [rsp+50h] [rbp+8h] BYREF
  __int64 v13; // [rsp+58h] [rbp+10h] BYREF
  RTL_SRWLOCK *v14; // [rsp+60h] [rbp+18h]

  v13 = a2;
  *a3 = 0LL;
  v6 = this + 58;
  AcquireSRWLockShared(this + 58);
  v14 = v6;
  Ptr = this[65].Ptr;
  while ( 1 )
  {
    Ptr = (_QWORD *)*Ptr;
    if ( Ptr == this[65].Ptr )
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
                               (void *)0x88C,
                               (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
                               v10);
      }
    }
  }
  if ( v6 )
    ReleaseSRWLockShared(v6);
  return 0LL;
}
