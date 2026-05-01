/*
 * XREFs of ?CreateEventWithSDDL@@YAJPEBG0HPEAPEAX@Z @ 0x1804DD600
 * Callers:
 *     _lambda_b1ccbe0050df59b1c7585372b6aa23ae_::operator() @ 0x1804DCF5C (_lambda_b1ccbe0050df59b1c7585372b6aa23ae_--operator().c)
 *     _lambda_8b16b784198cc2ffe8f5be0ce118e36a_::operator() @ 0x1804E1E24 (_lambda_8b16b784198cc2ffe8f5be0ce118e36a_--operator().c)
 * Callees:
 *     ?ResultFromKnownLastError@@YAJXZ @ 0x18004EB90 (-ResultFromKnownLastError@@YAJXZ.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1801322B8 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAXP6APEAXPEAX@Z$1?LocalFree@@YAPEAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x1801B84A0 (-reset@-$unique_storage@U-$resource_policy@PEAXP6APEAXPEAX@Z$1-LocalFree@@YAPEAX0@ZU-$integral_c.c)
 */

__int64 __fastcall CreateEventWithSDDL(LPCWSTR lpName, const unsigned __int16 *a2, __int64 a3, void **a4)
{
  bool v6; // bl
  unsigned int Error; // eax
  HANDLE v8; // rax
  const char *v9; // r9
  unsigned int v10; // ebx
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+28h] [rbp-28h] BYREF
  char v13; // [rsp+30h] [rbp-20h]
  struct _SECURITY_ATTRIBUTES EventAttributes; // [rsp+38h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]
  HLOCAL hMem; // [rsp+78h] [rbp+28h] BYREF
  ULONG SecurityDescriptorSize; // [rsp+80h] [rbp+30h] BYREF

  *a4 = 0LL;
  hMem = 0LL;
  SecurityDescriptorSize = 0;
  SecurityDescriptor = 0LL;
  v13 = 1;
  v6 = !ConvertStringSecurityDescriptorToSecurityDescriptorW(
          L"D:(A;;0xFFFFFFFFF;;;WD)(A;;0xFFFFFFFFF;;;AC)",
          1u,
          &SecurityDescriptor,
          &SecurityDescriptorSize);
  if ( v13 )
    wil::details::unique_storage<wil::details::resource_policy<void *,void * (*)(void *),&void * LocalFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::reset(
      &hMem,
      SecurityDescriptor);
  if ( v6 )
  {
    Error = ResultFromKnownLastError();
LABEL_7:
    v10 = Error;
    goto LABEL_9;
  }
  *(&EventAttributes.nLength + 1) = 0;
  *(_QWORD *)&EventAttributes.bInheritHandle = 0LL;
  EventAttributes.nLength = 24;
  EventAttributes.lpSecurityDescriptor = hMem;
  v8 = CreateEventW(&EventAttributes, 1, 0, lpName);
  *a4 = v8;
  if ( !v8 )
  {
    Error = wil::details::in1diag3::Return_GetLastError(
              retaddr,
              (void *)0x184,
              (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\common.h",
              v9);
    goto LABEL_7;
  }
  v10 = 0;
LABEL_9:
  if ( hMem )
    LocalFree(hMem);
  return v10;
}
