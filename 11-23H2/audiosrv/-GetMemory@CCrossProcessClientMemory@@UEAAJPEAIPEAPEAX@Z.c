/*
 * XREFs of ?GetMemory@CCrossProcessClientMemory@@UEAAJPEAIPEAPEAX@Z @ 0x1801632D0
 * Callers:
 *     <none>
 * Callees:
 *     ?Log_IfFailedWithExpected@in1diag3@details@wil@@YAJPEAXIPEBDJIZZ @ 0x180013808 (-Log_IfFailedWithExpected@in1diag3@details@wil@@YAJPEAXIPEBDJIZZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800CD4A0 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?AERTLockMemory@@YAJPEAX_K@Z @ 0x180169204 (-AERTLockMemory@@YAJPEAX_K@Z.c)
 */

__int64 __fastcall CCrossProcessClientMemory::GetMemory(CCrossProcessClientMemory *this, unsigned int *a2, void **a3)
{
  __int64 v6; // rdx
  unsigned int v7; // ebx
  void *v9; // rcx
  const void *v10; // rbp
  const char *v11; // r9
  __int64 v12; // rdx
  unsigned int v13; // eax
  SIZE_T dwNumberOfBytesToMap; // r14
  void *v15; // rax
  void *v16; // rbp
  unsigned int v17; // eax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  if ( !a3 )
  {
    v6 = 48LL;
LABEL_3:
    v7 = -2147024809;
LABEL_4:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (int)"avcore\\audiocore\\engine\\core\\crossprocessengineobjects\\cpclientmemory.cpp",
      (const char *)v7);
    return v7;
  }
  if ( !a2 )
  {
    v6 = 49LL;
    goto LABEL_3;
  }
  *a3 = 0LL;
  *a2 = 0;
  v9 = (void *)*((_QWORD *)this + 2);
  if ( (((unsigned __int64)v9 + 1) & 0xFFFFFFFFFFFFFFFEuLL) == 0 )
  {
    v7 = -2147467261;
    v6 = 56LL;
    goto LABEL_4;
  }
  v10 = MapViewOfFile(v9, 0xF001Fu, 0, 0, 0x190uLL);
  if ( !v10 )
  {
    v12 = 60LL;
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)v12,
             (unsigned int)"avcore\\audiocore\\engine\\core\\crossprocessengineobjects\\cpclientmemory.cpp",
             v11);
  }
  v13 = (*(__int64 (__fastcall **)(CCrossProcessClientMemory *, const void *))(*(_QWORD *)this + 72LL))(this, v10);
  dwNumberOfBytesToMap = v13;
  if ( !v13 )
  {
    v7 = -2005139387;
    v6 = 64LL;
    goto LABEL_4;
  }
  UnmapViewOfFile(v10);
  v15 = MapViewOfFile(*((HANDLE *)this + 2), 0xF001Fu, 0, 0, dwNumberOfBytesToMap);
  v16 = v15;
  if ( !v15 )
  {
    v12 = 69LL;
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)v12,
             (unsigned int)"avcore\\audiocore\\engine\\core\\crossprocessengineobjects\\cpclientmemory.cpp",
             v11);
  }
  v17 = AERTLockMemory(v15, dwNumberOfBytesToMap);
  wil::details::in1diag3::Log_IfFailedWithExpected(
    retaddr,
    (void *)0x4A,
    (int)"avcore\\audiocore\\engine\\core\\crossprocessengineobjects\\cpclientmemory.cpp",
    (const char *)v17,
    1u,
    0x80070522);
  *((_QWORD *)this + 4) = v16;
  *((_DWORD *)this + 6) = dwNumberOfBytesToMap;
  *a2 = dwNumberOfBytesToMap;
  *a3 = (void *)*((_QWORD *)this + 4);
  return 0LL;
}
