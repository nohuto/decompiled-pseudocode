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

__int64 __fastcall LdrRemoveLoadAsDataTable(wchar_t *String2, wchar_t **a2, _QWORD *a3, int a4)
{
  wchar_t *v8; // rdi
  unsigned int v9; // ebx
  __int64 v10; // rdx
  __int64 v11; // r9
  int v12; // esi
  __int64 v13; // r8
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // r15
  const wchar_t *v17; // rcx
  __int64 v18; // rax
  bool v19; // zf
  int v20; // eax
  int v21; // edi
  __int64 v22; // r14
  __int64 v23; // rcx
  __int64 v24; // rax
  __int64 Heap; // rax
  __int64 v26; // [rsp+20h] [rbp-38h]
  wchar_t *v27; // [rsp+28h] [rbp-30h]

  if ( !String2 )
    return 3221225485LL;
  v8 = 0LL;
  v9 = -1073741511;
  if ( (unsigned int)Feature_Servicing_CritsecInit__private_IsEnabled() )
    LdrpInitMuiCritsRtlInitOnce();
  else
    LdrpInitMuiCrits();
  RtlEnterCriticalSection(&LoadAsDataCrits);
  v11 = (unsigned int)LoadAsDataTableCount;
  if ( LoadAsDataTableCount )
  {
    if ( (a4 & 0xE00) != 0 )
    {
      if ( !a2 )
      {
        v9 = -1073741811;
        goto LABEL_54;
      }
      *a2 = 0LL;
      v12 = v11;
      v13 = LoadAsDataTable;
      while ( v12 )
      {
        if ( (a4 & 0x800) != 0 )
        {
          v14 = 48LL * (unsigned int)(v12 - 1);
          if ( *(wchar_t **)(v14 + v13 + 24) == String2 )
          {
            v8 = *(wchar_t **)(v14 + v13);
            break;
          }
        }
        else if ( (a4 & 0x400) != 0
               && (v15 = (unsigned int)(v12 - 1), v16 = 6 * v15, (v17 = *(const wchar_t **)(v13 + 48 * v15 + 8)) != 0LL) )
        {
          if ( !wcsicmp(v17, String2) )
          {
            v13 = LoadAsDataTable;
            v8 = *(wchar_t **)(LoadAsDataTable + 8 * v16);
            v11 = (unsigned int)LoadAsDataTableCount;
            break;
          }
          v11 = (unsigned int)LoadAsDataTableCount;
          v13 = LoadAsDataTable;
        }
        else if ( (a4 & 0x200) != 0 )
        {
          v18 = 48LL * (unsigned int)(v12 - 1);
          if ( *(wchar_t **)(v18 + v13) == String2 )
          {
            v8 = *(wchar_t **)(v18 + v13);
            break;
          }
        }
        --v12;
      }
      if ( v8 )
        *a2 = v8;
      if ( (a4 & 0x200000) != 0 )
      {
        if ( v8 && a3 )
        {
          *a3 = *(_QWORD *)(v13 + 48LL * (unsigned int)(v12 - 1) + 16);
          if ( (a4 & 0x40000) != 0 )
            ++*(_DWORD *)(v13 + 48LL * (unsigned int)(v12 - 1) + 32);
          v9 = 0;
        }
        goto LABEL_54;
      }
      v19 = v8 == 0LL;
      if ( !v8 )
      {
LABEL_37:
        if ( v19 )
          v8 = String2;
        v27 = v8;
        v21 = v11;
        HIDWORD(v26) = v11;
        while ( v21 )
        {
          v22 = (unsigned int)(v21 - 1);
          if ( *(wchar_t **)(v13 + 48 * v22) == v27 )
          {
            if ( *(_QWORD *)(v13 + 48 * v22 + 8) )
            {
              RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, *(_QWORD *)(v13 + 48 * v22 + 8));
              v13 = LoadAsDataTable;
              *(_QWORD *)(LoadAsDataTable + 48 * v22 + 8) = 0LL;
              v21 = HIDWORD(v26);
              v11 = (unsigned int)LoadAsDataTableCount;
            }
            v23 = *(_QWORD *)(v13 + 48 * v22 + 40);
            if ( (unsigned __int64)(v23 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
            {
              RtlReleaseActivationContext(v23, v10, v13, v11, v26);
              v13 = LoadAsDataTable;
              *(_QWORD *)(LoadAsDataTable + 48 * v22 + 40) = 0LL;
              LODWORD(v11) = LoadAsDataTableCount;
            }
            if ( v21 != (_DWORD)v11 )
            {
              *(_OWORD *)(v13 + 48 * v22) = *(_OWORD *)(v13 + 48LL * (unsigned int)(v11 - 1));
              *(_OWORD *)(v13 + 48 * v22 + 16) = *(_OWORD *)(v13 + 48LL * (unsigned int)(v11 - 1) + 16);
              *(_OWORD *)(v13 + 48 * v22 + 32) = *(_OWORD *)(v13 + 48LL * (unsigned int)(v11 - 1) + 32);
            }
            v11 = (unsigned int)(v11 - 1);
            LoadAsDataTableCount = v11;
            v24 = (unsigned int)(LoadAsDataTableBlockCount - 32);
            if ( (unsigned int)v11 < (unsigned int)v24 )
            {
              Heap = RtlReAllocateHeap(NtCurrentPeb()->ProcessHeap, 0LL, LoadAsDataTable, 48 * v24);
              v13 = Heap;
              if ( !Heap )
              {
                v9 = -1073741801;
                goto LABEL_54;
              }
              LoadAsDataTable = Heap;
              LoadAsDataTableBlockCount -= 32;
              v11 = (unsigned int)LoadAsDataTableCount;
            }
            v9 = 0;
            LODWORD(v26) = 0;
          }
          v21 = v22;
          HIDWORD(v26) = v22;
        }
        goto LABEL_54;
      }
      v10 = 6LL * (unsigned int)(v12 - 1);
      v20 = *(_DWORD *)(v13 + 48LL * (unsigned int)(v12 - 1) + 32) - 1;
      *(_DWORD *)(v13 + 48LL * (unsigned int)(v12 - 1) + 32) = v20;
      if ( v20 > 0 )
      {
        v9 = -1073740024;
        goto LABEL_54;
      }
    }
    else
    {
      v13 = LoadAsDataTable;
    }
    v19 = v8 == 0LL;
    goto LABEL_37;
  }
LABEL_54:
  RtlLeaveCriticalSection(&LoadAsDataCrits);
  return v9;
}
