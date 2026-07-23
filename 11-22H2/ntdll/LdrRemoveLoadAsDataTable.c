/*
 * XREFs of LdrRemoveLoadAsDataTable @ 0x180008560
 * Callers:
 *     LdrAddLoadAsDataTable @ 0x1800088C0 (LdrAddLoadAsDataTable.c)
 *     LdrResRelease @ 0x1800EED50 (LdrResRelease.c)
 *     LdrpResMapFile @ 0x1800EF0EC (LdrpResMapFile.c)
 * Callees:
 *     LdrpInitMuiCrits @ 0x180008BC4 (LdrpInitMuiCrits.c)
 *     RtlEnterCriticalSection @ 0x180021D10 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x1800271F0 (RtlLeaveCriticalSection.c)
 *     RtlReleaseActivationContext @ 0x180033EF0 (RtlReleaseActivationContext.c)
 *     RtlFreeHeap @ 0x18003B190 (RtlFreeHeap.c)
 *     RtlReAllocateHeap @ 0x180042320 (RtlReAllocateHeap.c)
 *     _wcsicmp @ 0x1800906B0 (_wcsicmp.c)
 *     Feature_Servicing_CritsecInit__private_IsEnabled @ 0x18009E30C (Feature_Servicing_CritsecInit__private_IsEnabled.c)
 *     LdrpInitMuiCritsRtlInitOnce @ 0x18009E3DC (LdrpInitMuiCritsRtlInitOnce.c)
 */

NTSTATUS __cdecl LdrRemoveLoadAsDataTable(PVOID InitModule, PVOID *BaseModule, PSIZE_T Size, ULONG Flags)
{
  PVOID v8; // rdi
  NTSTATUS v9; // ebx
  unsigned int v10; // r9d
  unsigned int v11; // esi
  _QWORD *v12; // r8
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // r15
  const wchar_t *v16; // rcx
  __int64 v17; // rax
  bool v18; // zf
  int v19; // eax
  unsigned int v20; // edi
  __int64 v21; // r14
  _ACTIVATION_CONTEXT *v22; // rcx
  __int64 v23; // rax
  _QWORD *Heap; // rax
  unsigned int v25; // [rsp+24h] [rbp-34h]
  PVOID v26; // [rsp+28h] [rbp-30h]

  if ( !InitModule )
    return -1073741811;
  v8 = 0LL;
  v9 = -1073741511;
  if ( (unsigned int)Feature_Servicing_CritsecInit__private_IsEnabled() )
    LdrpInitMuiCritsRtlInitOnce();
  else
    LdrpInitMuiCrits();
  RtlEnterCriticalSection(&LoadAsDataCrits);
  v10 = LoadAsDataTableCount;
  if ( LoadAsDataTableCount )
  {
    if ( (Flags & 0xE00) != 0 )
    {
      if ( !BaseModule )
      {
        v9 = -1073741811;
        goto LABEL_54;
      }
      *BaseModule = 0LL;
      v11 = v10;
      v12 = LoadAsDataTable;
      while ( v11 )
      {
        if ( (Flags & 0x800) != 0 )
        {
          v13 = 6LL * (v11 - 1);
          if ( (PVOID)v12[v13 + 3] == InitModule )
          {
            v8 = (PVOID)v12[v13];
            break;
          }
        }
        else if ( (Flags & 0x400) != 0
               && (v14 = v11 - 1, v15 = 6 * v14, (v16 = (const wchar_t *)v12[6 * v14 + 1]) != 0LL) )
        {
          if ( !wcsicmp(v16, (const wchar_t *)InitModule) )
          {
            v12 = LoadAsDataTable;
            v8 = (PVOID)*((_QWORD *)LoadAsDataTable + v15);
            v10 = LoadAsDataTableCount;
            break;
          }
          v10 = LoadAsDataTableCount;
          v12 = LoadAsDataTable;
        }
        else if ( (Flags & 0x200) != 0 )
        {
          v17 = 6LL * (v11 - 1);
          if ( (PVOID)v12[v17] == InitModule )
          {
            v8 = (PVOID)v12[v17];
            break;
          }
        }
        --v11;
      }
      if ( v8 )
        *BaseModule = v8;
      if ( (Flags & 0x200000) != 0 )
      {
        if ( v8 && Size )
        {
          *Size = v12[6 * v11 - 4];
          if ( (Flags & 0x40000) != 0 )
            ++LODWORD(v12[6 * v11 - 2]);
          v9 = 0;
        }
        goto LABEL_54;
      }
      v18 = v8 == 0LL;
      if ( !v8 )
      {
LABEL_37:
        if ( v18 )
          v8 = InitModule;
        v26 = v8;
        v20 = v10;
        v25 = v10;
        while ( v20 )
        {
          v21 = v20 - 1;
          if ( (PVOID)v12[6 * v21] == v26 )
          {
            if ( v12[6 * v21 + 1] )
            {
              RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, (PVOID)v12[6 * v21 + 1]);
              v12 = LoadAsDataTable;
              *((_QWORD *)LoadAsDataTable + 6 * v21 + 1) = 0LL;
              v20 = v25;
              v10 = LoadAsDataTableCount;
            }
            v22 = (_ACTIVATION_CONTEXT *)v12[6 * v21 + 5];
            if ( (unsigned __int64)&v22[-1].InlineStorageMapEntries[31] + 7 <= 0xFFFFFFFFFFFFFFFDuLL )
            {
              RtlReleaseActivationContext(v22);
              v12 = LoadAsDataTable;
              *((_QWORD *)LoadAsDataTable + 6 * v21 + 5) = 0LL;
              v10 = LoadAsDataTableCount;
            }
            if ( v20 != v10 )
            {
              *(_OWORD *)&v12[6 * v21] = *(_OWORD *)&v12[6 * v10 - 6];
              *(_OWORD *)&v12[6 * v21 + 2] = *(_OWORD *)&v12[6 * v10 - 4];
              *(_OWORD *)&v12[6 * v21 + 4] = *(_OWORD *)&v12[6 * v10 - 2];
            }
            LoadAsDataTableCount = --v10;
            v23 = (unsigned int)(LoadAsDataTableBlockCount - 32);
            if ( v10 < (unsigned int)v23 )
            {
              Heap = RtlReAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, LoadAsDataTable, 48 * v23);
              v12 = Heap;
              if ( !Heap )
              {
                v9 = -1073741801;
                goto LABEL_54;
              }
              LoadAsDataTable = Heap;
              LoadAsDataTableBlockCount -= 32;
              v10 = LoadAsDataTableCount;
            }
            v9 = 0;
          }
          v20 = v21;
          v25 = v21;
        }
        goto LABEL_54;
      }
      v19 = LODWORD(v12[6 * v11 - 2]) - 1;
      LODWORD(v12[6 * v11 - 2]) = v19;
      if ( v19 > 0 )
      {
        v9 = -1073740024;
        goto LABEL_54;
      }
    }
    else
    {
      v12 = LoadAsDataTable;
    }
    v18 = v8 == 0LL;
    goto LABEL_37;
  }
LABEL_54:
  RtlLeaveCriticalSection(&LoadAsDataCrits);
  return v9;
}
