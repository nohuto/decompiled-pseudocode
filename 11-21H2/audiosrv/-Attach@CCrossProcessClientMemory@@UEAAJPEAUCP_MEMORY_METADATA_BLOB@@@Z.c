/*
 * XREFs of ?Attach@CCrossProcessClientMemory@@UEAAJPEAUCP_MEMORY_METADATA_BLOB@@@Z @ 0x18000DDE0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BFD20 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?close_reset@?$resource_policy@PEAXP6AHPEAX@Z$1?CloseHandle@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@SAXPEAX@Z @ 0x1800F09D8 (-close_reset@-$resource_policy@PEAXP6AHPEAX@Z$1-CloseHandle@@YAH0@ZU-$integral_constant@_K$0A@@w.c)
 */

__int64 __fastcall CCrossProcessClientMemory::Attach(
        CCrossProcessClientMemory *this,
        struct CP_MEMORY_METADATA_BLOB *a2)
{
  __int64 v4; // rsi
  char *v5; // rcx
  unsigned int v7; // ebx
  __int64 v8; // rdx
  int v9; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( *(_DWORD *)a2 != 1 )
  {
    v7 = -2147024809;
    v8 = 32LL;
LABEL_8:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (unsigned int)"avcore\\audiocore\\engine\\core\\crossprocessengineobjects\\cpclientmemory.cpp",
      (const char *)v7,
      v9);
    return v7;
  }
  v4 = *((_QWORD *)a2 + 1);
  if ( ((v4 + 1) & 0xFFFFFFFFFFFFFFFEuLL) == 0 )
  {
    v7 = -2147024890;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xA,
      (unsigned int)"avcore\\audiocore\\engine\\core\\crossprocessengineobjects\\cpbasememory.cpp",
      (const char *)0x80070006LL,
      v9);
    v8 = 33LL;
    goto LABEL_8;
  }
  v5 = (char *)*((_QWORD *)this + 2);
  if ( (unsigned __int64)(v5 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    wil::details::resource_policy<void *,int (*)(void *),&int CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>::close_reset(v5);
  *((_QWORD *)this + 2) = v4;
  *((_QWORD *)a2 + 1) = 0LL;
  return 0LL;
}
