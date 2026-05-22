/*
 * XREFs of ?CreateServerPort@AlpcPort@@SAJAEBU_GUID@@W4SIPC_SERVICE_BOUNDARY@@PEAXAEAPEAVSipcPort@@@Z @ 0x18003980C
 * Callers:
 *     ?Create@SipcServer@@SAJAEBU_GUID@@W4SIPC_SERVICE_BOUNDARY@@P6AXPEAXPEAUISIPCServer@@KK@Z22PEAPEAU4@@Z @ 0x18003AAA8 (-Create@SipcServer@@SAJAEBU_GUID@@W4SIPC_SERVICE_BOUNDARY@@P6AXPEAXPEAUISIPCServer@@KK@Z22PEAPEA.c)
 * Callees:
 *     ??0AlpcPortString@@QEAA@AEBU_GUID@@W4SIPC_SERVICE_BOUNDARY@@@Z @ 0x1800520D0 (--0AlpcPortString@@QEAA@AEBU_GUID@@W4SIPC_SERVICE_BOUNDARY@@@Z.c)
 *     ?InitializeSectionState@SipcPort@@IEAAJI@Z @ 0x1800528CC (-InitializeSectionState@SipcPort@@IEAAJI@Z.c)
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x180052938 (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     ??0AlpcPort@@AEAA@_N@Z @ 0x180053008 (--0AlpcPort@@AEAA@_N@Z.c)
 *     __security_check_cookie @ 0x1800574C0 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180058434 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?Return_GetLastError@in1diag0@details@wil@@YAJXZ @ 0x1801263AC (-Return_GetLastError@in1diag0@details@wil@@YAJXZ.c)
 *     ?Return_Hr@in1diag0@details@wil@@YAXJ@Z @ 0x1801263D4 (-Return_Hr@in1diag0@details@wil@@YAXJ@Z.c)
 *     ??_GAlpcPort@@UEAAPEAXI@Z @ 0x180126B40 (--_GAlpcPort@@UEAAPEAXI@Z.c)
 *     ?Return_NtStatus@in1diag0@details@wil@@YAJJ@Z @ 0x180129404 (-Return_NtStatus@in1diag0@details@wil@@YAJJ@Z.c)
 */

__int64 __fastcall AlpcPort::CreateServerPort(__int64 a1, __int64 a2, __int64 a3, SipcPort **a4)
{
  AlpcPort *v5; // rax
  unsigned int v6; // edx
  SipcPort *v7; // rax
  SipcPort *v8; // rdi
  unsigned int v9; // ebx
  wil::details::in1diag0 *v10; // rcx
  int Port; // eax
  int v12; // edx
  PSECURITY_DESCRIPTOR v13; // rcx
  unsigned int LastError; // eax
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+20h] [rbp-E0h] BYREF
  _OWORD v17[2]; // [rsp+28h] [rbp-D8h] BYREF
  __int128 v18; // [rsp+48h] [rbp-B8h]
  _BYTE v19[192]; // [rsp+60h] [rbp-A0h] BYREF

  *a4 = 0LL;
  v5 = (AlpcPort *)operator new(0x1F8uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( !v5 || (v7 = AlpcPort::AlpcPort(v5, 0), (v8 = v7) == 0LL) )
  {
    v9 = -2147024882;
    wil::details::in1diag0::Return_Hr((wil::details::in1diag0 *)0x8007000ELL, v6);
    return v9;
  }
  v9 = SipcPort::InitializeSectionState(v7, v6);
  if ( (v9 & 0x80000000) != 0 )
  {
LABEL_16:
    AlpcPort::`scalar deleting destructor'(v8, 1u);
    return v9;
  }
  AlpcPortString::AlpcPortString(v19, &xmmword_180223A38, 1LL);
  SecurityDescriptor = 0LL;
  v17[0] = *(_OWORD *)&AlpcPort::ServerObjectAttributes.Length;
  v17[1] = (unsigned __int64)v19;
  v18 = unk_18029A020;
  if ( !ConvertStringSecurityDescriptorToSecurityDescriptorW(
          L"D:(A;;GA;;;WD)(A;;0x001F0001;;;AC)(A;;0x001F0001;;;SY)(A;;0x00020001;;;BA)",
          1u,
          &SecurityDescriptor,
          0LL) )
  {
    LastError = wil::details::in1diag0::Return_GetLastError(v10);
LABEL_12:
    v9 = LastError;
    goto LABEL_14;
  }
  *(_QWORD *)&v18 = SecurityDescriptor;
  wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
    (char *)v8 + 56,
    0LL);
  Port = NtAlpcCreatePort((char *)v8 + 56, v17, &AlpcPort::ServerPortAlpcAttributes);
  if ( Port < 0 )
  {
    LastError = wil::details::in1diag0::Return_NtStatus((wil::details::in1diag0 *)(unsigned int)Port, v12);
    goto LABEL_12;
  }
  if ( ((*((_QWORD *)v8 + 7) + 1LL) & 0xFFFFFFFFFFFFFFFEuLL) == 0 )
  {
    v9 = Port | 0x90000000;
    wil::details::in1diag0::Return_Hr((wil::details::in1diag0 *)(Port | 0x90000000), v12);
LABEL_14:
    if ( SecurityDescriptor )
      LocalFree(SecurityDescriptor);
    goto LABEL_16;
  }
  v13 = SecurityDescriptor;
  *a4 = v8;
  if ( v13 )
    LocalFree(v13);
  return 0LL;
}
