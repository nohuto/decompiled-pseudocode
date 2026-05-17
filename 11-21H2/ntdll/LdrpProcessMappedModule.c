/*
 * XREFs of LdrpProcessMappedModule @ 0x180034AEC
 * Callers:
 *     LdrpMapDllWithSectionHandle @ 0x18004CD54 (LdrpMapDllWithSectionHandle.c)
 *     LdrpInitializeNtdllDataTableEntry @ 0x180083010 (LdrpInitializeNtdllDataTableEntry.c)
 *     LdrpInitializeProcess @ 0x1800DE07C (LdrpInitializeProcess.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180019910 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18001B320 (RtlReleaseSRWLockExclusive.c)
 *     RtlInsertInvertedFunctionTable @ 0x18003449C (RtlInsertInvertedFunctionTable.c)
 *     LdrpSignalModuleMapped @ 0x180034644 (LdrpSignalModuleMapped.c)
 *     LdrpGenRandom @ 0x1800347F4 (LdrpGenRandom.c)
 *     LdrInitSecurityCookie @ 0x18003485C (LdrInitSecurityCookie.c)
 *     LdrpValidateEntrySection @ 0x180034CF4 (LdrpValidateEntrySection.c)
 *     LdrpCfgProcessLoadConfig @ 0x1800354CC (LdrpCfgProcessLoadConfig.c)
 *     RtlImageNtHeaderEx @ 0x18003CF10 (RtlImageNtHeaderEx.c)
 *     LdrpLogDllState @ 0x180044F74 (LdrpLogDllState.c)
 *     LdrpIsExecutableRelocatedImage @ 0x18008E310 (LdrpIsExecutableRelocatedImage.c)
 */

__int64 __fastcall LdrpProcessMappedModule(__int64 a1, int a2, int a3)
{
  __int64 v3; // rsi
  int Config; // edi
  __int64 v8; // rbp
  __int64 v9; // rax
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // r9
  __int64 v12; // rax
  int inited; // eax
  int v14; // r8d
  unsigned __int64 v15; // r8
  __int64 v17; // [rsp+60h] [rbp+8h] BYREF
  __int64 v18; // [rsp+78h] [rbp+20h] BYREF

  v3 = *(_QWORD *)(a1 + 48);
  Config = RtlImageNtHeaderEx(3LL, v3, 0LL, &v17);
  if ( Config < 0 )
    return (unsigned int)Config;
  v8 = v17;
  if ( (*(_DWORD *)(a1 + 104) & 0x1000004) == 4 )
  {
    if ( *(_DWORD *)(v17 + 40) )
      v9 = v3 + *(unsigned int *)(v17 + 40);
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
    v18 = 0LL;
    v12 = LdrpGenRandom();
    inited = LdrInitSecurityCookie(v3, *(unsigned int *)(a1 + 64), 0LL, v12 ^ (unsigned int)dword_18018F388, &v18);
    if ( v3 == 0x180000000LL
      || !*(_QWORD *)(a1 + 56)
      || (*(_WORD *)(v17 + 72) != 6 || *(_WORD *)(v17 + 74) < 3u) && *(_WORD *)(v17 + 72) < 7u
      || inited )
    {
      Config = LdrpCfgProcessLoadConfig(a1, v17, v18);
      if ( Config < 0 )
        return (unsigned int)Config;
      goto LABEL_17;
    }
    return (unsigned int)-1073741701;
  }
LABEL_17:
  v14 = *(_DWORD *)(a1 + 104);
  LOBYTE(v10) = (v14 & 0x200) == 0;
  if ( ((unsigned __int8)v10 & ((a2 & 0x800000) == 0)) != 0 )
  {
    RtlInsertInvertedFunctionTable(v3, *(_DWORD *)(a1 + 64));
    v14 = *(_DWORD *)(a1 + 104);
  }
  v15 = v14 | 0x2200u;
  *(_DWORD *)(a1 + 104) = v15;
  RtlAcquireSRWLockExclusive((unsigned __int64)&LdrpModuleDatatableLock, v10, v15, v11);
  *(_DWORD *)(*(_QWORD *)(a1 + 152) + 56LL) = 2;
  if ( (a2 & 0x800000) == 0 && *(_QWORD *)(a1 + 176) )
    LdrpSignalModuleMapped(a1);
  RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
  LdrpLogDllState(*(_QWORD *)(a1 + 48), a1 + 72, 5281LL);
  return (unsigned int)Config;
}
