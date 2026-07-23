/*
 * XREFs of LdrpCfgProcessLoadConfig @ 0x18002BAB4
 * Callers:
 *     LdrpProcessMappedModule @ 0x18002B594 (LdrpProcessMappedModule.c)
 *     AvrfMiniLoadDll @ 0x1800E5AB8 (AvrfMiniLoadDll.c)
 * Callees:
 *     RtlpImageDirectoryEntryToDataEx @ 0x180021B9C (RtlpImageDirectoryEntryToDataEx.c)
 *     LdrpAddLoadConfigFptrToBatch @ 0x18002BF58 (LdrpAddLoadConfigFptrToBatch.c)
 *     LdrControlFlowGuardEnforced @ 0x18002C570 (LdrControlFlowGuardEnforced.c)
 *     LdrpMakePermanentImageCommit @ 0x18002DBCC (LdrpMakePermanentImageCommit.c)
 *     LdrpIsModuleUnderSystem32 @ 0x18007E1F4 (LdrpIsModuleUnderSystem32.c)
 *     __security_check_cookie @ 0x18008E790 (__security_check_cookie.c)
 *     qsort @ 0x180092BF0 (qsort.c)
 *     ZwProtectVirtualMemory @ 0x18009F7F0 (ZwProtectVirtualMemory.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A2AD0 (_guard_xfg_dispatch_icall_nop.c)
 *     memset$thunk$772440563353939046 @ 0x180130010 (memset$thunk$772440563353939046.c)
 */

NTSTATUS __fastcall LdrpCfgProcessLoadConfig(__int64 a1, unsigned __int16 *a2, __int64 a3)
{
  __int64 (__fastcall **v6)(); // r12
  __int64 (__fastcall **v7)(); // r13
  __int64 v8; // rdx
  size_t v9; // r14
  int v10; // ecx
  int v11; // esi
  NTSTATUS v12; // eax
  __int64 v13; // r8
  size_t v14; // rsi
  unsigned int v15; // ecx
  int v16; // eax
  int v17; // edx
  NTSTATUS result; // eax
  int v19; // edx
  int v20; // r9d
  int v21; // edx
  int v22; // r9d
  int v23; // r15d
  int v24; // edx
  int v25; // r9d
  int v26; // edx
  int v27; // r9d
  _OWORD *v28; // rbx
  PVOID v29; // r8
  int v30; // esi
  size_t NumOfElements; // [rsp+30h] [rbp-99h] BYREF
  __int64 v32; // [rsp+38h] [rbp-91h] BYREF
  ULONG NewProtect; // [rsp+40h] [rbp-89h] BYREF
  ULONG_PTR RegionSize; // [rsp+48h] [rbp-81h] BYREF
  PVOID BaseAddress; // [rsp+50h] [rbp-79h] BYREF
  __int64 (__fastcall **v36)(); // [rsp+58h] [rbp-71h] BYREF
  __int64 (__fastcall **v37)(); // [rsp+60h] [rbp-69h] BYREF
  __int64 (__fastcall **v38)(); // [rsp+68h] [rbp-61h] BYREF
  __int64 (__fastcall **v39)(); // [rsp+70h] [rbp-59h] BYREF
  __int64 (__fastcall **v40)(); // [rsp+78h] [rbp-51h]
  _OWORD Base[6]; // [rsp+80h] [rbp-49h] BYREF

  v40 = 0LL;
  v36 = 0LL;
  v37 = 0LL;
  v38 = 0LL;
  v6 = 0LL;
  v7 = 0LL;
  memset_thunk_772440563353939046(Base, 0, 0x60uLL);
  NumOfElements = 0LL;
  v9 = 0LL;
  if ( !a3 || *(_DWORD *)a3 < 0x94u )
    return 0;
  v10 = (LdrpPolicyBits & 4 | 0x7B) << 8;
  v11 = (v10 | 0x8000) & *(unsigned __int16 *)(a3 + 78);
  *(_DWORD *)(a1 + 280) = v11;
  if ( (v11 & v10) != 0 && (unsigned __int8)LdrpIsModuleUnderSystem32(a1) )
  {
    if ( a1 == LdrpImageEntry )
      v30 = v11 | 0x200;
    else
      v30 = v11 | 0x100;
    *(_DWORD *)(a1 + 280) = v30;
  }
  if ( (*(_DWORD *)(a3 + 144) & 0x1000) != 0
    && (*(_DWORD *)(a1 + 104) |= 0x8000u, (*(_DWORD *)(a3 + 144) & 0x2000) != 0) )
  {
    v12 = RtlpImageDirectoryEntryToDataEx(*(_QWORD *)(a1 + 48), 1, 0xDu, (unsigned int *)&v39, &v32);
    v13 = v32;
    v14 = 0LL;
    if ( v12 < 0 )
      v13 = 0LL;
    if ( v13 )
    {
      v8 = (__int64)a2 + a2[10] + 24;
      v15 = 0;
      if ( a2[3] )
      {
        while ( (unsigned int)(*(_DWORD *)(v13 + 12) - *(_DWORD *)(v8 + 12)) >= *(_DWORD *)(v8 + 8) )
        {
          ++v15;
          v8 += 40LL;
          if ( v15 >= a2[3] )
            goto LABEL_14;
        }
        BaseAddress = (PVOID)(*(_QWORD *)(a1 + 48) + *(unsigned int *)(v8 + 12));
        RegionSize = *(unsigned int *)(v8 + 8);
        LdrpMakePermanentImageCommit();
        ZwProtectVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 2u, &NewProtect);
      }
    }
  }
  else
  {
    v14 = 0LL;
  }
LABEL_14:
  if ( (*(_DWORD *)(a3 + 144) & 0x1000000) != 0 )
  {
    v32 = *(_QWORD *)(a3 + 304);
    result = LdrpAddLoadConfigFptrToBatch(
               (unsigned int)Base,
               v8,
               (unsigned int)&NumOfElements,
               a1,
               (__int64)&v32,
               (__int64)LdrpCgRoutineCallback);
    if ( result < 0 )
      return result;
    v9 = NumOfElements;
    v40 = (__int64 (__fastcall **)())v32;
  }
  LOBYTE(v16) = LdrControlFlowGuardEnforced();
  if ( v16 && (a2[47] & 0x4000) != 0 && (*(_DWORD *)(a3 + 144) & 0x100) != 0 )
  {
    v39 = *(__int64 (__fastcall ***)())(a3 + 112);
    result = LdrpAddLoadConfigFptrToBatch(
               (unsigned int)Base,
               v17,
               (unsigned int)&NumOfElements,
               a1,
               (__int64)&v39,
               (__int64)LdrpCfgCheckRoutineCallback);
    if ( result < 0 )
      return result;
    v32 = *(_QWORD *)(a3 + 120);
    result = LdrpAddLoadConfigFptrToBatch(
               (unsigned int)Base,
               v19,
               (unsigned int)&NumOfElements,
               v20,
               (__int64)&v32,
               (__int64)LdrpCfgDispatchRoutineCallback);
    if ( result < 0 )
      return result;
    v23 = 1;
    if ( *(_DWORD *)a3 >= 0x130u )
    {
      v36 = *(__int64 (__fastcall ***)())(a3 + 280);
      result = LdrpAddLoadConfigFptrToBatch(
                 (unsigned int)Base,
                 v21,
                 (unsigned int)&NumOfElements,
                 v22,
                 (__int64)&v36,
                 (__int64)LdrpXfgCheckRoutineCallback);
      if ( result < 0 )
        return result;
      v37 = *(__int64 (__fastcall ***)())(a3 + 288);
      result = LdrpAddLoadConfigFptrToBatch(
                 (unsigned int)Base,
                 v24,
                 (unsigned int)&NumOfElements,
                 v25,
                 (__int64)&v37,
                 (__int64)LdrpXfgDispatchRoutineCallback);
      if ( result < 0 )
        return result;
      v38 = *(__int64 (__fastcall ***)())(a3 + 296);
      result = LdrpAddLoadConfigFptrToBatch(
                 (unsigned int)Base,
                 v26,
                 (unsigned int)&NumOfElements,
                 v27,
                 (__int64)&v38,
                 (__int64)LdrpXfgTableDispatchRoutineCallback);
      if ( result < 0 )
        return result;
    }
    v7 = (__int64 (__fastcall **)())v32;
    v6 = v39;
    v9 = NumOfElements;
  }
  else
  {
    v23 = 0;
  }
  qsort(Base, v9, 0x10uLL, LdrpSortLoadConfigFptrs);
  if ( !v9 )
  {
LABEL_31:
    if ( v23
      && (!v6
       || *v6 != LdrpValidateUserCallTarget && *v6 != LdrpValidateUserCallTargetES
       || v7 && *v7 != LdrpDispatchUserCallTarget && *v7 != LdrpDispatchUserCallTargetES
       || v36
       && *v36 != LdrpValidateUserCallTarget
       && *v36 != LdrpValidateUserCallTargetES
       && *v36 != LdrpValidateUserCallTargetXFG
       || v37
       && *v37 != LdrpDispatchUserCallTarget
       && *v37 != LdrpDispatchUserCallTargetES
       && *v37 != LdrpDispatchUserCallTargetXFG
       || v38
       && *v38 != LdrpDispatchUserCallTarget
       && *v38 != LdrpDispatchUserCallTargetES
       && *v38 != LdrpTableDispatchUserCallTargetXFG)
      || v40 && *v40 != LdrpCgLogFailure )
    {
      return -1073741762;
    }
    return 0;
  }
  while ( 1 )
  {
    RegionSize = 8LL;
    v28 = &Base[v14];
    BaseAddress = *(PVOID *)v28;
    result = ZwProtectVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 4u, &NewProtect);
    if ( result < 0 )
      return result;
    v29 = *(PVOID *)v28;
    do
    {
      (*((void (__fastcall **)(PVOID, _QWORD))v28 + 1))(v29, *(unsigned int *)(a3 + 144));
      ++v14;
      ++v28;
      if ( v14 >= v9 )
        break;
      v29 = *(PVOID *)v28;
    }
    while ( *(_QWORD *)v28 + 8LL <= (unsigned __int64)BaseAddress + RegionSize );
    result = ZwProtectVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, NewProtect, &NewProtect);
    if ( result < 0 )
      return result;
    if ( v14 >= v9 )
      goto LABEL_31;
  }
}
