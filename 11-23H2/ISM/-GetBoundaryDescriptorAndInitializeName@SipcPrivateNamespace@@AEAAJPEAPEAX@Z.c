/*
 * XREFs of ?GetBoundaryDescriptorAndInitializeName@SipcPrivateNamespace@@AEAAJPEAPEAX@Z @ 0x18011A190
 * Callers:
 *     ?Open@SipcPrivateNamespace@@QEAAJAEBUSipcPrivateNamespaceAttributes@@@Z @ 0x18011ABBC (-Open@SipcPrivateNamespace@@QEAAJAEBUSipcPrivateNamespaceAttributes@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x180056730 (__security_check_cookie.c)
 *     ?Return_GetLastError@in1diag0@details@wil@@YAJXZ @ 0x18011831C (-Return_GetLastError@in1diag0@details@wil@@YAJXZ.c)
 */

__int64 __fastcall SipcPrivateNamespace::GetBoundaryDescriptorAndInitializeName(SipcPrivateNamespace *this, void **a2)
{
  char *v3; // rcx
  unsigned __int64 v5; // r9
  _WORD *v6; // r8
  unsigned int v7; // edx
  __int64 v8; // rdx
  wil::details::in1diag0 *v9; // rcx
  __int64 v10; // r8
  const char *v11; // r9
  unsigned int LastError; // ebx
  HANDLE BoundaryDescriptor; // [rsp+20h] [rbp-20h] BYREF
  int RequiredSid; // [rsp+28h] [rbp-18h] BYREF
  __int64 v16; // [rsp+2Ch] [rbp-14h]

  *a2 = 0LL;
  v3 = (char *)this + 8;
  v5 = 0LL;
  v6 = (_WORD *)((char *)this + 18);
  *(_QWORD *)v3 = SipcPrivateNamespace::NamespacePrefix;
  *((_DWORD *)v3 + 2) = 95;
  do
  {
    v7 = *((unsigned __int8 *)this + v5++ + 84);
    *v6 = a0123456789abcd[(unsigned __int64)v7 >> 4];
    v6 += 2;
    *(v6 - 1) = a0123456789abcd[v7 & 0xF];
  }
  while ( v5 < 0x10 );
  *v6 = 0;
  BoundaryDescriptor = CreateBoundaryDescriptorW((LPCWSTR)v3, 0);
  if ( BoundaryDescriptor
    && (RequiredSid = 257, v16 = 0x1000000LL, AddSIDToBoundaryDescriptor(&BoundaryDescriptor, &RequiredSid))
    && (IsWellKnownSid((char *)this + 100, WinNullSid)
     || AddSIDToBoundaryDescriptor(&BoundaryDescriptor, (char *)this + 100)) )
  {
    *a2 = BoundaryDescriptor;
    return 0LL;
  }
  else
  {
    LastError = wil::details::in1diag0::Return_GetLastError(v9, v8, v10, v11);
    if ( (char *)BoundaryDescriptor - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
      DeleteBoundaryDescriptor(BoundaryDescriptor);
    return LastError;
  }
}
