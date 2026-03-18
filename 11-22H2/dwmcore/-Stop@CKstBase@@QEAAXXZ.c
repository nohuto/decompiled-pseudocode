/*
 * XREFs of ?Stop@CKstBase@@QEAAXXZ @ 0x180285C20
 * Callers:
 *     ??1CGlobalInputManager@@UEAA@XZ @ 0x18028340C (--1CGlobalInputManager@@UEAA@XZ.c)
 *     ??1CKstBase@@QEAA@XZ @ 0x180285BC4 (--1CKstBase@@QEAA@XZ.c)
 * Callees:
 *     ?get@?$static_lazy@VInputTraceLogging@@@details@wil@@QEAAPEAVInputTraceLogging@@P6AXXZ@Z @ 0x180032A40 (-get@-$static_lazy@VInputTraceLogging@@@details@wil@@QEAAPEAVInputTraceLogging@@P6AXXZ@Z.c)
 *     _tlgKeywordOn @ 0x1800BB1F8 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800BB2A0 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?SetEvent@details@wil@@YAXPEAX@Z @ 0x1800C8F04 (-SetEvent@details@wil@@YAXPEAX@Z.c)
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x1800CEACC (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     __security_check_cookie @ 0x18010EF20 (__security_check_cookie.c)
 */

void __fastcall CKstBase::Stop(CKstBase *this)
{
  void *v2; // rdx
  _DWORD *v3; // rcx
  __int64 v4; // rcx
  struct _EVENT_DATA_DESCRIPTOR v5; // [rsp+30h] [rbp-38h] BYREF

  v3 = (_DWORD *)wil::details::static_lazy<InputTraceLogging>::get(
                   (__int64)this,
                   (void (__cdecl *)())_lambda_a8e7baa2fca040c17c3e795f3590cb07_::_lambda_invoker_cdecl_)[1];
  if ( *v3 > 4u && tlgKeywordOn((__int64)v3, 2LL) )
    tlgWriteTransfer_EventWriteTransfer(v4, (unsigned __int8 *)dword_1803828E0, 0LL, 0LL, (ULONG)v2, &v5);
  if ( (unsigned __int64)(*((_QWORD *)this + 2) - 1LL) <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    wil::details::SetEvent(*((wil::details **)this + 4), v2);
    WaitForSingleObject(*((HANDLE *)this + 2), 0xFFFFFFFF);
    wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
      (void **)this + 2,
      0LL);
  }
}
