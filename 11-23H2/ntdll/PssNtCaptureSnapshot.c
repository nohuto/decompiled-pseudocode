/*
 * XREFs of PssNtCaptureSnapshot @ 0x1801287F0
 * Callers:
 *     <none>
 * Callees:
 *     ZwAllocateVirtualMemory @ 0x1800A11B0 (ZwAllocateVirtualMemory.c)
 *     ZwCreateProcessEx @ 0x1800A1850 (ZwCreateProcessEx.c)
 *     PssNtFreeSnapshot @ 0x180128F50 (PssNtFreeSnapshot.c)
 *     PsspSampleCounters @ 0x180129640 (PsspSampleCounters.c)
 *     PsspCaptureIptTrace @ 0x18012989C (PsspCaptureIptTrace.c)
 *     PsspCaptureProcessInformation @ 0x1801299F8 (PsspCaptureProcessInformation.c)
 *     PsspCaptureAuxiliaryPages @ 0x180129B98 (PsspCaptureAuxiliaryPages.c)
 *     PsspCaptureVaSpaceInformation @ 0x180129F40 (PsspCaptureVaSpaceInformation.c)
 *     PsspCaptureHandleInformation @ 0x18012A714 (PsspCaptureHandleInformation.c)
 *     PsspCaptureThreadInformation @ 0x18012B150 (PsspCaptureThreadInformation.c)
 *     memset$thunk$772440563353939046 @ 0x180132010 (memset$thunk$772440563353939046.c)
 */

NTSTATUS __cdecl PssNtCaptureSnapshot(
        PHANDLE SnapshotHandle,
        HANDLE ProcessHandle,
        ULONG CaptureFlags,
        ULONG ThreadContextFlags)
{
  HANDLE v5; // r13
  NTSTATUS result; // eax
  ULONG v8; // r15d
  __int64 v9; // rbx
  ULONG v10; // esi
  HANDLE v11; // rcx
  int v12; // r12d
  NTSTATUS v13; // r12d
  int v14; // r12d
  ULONG v15; // eax
  int v16; // r13d
  NTSTATUS v17; // r15d
  PVOID BaseAddress; // [rsp+58h] [rbp-29h] BYREF
  __int64 v19; // [rsp+60h] [rbp-21h] BYREF
  __int64 v20; // [rsp+68h] [rbp-19h] BYREF
  __int64 v21; // [rsp+70h] [rbp-11h] BYREF
  __int64 v22; // [rsp+78h] [rbp-9h] BYREF
  int v23; // [rsp+80h] [rbp-1h]
  __int64 v24; // [rsp+88h] [rbp+7h] BYREF
  __int64 v25; // [rsp+90h] [rbp+Fh] BYREF
  ULONG_PTR RegionSize; // [rsp+98h] [rbp+17h] BYREF
  HANDLE ProcessHandlea; // [rsp+A0h] [rbp+1Fh] BYREF

  v5 = ProcessHandle;
  if ( (CaptureFlags & 0x3FF8000) != 0 )
    return -1073741811;
  v8 = CaptureFlags & 0x1C000000;
  if ( (CaptureFlags & 0x1C000000) == 0x4000000 )
    return -1073741776;
  v9 = 0LL;
  v22 = 0LL;
  v25 = 0LL;
  v21 = 0LL;
  v24 = 0LL;
  v10 = CaptureFlags & 0x40000000;
  if ( (CaptureFlags & 0x40000000) != 0 )
  {
    v9 = MEMORY[0x7FFE0300];
    PsspSampleCounters(&v25, &v24);
  }
  v11 = *SnapshotHandle;
  v12 = 0;
  BaseAddress = v11;
  if ( !v11 )
  {
    RegionSize = 1144LL;
    result = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &RegionSize, 0x1000u, 4u);
    if ( result < 0 )
      return result;
    v11 = BaseAddress;
    v12 = 1;
    *SnapshotHandle = BaseAddress;
  }
  memset_thunk_772440563353939046(v11, 0, 0x478uLL);
  *(_DWORD *)BaseAddress = 1146311504;
  *((_DWORD *)BaseAddress + 1) = v12;
  *((_DWORD *)BaseAddress + 2) = CaptureFlags;
  v13 = PsspCaptureProcessInformation(BaseAddress, v5, CaptureFlags);
  if ( v13 < 0 )
    goto LABEL_11;
  if ( (CaptureFlags & 2) != 0 )
  {
    if ( v10 )
      PsspSampleCounters(&v22, &v21);
    v19 = 2147352576LL;
    v13 = PsspCaptureAuxiliaryPages(BaseAddress, v5, CaptureFlags, &v19);
    if ( v13 < 0 )
      goto LABEL_11;
    if ( v10 )
    {
      PsspSampleCounters(&v19, &v20);
      *((_QWORD *)BaseAddress + 135) = v20 - v21;
      *((_QWORD *)BaseAddress + 136) = 1000000 * (v19 - v22) / v9;
    }
  }
  if ( (CaptureFlags & 0x800) == 0 )
    goto LABEL_24;
  if ( v10 )
    PsspSampleCounters(&v22, &v21);
  v13 = PsspCaptureVaSpaceInformation(BaseAddress, v5, CaptureFlags);
  if ( v13 < 0 )
  {
LABEL_11:
    PssNtFreeSnapshot(BaseAddress);
    *SnapshotHandle = 0LL;
    return v13;
  }
  if ( v10 )
  {
    PsspSampleCounters(&v19, &v20);
    *((_QWORD *)BaseAddress + 133) = v20 - v21;
    *((_QWORD *)BaseAddress + 134) = 1000000 * (v19 - v22) / v9;
  }
LABEL_24:
  if ( (CaptureFlags & 1) != 0 )
  {
    if ( v10 )
      PsspSampleCounters(&v22, &v21);
    v14 = ((int)CaptureFlags >> 31) & 0x1000;
    while ( 1 )
    {
      v15 = ((int)CaptureFlags >> 31) & 0x1000;
      v23 = v8 & 0x8000000;
      if ( (v8 & 0x10000000) != 0 )
      {
        v15 = v14 | 0x400;
      }
      else if ( (v8 & 0x8000000) != 0 )
      {
        v15 = v14 | 1;
      }
      v16 = ZwCreateProcessEx(&ProcessHandlea, 0x2000000u, 0LL, v5, v15, 0LL, 0LL, 0LL, 0);
      if ( v16 >= 0 )
        break;
      if ( (v8 & 0x4000000) == 0 )
        goto LABEL_39;
      if ( (v8 & 0x10000000) != 0 )
      {
        v8 &= ~0x10000000u;
      }
      else
      {
        if ( !v23 )
        {
LABEL_39:
          PssNtFreeSnapshot(BaseAddress);
          *SnapshotHandle = 0LL;
          return v16;
        }
        v8 &= ~0x8000000u;
      }
      v5 = ProcessHandle;
    }
    *((_QWORD *)BaseAddress + 110) = MEMORY[0x7FFE0014];
    *((_QWORD *)BaseAddress + 109) = ProcessHandlea;
    if ( v10 )
    {
      PsspSampleCounters(&v19, &v20);
      *((_QWORD *)BaseAddress + 131) = v20 - v21;
      *((_QWORD *)BaseAddress + 132) = 1000000 * (v19 - v22) / v9;
    }
    v5 = ProcessHandle;
  }
  if ( (CaptureFlags & 4) != 0 )
  {
    if ( v10 )
      PsspSampleCounters(&v22, &v21);
    v17 = PsspCaptureHandleInformation(BaseAddress, v5, CaptureFlags);
    if ( v17 < 0 )
      goto LABEL_47;
    if ( v10 )
    {
      PsspSampleCounters(&v19, &v20);
      *((_QWORD *)BaseAddress + 137) = v20 - v21;
      *((_QWORD *)BaseAddress + 138) = 1000000 * (v19 - v22) / v9;
    }
  }
  if ( (CaptureFlags & 0x80u) == 0 )
  {
    if ( v10 )
      goto LABEL_57;
  }
  else
  {
    if ( v10 )
      PsspSampleCounters(&v22, &v21);
    v17 = PsspCaptureThreadInformation(BaseAddress, v5, CaptureFlags, ThreadContextFlags);
    if ( v17 < 0 )
    {
LABEL_47:
      PssNtFreeSnapshot(BaseAddress);
      *SnapshotHandle = 0LL;
      return v17;
    }
    if ( v10 )
    {
      PsspSampleCounters(&v19, &v20);
      *((_QWORD *)BaseAddress + 139) = v20 - v21;
      *((_QWORD *)BaseAddress + 140) = 1000000 * (v19 - v22) / v9;
LABEL_57:
      PsspSampleCounters(&v19, &v20);
      *((_QWORD *)BaseAddress + 129) = v20 - v24;
      *((_QWORD *)BaseAddress + 130) = 1000000 * (v19 - v25) / v9;
    }
  }
  if ( (CaptureFlags & 0x2000) != 0 )
    PsspCaptureIptTrace(BaseAddress, v5);
  return 0;
}
