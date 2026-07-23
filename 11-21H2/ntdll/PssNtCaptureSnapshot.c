/*
 * XREFs of PssNtCaptureSnapshot @ 0x180060B70
 * Callers:
 *     <none>
 * Callees:
 *     PsspCaptureProcessInformation @ 0x18006091C (PsspCaptureProcessInformation.c)
 *     PsspSampleCounters @ 0x180060FD8 (PsspSampleCounters.c)
 *     PsspCaptureIptTrace @ 0x180061040 (PsspCaptureIptTrace.c)
 *     PsspCaptureThreadInformation @ 0x18006117C (PsspCaptureThreadInformation.c)
 *     PsspCaptureHandleInformation @ 0x1800616F0 (PsspCaptureHandleInformation.c)
 *     PsspCaptureAuxiliaryPages @ 0x180061BDC (PsspCaptureAuxiliaryPages.c)
 *     PsspCaptureVaSpaceInformation @ 0x180061DC4 (PsspCaptureVaSpaceInformation.c)
 *     PssNtFreeSnapshot @ 0x18008C0C0 (PssNtFreeSnapshot.c)
 *     ZwAllocateVirtualMemory @ 0x1800A4370 (ZwAllocateVirtualMemory.c)
 *     ZwCreateProcessEx @ 0x1800A4A10 (ZwCreateProcessEx.c)
 *     memset @ 0x1800AAE00 (memset.c)
 */

NTSTATUS __cdecl PssNtCaptureSnapshot(
        PHANDLE SnapshotHandle,
        HANDLE ProcessHandle,
        ULONG CaptureFlags,
        ULONG ThreadContextFlags)
{
  ULONG v4; // r13d
  HANDLE v6; // r12
  __int64 v8; // rbx
  ULONG v9; // esi
  HANDLE v10; // rcx
  int v11; // r15d
  NTSTATUS result; // eax
  int v13; // r15d
  ULONG v14; // r15d
  int v15; // r13d
  ULONG v16; // eax
  int v17; // r12d
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

  v4 = ThreadContextFlags;
  v6 = ProcessHandle;
  if ( (CaptureFlags & 0x3FF8000) != 0 )
    return -1073741811;
  if ( (CaptureFlags & 0x4000000) != 0 && (CaptureFlags & 0x18000000) == 0 )
    return -1073741776;
  v8 = 0LL;
  v22 = 0LL;
  v25 = 0LL;
  v21 = 0LL;
  v24 = 0LL;
  v9 = CaptureFlags & 0x40000000;
  if ( (CaptureFlags & 0x40000000) != 0 )
  {
    v8 = MEMORY[0x7FFE0300];
    PsspSampleCounters(&v25, &v24);
  }
  v10 = *SnapshotHandle;
  v11 = 0;
  BaseAddress = v10;
  if ( !v10 )
  {
    RegionSize = 1144LL;
    result = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &RegionSize, 0x1000u, 4u);
    if ( result < 0 )
      return result;
    v10 = BaseAddress;
    v11 = 1;
    *SnapshotHandle = BaseAddress;
  }
  memset(v10, 0, 0x478uLL);
  *(_DWORD *)BaseAddress = 1146311504;
  *((_DWORD *)BaseAddress + 1) = v11;
  *((_DWORD *)BaseAddress + 2) = CaptureFlags;
  v13 = PsspCaptureProcessInformation(BaseAddress, v6, CaptureFlags);
  if ( v13 < 0 )
    goto LABEL_53;
  if ( (CaptureFlags & 2) != 0 )
  {
    if ( v9 )
      PsspSampleCounters(&v22, &v21);
    v19 = 2147352576LL;
    v13 = PsspCaptureAuxiliaryPages(BaseAddress, v6, CaptureFlags, &v19);
    if ( v13 < 0 )
      goto LABEL_53;
    if ( v9 )
    {
      PsspSampleCounters(&v19, &v20);
      *((_QWORD *)BaseAddress + 135) = v20 - v21;
      *((_QWORD *)BaseAddress + 136) = 1000000 * (v19 - v22) / v8;
    }
  }
  if ( (CaptureFlags & 0x800) != 0 )
  {
    if ( v9 )
      PsspSampleCounters(&v22, &v21);
    v13 = PsspCaptureVaSpaceInformation(BaseAddress, v6, CaptureFlags);
    if ( v13 < 0 )
      goto LABEL_53;
    if ( v9 )
    {
      PsspSampleCounters(&v19, &v20);
      *((_QWORD *)BaseAddress + 133) = v20 - v21;
      *((_QWORD *)BaseAddress + 134) = 1000000 * (v19 - v22) / v8;
    }
  }
  if ( (CaptureFlags & 1) != 0 )
  {
    if ( v9 )
      PsspSampleCounters(&v22, &v21);
    v14 = CaptureFlags & 0x1C000000;
    v15 = ((int)CaptureFlags >> 31) & 0x1000;
    while ( 1 )
    {
      v16 = ((int)CaptureFlags >> 31) & 0x1000;
      v23 = v14 & 0x8000000;
      if ( (v14 & 0x10000000) != 0 )
      {
        v16 = v15 | 0x400;
      }
      else if ( (v14 & 0x8000000) != 0 )
      {
        v16 = v15 | 1;
      }
      v17 = ZwCreateProcessEx(&ProcessHandlea, 0x2000000u, 0LL, v6, v16, 0LL, 0LL, 0LL, 0);
      if ( v17 >= 0 )
        break;
      if ( (v14 & 0x4000000) == 0 )
        goto LABEL_62;
      if ( (v14 & 0x10000000) != 0 )
      {
        v14 &= ~0x10000000u;
      }
      else
      {
        if ( !v23 )
        {
LABEL_62:
          PssNtFreeSnapshot(BaseAddress);
          *SnapshotHandle = 0LL;
          return v17;
        }
        v14 &= ~0x8000000u;
      }
      v6 = ProcessHandle;
    }
    *((_QWORD *)BaseAddress + 110) = MEMORY[0x7FFE0014];
    *((_QWORD *)BaseAddress + 109) = ProcessHandlea;
    if ( v9 )
    {
      PsspSampleCounters(&v19, &v20);
      *((_QWORD *)BaseAddress + 131) = v20 - v21;
      *((_QWORD *)BaseAddress + 132) = 1000000 * (v19 - v22) / v8;
    }
    v4 = ThreadContextFlags;
    v6 = ProcessHandle;
  }
  if ( (CaptureFlags & 4) != 0 )
  {
    if ( v9 )
      PsspSampleCounters(&v22, &v21);
    v13 = PsspCaptureHandleInformation(BaseAddress, v6, CaptureFlags);
    if ( v13 < 0 )
      goto LABEL_53;
    if ( v9 )
    {
      PsspSampleCounters(&v19, &v20);
      *((_QWORD *)BaseAddress + 137) = v20 - v21;
      *((_QWORD *)BaseAddress + 138) = 1000000 * (v19 - v22) / v8;
    }
  }
  if ( (CaptureFlags & 0x80u) == 0 )
  {
    if ( !v9 )
      goto LABEL_44;
    goto LABEL_43;
  }
  if ( v9 )
    PsspSampleCounters(&v22, &v21);
  v13 = PsspCaptureThreadInformation(BaseAddress, v6, CaptureFlags, v4);
  if ( v13 < 0 )
  {
LABEL_53:
    PssNtFreeSnapshot(BaseAddress);
    *SnapshotHandle = 0LL;
    return v13;
  }
  if ( v9 )
  {
    PsspSampleCounters(&v19, &v20);
    *((_QWORD *)BaseAddress + 139) = v20 - v21;
    *((_QWORD *)BaseAddress + 140) = 1000000 * (v19 - v22) / v8;
LABEL_43:
    PsspSampleCounters(&v19, &v20);
    *((_QWORD *)BaseAddress + 129) = v20 - v24;
    *((_QWORD *)BaseAddress + 130) = 1000000 * (v19 - v25) / v8;
  }
LABEL_44:
  if ( (CaptureFlags & 0x2000) != 0 )
    PsspCaptureIptTrace(BaseAddress, v6);
  return 0;
}
