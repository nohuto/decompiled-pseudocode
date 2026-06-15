/*
 * XREFs of _lambda_661bc23c674c805837064d315685ee67_::operator() @ 0x180048194
 * Callers:
 *     Windows::Internal::AssignedAccess::AssignedAccessConfigurationHelper::FindUserInfoIf__lambda_661bc23c674c805837064d315685ee67___ @ 0x180047F98 (Windows--Internal--AssignedAccess--AssignedAccessConfigurationHelper--FindUserInfoIf__lambda_661.c)
 * Callees:
 *     ??1last_error_context@wil@@QEAA@XZ @ 0x180018AA4 (--1last_error_context@wil@@QEAA@XZ.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAUHSTRING__@@P6AJPEAU1@@Z$1?WindowsDeleteString@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x180048170 (--1-$unique_storage@U-$resource_policy@PEAUHSTRING__@@P6AJPEAU1@@Z$1-WindowsDeleteString@@YAJ0@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180048B60 (_guard_xfg_dispatch_icall_nop.c)
 */

char __fastcall lambda_661bc23c674c805837064d315685ee67_::operator()(_QWORD **a1, __int64 a2)
{
  char v4; // bl
  HSTRING v5; // rdi
  int (__fastcall *v6)(__int64, HSTRING *); // rbp
  PCWSTR StringRawBuffer; // rax
  unsigned int v9; // [rsp+58h] [rbp+10h] BYREF
  HSTRING string; // [rsp+60h] [rbp+18h] BYREF
  char v11; // [rsp+68h] [rbp+20h] BYREF
  DWORD LastError; // [rsp+6Ch] [rbp+24h]

  string = 0LL;
  if ( (*(int (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)a2 + 88LL))(a2, &v9) < 0 )
    goto LABEL_7;
  v4 = 1;
  if ( v9 > 1 )
    goto LABEL_7;
  v5 = string;
  v6 = *(int (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)a2 + 48LL);
  if ( string )
  {
    v11 = 0;
    LastError = GetLastError();
    WindowsDeleteString(v5);
    wil::last_error_context::~last_error_context((wil::last_error_context *)&v11);
  }
  string = 0LL;
  if ( v6(a2, &string) < 0
    || (StringRawBuffer = WindowsGetStringRawBuffer(string, 0LL), (unsigned int)_o__wcsicmp(**a1, StringRawBuffer)) )
  {
LABEL_7:
    v4 = 0;
  }
  wil::details::unique_storage<wil::details::resource_policy<HSTRING__ *,long (*)(HSTRING__ *),&long WindowsDeleteString(HSTRING__ *),wistd::integral_constant<unsigned __int64,0>,HSTRING__ *,HSTRING__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HSTRING__ *,long (*)(HSTRING__ *),&long WindowsDeleteString(HSTRING__ *),wistd::integral_constant<unsigned __int64,0>,HSTRING__ *,HSTRING__ *,0,std::nullptr_t>>(&string);
  return v4;
}
