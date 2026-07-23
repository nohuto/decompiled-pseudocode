/*
 * XREFs of LdrpCfgProcessLoadConfig @ 0x1800354CC
 * Callers:
 *     LdrpProcessMappedModule @ 0x180034AEC (LdrpProcessMappedModule.c)
 *     AvrfMiniLoadDll @ 0x1800E6C5C (AvrfMiniLoadDll.c)
 * Callees:
 *     LdrpMakePermanentImageCommit @ 0x180033774 (LdrpMakePermanentImageCommit.c)
 *     LdrControlFlowGuardEnforced @ 0x1800342E0 (LdrControlFlowGuardEnforced.c)
 *     LdrpAddLoadConfigFptrToBatch @ 0x180035908 (LdrpAddLoadConfigFptrToBatch.c)
 *     RtlpImageDirectoryEntryToDataEx @ 0x18003C720 (RtlpImageDirectoryEntryToDataEx.c)
 *     LdrpIsModuleUnderSystem32 @ 0x180082CB0 (LdrpIsModuleUnderSystem32.c)
 *     __security_check_cookie @ 0x180093840 (__security_check_cookie.c)
 *     qsort @ 0x180097BF0 (qsort.c)
 *     ZwProtectVirtualMemory @ 0x1800A4A70 (ZwProtectVirtualMemory.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800AAAD0 (_guard_xfg_dispatch_icall_nop.c)
 *     memset @ 0x1800AAE00 (memset.c)
 */

NTSTATUS __fastcall LdrpCfgProcessLoadConfig(__int64 a1, unsigned __int16 *a2, __int64 a3)
{
  __int64 (__fastcall **v6)(_QWORD); // r13
  __int64 (__fastcall **v7)(); // r15
  __int64 (__fastcall **v8)(); // r12
  int v9; // ecx
  int v10; // esi
  int v11; // eax
  __int64 (__fastcall **v12)(); // r8
  size_t v13; // rsi
  __int64 v14; // rdx
  unsigned int v15; // ecx
  int v16; // eax
  int v17; // edx
  NTSTATUS result; // eax
  int v19; // edx
  int v20; // r9d
  int v21; // edx
  int v22; // r9d
  int v23; // edx
  int v24; // r9d
  int v25; // edx
  int v26; // r9d
  size_t v27; // r14
  _OWORD *v28; // rbx
  PVOID v29; // r8
  int v30; // esi
  ULONG NewProtect; // [rsp+30h] [rbp-89h] BYREF
  size_t NumOfElements; // [rsp+38h] [rbp-81h] BYREF
  ULONG_PTR RegionSize; // [rsp+40h] [rbp-79h] BYREF
  PVOID BaseAddress; // [rsp+48h] [rbp-71h] BYREF
  __int64 (__fastcall **v35)(); // [rsp+50h] [rbp-69h] BYREF
  __int64 (__fastcall **v36)(_QWORD); // [rsp+58h] [rbp-61h] BYREF
  __int64 (__fastcall **v37)(); // [rsp+60h] [rbp-59h] BYREF
  __int64 (__fastcall **v38)(); // [rsp+68h] [rbp-51h] BYREF
  __int64 (__fastcall **v39)(_QWORD); // [rsp+70h] [rbp-49h] BYREF
  _OWORD Base[5]; // [rsp+80h] [rbp-39h] BYREF

  v6 = 0LL;
  v7 = 0LL;
  v8 = 0LL;
  memset(Base, 0, sizeof(Base));
  NumOfElements = 0LL;
  if ( !a3 || *(_DWORD *)a3 < 0x94u )
    return 0;
  v9 = (LdrpPolicyBits & 4 | 0x7B) << 8;
  v10 = (v9 | 0x8000) & *(unsigned __int16 *)(a3 + 78);
  *(_DWORD *)(a1 + 280) = v10;
  if ( (v9 & v10) != 0 && (unsigned __int8)LdrpIsModuleUnderSystem32(a1) )
  {
    if ( a1 == LdrpImageEntry )
      v30 = v10 | 0x200;
    else
      v30 = v10 | 0x100;
    *(_DWORD *)(a1 + 280) = v30;
  }
  if ( (*(_DWORD *)(a3 + 144) & 0x1000) != 0
    && (*(_DWORD *)(a1 + 104) |= 0x8000u, (*(_DWORD *)(a3 + 144) & 0x2000) != 0) )
  {
    v11 = RtlpImageDirectoryEntryToDataEx(*(PVOID *)(a1 + 48), (PIMAGE_NT_HEADERS)&v35);
    v12 = v35;
    v13 = 0LL;
    if ( v11 < 0 )
      v12 = 0LL;
    if ( v12 )
    {
      v14 = (__int64)a2 + a2[10] + 24;
      v15 = 0;
      if ( a2[3] )
      {
        while ( (unsigned int)(*((_DWORD *)v12 + 3) - *(_DWORD *)(v14 + 12)) >= *(_DWORD *)(v14 + 8) )
        {
          ++v15;
          v14 += 40LL;
          if ( v15 >= a2[3] )
            goto LABEL_14;
        }
        BaseAddress = (PVOID)(*(_QWORD *)(a1 + 48) + *(unsigned int *)(v14 + 12));
        RegionSize = *(unsigned int *)(v14 + 8);
        LdrpMakePermanentImageCommit((__int64)BaseAddress, RegionSize);
        ZwProtectVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 2u, &NewProtect);
      }
    }
  }
  else
  {
    v13 = 0LL;
  }
LABEL_14:
  LOBYTE(v16) = LdrControlFlowGuardEnforced();
  if ( !v16 || (a2[47] & 0x4000) == 0 || (*(_DWORD *)(a3 + 144) & 0x100) == 0 )
    return 0;
  v39 = *(__int64 (__fastcall ***)(_QWORD))(a3 + 112);
  result = LdrpAddLoadConfigFptrToBatch(
             (unsigned int)Base,
             v17,
             (unsigned int)&NumOfElements,
             a1,
             (__int64)&v39,
             (__int64)LdrpCfgCheckRoutineCallback);
  if ( result < 0 )
    return result;
  v35 = *(__int64 (__fastcall ***)())(a3 + 120);
  result = LdrpAddLoadConfigFptrToBatch(
             (unsigned int)Base,
             v19,
             (unsigned int)&NumOfElements,
             v20,
             (__int64)&v35,
             (__int64)LdrpCfgDispatchRoutineCallback);
  if ( result < 0 )
    return result;
  if ( *(_DWORD *)a3 >= 0x130u )
  {
    v36 = *(__int64 (__fastcall ***)(_QWORD))(a3 + 280);
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
               v23,
               (unsigned int)&NumOfElements,
               v24,
               (__int64)&v37,
               (__int64)LdrpXfgDispatchRoutineCallback);
    if ( result < 0 )
      return result;
    v38 = *(__int64 (__fastcall ***)())(a3 + 296);
    result = LdrpAddLoadConfigFptrToBatch(
               (unsigned int)Base,
               v25,
               (unsigned int)&NumOfElements,
               v26,
               (__int64)&v38,
               (__int64)LdrpXfgTableDispatchRoutineCallback);
    if ( result < 0 )
      return result;
    v6 = v36;
    v7 = v37;
    v8 = v38;
  }
  v27 = NumOfElements;
  qsort(Base, NumOfElements, 0x10uLL, LdrpSortLoadConfigFptrs);
  if ( !v27 )
  {
LABEL_30:
    if ( !v39
      || *v39 != LdrpValidateUserCallTarget && *v39 != LdrpValidateUserCallTargetES
      || v35 && *v35 != LdrpDispatchUserCallTarget && *v35 != LdrpDispatchUserCallTargetES
      || v6
      && *v6 != LdrpValidateUserCallTarget
      && *v6 != LdrpValidateUserCallTargetES
      && (char *)*v6 != (char *)LdrpValidateUserCallTargetXFG
      || v7
      && *v7 != LdrpDispatchUserCallTarget
      && *v7 != LdrpDispatchUserCallTargetES
      && *v7 != LdrpDispatchUserCallTargetXFG
      || v8
      && *v8 != LdrpDispatchUserCallTarget
      && *v8 != LdrpDispatchUserCallTargetES
      && *v8 != LdrpTableDispatchUserCallTargetXFG )
    {
      return -1073741762;
    }
    return 0;
  }
  while ( 1 )
  {
    RegionSize = 8LL;
    v28 = &Base[v13];
    BaseAddress = *(PVOID *)v28;
    result = ZwProtectVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 4u, &NewProtect);
    if ( result < 0 )
      return result;
    v29 = *(PVOID *)v28;
    do
    {
      (*((void (__fastcall **)(PVOID, _QWORD))v28 + 1))(v29, *(unsigned int *)(a3 + 144));
      ++v13;
      ++v28;
      if ( v13 >= v27 )
        break;
      v29 = *(PVOID *)v28;
    }
    while ( *(_QWORD *)v28 + 8LL <= (unsigned __int64)BaseAddress + RegionSize );
    result = ZwProtectVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, NewProtect, &NewProtect);
    if ( result < 0 )
      return result;
    if ( v13 >= v27 )
      goto LABEL_30;
  }
}
