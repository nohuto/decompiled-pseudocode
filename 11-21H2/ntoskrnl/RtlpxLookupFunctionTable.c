/*
 * XREFs of RtlpxLookupFunctionTable @ 0x140297AE0
 * Callers:
 *     RtlpLookupFunctionEntryForStackWalks @ 0x140296DC0 (RtlpLookupFunctionEntryForStackWalks.c)
 *     RtlLookupFunctionEntry @ 0x140298010 (RtlLookupFunctionEntry.c)
 *     RtlPcToFileHeader @ 0x1403870E0 (RtlPcToFileHeader.c)
 *     RtlLookupFunctionTableEx @ 0x140389A90 (RtlLookupFunctionTableEx.c)
 *     RtlLookupFunctionTable @ 0x140419FB8 (RtlLookupFunctionTable.c)
 *     MiInitializeLoadedModuleList @ 0x140B09D6C (MiInitializeLoadedModuleList.c)
 *     KiVerifyPdata @ 0x140B19FB4 (KiVerifyPdata.c)
 * Callees:
 *     MmUnlockLoadedModuleListShared @ 0x1402DC05C (MmUnlockLoadedModuleListShared.c)
 *     MmLockLoadedModuleListShared @ 0x1402DC098 (MmLockLoadedModuleListShared.c)
 */

PVOID __fastcall RtlpxLookupFunctionTable(unsigned __int64 a1, __int64 a2)
{
  PVOID v2; // r15
  int *v5; // rdi
  int v6; // r12d
  unsigned int v7; // esi
  int v8; // r13d
  int v9; // r8d
  int v10; // r9d
  int v11; // eax
  unsigned __int64 v12; // r11
  int *v13; // r10
  unsigned __int64 v14; // rdx
  PVOID result; // rax
  char v16; // si
  unsigned int v17; // edx
  int v18; // r8d
  int v19; // r9d
  unsigned __int64 v20; // rdi
  int *v21; // r10
  unsigned __int64 v22; // rcx
  int v23; // eax
  int v24; // r9d
  unsigned int v25; // r8d
  PVOID *v26; // rdx
  unsigned __int64 v27; // rax
  unsigned __int64 v28; // rcx
  int v29; // ecx
  unsigned __int8 v30; // [rsp+58h] [rbp+10h] BYREF

  v2 = 0LL;
  *(_QWORD *)(a2 + 8) = 0LL;
  *(_DWORD *)(a2 + 16) = 0;
  v5 = RtlpInvertedFunctionTable;
  v6 = RtlpInvertedFunctionTable[2];
  if ( (v6 & 1) != 0 )
  {
    v8 = 1;
    goto LABEL_20;
  }
  if ( *RtlpInvertedFunctionTable == 1 )
  {
    v8 = 1;
  }
  else
  {
    if ( (KiSpeculationFeatures & 0x20000000000LL) != 0 )
      v7 = dword_140C4F440 << 12;
    else
      v7 = 0;
    v8 = 1;
    v9 = *RtlpInvertedFunctionTable - 1;
    v10 = 1;
    while ( v9 >= v10 )
    {
      v11 = (v10 + v9) >> 1;
      v12 = *(_QWORD *)&RtlpInvertedFunctionTable[6 * v11 + 6];
      v13 = &RtlpInvertedFunctionTable[6 * v11];
      v14 = v12 + (unsigned int)v13[8];
      if ( a1 < v12 )
      {
        if ( !v11 )
          break;
        v9 = v11 - 1;
        continue;
      }
      if ( a1 > 0x7FFFFFFEFFFFLL && v7 )
      {
        if ( a1 < v14 )
        {
LABEL_15:
          *(_OWORD *)a2 = *((_OWORD *)v13 + 1);
          *(_QWORD *)(a2 + 16) = *((_QWORD *)v13 + 4);
          result = *(PVOID *)a2;
          goto LABEL_16;
        }
        if ( a1 >= v14 + v7 || v12 == PsNtosImageBase )
          goto LABEL_10;
        if ( v12 != PsHalImageBase )
        {
          *(_DWORD *)(a2 + 20) = RtlRetpolineStubsFunctionTableSize;
          result = &RtlRetpolineStubsFunctionTable;
          *(_QWORD *)a2 = &RtlRetpolineStubsFunctionTable;
          *(_QWORD *)(a2 + 8) = v14;
          *(_DWORD *)(a2 + 16) = v7;
          goto LABEL_16;
        }
      }
      if ( a1 < v14 )
        goto LABEL_15;
LABEL_10:
      v10 = v11 + 1;
    }
  }
  if ( *((_BYTE *)RtlpInvertedFunctionTable + 12) )
    goto LABEL_20;
  result = 0LL;
LABEL_16:
  if ( v5[2] != v6 )
  {
LABEL_20:
    v30 = 0;
    if ( (KiBugCheckActive & 3) != 0 )
    {
      v16 = 1;
    }
    else
    {
      v16 = 0;
      MmLockLoadedModuleListShared(&v30);
    }
    if ( *RtlpInvertedFunctionTable == 1
      || ((KiSpeculationFeatures & 0x20000000000LL) == 0 ? (v17 = 0) : (v17 = dword_140C4F440 << 12),
          v18 = *RtlpInvertedFunctionTable - 1,
          v18 < 1) )
    {
LABEL_32:
      if ( *((_BYTE *)RtlpInvertedFunctionTable + 12) )
      {
        v24 = dword_140C4F478;
        v25 = (KiSpeculationFeatures & 0x20000000000LL) != 0 ? dword_140C4F440 << 12 : 0;
        v26 = (PVOID *)PsLoadedModuleList;
        if ( PsLoadedModuleList )
        {
          if ( PsLoadedModuleList != &PsLoadedModuleList )
          {
            while ( 1 )
            {
              v27 = (unsigned __int64)v26[6];
              v28 = v27 + (unsigned int)dword_140C4F478 + (unsigned __int64)*((unsigned int *)v26 + 16);
              if ( a1 >= v27 && a1 < v28 )
              {
                v2 = v26[2];
                *(_QWORD *)a2 = v2;
                *(_QWORD *)(a2 + 8) = v27;
                *(_DWORD *)(a2 + 16) = v24 + *((_DWORD *)v26 + 16);
                *(_DWORD *)(a2 + 20) = *((_DWORD *)v26 + 6);
                goto LABEL_37;
              }
              if ( v25 && a1 >= v28 && a1 < v28 + v25 )
                break;
              v26 = (PVOID *)*v26;
              if ( v26 == &PsLoadedModuleList )
                goto LABEL_37;
            }
            *(_QWORD *)(a2 + 8) = v28;
            v29 = RtlRetpolineStubsFunctionTableSize;
            v2 = &RtlRetpolineStubsFunctionTable;
            *(_QWORD *)a2 = &RtlRetpolineStubsFunctionTable;
            *(_DWORD *)(a2 + 20) = v29;
            *(_DWORD *)(a2 + 16) = v25;
          }
        }
      }
LABEL_37:
      if ( !v16 )
        MmUnlockLoadedModuleListShared(v30);
      return v2;
    }
    while ( 1 )
    {
      v19 = (v18 + v8) >> 1;
      v20 = *(_QWORD *)&RtlpInvertedFunctionTable[6 * v19 + 6];
      v21 = &RtlpInvertedFunctionTable[6 * v19];
      v22 = v20 + (unsigned int)v21[8];
      if ( a1 >= v20 )
        break;
      if ( !v19 )
        goto LABEL_32;
      v18 = v19 - 1;
LABEL_31:
      if ( v18 < v8 )
        goto LABEL_32;
    }
    if ( a1 > 0x7FFFFFFEFFFFLL && v17 )
    {
      if ( a1 < v22 )
      {
LABEL_36:
        *(_OWORD *)a2 = *((_OWORD *)v21 + 1);
        *(_QWORD *)(a2 + 16) = *((_QWORD *)v21 + 4);
        v2 = *(PVOID *)a2;
        goto LABEL_37;
      }
      if ( a1 >= v22 + v17 || v20 == PsNtosImageBase )
        goto LABEL_30;
      if ( v20 != PsHalImageBase )
      {
        v23 = RtlRetpolineStubsFunctionTableSize;
        v2 = &RtlRetpolineStubsFunctionTable;
        *(_QWORD *)a2 = &RtlRetpolineStubsFunctionTable;
        *(_QWORD *)(a2 + 8) = v22;
        *(_DWORD *)(a2 + 16) = v17;
        *(_DWORD *)(a2 + 20) = v23;
        goto LABEL_37;
      }
    }
    if ( a1 < v22 )
      goto LABEL_36;
LABEL_30:
    v8 = v19 + 1;
    goto LABEL_31;
  }
  return result;
}
