/*
 * XREFs of ?SerializeForRPC@CCrossProcessBaseMemory@@UEAAJPEAUSTANDARD_CROSSPROCESS_MEMORY@@@Z @ 0x14001AE00
 * Callers:
 *     ?SerializeForRPC@CCrossProcessServerMemory@@UEAAJPEAUCP_MEMORY_METADATA_BLOB@@@Z @ 0x14001AD20 (-SerializeForRPC@CCrossProcessServerMemory@@UEAAJPEAUCP_MEMORY_METADATA_BLOB@@@Z.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x14001AFE0 (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x14004B464 (--1-$unique_any_t@V-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x14004DEB4 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14004DED4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CCrossProcessBaseMemory::SerializeForRPC(
        CCrossProcessBaseMemory *this,
        struct STANDARD_CROSSPROCESS_MEMORY *a2)
{
  HANDLE CurrentProcess; // rax
  void *v5; // rdi
  void *v6; // rbx
  HANDLE v7; // rax
  const char *v8; // r9
  unsigned int LastError; // ebx
  int v11; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  HANDLE TargetHandle; // [rsp+50h] [rbp+8h] BYREF

  if ( ((*((_QWORD *)this + 2) + 1LL) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
  {
    *(_QWORD *)a2 = 0LL;
    TargetHandle = 0LL;
    wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
      &TargetHandle,
      0LL);
    CurrentProcess = GetCurrentProcess();
    v5 = (void *)*((_QWORD *)this + 2);
    v6 = CurrentProcess;
    v7 = GetCurrentProcess();
    if ( DuplicateHandle(v7, v5, v6, &TargetHandle, 0, 0, 2u) )
    {
      *(_QWORD *)a2 = TargetHandle;
      return 0LL;
    }
    LastError = wil::details::in1diag3::Return_GetLastError(
                  retaddr,
                  (void *)0x27,
                  (unsigned int)"avcore\\audiocore\\engine\\core\\crossprocessengineobjects\\cpbasememory.cpp",
                  v8);
    wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>::~unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>(&TargetHandle);
  }
  else
  {
    LastError = -2147467259;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1A,
      (unsigned int)"avcore\\audiocore\\engine\\core\\crossprocessengineobjects\\cpbasememory.cpp",
      (const char *)0x80004005LL,
      v11);
  }
  return LastError;
}
