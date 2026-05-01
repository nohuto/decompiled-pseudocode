/*
 * XREFs of _lambda_661bc23c674c805837064d315685ee67_::operator() @ 0x1805F453C
 * Callers:
 *     Windows::Internal::AssignedAccess::AssignedAccessConfigurationHelper::FindUserInfoIf__lambda_661bc23c674c805837064d315685ee67___ @ 0x1805F4378 (Windows--Internal--AssignedAccess--AssignedAccessConfigurationHelper--FindUserInfoIf__lambda_661.c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAUHSTRING__@@P6AJPEAU1@@Z$1?WindowsDeleteString@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18010F5F8 (--1-$unique_storage@U-$resource_policy@PEAUHSTRING__@@P6AJPEAU1@@Z$1-WindowsDeleteString@@YAJ0@Z.c)
 *     ??$__invoke@P6AJPEAUHSTRING__@@@ZAEAPEAU1@@wistd@@YAJ$$QEAP6AJPEAUHSTRING__@@@ZAEAPEAU1@@Z @ 0x180191B5C (--$__invoke@P6AJPEAUHSTRING__@@@ZAEAPEAU1@@wistd@@YAJ$$QEAP6AJPEAUHSTRING__@@@ZAEAPEAU1@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
char __fastcall lambda_661bc23c674c805837064d315685ee67_::operator()(_QWORD **a1, __int64 a2)
{
  char v4; // di
  int (__fastcall *v5)(__int64, HSTRING *); // rbp
  DWORD LastError; // ebx
  PCWSTR StringRawBuffer; // rax
  HRESULT (__stdcall *v9)(HSTRING); // [rsp+20h] [rbp-38h] BYREF
  unsigned int v10; // [rsp+68h] [rbp+10h] BYREF
  HSTRING string; // [rsp+70h] [rbp+18h] BYREF
  HSTRING v12; // [rsp+78h] [rbp+20h] BYREF

  string = 0LL;
  if ( (*(int (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)a2 + 88LL))(a2, &v10) < 0 )
    goto LABEL_7;
  v4 = 1;
  if ( v10 > 1 )
    goto LABEL_7;
  v5 = *(int (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)a2 + 48LL);
  if ( string )
  {
    v12 = string;
    LastError = GetLastError();
    v9 = WindowsDeleteString;
    wistd::__invoke<long (*)(HSTRING__ *),HSTRING__ * &>((__int64 (__fastcall **)(_QWORD))&v9, &v12);
    SetLastError(LastError);
  }
  if ( v5(a2, &string) < 0
    || (StringRawBuffer = WindowsGetStringRawBuffer(string, 0LL), (unsigned int)_o__wcsicmp(**a1, StringRawBuffer)) )
  {
LABEL_7:
    v4 = 0;
  }
  wil::details::unique_storage<wil::details::resource_policy<HSTRING__ *,long (*)(HSTRING__ *),&long WindowsDeleteString(HSTRING__ *),wistd::integral_constant<unsigned __int64,0>,HSTRING__ *,HSTRING__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HSTRING__ *,long (*)(HSTRING__ *),&long WindowsDeleteString(HSTRING__ *),wistd::integral_constant<unsigned __int64,0>,HSTRING__ *,HSTRING__ *,0,std::nullptr_t>>(&string);
  return v4;
}
