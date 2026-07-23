/*
 * XREFs of MiAllocateVirtualMemory @ 0x1406F7430
 * Callers:
 *     MiAllocateVirtualMemoryCommon @ 0x1406F6C30 (MiAllocateVirtualMemoryCommon.c)
 *     MiAllocateUserStack @ 0x1407CB434 (MiAllocateUserStack.c)
 *     MmStoreAllocateVirtualMemory @ 0x140A45E10 (MmStoreAllocateVirtualMemory.c)
 * Callees:
 *     KiStackAttachProcess @ 0x14022D710 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x14022DAD0 (KiUnstackDetachProcess.c)
 *     ObfDereferenceObject @ 0x140231660 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x140233D10 (ObfReferenceObject.c)
 *     MiUnlockAndDereferenceVad @ 0x140274D20 (MiUnlockAndDereferenceVad.c)
 *     MiVadSupportsPrivateCommit @ 0x140274DE0 (MiVadSupportsPrivateCommit.c)
 *     MiObtainReferencedVadEx @ 0x140274F40 (MiObtainReferencedVadEx.c)
 *     MiVadDeleted @ 0x1402756A0 (MiVadDeleted.c)
 *     MiGetVadPageSize @ 0x140275904 (MiGetVadPageSize.c)
 *     MiGetProcessPartition @ 0x140275924 (MiGetProcessPartition.c)
 *     MiGetControlAreaPartition @ 0x140275940 (MiGetControlAreaPartition.c)
 *     MiMakeProtectionMask @ 0x140276C10 (MiMakeProtectionMask.c)
 *     MiCommitExistingVad @ 0x140276CC0 (MiCommitExistingVad.c)
 *     MiSetProtectionOnSection @ 0x140277F10 (MiSetProtectionOnSection.c)
 *     MiUnlockVad @ 0x140289F30 (MiUnlockVad.c)
 *     PdcCreateWatchdogAroundClientCall @ 0x1402936E0 (PdcCreateWatchdogAroundClientCall.c)
 *     MiLockVad @ 0x14029CA60 (MiLockVad.c)
 *     MiFlushRelease @ 0x14029FC10 (MiFlushRelease.c)
 *     MiAllowProtectionChange @ 0x140304278 (MiAllowProtectionChange.c)
 *     MiLocateVadEvent @ 0x14030B69C (MiLocateVadEvent.c)
 *     MiFlushAcquire @ 0x14033D594 (MiFlushAcquire.c)
 *     MiResetVirtualMemory @ 0x1403674C4 (MiResetVirtualMemory.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     MiCommitEnclavePages @ 0x140647788 (MiCommitEnclavePages.c)
 *     MiCommitVadMetadataBits @ 0x1406AE7C0 (MiCommitVadMetadataBits.c)
 *     MmProtectVirtualMemory @ 0x1406F9980 (MmProtectVirtualMemory.c)
 *     MmExtendSection @ 0x140706714 (MmExtendSection.c)
 *     MiCheckSecuredVad @ 0x14071A2B4 (MiCheckSecuredVad.c)
 *     MiReserveUserMemory @ 0x14071F5E0 (MiReserveUserMemory.c)
 *     SeSinglePrivilegeCheck @ 0x140737CF0 (SeSinglePrivilegeCheck.c)
 *     EtwTiLogAllocExecVm @ 0x14076BD78 (EtwTiLogAllocExecVm.c)
 *     MiCommitPagefileBackedSection @ 0x1407DC358 (MiCommitPagefileBackedSection.c)
 *     PerfInfoLogVirtualAlloc @ 0x1409E7248 (PerfInfoLogVirtualAlloc.c)
 *     MiLogMemResetInfo @ 0x140A2EAEC (MiLogMemResetInfo.c)
 */

__int64 __fastcall MiAllocateVirtualMemory(__int64 a1, volatile signed __int64 **a2, __int64 *a3)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v6; // ebx
  unsigned int v7; // ecx
  unsigned int v8; // r13d
  _KPROCESS *v9; // rcx
  int v10; // edx
  bool v11; // zf
  int v12; // edx
  int v13; // eax
  __int16 v14; // cx
  int v15; // r10d
  int v16; // eax
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // r14
  unsigned __int64 v19; // r12
  __int64 *v20; // rax
  ULONG_PTR v21; // rsi
  unsigned __int64 v22; // r8
  int v23; // ecx
  BOOL v24; // eax
  unsigned __int64 v25; // r10
  __int64 v26; // rax
  int v27; // ecx
  int v28; // ecx
  int v29; // edx
  unsigned int v30; // r9d
  __int64 v31; // r8
  int v32; // r14d
  int v34; // r8d
  int v35; // eax
  __int64 v36; // r13
  int v37; // r10d
  __int64 v38; // rdx
  int v39; // eax
  int v40; // ecx
  int v41; // eax
  __int64 ProcessPartition; // rax
  volatile signed __int64 **v43; // r10
  __int64 v44; // r8
  __int64 v45; // r8
  __int64 v46; // rcx
  __int64 VadPageSize; // rax
  unsigned int v48; // edx
  int v49; // r8d
  unsigned __int64 v50; // r15
  unsigned __int64 v51; // rdx
  int v52; // ecx
  unsigned __int64 v53; // r8
  int v54; // ecx
  int v55; // r10d
  unsigned int v56; // r9d
  __int16 *v57; // rax
  int v58; // r8d
  int v59; // r9d
  int v60; // [rsp+20h] [rbp-E0h]
  int v61; // [rsp+28h] [rbp-D8h]
  __int64 v62; // [rsp+28h] [rbp-D8h]
  int v63; // [rsp+30h] [rbp-D0h]
  char v64; // [rsp+38h] [rbp-C8h]
  __int16 v65; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v66; // [rsp+68h] [rbp-98h] BYREF
  int v67; // [rsp+70h] [rbp-90h] BYREF
  unsigned int ProtectionMask; // [rsp+74h] [rbp-8Ch]
  int v69; // [rsp+78h] [rbp-88h] BYREF
  volatile signed __int64 **v70; // [rsp+80h] [rbp-80h] BYREF
  int v71; // [rsp+88h] [rbp-78h] BYREF
  int v72; // [rsp+8Ch] [rbp-74h] BYREF
  __int64 v73; // [rsp+90h] [rbp-70h]
  struct _KTHREAD *v74; // [rsp+98h] [rbp-68h] BYREF
  unsigned __int64 v75; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v76[3]; // [rsp+A8h] [rbp-58h] BYREF
  _QWORD v77[2]; // [rsp+C0h] [rbp-40h] BYREF
  __int128 v78; // [rsp+D0h] [rbp-30h]
  __int64 v79; // [rsp+E0h] [rbp-20h]
  __int64 v80; // [rsp+E8h] [rbp-18h]
  __int64 v81; // [rsp+F0h] [rbp-10h]
  int v82; // [rsp+F8h] [rbp-8h]
  int v83; // [rsp+FCh] [rbp-4h]
  $115DCDF994C6370D29323EAB0E0C9502 v84; // [rsp+100h] [rbp+0h] BYREF

  v70 = a2;
  v71 = 0;
  v72 = 0;
  v69 = 0;
  v65 = 0;
  *a3 = 0LL;
  v66 = 0LL;
  memset(&v84, 0, sizeof(v84));
  if ( (unsigned __int64)a2 >= 2 )
  {
    if ( (*((_DWORD *)*a2 + 1) & 0x80u) != 0
      && ((*(_BYTE *)(a1 + 112) & 0x10) == 0 || (*(_DWORD *)(a1 + 40) & 0x20400000) != 0x20000000) )
    {
      return 3221225485LL;
    }
    ProcessPartition = MiGetProcessPartition(*(_QWORD *)(a1 + 88));
    if ( v44 == ProcessPartition )
      v43 = 0LL;
    v70 = v43;
  }
  CurrentThread = KeGetCurrentThread();
  v6 = 2;
  v7 = *(_DWORD *)(a1 + 44);
  if ( *(_QWORD *)(a1 + 8) - *(_QWORD *)a1 + 1LL != *(_QWORD *)(a1 + 24) )
    v6 = 0;
  v74 = CurrentThread;
  ProtectionMask = MiMakeProtectionMask(v7);
  v8 = ProtectionMask;
  if ( ProtectionMask != -1 )
  {
    v9 = *(_KPROCESS **)(a1 + 88);
    if ( *(_KPROCESS **)(a1 + 96) != v9 )
    {
      KiStackAttachProcess(v9, 0, (__int64)&v84);
      v6 |= 1u;
    }
    v10 = 0;
    if ( (*(_DWORD *)(a1 + 60) & 8) == 0 )
      goto LABEL_11;
    if ( (unsigned int)PdcCreateWatchdogAroundClientCall() )
      v10 |= 4u;
    if ( (v10 & 1) == 0 )
LABEL_11:
      *(_DWORD *)(a1 + 120) &= ~2u;
    if ( (v10 & 4) == 0 && (*(_DWORD *)(a1 + 120) & 8) != 0 )
    {
      v32 = -1073741811;
      goto LABEL_80;
    }
    *(_DWORD *)(a1 + 120) |= v10;
    v11 = (*(_DWORD *)(a1 + 64) & 0x4000000) == 0;
    v67 = 0;
    if ( !v11 && v6 < 2 )
      goto LABEL_87;
    v12 = *(_DWORD *)(a1 + 40);
    if ( (v12 & 0x40000000) != 0 && !*(_QWORD *)(*(_QWORD *)(a1 + 88) + 2240LL) )
    {
      v32 = -1073741811;
      goto LABEL_80;
    }
    v13 = *(_DWORD *)(a1 + 112) & 0x1A;
    if ( v13 )
    {
      if ( (v13 & 2) != 0 )
      {
        v45 = 0xFFFFLL;
      }
      else if ( (v13 & 8) != 0 )
      {
        v45 = 0x1FFFFFLL;
      }
      else
      {
        v45 = -1LL;
        if ( (v13 & 0x10) != 0 )
          v45 = 0x3FFFFFFFLL;
      }
      if ( ((*(_QWORD *)(a1 + 8) + 1LL) & v45) != 0 || (v45 & *(_QWORD *)a1) != 0 )
      {
LABEL_87:
        v32 = -1073741811;
        goto LABEL_80;
      }
      if ( (v12 & 0x20400000) == 0x400000 )
      {
LABEL_18:
        if ( v6 >= 0x10 && !SeSinglePrivilegeCheck(SeLockMemoryPrivilege, *(_BYTE *)(a1 + 57)) )
        {
          v32 = -1073741727;
          goto LABEL_80;
        }
        v14 = *(_WORD *)MiGetProcessPartition(*(_QWORD *)(a1 + 88));
        v16 = *(_DWORD *)(a1 + 40);
        v65 = v14;
        if ( (v16 & 0x2000) != 0 )
        {
          v32 = MiReserveUserMemory(a1, v15, v8, (unsigned int)&v66, (__int64)&v65);
          if ( v32 >= 0 )
            goto LABEL_38;
        }
        else if ( (v16 & 0x40000000) != 0 )
        {
          v32 = -1073741811;
        }
        else
        {
          if ( !*(_QWORD *)(a1 + 72) )
          {
            v17 = *(_QWORD *)a1;
            v18 = *(_QWORD *)(a1 + 8);
            v75 = *(_QWORD *)a1 >> 12;
            v66 = v17;
            v73 = v18;
            v19 = v18 >> 12;
            v20 = MiObtainReferencedVadEx(v17, 0, &v67);
            v21 = (ULONG_PTR)v20;
            if ( !v20 )
            {
              v32 = v67;
              if ( v67 == -1073741664 )
                v32 = -1073741800;
              goto LABEL_80;
            }
            if ( v19 > (*((unsigned int *)v20 + 7) | ((unsigned __int64)*((unsigned __int8 *)v20 + 33) << 32)) )
            {
              v32 = -1073741800;
              goto LABEL_70;
            }
            if ( (v20[6] & 0x2200000) != 0x2200000 && *(_DWORD *)(a1 + 48) )
            {
              v32 = -1073741800;
              goto LABEL_70;
            }
            v22 = v66;
            *a3 = v66;
            v23 = *((_DWORD *)v20 + 12);
            if ( (v23 & 0x6200000) == 0x4200000 )
            {
              v46 = v23 & 0x70;
              if ( (_BYTE)v46 == 48 )
              {
                v41 = MiCommitEnclavePages(v46, (__int64)v20, v22, v18, *(_DWORD *)(a1 + 40), v8);
LABEL_67:
                v32 = v41;
                if ( v41 < 0 )
                  goto LABEL_70;
                MiUnlockAndDereferenceVad((char *)v21);
LABEL_38:
                if ( (WORD2(PerfGlobalGroupMask) & 0x8000) != 0 )
                {
                  v56 = *(_DWORD *)(a1 + 40);
                  if ( (v56 & 0x3000) != 0 )
                  {
                    v57 = (__int16 *)MiGetProcessPartition(*(_QWORD *)(a1 + 88));
                    if ( (*(_BYTE *)(a1 + 64) & 1) != 0 )
                      v59 = 0x2000;
                    PerfInfoLogVirtualAlloc(v66, *(_QWORD *)(a1 + 24), v58, v59, *v57, v65);
                  }
                  else if ( (v56 & 0x1080000) != 0 )
                  {
                    MiLogMemResetInfo(v66, *(_QWORD *)(a1 + 24), v56);
                  }
                }
                if ( (v6 & 1) != 0 )
                  KiUnstackDetachProcess(&v84);
                if ( (v8 & 2) != 0 )
                  EtwTiLogAllocExecVm(
                    *(_QWORD *)(a1 + 88),
                    *(unsigned __int8 *)(a1 + 57),
                    v66,
                    *(_QWORD *)(a1 + 32),
                    *(_DWORD *)(a1 + 40),
                    *(_DWORD *)(a1 + 44));
                *a3 = v66;
                return (unsigned int)v32;
              }
              if ( (*(_DWORD *)(a1 + 64) & 0x10000000) == 0 )
              {
                v32 = -1073741664;
                goto LABEL_70;
              }
            }
            v24 = MiVadSupportsPrivateCommit((__int64)v20);
            v25 = v66;
            if ( !v24 )
            {
              if ( (*(_DWORD *)(v21 + 48) & 0xA00000) != 0xA00000 )
              {
                v32 = -1073741800;
                goto LABEL_70;
              }
              VadPageSize = MiGetVadPageSize(v21);
              if ( (((VadPageSize << 12) - 1) & (v25 | (v18 + 1))) != 0 )
              {
                v32 = -1073741811;
                goto LABEL_70;
              }
            }
            v26 = *(unsigned int *)(v21 + 52);
            LODWORD(v26) = v26 & 0x7FFFFFFF;
            if ( (v26 | ((unsigned __int64)*(unsigned __int8 *)(v21 + 34) << 31)) >= 0x7FFFFFFFDLL )
            {
              v32 = -1073741800;
              goto LABEL_70;
            }
            if ( (*(_DWORD *)(v21 + 48) & 0x70) != 0x40 )
            {
LABEL_30:
              v27 = *(_DWORD *)(a1 + 40);
              if ( (v27 & 0x1080000) == 0 )
              {
                if ( (v8 & 2) != 0 )
                {
                  v32 = MiAllowProtectionChange(*(_QWORD *)(a1 + 88), *(_QWORD *)(a1 + 96), v21, v8, v25, v18);
                  if ( v32 < 0 )
                    goto LABEL_70;
                  if ( (*(_DWORD *)(v21 + 48) & 0x100) != 0 )
                  {
                    v35 = *(_DWORD *)(a1 + 120);
                    if ( (v35 & 2) == 0 )
                    {
                      v35 &= ~1u;
                      *(_DWORD *)(a1 + 120) = v35;
                    }
                    if ( (v35 & 8) == 0 )
                      *(_DWORD *)(a1 + 120) = v35 & 0xFFFFFFFB;
                  }
                  if ( *(_DWORD *)(a1 + 120) )
                  {
                    if ( (*(_DWORD *)(v21 + 48) & 8) != 0 )
                    {
                      v32 = MiCheckSecuredVad(v21, v66, *(_QWORD *)(a1 + 24), v8, *(_BYTE *)(a1 + 57));
                      if ( v32 < 0 )
                        goto LABEL_70;
                      v6 |= 4u;
                    }
                    v34 = *(_DWORD *)(a1 + 120);
                    v76[0] = v66;
                    v76[1] = v73;
                    v32 = MiCommitVadMetadataBits(v21, v76, v34);
                    if ( v32 < 0 )
                      goto LABEL_70;
                    v6 |= 0x20u;
                  }
                  v25 = v66;
                }
                v28 = *(_DWORD *)(v21 + 48);
                v29 = *(_DWORD *)(a1 + 44);
                if ( (v28 & 0x200000) != 0 )
                {
                  if ( (v29 & 0x88) == 0 && ((v28 & 0x70) != 0x40 || (v29 & 0xFFFFF9F9) == 0) )
                  {
                    if ( (v28 & 8) == 0 )
                    {
LABEL_36:
                      v30 = *(_DWORD *)(a1 + 44);
                      v31 = *(_QWORD *)(a1 + 24);
                      v64 = *(_BYTE *)(a1 + 56);
                      v63 = *(_DWORD *)(a1 + 52);
                      v62 = *(_QWORD *)(a1 + 112);
                      v60 = *(_DWORD *)(a1 + 48);
                      v69 = 0;
                      v32 = MiCommitExistingVad(v21, v25, v31, v30, v60, v62, v63, v64, v70, &v69, &v65);
                      if ( v32 >= 0 )
                      {
                        MiUnlockAndDereferenceVad((char *)v21);
                        if ( v69 )
                        {
                          v38 = *(_QWORD *)(a1 + 88);
                          v74 = (struct _KTHREAD *)v66;
                          v75 = *(_QWORD *)(a1 + 24);
                          v39 = *(_DWORD *)(a1 + 44);
                          v40 = v39 | 0x40000000;
                          v67 = 0;
                          if ( v6 < 0x20 )
                            v40 = v39;
                          MmProtectVirtualMemory(
                            *(_QWORD *)(a1 + 96),
                            v38,
                            (unsigned int)&v74,
                            (unsigned int)&v75,
                            v40,
                            (__int64)&v67);
                        }
                        goto LABEL_38;
                      }
                      goto LABEL_70;
                    }
                    if ( !MiLocateVadEvent(v21, 64LL) )
                    {
                      v32 = MiCheckSecuredVad(v54, v55, *(_QWORD *)(a1 + 24), v8, *(_BYTE *)(a1 + 57));
                      if ( v32 < 0 )
                        goto LABEL_70;
                      v25 = v66;
                      goto LABEL_36;
                    }
                  }
LABEL_123:
                  v32 = -1073741755;
                  goto LABEL_70;
                }
                if ( (v29 & 0x600) != 0 )
                  goto LABEL_123;
                if ( (v28 & 8) == 0
                  || (v6 & 4) != 0
                  || (v32 = MiCheckSecuredVad(v21, v25, *(_QWORD *)(a1 + 24), v8, *(_BYTE *)(a1 + 57)), v32 >= 0) )
                {
                  v36 = **(_QWORD **)(v21 + 72);
                  v65 = *(_WORD *)MiGetControlAreaPartition(v36);
                  if ( *(_QWORD *)(v36 + 64) )
                  {
                    if ( *(__int64 *)(v21 + 120) < 0 )
                    {
                      v70 = (volatile signed __int64 **)(((unsigned __int64)(*(_DWORD *)(v21 + 64) & 0xFFFFFF) << 16)
                                                       - ((*(unsigned int *)(v21 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v21 + 32) << 32)) << 12)
                                                       + v73
                                                       + 1);
                      if ( (unsigned int)MiFlushAcquire(v36, 0LL, 0LL) )
                      {
                        v50 = 0LL;
                        if ( (*(_DWORD *)(v21 + 48) & 0x200000) == 0 && *(_QWORD *)(v21 + 128) )
                        {
                          v50 = *(_QWORD *)(v21 + 128);
                          ObfReferenceObject((PVOID)v50);
                        }
                        MiUnlockVad((__int64)v74, v21);
                        v77[0] = 0LL;
                        v78 = 0LL;
                        v77[1] = 0LL;
                        v79 = 0LL;
                        v81 = 0LL;
                        if ( v50 )
                        {
                          if ( (*(_DWORD *)(v36 + 56) & 0x20) != 0 )
                            v80 = v50 | 1;
                          else
                            v80 = v50 | 2;
                        }
                        else
                        {
                          v80 = v36;
                        }
                        v82 = *(_DWORD *)(v36 + 56);
                        v83 = 4;
                        v32 = MmExtendSection(v77, &v70, 0LL);
                        if ( v50 )
                          ObfDereferenceObject((PVOID)v50);
                        MiLockVad((__int64)v74, v21);
                        MiFlushRelease(v36, 0LL, 0LL);
                        if ( v32 >= 0
                          && !(unsigned int)MiVadDeleted(v21)
                          && v75 >= v53
                          && v75 <= v51
                          && v19 <= v51
                          && v19 >= v53
                          && ((*(_DWORD *)(v21 + 48) & 8) == 0
                           || (int)MiCheckSecuredVad(
                                     v52,
                                     v66,
                                     *(_QWORD *)(a1 + 24),
                                     ProtectionMask,
                                     *(_BYTE *)(a1 + 57)) >= 0)
                          && *(__int64 *)(v21 + 120) < 0 )
                        {
                          v32 = MiSetProtectionOnSection(
                                  *(_QWORD *)(a1 + 88),
                                  v21,
                                  v66,
                                  v73,
                                  *(_DWORD *)(a1 + 44),
                                  0,
                                  &v72,
                                  (__int64)&v71);
                        }
                      }
                      else
                      {
                        v32 = -1073741670;
                      }
                    }
                    else
                    {
                      v32 = -1073741791;
                    }
                    goto LABEL_70;
                  }
                  v32 = MiCommitPagefileBackedSection(*(_QWORD *)(a1 + 88), v21, v37, v73, *(_DWORD *)(a1 + 44), v61);
                  if ( v32 >= 0 )
                  {
                    MiUnlockAndDereferenceVad((char *)v21);
                    LOBYTE(v8) = ProtectionMask;
                    goto LABEL_38;
                  }
                }
LABEL_70:
                MiUnlockAndDereferenceVad((char *)v21);
                goto LABEL_80;
              }
              v41 = MiResetVirtualMemory(*(_QWORD *)(a1 + 96), v25, v18, v21, v27, *(_BYTE *)(a1 + 57));
              goto LABEL_67;
            }
            v48 = *(_DWORD *)(a1 + 44) & 0xFFFFF9FF;
            *(_DWORD *)(a1 + 44) = v48;
            v49 = *(_DWORD *)(v21 + 48) & 0xC00;
            if ( (*(_DWORD *)(v21 + 48) & 0x380) != 0 && v49 == 3072 )
            {
              v48 |= 0x400u;
            }
            else
            {
              if ( v49 != 1024 )
                goto LABEL_122;
              v48 |= 0x200u;
            }
            *(_DWORD *)(a1 + 44) = v48;
LABEL_122:
            ProtectionMask = MiMakeProtectionMask(v48);
            v8 = ProtectionMask;
            if ( ProtectionMask == -1 )
              goto LABEL_123;
            goto LABEL_30;
          }
          v32 = -1073741811;
        }
LABEL_80:
        if ( (WORD2(PerfGlobalGroupMask) & 0x8000) != 0 && (*(_DWORD *)(a1 + 40) & 0x1000000) != 0 && v32 == -1073740748 )
          MiLogMemResetInfo(v66, *(_QWORD *)(a1 + 24), 0LL);
        if ( (v6 & 1) != 0 )
          KiUnstackDetachProcess(&v84);
        return (unsigned int)v32;
      }
    }
    else if ( (v12 & 0x20400000) != 0x20000000 )
    {
      goto LABEL_18;
    }
    v6 |= 0x10u;
    goto LABEL_18;
  }
  return 3221225541LL;
}
