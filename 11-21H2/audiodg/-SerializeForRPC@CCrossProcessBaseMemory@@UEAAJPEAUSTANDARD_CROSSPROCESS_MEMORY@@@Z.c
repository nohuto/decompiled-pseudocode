/*
 * XREFs of ?SerializeForRPC@CCrossProcessBaseMemory@@UEAAJPEAUSTANDARD_CROSSPROCESS_MEMORY@@@Z @ 0x14001F3E0
 * Callers:
 *     ?SerializeForRPC@CCrossProcessServerMemory@@UEAAJPEAUCP_MEMORY_METADATA_BLOB@@@Z @ 0x14001F300 (-SerializeForRPC@CCrossProcessServerMemory@@UEAAJPEAUCP_MEMORY_METADATA_BLOB@@@Z.c)
 * Callees:
 *     ??1?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@IEAA@XZ @ 0x14001F710 (--1-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@wil@.c)
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x14001F888 (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x140026348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x14004EC84 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall CCrossProcessBaseMemory::SerializeForRPC(
        CCrossProcessBaseMemory *this,
        struct STANDARD_CROSSPROCESS_MEMORY *a2)
{
  unsigned int LastError; // esi
  HANDLE CurrentProcess; // rax
  void *v6; // rdi
  void *v7; // rbx
  HANDLE v8; // rax
  const char *v9; // r9
  DWORD dwDesiredAccess; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  HANDLE TargetHandle; // [rsp+50h] [rbp+8h] BYREF

  if ( ((*((_QWORD *)this + 2) + 1LL) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
  {
    LastError = 0;
    *(_QWORD *)a2 = 0LL;
    TargetHandle = 0LL;
    wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
      &TargetHandle,
      0LL);
    CurrentProcess = GetCurrentProcess();
    v6 = (void *)*((_QWORD *)this + 2);
    v7 = CurrentProcess;
    v8 = GetCurrentProcess();
    if ( DuplicateHandle(v8, v6, v7, &TargetHandle, 0, 0, 2u) )
    {
      *(_QWORD *)a2 = TargetHandle;
      TargetHandle = 0LL;
    }
    else
    {
      LastError = wil::details::in1diag3::Return_GetLastError(
                    retaddr,
                    (void *)0x27,
                    (unsigned int)"avcore\\audiocore\\engine\\core\\crossprocessengineobjects\\cpbasememory.cpp",
                    v9);
    }
    wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(&TargetHandle);
    return LastError;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1A,
      (unsigned int)"avcore\\audiocore\\engine\\core\\crossprocessengineobjects\\cpbasememory.cpp",
      (const char *)0x80004005LL,
      dwDesiredAccess);
    return 2147500037LL;
  }
}
