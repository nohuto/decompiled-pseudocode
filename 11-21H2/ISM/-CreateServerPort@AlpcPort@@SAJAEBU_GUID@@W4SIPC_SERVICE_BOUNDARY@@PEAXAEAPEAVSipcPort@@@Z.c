/*
 * XREFs of ?CreateServerPort@AlpcPort@@SAJAEBU_GUID@@W4SIPC_SERVICE_BOUNDARY@@PEAXAEAPEAVSipcPort@@@Z @ 0x18002C83C
 * Callers:
 *     ?Create@SipcServer@@SAJAEBU_GUID@@W4SIPC_SERVICE_BOUNDARY@@P6AXPEAXPEAUISIPCServer@@KK@Z22PEAPEAU4@@Z @ 0x18003D284 (-Create@SipcServer@@SAJAEBU_GUID@@W4SIPC_SERVICE_BOUNDARY@@P6AXPEAXPEAUISIPCServer@@KK@Z22PEAPEA.c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAXP6APEAXPEAX@Z$1?LocalFree@@YAPEAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18002C9C0 (--1-$unique_storage@U-$resource_policy@PEAXP6APEAXPEAX@Z$1-LocalFree@@YAPEAX0@ZU-$integral_const.c)
 *     ??0AlpcPortString@@QEAA@AEBU_GUID@@W4SIPC_SERVICE_BOUNDARY@@@Z @ 0x18002C9E8 (--0AlpcPortString@@QEAA@AEBU_GUID@@W4SIPC_SERVICE_BOUNDARY@@@Z.c)
 *     ?InitializeSectionState@SipcPort@@IEAAJI@Z @ 0x18002CB28 (-InitializeSectionState@SipcPort@@IEAAJI@Z.c)
 *     ??0AlpcPort@@AEAA@_N@Z @ 0x18002CBB4 (--0AlpcPort@@AEAA@_N@Z.c)
 *     __security_check_cookie @ 0x18004A930 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18004B738 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?Return_GetLastError@in1diag0@details@wil@@YAJXZ @ 0x1800FC61C (-Return_GetLastError@in1diag0@details@wil@@YAJXZ.c)
 *     ?Return_Hr@in1diag0@details@wil@@YAXJ@Z @ 0x1800FC644 (-Return_Hr@in1diag0@details@wil@@YAXJ@Z.c)
 *     ??_GAlpcPort@@UEAAPEAXI@Z @ 0x1800FCEE0 (--_GAlpcPort@@UEAAPEAXI@Z.c)
 *     ?Return_NtStatus@in1diag0@details@wil@@YAJJ@Z @ 0x1800FF6A4 (-Return_NtStatus@in1diag0@details@wil@@YAJJ@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall AlpcPort::CreateServerPort(__int64 a1, __int64 a2, __int64 a3, SipcPort **a4)
{
  AlpcPort *v5; // rax
  unsigned int v6; // edx
  SipcPort *v7; // rax
  SipcPort *v8; // rdi
  unsigned int v9; // ebx
  wil::details::in1diag0 *v10; // rcx
  _QWORD *v11; // rsi
  char *v12; // r14
  int Port; // eax
  int v14; // edx
  unsigned int v16; // eax
  DWORD LastError; // ebx
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+28h] [rbp-E0h] BYREF
  PSECURITY_DESCRIPTOR SecurityDescriptor_8[2]; // [rsp+30h] [rbp-D8h] BYREF
  _BYTE *v20; // [rsp+40h] [rbp-C8h]
  _QWORD v21[4]; // [rsp+48h] [rbp-C0h]
  _BYTE v22[192]; // [rsp+68h] [rbp-A0h] BYREF

  *a4 = 0LL;
  v5 = (AlpcPort *)operator new(0x1F8uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( !v5 || (v7 = AlpcPort::AlpcPort(v5, 0), (v8 = v7) == 0LL) )
  {
    v9 = -2147024882;
    wil::details::in1diag0::Return_Hr((wil::details::in1diag0 *)0x8007000ELL, v6);
    return v9;
  }
  v9 = SipcPort::InitializeSectionState(v7, v6);
  if ( (v9 & 0x80000000) == 0 )
  {
    AlpcPortString::AlpcPortString(v22, &xmmword_1801F7BA0, 1LL);
    *(_OWORD *)SecurityDescriptor_8 = *(_OWORD *)&AlpcPort::ServerObjectAttributes.Length;
    v21[0] = 0LL;
    *(_OWORD *)&v21[1] = unk_180261020;
    v20 = v22;
    SecurityDescriptor = 0LL;
    if ( ConvertStringSecurityDescriptorToSecurityDescriptorW(
           L"D:(A;;GA;;;WD)(A;;0x001F0001;;;AC)(A;;0x001F0001;;;SY)(A;;0x00020001;;;BA)",
           1u,
           &SecurityDescriptor,
           0LL) )
    {
      v21[1] = SecurityDescriptor;
      v11 = (_QWORD *)((char *)v8 + 56);
      v12 = (char *)*((_QWORD *)v8 + 7);
      if ( (unsigned __int64)(v12 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
      {
        LastError = GetLastError();
        CloseHandle(v12);
        SetLastError(LastError);
      }
      *v11 = 0LL;
      Port = NtAlpcCreatePort((char *)v8 + 56, SecurityDescriptor_8, &AlpcPort::ServerPortAlpcAttributes);
      if ( Port >= 0 )
      {
        if ( ((*v11 + 1LL) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
        {
          *a4 = v8;
          wil::details::unique_storage<wil::details::resource_policy<void *,void * (*)(void *),&void * LocalFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,void * (*)(void *),&void * LocalFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(&SecurityDescriptor);
          return 0LL;
        }
        v9 = Port | 0x90000000;
        wil::details::in1diag0::Return_Hr((wil::details::in1diag0 *)(Port | 0x90000000), v14);
        goto LABEL_14;
      }
      v16 = wil::details::in1diag0::Return_NtStatus((wil::details::in1diag0 *)(unsigned int)Port, v14);
    }
    else
    {
      v16 = wil::details::in1diag0::Return_GetLastError(v10);
    }
    v9 = v16;
LABEL_14:
    wil::details::unique_storage<wil::details::resource_policy<void *,void * (*)(void *),&void * LocalFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,void * (*)(void *),&void * LocalFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(&SecurityDescriptor);
  }
  AlpcPort::`scalar deleting destructor'(v8, 1u);
  return v9;
}
