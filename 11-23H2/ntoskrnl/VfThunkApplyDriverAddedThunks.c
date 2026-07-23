/*
 * XREFs of VfThunkApplyDriverAddedThunks @ 0x140ADB180
 * Callers:
 *     ViDriverReApplyVerifierForAll @ 0x140ACA954 (ViDriverReApplyVerifierForAll.c)
 * Callees:
 *     RtlImageDirectoryEntryToData @ 0x140214A20 (RtlImageDirectoryEntryToData.c)
 *     memset @ 0x140435E00 (memset.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 *     ViThunkFindAllSpecialTables @ 0x140ADB8B0 (ViThunkFindAllSpecialTables.c)
 *     ViThunkFindDriverImportEntry @ 0x140ADBA48 (ViThunkFindDriverImportEntry.c)
 *     MmApplyVerifierToRunningImage @ 0x140AE7FA0 (MmApplyVerifierToRunningImage.c)
 */

__int64 __fastcall VfThunkApplyDriverAddedThunks(__int64 a1)
{
  __int64 v2; // rbp
  unsigned int v3; // r12d
  void *Pool2; // rdi
  __int64 result; // rax
  _QWORD *v6; // rsi
  ULONG v7; // r14d
  __int64 *AllSpecialTables; // rbx
  __int64 v9; // rax
  __int64 v10; // r15
  __int64 v11; // r13
  __int64 DriverImportEntry; // rdx
  int v13; // r11d
  __int64 v14; // rcx
  ULONG Size; // [rsp+68h] [rbp+10h] BYREF

  Size = 0;
  v2 = 0LL;
  v3 = 0;
  Pool2 = (void *)ExAllocatePool2(64LL, 24LL * (unsigned int)VfNumberOfClassDriverThunks, 0x6D4D7644u);
  if ( !Pool2 )
    return 3221225495LL;
  memset(Pool2, 0, 24LL * (unsigned int)VfNumberOfClassDriverThunks);
  result = (__int64)RtlImageDirectoryEntryToData(*(PVOID *)(a1 + 48), 1u, 0xCu, &Size);
  v6 = (_QWORD *)result;
  if ( result )
  {
    v7 = Size >> 3;
    AllSpecialTables = (__int64 *)ViThunkFindAllSpecialTables(result, Size >> 3);
    if ( !v7 )
      goto LABEL_15;
    while ( 1 )
    {
      if ( AllSpecialTables )
      {
        v9 = *AllSpecialTables;
        LODWORD(v10) = 0;
        if ( *AllSpecialTables )
          break;
      }
LABEL_10:
      DriverImportEntry = ViThunkFindDriverImportEntry(&ViVerifierDriverAddedThunkListHead, *v6);
      if ( DriverImportEntry )
        goto LABEL_11;
LABEL_12:
      ++v6;
      if ( v13 + 1 >= v7 )
      {
        if ( (_DWORD)v2 )
          v3 = MmApplyVerifierToRunningImage(a1, Pool2, (unsigned int)v2);
LABEL_15:
        if ( AllSpecialTables )
          ExFreePoolWithTag(AllSpecialTables, 0);
        ExFreePoolWithTag(Pool2, 0);
        return v3;
      }
    }
    v11 = *v6;
    while ( 1 )
    {
      DriverImportEntry = ViThunkFindDriverImportEntry(v9 + 24, v11);
      if ( DriverImportEntry )
        break;
      v10 = (unsigned int)(v10 + 1);
      v9 = AllSpecialTables[v10];
      if ( !v9 )
        goto LABEL_10;
    }
LABEL_11:
    v14 = 3 * v2;
    v2 = (unsigned int)(v2 + 1);
    *((_DWORD *)Pool2 + 2 * v14) = v13;
    *((_QWORD *)Pool2 + v14 + 1) = DriverImportEntry;
    goto LABEL_12;
  }
  return result;
}
