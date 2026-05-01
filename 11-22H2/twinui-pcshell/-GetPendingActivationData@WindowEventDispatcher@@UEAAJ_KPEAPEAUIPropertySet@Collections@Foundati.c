/*
 * XREFs of ?GetPendingActivationData@WindowEventDispatcher@@UEAAJ_KPEAPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1804C5750
 * Callers:
 *     ?TryShowAsStandaloneAsync@WindowEventDispatcher@@AEAAXIIW4ViewSizePreference@ViewManagement@UI@Windows@@0_KPEAUIAsyncCallback@@@Z @ 0x1804CAEEC (-TryShowAsStandaloneAsync@WindowEventDispatcher@@AEAAXIIW4ViewSizePreference@ViewManagement@UI@W.c)
 * Callees:
 *     ??$PendingActivationFind@AEA_KPEBG@ViewManagerInteropTraceLogging@@SAXAEA_K$$QEAPEBG@Z @ 0x1804BA04C (--$PendingActivationFind@AEA_KPEBG@ViewManagerInteropTraceLogging@@SAXAEA_K$$QEAPEBG@Z.c)
 *     ??$copy_to@UIPropertySet@Collections@Foundation@Windows@@@?$com_ptr_t@UIPropertySet@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEBAXPEAPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1804BB1D0 (--$copy_to@UIPropertySet@Collections@Foundation@Windows@@@-$com_ptr_t@UIPropertySet@Collections@.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall WindowEventDispatcher::GetPendingActivationData(
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
  v6 = this + 56;
  AcquireSRWLockShared(this + 56);
  v14 = v6;
  Ptr = this[60].Ptr;
  while ( 1 )
  {
    Ptr = (_QWORD *)*Ptr;
    if ( Ptr == this[60].Ptr )
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
                               (void *)0x77D,
                               (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
                               v10);
      }
    }
  }
  if ( v6 )
    ReleaseSRWLockShared(v6);
  return 0LL;
}
