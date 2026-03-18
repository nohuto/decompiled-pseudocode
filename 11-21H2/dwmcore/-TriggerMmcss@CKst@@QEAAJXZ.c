/*
 * XREFs of ?TriggerMmcss@CKst@@QEAAJXZ @ 0x18002A75C
 * Callers:
 *     ?ResetInputThreadMmcss@CGlobalInputManager@@UEAAJXZ @ 0x18002A710 (-ResetInputThreadMmcss@CGlobalInputManager@@UEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180024060 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180025194 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?SetEvent@details@wil@@YAXPEAX@Z @ 0x18002A854 (-SetEvent@details@wil@@YAXPEAX@Z.c)
 *     ?get@?$static_lazy@VInputTraceLogging@@@details@wil@@QEAAPEAVInputTraceLogging@@P6AXXZ@Z @ 0x18002B43C (-get@-$static_lazy@VInputTraceLogging@@@details@wil@@QEAAPEAVInputTraceLogging@@P6AXXZ@Z.c)
 *     _tlgKeywordOn @ 0x180074108 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 */

__int64 __fastcall CKst::TriggerMmcss(wil::details **this)
{
  void *v2; // rdx
  _DWORD *v3; // rcx
  __int64 v5; // rcx
  struct _EVENT_DATA_DESCRIPTOR v6; // [rsp+30h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v3 = *(_DWORD **)(wil::details::static_lazy<InputTraceLogging>::get(
                      this,
                      _lambda_a8e7baa2fca040c17c3e795f3590cb07_::_lambda_invoker_cdecl_)
                  + 8);
  if ( *v3 > 4u && (unsigned __int8)tlgKeywordOn(v3, 2LL) )
    tlgWriteTransfer_EventWriteTransfer(v5, (unsigned __int8 *)dword_180373831, 0LL, 0LL, (ULONG)v2, &v6);
  if ( (((unsigned __int64)this[2] + 1) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
  {
    wil::details::SetEvent(this[1], v2);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x6F,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\input\\kst.cpp",
      (const char *)0x80004004LL);
    return 2147500036LL;
  }
}
