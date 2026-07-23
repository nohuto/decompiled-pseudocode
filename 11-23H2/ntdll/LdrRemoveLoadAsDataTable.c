/*
 * XREFs of LdrRemoveLoadAsDataTable @ 0x180071FE0
 * Callers:
 *     LdrAddLoadAsDataTable @ 0x180070A50 (LdrAddLoadAsDataTable.c)
 *     LdrResRelease @ 0x1800F0160 (LdrResRelease.c)
 *     LdrpResMapFile @ 0x1800F04FC (LdrpResMapFile.c)
 * Callees:
 *     RtlEnterCriticalSection @ 0x180021B30 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x180027020 (RtlLeaveCriticalSection.c)
 *     RtlReleaseActivationContext @ 0x180033D90 (RtlReleaseActivationContext.c)
 *     RtlFreeHeap @ 0x18003B030 (RtlFreeHeap.c)
 *     RtlReAllocateHeap @ 0x1800421C0 (RtlReAllocateHeap.c)
 *     _wcsicmp @ 0x180090EB0 (_wcsicmp.c)
 *     LdrpInitMuiCritsRtlInitOnce @ 0x18009F46C (LdrpInitMuiCritsRtlInitOnce.c)
 */

NTSTATUS __cdecl LdrRemoveLoadAsDataTable(PVOID InitModule, PVOID *BaseModule, PSIZE_T Size, ULONG Flags)
{
  PVOID v7; // rdi
  NTSTATUS v8; // ebx
  unsigned int v9; // r9d
  _QWORD *v10; // r8
  bool v11; // zf
  unsigned int v12; // edi
  __int64 v13; // r14
  _ACTIVATION_CONTEXT *v14; // rcx
  __int64 v15; // rax
  unsigned int v16; // esi
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // r15
  const wchar_t *v20; // rcx
  __int64 v21; // rax
  int v22; // eax
  _QWORD *Heap; // rax
  unsigned int v25; // [rsp+24h] [rbp-34h]
  PVOID v26; // [rsp+28h] [rbp-30h]

  if ( InitModule )
  {
    v7 = 0LL;
    v8 = -1073741511;
    LdrpInitMuiCritsRtlInitOnce();
    RtlEnterCriticalSection(&LoadAsDataCrits);
    v9 = LoadAsDataTableCount;
    if ( LoadAsDataTableCount )
    {
      if ( (Flags & 0xE00) == 0 )
      {
        v10 = LoadAsDataTable;
        goto LABEL_5;
      }
      if ( BaseModule )
      {
        *BaseModule = 0LL;
        v16 = v9;
        v10 = LoadAsDataTable;
        while ( v16 )
        {
          if ( (Flags & 0x800) != 0 )
          {
            v17 = 6LL * (v16 - 1);
            if ( (PVOID)v10[v17 + 3] == InitModule )
            {
              v7 = (PVOID)v10[v17];
              break;
            }
          }
          else if ( (Flags & 0x400) != 0
                 && (v18 = v16 - 1, v19 = 6 * v18, (v20 = (const wchar_t *)v10[6 * v18 + 1]) != 0LL) )
          {
            if ( !wcsicmp(v20, (const wchar_t *)InitModule) )
            {
              v10 = LoadAsDataTable;
              v7 = (PVOID)*((_QWORD *)LoadAsDataTable + v19);
              v9 = LoadAsDataTableCount;
              break;
            }
            v9 = LoadAsDataTableCount;
            v10 = LoadAsDataTable;
          }
          else if ( (Flags & 0x200) != 0 )
          {
            v21 = 6LL * (v16 - 1);
            if ( (PVOID)v10[v21] == InitModule )
            {
              v7 = (PVOID)v10[v21];
              break;
            }
          }
          --v16;
        }
        if ( v7 )
          *BaseModule = v7;
        if ( (Flags & 0x200000) != 0 )
        {
          if ( v7 && Size )
          {
            *Size = v10[6 * v16 - 4];
            if ( (Flags & 0x40000) != 0 )
              ++LODWORD(v10[6 * v16 - 2]);
            v8 = 0;
          }
        }
        else
        {
          v11 = v7 == 0LL;
          if ( !v7 )
          {
LABEL_6:
            if ( v11 )
              v7 = InitModule;
            v26 = v7;
            v12 = v9;
            v25 = v9;
            while ( v12 )
            {
              v13 = v12 - 1;
              if ( (PVOID)v10[6 * v13] == v26 )
              {
                if ( v10[6 * v13 + 1] )
                {
                  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, (PVOID)v10[6 * v13 + 1]);
                  v10 = LoadAsDataTable;
                  *((_QWORD *)LoadAsDataTable + 6 * v13 + 1) = 0LL;
                  v12 = v25;
                  v9 = LoadAsDataTableCount;
                }
                v14 = (_ACTIVATION_CONTEXT *)v10[6 * v13 + 5];
                if ( (unsigned __int64)&v14[-1].InlineStorageMapEntries[31] + 7 <= 0xFFFFFFFFFFFFFFFDuLL )
                {
                  RtlReleaseActivationContext(v14);
                  v10 = LoadAsDataTable;
                  *((_QWORD *)LoadAsDataTable + 6 * v13 + 5) = 0LL;
                  v9 = LoadAsDataTableCount;
                }
                if ( v12 != v9 )
                {
                  *(_OWORD *)&v10[6 * v13] = *(_OWORD *)&v10[6 * v9 - 6];
                  *(_OWORD *)&v10[6 * v13 + 2] = *(_OWORD *)&v10[6 * v9 - 4];
                  *(_OWORD *)&v10[6 * v13 + 4] = *(_OWORD *)&v10[6 * v9 - 2];
                }
                LoadAsDataTableCount = --v9;
                v15 = (unsigned int)(LoadAsDataTableBlockCount - 32);
                if ( v9 < (unsigned int)v15 )
                {
                  Heap = RtlReAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, LoadAsDataTable, 48 * v15);
                  v10 = Heap;
                  if ( !Heap )
                  {
                    v8 = -1073741801;
                    goto LABEL_50;
                  }
                  LoadAsDataTable = Heap;
                  LoadAsDataTableBlockCount -= 32;
                  v9 = LoadAsDataTableCount;
                }
                v8 = 0;
              }
              v12 = v13;
              v25 = v13;
            }
            goto LABEL_50;
          }
          v22 = LODWORD(v10[6 * v16 - 2]) - 1;
          LODWORD(v10[6 * v16 - 2]) = v22;
          if ( v22 <= 0 )
          {
LABEL_5:
            v11 = v7 == 0LL;
            goto LABEL_6;
          }
          v8 = -1073740024;
        }
      }
      else
      {
        v8 = -1073741811;
      }
    }
LABEL_50:
    RtlLeaveCriticalSection(&LoadAsDataCrits);
    return v8;
  }
  return -1073741811;
}
