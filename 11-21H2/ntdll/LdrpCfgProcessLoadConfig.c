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

__int64 __fastcall LdrpCfgProcessLoadConfig(__int64 a1, unsigned __int16 *a2, __int64 a3)
{
  __int64 (__fastcall **v6)(_QWORD); // r13
  __int64 (__fastcall **v7)(); // r15
  __int64 (__fastcall **v8)(); // r12
  int v9; // edx
  int v10; // r8d
  int v11; // ecx
  int v12; // esi
  int v13; // eax
  __int64 (__fastcall **v14)(); // r8
  size_t v15; // rsi
  __int64 v16; // rdx
  unsigned int v17; // ecx
  int v18; // edx
  __int64 result; // rax
  int v20; // edx
  int v21; // r9d
  int v22; // edx
  int v23; // r9d
  int v24; // edx
  int v25; // r9d
  int v26; // edx
  int v27; // r9d
  size_t v28; // r14
  _OWORD *v29; // rbx
  __int64 v30; // r8
  int v31; // esi
  unsigned int v32; // [rsp+30h] [rbp-89h] BYREF
  size_t NumOfElements; // [rsp+38h] [rbp-81h] BYREF
  __int64 v34; // [rsp+40h] [rbp-79h] BYREF
  __int64 v35; // [rsp+48h] [rbp-71h] BYREF
  __int64 (__fastcall **v36)(); // [rsp+50h] [rbp-69h] BYREF
  __int64 (__fastcall **v37)(_QWORD); // [rsp+58h] [rbp-61h] BYREF
  __int64 (__fastcall **v38)(); // [rsp+60h] [rbp-59h] BYREF
  __int64 (__fastcall **v39)(); // [rsp+68h] [rbp-51h] BYREF
  __int64 (__fastcall **v40)(_QWORD); // [rsp+70h] [rbp-49h] BYREF
  _OWORD Base[5]; // [rsp+80h] [rbp-39h] BYREF

  v6 = 0LL;
  v7 = 0LL;
  v8 = 0LL;
  memset(Base, 0, sizeof(Base));
  NumOfElements = 0LL;
  if ( !a3 || *(_DWORD *)a3 < 0x94u )
    return 0LL;
  v11 = (LdrpPolicyBits & 4 | 0x7B) << 8;
  v12 = (v11 | 0x8000) & *(unsigned __int16 *)(a3 + 78);
  *(_DWORD *)(a1 + 280) = v12;
  if ( (v11 & v12) != 0 && (unsigned __int8)LdrpIsModuleUnderSystem32(a1) )
  {
    if ( a1 == LdrpImageEntry )
      v31 = v12 | 0x200;
    else
      v31 = v12 | 0x100;
    *(_DWORD *)(a1 + 280) = v31;
  }
  if ( (*(_DWORD *)(a3 + 144) & 0x1000) != 0
    && (*(_DWORD *)(a1 + 104) |= 0x8000u, (*(_DWORD *)(a3 + 144) & 0x2000) != 0) )
  {
    LOWORD(v10) = 13;
    LOBYTE(v9) = 1;
    v13 = RtlpImageDirectoryEntryToDataEx(*(_QWORD *)(a1 + 48), v9, v10, (unsigned int)&v37, (__int64)&v36);
    v14 = v36;
    v15 = 0LL;
    if ( v13 < 0 )
      v14 = 0LL;
    if ( v14 )
    {
      v16 = (__int64)a2 + a2[10] + 24;
      v17 = 0;
      if ( a2[3] )
      {
        while ( (unsigned int)(*((_DWORD *)v14 + 3) - *(_DWORD *)(v16 + 12)) >= *(_DWORD *)(v16 + 8) )
        {
          ++v17;
          v16 += 40LL;
          if ( v17 >= a2[3] )
            goto LABEL_14;
        }
        v35 = *(_QWORD *)(a1 + 48) + *(unsigned int *)(v16 + 12);
        v34 = *(unsigned int *)(v16 + 8);
        LdrpMakePermanentImageCommit(v35, v34);
        ZwProtectVirtualMemory(-1LL, &v35, &v34, 2LL, &v32);
      }
    }
  }
  else
  {
    v15 = 0LL;
  }
LABEL_14:
  if ( !(unsigned int)LdrControlFlowGuardEnforced() || (a2[47] & 0x4000) == 0 || (*(_DWORD *)(a3 + 144) & 0x100) == 0 )
    return 0LL;
  v40 = *(__int64 (__fastcall ***)(_QWORD))(a3 + 112);
  result = LdrpAddLoadConfigFptrToBatch(
             (unsigned int)Base,
             v18,
             (unsigned int)&NumOfElements,
             a1,
             (__int64)&v40,
             (__int64)LdrpCfgCheckRoutineCallback);
  if ( (int)result < 0 )
    return result;
  v36 = *(__int64 (__fastcall ***)())(a3 + 120);
  result = LdrpAddLoadConfigFptrToBatch(
             (unsigned int)Base,
             v20,
             (unsigned int)&NumOfElements,
             v21,
             (__int64)&v36,
             (__int64)LdrpCfgDispatchRoutineCallback);
  if ( (int)result < 0 )
    return result;
  if ( *(_DWORD *)a3 >= 0x130u )
  {
    v37 = *(__int64 (__fastcall ***)(_QWORD))(a3 + 280);
    result = LdrpAddLoadConfigFptrToBatch(
               (unsigned int)Base,
               v22,
               (unsigned int)&NumOfElements,
               v23,
               (__int64)&v37,
               (__int64)LdrpXfgCheckRoutineCallback);
    if ( (int)result < 0 )
      return result;
    v38 = *(__int64 (__fastcall ***)())(a3 + 288);
    result = LdrpAddLoadConfigFptrToBatch(
               (unsigned int)Base,
               v24,
               (unsigned int)&NumOfElements,
               v25,
               (__int64)&v38,
               (__int64)LdrpXfgDispatchRoutineCallback);
    if ( (int)result < 0 )
      return result;
    v39 = *(__int64 (__fastcall ***)())(a3 + 296);
    result = LdrpAddLoadConfigFptrToBatch(
               (unsigned int)Base,
               v26,
               (unsigned int)&NumOfElements,
               v27,
               (__int64)&v39,
               (__int64)LdrpXfgTableDispatchRoutineCallback);
    if ( (int)result < 0 )
      return result;
    v6 = v37;
    v7 = v38;
    v8 = v39;
  }
  v28 = NumOfElements;
  qsort(Base, NumOfElements, 0x10uLL, LdrpSortLoadConfigFptrs);
  if ( !v28 )
  {
LABEL_30:
    if ( !v40
      || *v40 != LdrpValidateUserCallTarget && *v40 != LdrpValidateUserCallTargetES
      || v36 && *v36 != LdrpDispatchUserCallTarget && *v36 != LdrpDispatchUserCallTargetES
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
      return 3221225534LL;
    }
    return 0LL;
  }
  while ( 1 )
  {
    v34 = 8LL;
    v29 = &Base[v15];
    v35 = *(_QWORD *)v29;
    result = ZwProtectVirtualMemory(-1LL, &v35, &v34, 4LL, &v32);
    if ( (int)result < 0 )
      return result;
    v30 = *(_QWORD *)v29;
    do
    {
      (*((void (__fastcall **)(__int64, _QWORD))v29 + 1))(v30, *(unsigned int *)(a3 + 144));
      ++v15;
      ++v29;
      if ( v15 >= v28 )
        break;
      v30 = *(_QWORD *)v29;
    }
    while ( *(_QWORD *)v29 + 8LL <= (unsigned __int64)(v35 + v34) );
    result = ZwProtectVirtualMemory(-1LL, &v35, &v34, v32, &v32);
    if ( (int)result < 0 )
      return result;
    if ( v15 >= v28 )
      goto LABEL_30;
  }
}
