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

__int64 __fastcall PssNtCaptureSnapshot(void **a1, void *a2, unsigned int a3, unsigned int a4)
{
  unsigned int v4; // r13d
  void *v6; // r12
  __int64 v8; // rbx
  int v9; // esi
  void *v10; // rcx
  int v11; // r15d
  __int64 result; // rax
  NTSTATUS v13; // r15d
  int v14; // r15d
  int v15; // r13d
  int v16; // eax
  int Process; // r12d
  void *v18; // [rsp+58h] [rbp-29h] BYREF
  __int64 v19; // [rsp+60h] [rbp-21h] BYREF
  __int64 v20; // [rsp+68h] [rbp-19h] BYREF
  __int64 v21; // [rsp+70h] [rbp-11h] BYREF
  __int64 v22; // [rsp+78h] [rbp-9h] BYREF
  int v23; // [rsp+80h] [rbp-1h]
  __int64 v24; // [rsp+88h] [rbp+7h] BYREF
  __int64 v25; // [rsp+90h] [rbp+Fh] BYREF
  __int64 v26; // [rsp+98h] [rbp+17h] BYREF
  _QWORD v27[7]; // [rsp+A0h] [rbp+1Fh] BYREF

  v4 = a4;
  v6 = a2;
  if ( (a3 & 0x3FF8000) != 0 )
    return 3221225485LL;
  if ( (a3 & 0x4000000) != 0 && (a3 & 0x18000000) == 0 )
    return 3221225520LL;
  v8 = 0LL;
  v22 = 0LL;
  v25 = 0LL;
  v21 = 0LL;
  v24 = 0LL;
  v9 = a3 & 0x40000000;
  if ( (a3 & 0x40000000) != 0 )
  {
    v8 = MEMORY[0x7FFE0300];
    PsspSampleCounters(&v25, &v24);
  }
  v10 = *a1;
  v11 = 0;
  v18 = v10;
  if ( !v10 )
  {
    v26 = 1144LL;
    result = ZwAllocateVirtualMemory(-1LL, &v18, 0LL, &v26, 4096, 4);
    if ( (int)result < 0 )
      return result;
    v10 = v18;
    v11 = 1;
    *a1 = v18;
  }
  memset(v10, 0, 0x478uLL);
  *(_DWORD *)v18 = 1146311504;
  *((_DWORD *)v18 + 1) = v11;
  *((_DWORD *)v18 + 2) = a3;
  v13 = PsspCaptureProcessInformation(v18, v6, a3);
  if ( v13 < 0 )
    goto LABEL_53;
  if ( (a3 & 2) != 0 )
  {
    if ( v9 )
      PsspSampleCounters(&v22, &v21);
    v19 = 2147352576LL;
    v13 = PsspCaptureAuxiliaryPages(v18, v6, a3, &v19);
    if ( v13 < 0 )
      goto LABEL_53;
    if ( v9 )
    {
      PsspSampleCounters(&v19, &v20);
      *((_QWORD *)v18 + 135) = v20 - v21;
      *((_QWORD *)v18 + 136) = 1000000 * (v19 - v22) / v8;
    }
  }
  if ( (a3 & 0x800) != 0 )
  {
    if ( v9 )
      PsspSampleCounters(&v22, &v21);
    v13 = PsspCaptureVaSpaceInformation(v18, v6, a3);
    if ( v13 < 0 )
      goto LABEL_53;
    if ( v9 )
    {
      PsspSampleCounters(&v19, &v20);
      *((_QWORD *)v18 + 133) = v20 - v21;
      *((_QWORD *)v18 + 134) = 1000000 * (v19 - v22) / v8;
    }
  }
  if ( (a3 & 1) != 0 )
  {
    if ( v9 )
      PsspSampleCounters(&v22, &v21);
    v14 = a3 & 0x1C000000;
    while ( 1 )
    {
      v15 = ((int)a3 >> 31) & 0x1000;
      v16 = v15;
      v23 = v14 & 0x8000000;
      if ( (v14 & 0x10000000) != 0 )
      {
        v16 = v15 | 0x400;
      }
      else if ( (v14 & 0x8000000) != 0 )
      {
        v16 = v15 | 1;
      }
      Process = ZwCreateProcessEx(v27, 0x2000000LL, 0LL, v6, v16, 0LL, 0LL, 0LL, 0);
      if ( Process >= 0 )
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
          PssNtFreeSnapshot(v18);
          *a1 = 0LL;
          return (unsigned int)Process;
        }
        v14 &= ~0x8000000u;
      }
      v6 = a2;
    }
    *((_QWORD *)v18 + 110) = MEMORY[0x7FFE0014];
    *((_QWORD *)v18 + 109) = v27[0];
    if ( v9 )
    {
      PsspSampleCounters(&v19, &v20);
      *((_QWORD *)v18 + 131) = v20 - v21;
      *((_QWORD *)v18 + 132) = 1000000 * (v19 - v22) / v8;
    }
    v4 = a4;
    v6 = a2;
  }
  if ( (a3 & 4) != 0 )
  {
    if ( v9 )
      PsspSampleCounters(&v22, &v21);
    v13 = PsspCaptureHandleInformation(v18, v6, a3);
    if ( v13 < 0 )
      goto LABEL_53;
    if ( v9 )
    {
      PsspSampleCounters(&v19, &v20);
      *((_QWORD *)v18 + 137) = v20 - v21;
      *((_QWORD *)v18 + 138) = 1000000 * (v19 - v22) / v8;
    }
  }
  if ( (a3 & 0x80u) == 0 )
  {
    if ( !v9 )
      goto LABEL_44;
    goto LABEL_43;
  }
  if ( v9 )
    PsspSampleCounters(&v22, &v21);
  v13 = PsspCaptureThreadInformation(v18, v6, a3, v4);
  if ( v13 < 0 )
  {
LABEL_53:
    PssNtFreeSnapshot(v18);
    *a1 = 0LL;
    return (unsigned int)v13;
  }
  if ( v9 )
  {
    PsspSampleCounters(&v19, &v20);
    *((_QWORD *)v18 + 139) = v20 - v21;
    *((_QWORD *)v18 + 140) = 1000000 * (v19 - v22) / v8;
LABEL_43:
    PsspSampleCounters(&v19, &v20);
    *((_QWORD *)v18 + 129) = v20 - v24;
    *((_QWORD *)v18 + 130) = 1000000 * (v19 - v25) / v8;
  }
LABEL_44:
  if ( (a3 & 0x2000) != 0 )
    PsspCaptureIptTrace(v18, v6);
  return 0LL;
}
