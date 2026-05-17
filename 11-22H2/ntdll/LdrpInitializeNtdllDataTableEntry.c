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
        unsigned __int64 a1,
        __int64 *a2,
        __int64 a3,
        unsigned __int16 *a4,
        _OWORD *a5)
{
  __int64 ModuleEntry; // rax
  __int64 v10; // rbx
  __int64 v11; // rdi
  unsigned __int16 *v12; // rcx
  int UnicodeString; // esi
  int v15[10]; // [rsp+30h] [rbp-28h] BYREF

  RtlImageNtHeaderEx(3, a1, 0LL, v15);
  ModuleEntry = LdrpAllocateModuleEntry(0LL);
  v10 = ModuleEntry;
  if ( !ModuleEntry )
  {
    LdrpLogInternal(
      (unsigned int)"minkernel\\ntdll\\ldrinit.c",
      4541LL,
      (__int64)"LdrpInitializeNtdllDataTableEntry",
      0LL,
      "Allocating a data table entry for the system DLL failed\n");
    UnicodeString = -1073741801;
    v11 = 72LL;
    goto LABEL_14;
  }
  *(_DWORD *)(*(_QWORD *)(ModuleEntry + 152) + 24LL) = -1;
  *(_WORD *)(**(_QWORD **)(ModuleEntry + 152) - 52LL) = -1;
  *(_DWORD *)(ModuleEntry + 104) |= 0x204u;
  if ( !a3 )
    *(_QWORD *)(ModuleEntry + 248) -= qword_180199310;
  v11 = ModuleEntry + 72;
  v12 = (unsigned __int16 *)(ModuleEntry + 72);
  if ( a4 )
  {
    UnicodeString = LdrpAllocateUnicodeString((__int64)v12, *a4);
    if ( UnicodeString < 0 )
      goto LABEL_11;
    RtlCopyUnicodeString((unsigned __int16 *)(v10 + 72), a4);
    LdrpGetBaseNameFromFullName(v10 + 72, v10 + 88);
  }
  else
  {
    *(_OWORD *)v11 = *a5;
    RtlAppendUnicodeStringToString(v12, &NtDllName);
    *(_OWORD *)(v10 + 88) = *(_OWORD *)&NtDllName;
  }
  *(_QWORD *)(v10 + 48) = a1;
  if ( a3 )
    *(_DWORD *)(v10 + 268) = 9;
  LdrpInsertDataTableEntry(v10);
  LdrpLogDllState(*(_QWORD *)(v10 + 48), v10 + 72, 0x14A5u);
  LdrpInsertModuleToIndex(v10, *(_QWORD *)v15);
  v15[0] = LdrpProcessMappedModule(v10, 0, 1);
  UnicodeString = v15[0];
  if ( v15[0] < 0 )
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
  UnicodeString = v15[0];
  if ( v15[0] >= 0 )
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
