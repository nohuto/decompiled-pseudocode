/*
 * XREFs of ?SerializeForRPC@CCrossProcessClientMemory@@UEAAJPEAUCP_MEMORY_METADATA_BLOB@@@Z @ 0x18000B280
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@IEAA@XZ @ 0x18004053C (--1-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@wil@.c)
 *     memset_0 @ 0x18005F9D8 (memset_0.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800BFD00 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BFD20 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CCrossProcessClientMemory::SerializeForRPC(
        CCrossProcessClientMemory *this,
        struct CP_MEMORY_METADATA_BLOB *a2)
{
  struct CP_MEMORY_METADATA_BLOB *v4; // r8
  _OWORD *v5; // rax
  __int64 v6; // rdx
  HANDLE CurrentProcess; // rbx
  void *v8; // rdi
  HANDLE v9; // rax
  const char *v10; // r9
  int LastError; // ebx
  DWORD dwDesiredAccess; // [rsp+20h] [rbp-158h]
  DWORD dwDesiredAccessa; // [rsp+20h] [rbp-158h]
  _BYTE v15[304]; // [rsp+40h] [rbp-138h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+178h] [rbp+0h]
  HANDLE TargetHandle; // [rsp+180h] [rbp+8h] BYREF

  memset_0(v15, 0, 0x128uLL);
  v4 = a2;
  v5 = v15;
  v6 = 2LL;
  do
  {
    *(_OWORD *)v4 = *v5;
    *((_OWORD *)v4 + 1) = v5[1];
    *((_OWORD *)v4 + 2) = v5[2];
    *((_OWORD *)v4 + 3) = v5[3];
    *((_OWORD *)v4 + 4) = v5[4];
    *((_OWORD *)v4 + 5) = v5[5];
    *((_OWORD *)v4 + 6) = v5[6];
    v4 = (struct CP_MEMORY_METADATA_BLOB *)((char *)v4 + 128);
    *((_OWORD *)v4 - 1) = v5[7];
    v5 += 8;
    --v6;
  }
  while ( v6 );
  *(_OWORD *)v4 = *v5;
  *((_OWORD *)v4 + 1) = v5[1];
  *((_QWORD *)v4 + 4) = *((_QWORD *)v5 + 4);
  if ( ((*((_QWORD *)this + 2) + 1LL) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
  {
    *((_QWORD *)a2 + 1) = 0LL;
    TargetHandle = 0LL;
    CurrentProcess = GetCurrentProcess();
    v8 = (void *)*((_QWORD *)this + 2);
    v9 = GetCurrentProcess();
    if ( DuplicateHandle(v9, v8, CurrentProcess, &TargetHandle, 0, 0, 2u) )
    {
      *((_QWORD *)a2 + 1) = TargetHandle;
LABEL_6:
      *(_DWORD *)a2 = 1;
      return 0LL;
    }
    LastError = wil::details::in1diag3::Return_GetLastError(
                  retaddr,
                  (void *)0x27,
                  (unsigned int)"avcore\\audiocore\\engine\\core\\crossprocessengineobjects\\cpbasememory.cpp",
                  v10);
    wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(&TargetHandle);
    if ( LastError >= 0 )
      goto LABEL_6;
  }
  else
  {
    LastError = -2147467259;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1A,
      (unsigned int)"avcore\\audiocore\\engine\\core\\crossprocessengineobjects\\cpbasememory.cpp",
      (const char *)0x80004005LL,
      dwDesiredAccess);
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x28,
    (unsigned int)"avcore\\audiocore\\engine\\core\\crossprocessengineobjects\\cpclientmemory.cpp",
    (const char *)(unsigned int)LastError,
    dwDesiredAccessa);
  return (unsigned int)LastError;
}
