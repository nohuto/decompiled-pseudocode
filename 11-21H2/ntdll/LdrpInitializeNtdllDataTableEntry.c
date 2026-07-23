/*
 * XREFs of LdrpInitializeNtdllDataTableEntry @ 0x180083010
 * Callers:
 *     LdrpInitializeProcess @ 0x1800DE07C (LdrpInitializeProcess.c)
 * Callees:
 *     RtlCopyUnicodeString @ 0x180034770 (RtlCopyUnicodeString.c)
 *     LdrpProcessMappedModule @ 0x180034AEC (LdrpProcessMappedModule.c)
 *     RtlImageNtHeaderEx @ 0x18003CF10 (RtlImageNtHeaderEx.c)
 *     LdrpLogInternal @ 0x18003F290 (LdrpLogInternal.c)
 *     LdrpGetBaseNameFromFullName @ 0x180042D7C (LdrpGetBaseNameFromFullName.c)
 *     LdrpLogDllState @ 0x180044F74 (LdrpLogDllState.c)
 *     RtlAppendUnicodeStringToString @ 0x180049410 (RtlAppendUnicodeStringToString.c)
 *     LdrpInsertDataTableEntry @ 0x18004D144 (LdrpInsertDataTableEntry.c)
 *     LdrpAllocateModuleEntry @ 0x18004DF68 (LdrpAllocateModuleEntry.c)
 *     LdrpAllocateUnicodeString @ 0x18004FAEC (LdrpAllocateUnicodeString.c)
 *     LdrpFreeUnicodeString @ 0x180051B14 (LdrpFreeUnicodeString.c)
 *     LdrpRecordModuleDependency @ 0x1800540E4 (LdrpRecordModuleDependency.c)
 *     LdrpInsertModuleToIndex @ 0x18008321C (LdrpInsertModuleToIndex.c)
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
  int UnicodeString; // edi
  _UNICODE_STRING *v12; // rcx
  PIMAGE_NT_HEADERS v14[5]; // [rsp+30h] [rbp-28h] BYREF

  RtlImageNtHeaderEx(3u, BaseOfImage, 0LL, v14);
  ModuleEntry = LdrpAllocateModuleEntry(0LL);
  v10 = (__int64)ModuleEntry;
  if ( ModuleEntry )
  {
    *(_DWORD *)(*((_QWORD *)ModuleEntry + 19) + 24LL) = -1;
    *(_WORD *)(**((_QWORD **)ModuleEntry + 19) - 52LL) = -1;
    *((_DWORD *)ModuleEntry + 26) |= 0x204u;
    if ( !a3 )
      *((_QWORD *)ModuleEntry + 31) -= LdrSystemDllInitBlock.SystemDllNativeRelocation;
    v12 = (_UNICODE_STRING *)(ModuleEntry + 72);
    if ( a4 )
    {
      UnicodeString = LdrpAllocateUnicodeString((__int64)v12, a4->Length);
      if ( UnicodeString < 0 )
        goto LABEL_16;
      RtlCopyUnicodeString((PUNICODE_STRING)(v10 + 72), a4);
      LdrpGetBaseNameFromFullName((unsigned __int16 *)(v10 + 72), v10 + 88);
    }
    else
    {
      *(_OWORD *)(ModuleEntry + 72) = *a5;
      RtlAppendUnicodeStringToString(v12, &NtDllName);
      *(UNICODE_STRING *)(v10 + 88) = NtDllName;
    }
    *(_QWORD *)(v10 + 48) = BaseOfImage;
    if ( a3 )
      *(_DWORD *)(v10 + 268) = 9;
    LdrpInsertDataTableEntry(v10);
    LdrpLogDllState(*(_QWORD *)(v10 + 48), v10 + 72, 0x14A5u);
    LdrpInsertModuleToIndex(v10, v14[0]);
    LODWORD(v14[0]) = LdrpProcessMappedModule(v10, 0, 1);
    UnicodeString = (int)v14[0];
    if ( SLODWORD(v14[0]) >= 0 )
    {
      LdrpLogDllState(*(_QWORD *)(v10 + 48), v10 + 72, 0x14AEu);
      if ( a3 )
      {
        LdrpRecordModuleDependency(LdrpNtDllDataTableEntry, v10, 0LL, v14);
        UnicodeString = (int)v14[0];
        if ( SLODWORD(v14[0]) < 0 )
          goto LABEL_17;
        *(_QWORD *)(v10 + 184) = *(_QWORD *)(a3 + 48);
        *(_DWORD *)(a3 + 304) = 3;
        *(_QWORD *)(a3 + 296) = *(_QWORD *)(v10 + 48);
        *(_DWORD *)(v10 + 304) = 2;
      }
      *(_DWORD *)(*(_QWORD *)(v10 + 152) + 56LL) = 9;
      *a2 = v10;
    }
LABEL_16:
    if ( UnicodeString >= 0 )
      return (unsigned int)UnicodeString;
LABEL_17:
    LdrpFreeUnicodeString(v10 + 72);
    return (unsigned int)UnicodeString;
  }
  LdrpLogInternal(
    (unsigned int)"minkernel\\ntdll\\ldrinit.c",
    4435,
    (__int64)"LdrpInitializeNtdllDataTableEntry",
    0,
    "Allocating a data table entry for the system DLL failed\n");
  return (unsigned int)-1073741801;
}
