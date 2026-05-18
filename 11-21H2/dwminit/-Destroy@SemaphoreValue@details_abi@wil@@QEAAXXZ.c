/*
 * XREFs of ?Destroy@SemaphoreValue@details_abi@wil@@QEAAXXZ @ 0x18000AB4C
 * Callers:
 *     ?Release@?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@QEAAXXZ @ 0x18000C524 (-Release@-$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@QEAAXXZ.c)
 *     ?Release@?$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@QEAAXXZ @ 0x18000C698 (-Release@-$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@QEAAXXZ.c)
 * Callees:
 *     ??$invoke@P6AXPEAX@_EAEAPEAX@wistd@@YAX$$QEAP6AXPEAX@_EAEAPEAX@Z @ 0x18000401C (--$invoke@P6AXPEAX@_EAEAPEAX@wistd@@YAX$$QEAP6AXPEAX@_EAEAPEAX@Z.c)
 */

void __fastcall wil::details_abi::SemaphoreValue::Destroy(wil::details_abi::SemaphoreValue *this)
{
  DWORD LastError; // eax
  DWORD v3; // ebx
  DWORD v4; // eax
  DWORD v5; // ebx
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF
  void (__fastcall *v7)(wil::details *, void *); // [rsp+38h] [rbp+10h] BYREF

  if ( *(_QWORD *)this )
  {
    v6 = *(_QWORD *)this;
    LastError = GetLastError();
    v7 = wil::details::CloseHandle;
    v3 = LastError;
    ___invoke_P6AXPEAX__EAEAPEAX_wistd__YAX__QEAP6AXPEAX__EAEAPEAX_Z((__int64 (__fastcall **)(_QWORD))&v7, &v6);
    SetLastError(v3);
  }
  *(_QWORD *)this = 0LL;
  if ( *((_QWORD *)this + 1) )
  {
    v6 = *((_QWORD *)this + 1);
    v4 = GetLastError();
    v7 = wil::details::CloseHandle;
    v5 = v4;
    ___invoke_P6AXPEAX__EAEAPEAX_wistd__YAX__QEAP6AXPEAX__EAEAPEAX_Z((__int64 (__fastcall **)(_QWORD))&v7, &v6);
    SetLastError(v5);
  }
  *((_QWORD *)this + 1) = 0LL;
}
