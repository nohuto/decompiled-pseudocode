/*
 * XREFs of _lambda_7779f375762769ec339d0b17f2cf373b_::operator() @ 0x1800D2A80
 * Callers:
 *     CreativeFramework::CommonHelper::EnumerateRegisteredTasks__lambda_7779f375762769ec339d0b17f2cf373b___ @ 0x1800D2100 (CreativeFramework--CommonHelper--EnumerateRegisteredTasks__lambda_7779f375762769ec339d0b17f2cf37.c)
 * Callees:
 *     __security_check_cookie @ 0x1800224C0 (__security_check_cookie.c)
 *     memset_0 @ 0x180022C6D (memset_0.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180043350 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$TaskUnregistered@PEB_WAEAY0CH@_W@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@SAX$$QEAPEB_WAEAY0CH@_WPEBD@Z @ 0x1800D26C0 (--$TaskUnregistered@PEB_WAEAY0CH@_W@ContentDeliveryManagerTelemetry@Background@ContentDeliveryMa.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800D4360 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall lambda_7779f375762769ec339d0b17f2cf373b_::operator()(__int64 a1, __int64 a2)
{
  __int64 (__fastcall *v4)(__int64, HSTRING *); // rbx
  int v5; // eax
  const WCHAR *StringRawBuffer; // rbx
  const WCHAR *v7; // rax
  int v8; // eax
  __int64 v9; // rbx
  BOOL bIgnoreCase; // [rsp+20h] [rbp-49h]
  BOOL bIgnoreCasea; // [rsp+20h] [rbp-49h]
  HSTRING string; // [rsp+30h] [rbp-39h] BYREF
  PCWSTR v14; // [rsp+38h] [rbp-31h] BYREF
  GUID rguid; // [rsp+40h] [rbp-29h] BYREF
  OLECHAR sz[40]; // [rsp+50h] [rbp-19h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+5Fh]

  string = 0LL;
  v4 = *(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)a2 + 56LL);
  WindowsDeleteString(0LL);
  string = 0LL;
  v5 = v4(a2, &string);
  if ( v5 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x53,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\commonhelpers\\taskschedulerhelpers.cpp",
      (const char *)(unsigned int)v5,
      bIgnoreCase);
  StringRawBuffer = WindowsGetStringRawBuffer(string, 0LL);
  v7 = WindowsGetStringRawBuffer(**(HSTRING **)a1, 0LL);
  if ( CompareStringOrdinal(v7, -1, StringRawBuffer, -1, 1) == 2 )
  {
    v8 = (*(__int64 (__fastcall **)(__int64, GUID *))(*(_QWORD *)a2 + 48LL))(a2, &rguid);
    if ( v8 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x57,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\commonhelpers\\taskschedulerhelpers.cpp",
        (const char *)(unsigned int)v8,
        bIgnoreCasea);
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a2 + 96LL))(a2, 0LL);
    memset_0(sz, 0, 0x4EuLL);
    StringFromGUID2(&rguid, sz, 39);
    v9 = **(_QWORD **)(a1 + 8);
    v14 = WindowsGetStringRawBuffer(string, 0LL);
    ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::TaskUnregistered<wchar_t const *,wchar_t (&)[39]>(
      (__int64 *)&v14,
      (__int64)sz,
      v9 + 8);
    WindowsDeleteString(string);
    return 1;
  }
  else
  {
    WindowsDeleteString(string);
    return 0;
  }
}
