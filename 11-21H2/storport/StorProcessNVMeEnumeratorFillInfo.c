/*
 * XREFs of StorProcessNVMeEnumeratorFillInfo @ 0x1C0065D10
 * Callers:
 *     StorAdapterNVMeEnumerate @ 0x1C008607C (StorAdapterNVMeEnumerate.c)
 * Callees:
 *     RaidRemoveTrailingBlanks @ 0x1C000BA78 (RaidRemoveTrailingBlanks.c)
 *     RaidAllocatePool @ 0x1C000F8A0 (RaidAllocatePool.c)
 *     StorCreateAnsiString @ 0x1C00185BC (StorCreateAnsiString.c)
 *     __security_check_cookie @ 0x1C0022BF0 (__security_check_cookie.c)
 *     memset @ 0x1C0024340 (memset.c)
 *     StorCopyNVMeFirmwareRevision @ 0x1C0056700 (StorCopyNVMeFirmwareRevision.c)
 *     StorBuildNVMeSerialNumber @ 0x1C0065824 (StorBuildNVMeSerialNumber.c)
 *     StorDeleteNVMeIdentity @ 0x1C0065CC0 (StorDeleteNVMeIdentity.c)
 */

__int64 __fastcall StorProcessNVMeEnumeratorFillInfo(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  unsigned int AnsiString; // edi
  __int64 v6; // rsi
  __int64 v7; // r14
  __int64 v8; // r12
  __int64 v9; // r8
  int v10; // r8d
  __int64 v11; // r9
  __int64 Pool; // rax
  __int64 v13; // rsi
  int v14; // r8d
  int v15; // r8d
  __int16 v16; // dx
  __int64 v17; // rax
  _BYTE v19[128]; // [rsp+30h] [rbp-B8h] BYREF

  v2 = *(_QWORD *)(a2 + 8);
  AnsiString = 0;
  v6 = *(_QWORD *)(v2 + 3416);
  v7 = *(_QWORD *)(v2 + 3424);
  v8 = *(_QWORD *)(*(_QWORD *)(v2 + 24) + 5848LL);
  memset(v19, 0, sizeof(v19));
  if ( !v8
    || !v6
    || !v7
    || (v9 = *(_BYTE *)(v6 + 26) & 0xF, !*(_QWORD *)(v7 + 16 * (v9 + 176)))
    || *(_QWORD *)(v7 + 16 * (v9 + 176)) % ((unsigned __int64)*(unsigned __int16 *)(v6 + 72) + 1)
    || (*(_DWORD *)(v2 + 1824) & 0x20) == 0 )
  {
    AnsiString = -1073741637;
    goto LABEL_18;
  }
  if ( !*(_BYTE *)(v6 + 4 * v9 + 130) && !*(_QWORD *)v6 )
  {
    *(_BYTE *)(a2 + 93) = 0;
    return AnsiString;
  }
  *(_BYTE *)(a2 + 93) = 1;
  v10 = StorBuildNVMeSerialNumber(a2, (__int64)v19);
  if ( !v10 )
  {
    AnsiString = -1073741811;
LABEL_18:
    StorDeleteNVMeIdentity(a2 + 32);
    return AnsiString;
  }
  AnsiString = StorCreateAnsiString(a2 + 40, v19, v10, v11, *(_QWORD *)(*(_QWORD *)a1 + 8LL));
  if ( (AnsiString & 0x80000000) != 0 )
    goto LABEL_18;
  Pool = RaidAllocatePool(64LL, 108LL, 1129210194LL, *(_QWORD *)(*(_QWORD *)a1 + 8LL));
  *(_QWORD *)(a2 + 80) = Pool;
  v13 = Pool;
  if ( !Pool )
  {
    AnsiString = -1073741801;
    goto LABEL_18;
  }
  memset((void *)(Pool + 8), 0, 0x64uLL);
  *(_DWORD *)v13 = 1;
  *(_DWORD *)(v13 + 4) = 108;
  *(_OWORD *)(v13 + 25) = *(_OWORD *)(v8 + 24);
  *(_OWORD *)(v13 + 41) = *(_OWORD *)(v8 + 40);
  *(_QWORD *)(v13 + 57) = *(_QWORD *)(v8 + 56);
  StorCopyNVMeFirmwareRevision(v8, v13 + 90, 0x10u);
  RaidRemoveTrailingBlanks(*(_QWORD *)(a2 + 80) + 25LL, v14 + 49);
  RaidRemoveTrailingBlanks(*(_QWORD *)(a2 + 80) + 90LL, v15 + 1);
  v16 = *(_WORD *)(a2 + 56) & 0xFFFE;
  v17 = *(_QWORD *)(a2 + 8);
  *(_WORD *)(a2 + 56) = v16;
  if ( (*(_DWORD *)(v17 + 1824) & 0x20) != 0 )
    *(_WORD *)(a2 + 56) = v16 | 4;
  return AnsiString;
}
