/*
 * XREFs of LdrpProcessMappedModule @ 0x18002B594
 * Callers:
 *     LdrpMapDllWithSectionHandle @ 0x18002C97C (LdrpMapDllWithSectionHandle.c)
 *     LdrpInitializeNtdllDataTableEntry @ 0x18007E7C0 (LdrpInitializeNtdllDataTableEntry.c)
 *     LdrpInitializeProcess @ 0x1800D4658 (LdrpInitializeProcess.c)
 * Callees:
 *     LdrpLogDllState @ 0x180019CC4 (LdrpLogDllState.c)
 *     RtlImageNtHeaderEx @ 0x180024AA0 (RtlImageNtHeaderEx.c)
 *     LdrpValidateEntrySection @ 0x18002B798 (LdrpValidateEntrySection.c)
 *     LdrpGenRandom @ 0x18002B7E4 (LdrpGenRandom.c)
 *     LdrInitSecurityCookie @ 0x18002B824 (LdrInitSecurityCookie.c)
 *     LdrpCfgProcessLoadConfig @ 0x18002BAB4 (LdrpCfgProcessLoadConfig.c)
 *     RtlInsertInvertedFunctionTable @ 0x18002C31C (RtlInsertInvertedFunctionTable.c)
 *     LdrpSignalModuleMapped @ 0x18002C3E4 (LdrpSignalModuleMapped.c)
 *     RtlReleaseSRWLockExclusive @ 0x180033DA0 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180037EE0 (RtlAcquireSRWLockExclusive.c)
 *     LdrpIsExecutableRelocatedImage @ 0x180088DB8 (LdrpIsExecutableRelocatedImage.c)
 */

__int64 __fastcall LdrpProcessMappedModule(__int64 a1, int a2, int a3)
{
  unsigned __int64 v3; // rsi
  int Config; // edi
  __int64 v8; // rbp
  unsigned __int64 v9; // rax
  int v10; // eax
  int inited; // eax
  __int64 v13; // [rsp+60h] [rbp+8h] BYREF
  __int64 v14; // [rsp+78h] [rbp+20h] BYREF

  v3 = *(_QWORD *)(a1 + 48);
  Config = RtlImageNtHeaderEx(3, v3, 0LL, &v13);
  if ( Config < 0 )
    return (unsigned int)Config;
  v8 = v13;
  if ( (*(_DWORD *)(a1 + 104) & 0x1000004) == 4 && *(_DWORD *)(a1 + 268) != 9 )
  {
    if ( *(_DWORD *)(v13 + 40) )
      v9 = v3 + *(unsigned int *)(v13 + 40);
    else
      v9 = 0LL;
    *(_QWORD *)(a1 + 56) = v9;
  }
  if ( !(unsigned __int8)LdrpValidateEntrySection(a1) )
    return (unsigned int)-1073741701;
  *(_QWORD *)(a1 + 248) = *(_QWORD *)(v8 + 48);
  *(_QWORD *)(a1 + 256) = MEMORY[0x7FFE0014];
  if ( (a2 & 0x800000) == 0
    && ((*(_BYTE *)(a1 + 104) & 4) != 0 || a3 && (unsigned int)LdrpIsExecutableRelocatedImage(v3))
    && (*(_DWORD *)(a1 + 104) & 0x2000) == 0
    && a3 )
  {
    v14 = 0LL;
    v10 = LdrpGenRandom();
    inited = LdrInitSecurityCookie(v3, *(_DWORD *)(a1 + 64), 0, v10 ^ (unsigned int)dword_180199398, (__int64)&v14);
    if ( v3 == 0x180000000LL
      || !*(_QWORD *)(a1 + 56)
      || (*(_WORD *)(v13 + 72) != 6 || *(_WORD *)(v13 + 74) < 3u) && *(_WORD *)(v13 + 72) < 7u
      || inited )
    {
      Config = LdrpCfgProcessLoadConfig(a1, v13, v14);
      if ( Config < 0 )
        return (unsigned int)Config;
      goto LABEL_18;
    }
    return (unsigned int)-1073741701;
  }
LABEL_18:
  if ( (a2 & 0x800000) == 0 && (*(_DWORD *)(a1 + 104) & 0x200) == 0 )
    RtlInsertInvertedFunctionTable(v3, *(unsigned int *)(a1 + 64));
  *(_DWORD *)(a1 + 104) |= 0x2200u;
  RtlAcquireSRWLockExclusive(&LdrpModuleDatatableLock);
  *(_DWORD *)(*(_QWORD *)(a1 + 152) + 56LL) = 2;
  if ( (a2 & 0x800000) == 0 && *(_QWORD *)(a1 + 176) )
    LdrpSignalModuleMapped(a1);
  RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
  LdrpLogDllState(*(_QWORD *)(a1 + 48), a1 + 72, 0x14A1u);
  return (unsigned int)Config;
}
