/*
 * XREFs of LdrpGetFullPath @ 0x18002DDA0
 * Callers:
 *     LdrpPreprocessDllName @ 0x1800196B0 (LdrpPreprocessDllName.c)
 *     LdrpApplyFileNameRedirection @ 0x1800198D4 (LdrpApplyFileNameRedirection.c)
 *     LdrpLoadDependentModuleInternal @ 0x1800251E0 (LdrpLoadDependentModuleInternal.c)
 *     LdrpResolveDllName @ 0x18002A874 (LdrpResolveDllName.c)
 * Callees:
 *     RtlGetFullPathName_Ustr @ 0x18001C0C0 (RtlGetFullPathName_Ustr.c)
 *     NtdllpFreeStringRoutine @ 0x180039640 (NtdllpFreeStringRoutine.c)
 *     NtdllpAllocateStringRoutine @ 0x180039660 (NtdllpAllocateStringRoutine.c)
 */

__int64 __fastcall LdrpGetFullPath(unsigned __int16 *a1, __int64 a2)
{
  unsigned int FullPathName_Ustr; // eax
  __int64 v5; // rdx
  unsigned int v6; // ebx
  __int16 v7; // si
  _WORD *StringRoutine; // r14
  __int64 v10; // rcx
  char v11; // [rsp+68h] [rbp+10h] BYREF
  int v12; // [rsp+70h] [rbp+18h] BYREF
  int v13; // [rsp+74h] [rbp+1Ch]
  __int64 v14; // [rsp+78h] [rbp+20h] BYREF

  FullPathName_Ustr = RtlGetFullPathName_Ustr(
                        a1,
                        *(unsigned __int16 *)(a2 + 2),
                        *(wchar_t **)(a2 + 8),
                        &v14,
                        &v11,
                        (__int64)&v12);
  v6 = 0;
  while ( 1 )
  {
    v7 = FullPathName_Ustr;
    if ( v11 )
      break;
    if ( FullPathName_Ustr - 1 > 0xFFFD )
      return (unsigned int)-1073741562;
    if ( v12 == 5 && (LdrpIllegalCWDDevices & v13) != 0 )
      break;
    if ( FullPathName_Ustr < *(unsigned __int16 *)(a2 + 2) )
    {
      *(_WORD *)a2 = FullPathName_Ustr;
      return v6;
    }
    StringRoutine = (_WORD *)NtdllpAllocateStringRoutine(FullPathName_Ustr, v5);
    if ( !StringRoutine )
      return (unsigned int)-1073741801;
    v10 = *(_QWORD *)(a2 + 8);
    if ( a2 + 16 != v10 )
      NtdllpFreeStringRoutine(v10);
    *(_WORD *)(a2 + 16) = 0;
    *(_QWORD *)(a2 + 8) = StringRoutine;
    *(_WORD *)a2 = 0;
    *(_WORD *)(a2 + 2) = v7;
    *StringRoutine = 0;
    FullPathName_Ustr = RtlGetFullPathName_Ustr(
                          a1,
                          *(unsigned __int16 *)(a2 + 2),
                          *(wchar_t **)(a2 + 8),
                          &v14,
                          &v11,
                          (__int64)&v12);
  }
  return (unsigned int)-1073741515;
}
