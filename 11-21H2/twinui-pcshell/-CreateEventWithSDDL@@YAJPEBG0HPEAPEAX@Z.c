/*
 * XREFs of ?CreateEventWithSDDL@@YAJPEBG0HPEAPEAX@Z @ 0x1803FC7AC
 * Callers:
 *     _lambda_b1ccbe0050df59b1c7585372b6aa23ae_::operator() @ 0x1803FC320 (_lambda_b1ccbe0050df59b1c7585372b6aa23ae_--operator().c)
 *     _lambda_b54eacfb88775a45f9bf3f20a89a8862_::operator() @ 0x180405574 (_lambda_b54eacfb88775a45f9bf3f20a89a8862_--operator().c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAGP6APEAXPEAX@Z$1?LocalFree@@YAPEAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x180065868 (--1-$unique_storage@U-$resource_policy@PEAGP6APEAXPEAX@Z$1-LocalFree@@YAPEAX0@ZU-$integral_const.c)
 *     ?ResultFromKnownLastError@@YAJXZ @ 0x1800E7D10 (-ResultFromKnownLastError@@YAJXZ.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180166104 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CreateEventWithSDDL(LPCWSTR lpName, const unsigned __int16 *a2, __int64 a3, void **a4)
{
  const WCHAR *v5; // rbx
  unsigned int v6; // edi
  bool v7; // r12
  PSECURITY_DESCRIPTOR v8; // r15
  void *v9; // r14
  DWORD LastError; // ebx
  unsigned int Error; // eax
  HANDLE v12; // rax
  const char *v13; // r9
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+28h] [rbp-28h] BYREF
  char v16; // [rsp+30h] [rbp-20h]
  struct _SECURITY_ATTRIBUTES EventAttributes; // [rsp+38h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+38h]
  void *v20; // [rsp+98h] [rbp+48h] BYREF
  ULONG SecurityDescriptorSize; // [rsp+A0h] [rbp+50h] BYREF

  v5 = lpName;
  v6 = 0;
  *a4 = 0LL;
  v20 = 0LL;
  SecurityDescriptorSize = 0;
  SecurityDescriptor = 0LL;
  v16 = 1;
  v7 = !ConvertStringSecurityDescriptorToSecurityDescriptorW(
          L"D:(A;;0xFFFFFFFFF;;;WD)(A;;0xFFFFFFFFF;;;AC)",
          1u,
          &SecurityDescriptor,
          &SecurityDescriptorSize);
  if ( v16 )
  {
    v8 = SecurityDescriptor;
    v9 = v20;
    if ( v20 )
    {
      LastError = GetLastError();
      LocalFree(v9);
      SetLastError(LastError);
      v5 = lpName;
    }
    v20 = v8;
  }
  if ( v7 )
  {
    Error = ResultFromKnownLastError();
LABEL_9:
    v6 = Error;
    goto LABEL_10;
  }
  *(_QWORD *)&EventAttributes.nLength = 24LL;
  *(_QWORD *)&EventAttributes.bInheritHandle = 0LL;
  EventAttributes.lpSecurityDescriptor = v20;
  v12 = CreateEventW(&EventAttributes, 1, 0, v5);
  *a4 = v12;
  if ( !v12 )
  {
    Error = wil::details::in1diag3::Return_GetLastError(
              retaddr,
              (void *)0x184,
              (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\common.h",
              v13);
    goto LABEL_9;
  }
LABEL_10:
  wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void * (*)(void *),&void * LocalFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<unsigned short *,void * (*)(void *),&void * LocalFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>(&v20);
  return v6;
}
