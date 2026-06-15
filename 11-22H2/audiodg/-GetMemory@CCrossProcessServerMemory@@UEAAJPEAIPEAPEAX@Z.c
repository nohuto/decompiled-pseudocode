/*
 * XREFs of ?GetMemory@CCrossProcessServerMemory@@UEAAJPEAIPEAPEAX@Z @ 0x140024B60
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x14004DEF4 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14004DF14 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CCrossProcessServerMemory::GetMemory(CCrossProcessServerMemory *this, unsigned int *a2, void **a3)
{
  void *v5; // rcx
  LPVOID v7; // rax
  const char *v8; // r9
  unsigned int v10; // ebx
  __int64 v11; // rdx
  int dwNumberOfBytesToMap; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v5 = (void *)*((_QWORD *)this + 2);
  if ( (((unsigned __int64)v5 + 1) & 0xFFFFFFFFFFFFFFFEuLL) == 0 )
  {
    v10 = -2147467261;
    v11 = 82LL;
LABEL_9:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (unsigned int)"avcore\\audiocore\\engine\\core\\crossprocessengineobjects\\cpmemorymanager.cpp",
      (const char *)v10,
      dwNumberOfBytesToMap);
    return v10;
  }
  if ( !*((_DWORD *)this + 6) )
  {
    v10 = -2147467259;
    v11 = 85LL;
    goto LABEL_9;
  }
  if ( *((_QWORD *)this + 4) )
  {
LABEL_6:
    *a2 = *((_DWORD *)this + 6);
    *a3 = (void *)*((_QWORD *)this + 4);
    return 0LL;
  }
  v7 = MapViewOfFile(v5, 0xF001Fu, 0, 0, *((unsigned int *)this + 6));
  if ( v7 )
  {
    *((_QWORD *)this + 4) = v7;
    goto LABEL_6;
  }
  return wil::details::in1diag3::Return_GetLastError(
           retaddr,
           (void *)0x5D,
           (unsigned int)"avcore\\audiocore\\engine\\core\\crossprocessengineobjects\\cpmemorymanager.cpp",
           v8);
}
