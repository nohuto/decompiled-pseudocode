/*
 * XREFs of LdrpInitializeNtdllDataTableEntry @ 0x18007E7C0
 * Callers:
 *     LdrpInitializeProcess @ 0x1800D4658 (LdrpInitializeProcess.c)
 * Callees:
 *     LdrpFreeUnicodeString @ 0x180011348 (LdrpFreeUnicodeString.c)
 *     RtlAppendUnicodeStringToString @ 0x180019500 (RtlAppendUnicodeStringToString.c)
 *     LdrpLogDllState @ 0x180019CC4 (LdrpLogDllState.c)
 *     RtlImageNtHeaderEx @ 0x180024AA0 (RtlImageNtHeaderEx.c)
 *     LdrpLogInternal @ 0x180026D80 (LdrpLogInternal.c)
 *     LdrpGetBaseNameFromFullName @ 0x18002A118 (LdrpGetBaseNameFromFullName.c)
 *     LdrpRecordModuleDependency @ 0x18002AC58 (LdrpRecordModuleDependency.c)
 *     LdrpAllocateUnicodeString @ 0x18002B3D0 (LdrpAllocateUnicodeString.c)
 *     LdrpProcessMappedModule @ 0x18002B594 (LdrpProcessMappedModule.c)
 *     LdrpInsertDataTableEntry @ 0x18002D0D8 (LdrpInsertDataTableEntry.c)
 *     RtlCopyUnicodeString @ 0x18002D860 (RtlCopyUnicodeString.c)
 *     LdrpAllocateModuleEntry @ 0x18002E660 (LdrpAllocateModuleEntry.c)
 *     LdrpInsertModuleToIndex @ 0x18007E92C (LdrpInsertModuleToIndex.c)
 */

__int64 __fastcall LdrpInitializeNtdllDataTableEntry(
        PVOID BaseOfImage,
        __int64 *a2,
        __int64 a3,
        const UNICODE_STRING *a4,
        _OWORD *a5)
{
  char *ModuleEntry; // rax
  __int64 v10; // rbx
  __int64 v11; // rdi
  _UNICODE_STRING *v12; // rcx
  int UnicodeString; // esi
  PIMAGE_NT_HEADERS v15[5]; // [rsp+30h] [rbp-28h] BYREF

  RtlImageNtHeaderEx(3u, BaseOfImage, 0LL, v15);
  ModuleEntry = LdrpAllocateModuleEntry(0LL);
  v10 = (__int64)ModuleEntry;
  if ( !ModuleEntry )
  {
    LdrpLogInternal(
      (unsigned int)"minkernel\\ntdll\\ldrinit.c",
      4541,
      (__int64)"LdrpInitializeNtdllDataTableEntry",
      0,
      "Allocating a data table entry for the system DLL failed\n");
    UnicodeString = -1073741801;
    v11 = 72LL;
    goto LABEL_14;
  }
  *(_DWORD *)(*((_QWORD *)ModuleEntry + 19) + 24LL) = -1;
  *(_WORD *)(**((_QWORD **)ModuleEntry + 19) - 52LL) = -1;
  *((_DWORD *)ModuleEntry + 26) |= 0x204u;
  if ( !a3 )
    *((_QWORD *)ModuleEntry + 31) -= LdrSystemDllInitBlock.SystemDllNativeRelocation;
  v11 = (__int64)(ModuleEntry + 72);
  v12 = (_UNICODE_STRING *)(ModuleEntry + 72);
  if ( a4 )
  {
    UnicodeString = LdrpAllocateUnicodeString((__int64)v12, a4->Length);
    if ( UnicodeString < 0 )
      goto LABEL_11;
    RtlCopyUnicodeString((PUNICODE_STRING)(v10 + 72), a4);
    LdrpGetBaseNameFromFullName(v10 + 72, v10 + 88);
  }
  else
  {
    *(_OWORD *)v11 = *a5;
    RtlAppendUnicodeStringToString(v12, &NtDllName);
    *(UNICODE_STRING *)(v10 + 88) = NtDllName;
  }
  *(_QWORD *)(v10 + 48) = BaseOfImage;
  if ( a3 )
    *(_DWORD *)(v10 + 268) = 9;
  LdrpInsertDataTableEntry(v10);
  LdrpLogDllState(*(_QWORD *)(v10 + 48), v10 + 72, 0x14A5u);
  LdrpInsertModuleToIndex(v10, v15[0]);
  LODWORD(v15[0]) = LdrpProcessMappedModule(v10, 0, 1);
  UnicodeString = (int)v15[0];
  if ( SLODWORD(v15[0]) < 0 )
  {
LABEL_11:
    if ( UnicodeString >= 0 )
      return (unsigned int)UnicodeString;
    goto LABEL_14;
  }
  LdrpLogDllState(*(_QWORD *)(v10 + 48), v10 + 72, 0x14AEu);
  if ( !a3 )
  {
LABEL_10:
    *(_DWORD *)(*(_QWORD *)(v10 + 152) + 56LL) = 9;
    *a2 = v10;
    goto LABEL_11;
  }
  LdrpRecordModuleDependency(LdrpNtDllDataTableEntry, v10, 0LL, v15);
  UnicodeString = (int)v15[0];
  if ( SLODWORD(v15[0]) >= 0 )
  {
    *(_QWORD *)(v10 + 184) = *(_QWORD *)(a3 + 48);
    *(_DWORD *)(a3 + 304) = 3;
    *(_QWORD *)(a3 + 296) = *(_QWORD *)(v10 + 48);
    *(_DWORD *)(v10 + 304) = 2;
    goto LABEL_10;
  }
LABEL_14:
  if ( v10 )
    LdrpFreeUnicodeString(v11);
  return (unsigned int)UnicodeString;
}
