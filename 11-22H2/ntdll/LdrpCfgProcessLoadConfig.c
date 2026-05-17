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

__int64 __fastcall LdrpCfgProcessLoadConfig(__int64 a1, unsigned __int16 *a2, __int64 a3)
{
  __int64 (__fastcall **v6)(); // r12
  __int64 (__fastcall **v7)(); // r13
  __int64 v8; // rdx
  size_t v9; // r14
  __int64 v10; // rcx
  int v11; // esi
  int v12; // eax
  __int64 v13; // r8
  size_t v14; // rsi
  int v15; // edx
  __int64 result; // rax
  int v17; // edx
  int v18; // r9d
  int v19; // edx
  int v20; // r9d
  int v21; // r15d
  int v22; // edx
  int v23; // r9d
  int v24; // edx
  int v25; // r9d
  _OWORD *v26; // rbx
  __int64 v27; // r8
  int v28; // esi
  size_t NumOfElements; // [rsp+30h] [rbp-99h] BYREF
  __int64 (__fastcall **v30)(); // [rsp+38h] [rbp-91h] BYREF
  unsigned int v31; // [rsp+40h] [rbp-89h] BYREF
  __int64 v32; // [rsp+48h] [rbp-81h] BYREF
  __int64 v33; // [rsp+50h] [rbp-79h] BYREF
  __int64 (__fastcall **v34)(); // [rsp+58h] [rbp-71h] BYREF
  __int64 (__fastcall **v35)(); // [rsp+60h] [rbp-69h] BYREF
  __int64 (__fastcall **v36)(); // [rsp+68h] [rbp-61h] BYREF
  __int64 (__fastcall **v37)(); // [rsp+70h] [rbp-59h] BYREF
  __int64 (__fastcall **v38)(); // [rsp+78h] [rbp-51h]
  _OWORD Base[6]; // [rsp+80h] [rbp-49h] BYREF

  v38 = 0LL;
  v34 = 0LL;
  v35 = 0LL;
  v36 = 0LL;
  v6 = 0LL;
  v7 = 0LL;
  memset_thunk_772440563353939046(Base, 0, 0x60uLL);
  NumOfElements = 0LL;
  v9 = 0LL;
  if ( !a3 || *(_DWORD *)a3 < 0x94u )
    return 0LL;
  v10 = (LdrpPolicyBits & 4 | 0x7Bu) << 8;
  v11 = (((LdrpPolicyBits & 4 | 0x7B) << 8) | 0x8000) & *(_WORD *)(a3 + 78);
  *(_DWORD *)(a1 + 280) = v11;
  if ( (v11 & (unsigned int)v10) != 0 && (unsigned __int8)LdrpIsModuleUnderSystem32(a1) )
  {
    if ( a1 == LdrpImageEntry )
      v28 = v11 | 0x200;
    else
      v28 = v11 | 0x100;
    *(_DWORD *)(a1 + 280) = v28;
  }
  if ( (*(_DWORD *)(a3 + 144) & 0x1000) != 0
    && (*(_DWORD *)(a1 + 104) |= 0x8000u, (*(_DWORD *)(a3 + 144) & 0x2000) != 0) )
  {
    v12 = RtlpImageDirectoryEntryToDataEx(*(_QWORD *)(a1 + 48), 1, 0xDu, &v37, (__int64 *)&v30);
    v13 = (__int64)v30;
    v14 = 0LL;
    if ( v12 < 0 )
      v13 = 0LL;
    if ( v13 )
    {
      v8 = (__int64)a2 + a2[10] + 24;
      v10 = 0LL;
      if ( a2[3] )
      {
        while ( (unsigned int)(*(_DWORD *)(v13 + 12) - *(_DWORD *)(v8 + 12)) >= *(_DWORD *)(v8 + 8) )
        {
          v10 = (unsigned int)(v10 + 1);
          v8 += 40LL;
          if ( (unsigned int)v10 >= a2[3] )
            goto LABEL_14;
        }
        v33 = *(_QWORD *)(a1 + 48) + *(unsigned int *)(v8 + 12);
        v32 = *(unsigned int *)(v8 + 8);
        LdrpMakePermanentImageCommit();
        ZwProtectVirtualMemory(-1LL, &v33, &v32, 2LL, &v31);
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
    v30 = *(__int64 (__fastcall ***)())(a3 + 304);
    result = LdrpAddLoadConfigFptrToBatch(
               (unsigned int)Base,
               v8,
               (unsigned int)&NumOfElements,
               a1,
               (__int64)&v30,
               (__int64)LdrpCgRoutineCallback);
    if ( (int)result < 0 )
      return result;
    v9 = NumOfElements;
    v38 = v30;
  }
  if ( (unsigned int)LdrControlFlowGuardEnforced(v10, v8)
    && (a2[47] & 0x4000) != 0
    && (*(_DWORD *)(a3 + 144) & 0x100) != 0 )
  {
    v37 = *(__int64 (__fastcall ***)())(a3 + 112);
    result = LdrpAddLoadConfigFptrToBatch(
               (unsigned int)Base,
               v15,
               (unsigned int)&NumOfElements,
               a1,
               (__int64)&v37,
               (__int64)LdrpCfgCheckRoutineCallback);
    if ( (int)result < 0 )
      return result;
    v30 = *(__int64 (__fastcall ***)())(a3 + 120);
    result = LdrpAddLoadConfigFptrToBatch(
               (unsigned int)Base,
               v17,
               (unsigned int)&NumOfElements,
               v18,
               (__int64)&v30,
               (__int64)LdrpCfgDispatchRoutineCallback);
    if ( (int)result < 0 )
      return result;
    v21 = 1;
    if ( *(_DWORD *)a3 >= 0x130u )
    {
      v34 = *(__int64 (__fastcall ***)())(a3 + 280);
      result = LdrpAddLoadConfigFptrToBatch(
                 (unsigned int)Base,
                 v19,
                 (unsigned int)&NumOfElements,
                 v20,
                 (__int64)&v34,
                 (__int64)LdrpXfgCheckRoutineCallback);
      if ( (int)result < 0 )
        return result;
      v35 = *(__int64 (__fastcall ***)())(a3 + 288);
      result = LdrpAddLoadConfigFptrToBatch(
                 (unsigned int)Base,
                 v22,
                 (unsigned int)&NumOfElements,
                 v23,
                 (__int64)&v35,
                 (__int64)LdrpXfgDispatchRoutineCallback);
      if ( (int)result < 0 )
        return result;
      v36 = *(__int64 (__fastcall ***)())(a3 + 296);
      result = LdrpAddLoadConfigFptrToBatch(
                 (unsigned int)Base,
                 v24,
                 (unsigned int)&NumOfElements,
                 v25,
                 (__int64)&v36,
                 (__int64)LdrpXfgTableDispatchRoutineCallback);
      if ( (int)result < 0 )
        return result;
    }
    v7 = v30;
    v6 = v37;
    v9 = NumOfElements;
  }
  else
  {
    v21 = 0;
  }
  qsort(Base, v9, 0x10uLL, LdrpSortLoadConfigFptrs);
  if ( !v9 )
  {
LABEL_31:
    if ( v21
      && (!v6
       || *v6 != LdrpValidateUserCallTarget && *v6 != LdrpValidateUserCallTargetES
       || v7 && *v7 != LdrpDispatchUserCallTarget && *v7 != LdrpDispatchUserCallTargetES
       || v34
       && *v34 != LdrpValidateUserCallTarget
       && *v34 != LdrpValidateUserCallTargetES
       && *v34 != LdrpValidateUserCallTargetXFG
       || v35
       && *v35 != LdrpDispatchUserCallTarget
       && *v35 != LdrpDispatchUserCallTargetES
       && *v35 != LdrpDispatchUserCallTargetXFG
       || v36
       && *v36 != LdrpDispatchUserCallTarget
       && *v36 != LdrpDispatchUserCallTargetES
       && *v36 != LdrpTableDispatchUserCallTargetXFG)
      || v38 && *v38 != LdrpCgLogFailure )
    {
      return 3221225534LL;
    }
    return 0LL;
  }
  while ( 1 )
  {
    v32 = 8LL;
    v26 = &Base[v14];
    v33 = *(_QWORD *)v26;
    result = ZwProtectVirtualMemory(-1LL, &v33, &v32, 4LL, &v31);
    if ( (int)result < 0 )
      return result;
    v27 = *(_QWORD *)v26;
    do
    {
      (*((void (__fastcall **)(__int64, _QWORD))v26 + 1))(v27, *(unsigned int *)(a3 + 144));
      ++v14;
      ++v26;
      if ( v14 >= v9 )
        break;
      v27 = *(_QWORD *)v26;
    }
    while ( *(_QWORD *)v26 + 8LL <= (unsigned __int64)(v33 + v32) );
    result = ZwProtectVirtualMemory(-1LL, &v33, &v32, v31, &v31);
    if ( (int)result < 0 )
      return result;
    if ( v14 >= v9 )
      goto LABEL_31;
  }
}
