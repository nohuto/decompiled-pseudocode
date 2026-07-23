/*
 * XREFs of MiCloneVads @ 0x1406637C8
 * Callers:
 *     MiCloneProcessAddressSpace @ 0x140A48C04 (MiCloneProcessAddressSpace.c)
 * Callees:
 *     MiLocateAddress @ 0x140217240 (MiLocateAddress.c)
 *     KeYieldProcessorEx @ 0x140242F10 (KeYieldProcessorEx.c)
 *     ExAcquireSpinLockExclusive @ 0x14024D430 (ExAcquireSpinLockExclusive.c)
 *     MiFlushTbList @ 0x140279B10 (MiFlushTbList.c)
 *     MiGetSharedVm @ 0x140287104 (MiGetSharedVm.c)
 *     MiIsVadLargePrivate @ 0x140288300 (MiIsVadLargePrivate.c)
 *     PsChargeProcessNonPagedPoolQuota @ 0x140289DD0 (PsChargeProcessNonPagedPoolQuota.c)
 *     MiUnlockWorkingSetExclusive @ 0x14028A580 (MiUnlockWorkingSetExclusive.c)
 *     RtlAvlRemoveNode @ 0x14028B1E0 (RtlAvlRemoveNode.c)
 *     PsReturnProcessNonPagedPoolQuota @ 0x14028B5C0 (PsReturnProcessNonPagedPoolQuota.c)
 *     MiReturnFullProcessCharges @ 0x1402DF3C0 (MiReturnFullProcessCharges.c)
 *     MiAllocatePool @ 0x1402DF430 (MiAllocatePool.c)
 *     MiWorkingSetIsContended @ 0x1402E6C80 (MiWorkingSetIsContended.c)
 *     MiLocateLockedVadEvent @ 0x14030B6B4 (MiLocateLockedVadEvent.c)
 *     KeShouldYieldProcessor @ 0x140333F00 (KeShouldYieldProcessor.c)
 *     MiDeleteCloneZombies @ 0x140367824 (MiDeleteCloneZombies.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     memmove @ 0x140435B00 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     MiLockAweVadsExclusive @ 0x14064B588 (MiLockAweVadsExclusive.c)
 *     MiUnlockAweVadsExclusive @ 0x14064C3D8 (MiUnlockAweVadsExclusive.c)
 *     MiBuildForkPte @ 0x140662750 (MiBuildForkPte.c)
 *     MiFreeForkMaps @ 0x140664CE0 (MiFreeForkMaps.c)
 *     MiInitializeForkMaps @ 0x1406655F4 (MiInitializeForkMaps.c)
 *     MiInsertClone @ 0x14066565C (MiInsertClone.c)
 *     MiUpdateForkMaps @ 0x140665980 (MiUpdateForkMaps.c)
 *     MiReturnFullProcessCommitment @ 0x140765044 (MiReturnFullProcessCommitment.c)
 *     MiBuildNewCloneDescriptor @ 0x140A48AA8 (MiBuildNewCloneDescriptor.c)
 *     MiFreeCloneDescriptor @ 0x140A492A4 (MiFreeCloneDescriptor.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiCloneVads(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, int a5, _DWORD *a6)
{
  _QWORD *v7; // r14
  __int64 v8; // r12
  __int64 v9; // rdi
  unsigned __int64 *v10; // r13
  __int64 v11; // rdi
  int v12; // eax
  _QWORD *Pool; // rax
  _QWORD *v14; // rsi
  struct _KTHREAD *v15; // rcx
  volatile LONG *SharedVm; // rbx
  KIRQL v17; // al
  __int64 v18; // r8
  __int64 v19; // r9
  struct _KTHREAD *v20; // rdi
  __int64 v21; // r8
  __int64 v22; // r9
  volatile LONG *v23; // rbx
  unsigned __int64 j; // rdi
  unsigned __int64 v25; // rbx
  __int64 v26; // r8
  __int64 v27; // r9
  int v28; // edi
  unsigned __int64 v29; // r12
  _QWORD *v30; // rax
  _QWORD *v31; // rbx
  _QWORD **v32; // rax
  __int64 v33; // r13
  _QWORD *v34; // rcx
  _QWORD *v35; // rcx
  _QWORD *v36; // rax
  unsigned __int64 v37; // rdi
  __int64 **Address; // rax
  __int64 v39; // rcx
  unsigned __int64 v40; // rdx
  __int64 v41; // r10
  unsigned __int64 v42; // rdi
  unsigned __int64 v43; // rbx
  volatile LONG *v44; // rax
  __int64 v45; // r8
  __int64 v46; // r9
  volatile LONG *v47; // r12
  int v48; // esi
  unsigned __int64 updated; // rax
  int v50; // ecx
  unsigned __int64 v51; // rcx
  bool v52; // cc
  __int64 v53; // rbx
  unsigned __int64 v54; // r13
  unsigned __int64 v55; // rsi
  int v56; // edx
  unsigned __int64 LockedVadEvent; // rax
  __int64 v58; // r9
  size_t v59; // r8
  __int64 v60; // r12
  __int64 *v61; // rcx
  _QWORD *i; // rax
  unsigned __int64 v63; // r13
  unsigned __int64 v64; // r14
  _QWORD *v65; // rbx
  _QWORD **v66; // rax
  unsigned __int64 v67; // rcx
  _QWORD *v68; // rcx
  volatile LONG *v69; // rbx
  __int64 v70; // r8
  __int64 v71; // r9
  unsigned __int64 v72; // r13
  _QWORD *v73; // rbx
  KIRQL v75; // [rsp+80h] [rbp-80h]
  int v76; // [rsp+84h] [rbp-7Ch]
  int v77; // [rsp+88h] [rbp-78h] BYREF
  int v78; // [rsp+8Ch] [rbp-74h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+90h] [rbp-70h]
  unsigned __int64 v80; // [rsp+98h] [rbp-68h]
  unsigned __int64 v81; // [rsp+A0h] [rbp-60h]
  _QWORD *v82; // [rsp+A8h] [rbp-58h]
  __int64 v83; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v84; // [rsp+B8h] [rbp-48h]
  __int64 v85; // [rsp+C0h] [rbp-40h]
  unsigned __int64 v86; // [rsp+C8h] [rbp-38h]
  _QWORD *v87; // [rsp+D0h] [rbp-30h]
  __int64 v88; // [rsp+D8h] [rbp-28h]
  unsigned __int64 v89; // [rsp+E0h] [rbp-20h]
  _QWORD *v90; // [rsp+E8h] [rbp-18h]
  unsigned __int64 v91; // [rsp+F0h] [rbp-10h]
  _QWORD *v92; // [rsp+F8h] [rbp-8h]
  _DWORD *v93; // [rsp+100h] [rbp+0h]
  _QWORD v94[10]; // [rsp+110h] [rbp+10h] BYREF
  __int128 v95; // [rsp+160h] [rbp+60h] BYREF
  _QWORD v96[24]; // [rsp+170h] [rbp+70h] BYREF

  v84 = a3;
  v7 = a1;
  v92 = a1;
  v88 = a4;
  v93 = a6;
  memset(v94, 0, 0x48uLL);
  memset(v96, 0, 0xB8uLL);
  v78 = 0;
  v83 = 0LL;
  v86 = 0LL;
  v80 = 0LL;
  v95 = 0LL;
  v8 = 0LL;
  CurrentThread = KeGetCurrentThread();
  while ( 1 )
  {
    v9 = v7[159];
    if ( !v9 )
      v9 = 1LL;
    v85 = MiBuildNewCloneDescriptor(v7, v9, *(_QWORD *)(v7[210] + 344LL));
    v10 = (unsigned __int64 *)v85;
    if ( !v85 )
      return 3221225626LL;
    v11 = 32 * (v9 + 1);
    v12 = PsChargeProcessNonPagedPoolQuota((struct _KPROCESS *)a2, v11);
    if ( v12 < 0 )
    {
      v28 = v12;
      goto LABEL_87;
    }
    Pool = MiAllocatePool(64, 0x70uLL, 0x64436D4Du);
    v90 = Pool;
    v14 = Pool;
    if ( !Pool )
    {
      PsReturnProcessNonPagedPoolQuota((struct _KPROCESS *)a2, v11);
      v28 = -1073741670;
LABEL_87:
      MiFreeCloneDescriptor(v7, v85);
      return (unsigned int)v28;
    }
    v15 = CurrentThread;
    Pool[8] = v11;
    MiLockAweVadsExclusive((__int64)v15);
    SharedVm = (volatile LONG *)MiGetSharedVm((__int64)(v7 + 208));
    v17 = ExAcquireSpinLockExclusive(SharedVm);
    *((_DWORD *)SharedVm + 1) = 0;
    v75 = v17;
    if ( v7[159] <= v10[5] )
    {
      *v14 = v84;
      MiDeleteCloneZombies((__int64)v7, 1);
      v20 = CurrentThread;
      v7[156] = CurrentThread;
      MiUnlockWorkingSetExclusive((__int64)(v7 + 208), v75, v21, v22);
      MiUnlockAweVadsExclusive((__int64)v20);
      v23 = (volatile LONG *)MiGetSharedVm((__int64)(v7 + 208));
      ExAcquireSpinLockExclusive(v23);
      j = 0LL;
      *((_DWORD *)v23 + 1) = 0;
      v25 = v10[3];
      v91 = v25;
      if ( (unsigned int)MiInitializeForkMaps(a2, v94) )
      {
        v29 = v25;
        v81 = v25;
        v10[6] = 1LL;
        MiInsertClone(v7, v10, 1LL);
        v30 = *(_QWORD **)(a2 + 2008);
        LODWORD(v96[0]) = 1;
        v31 = 0LL;
        WORD2(v96[0]) = 0;
        v96[2] = 0LL;
        LODWORD(v96[1]) = 20;
        v96[3] = 0LL;
        while ( v30 )
        {
          v31 = v30;
          v30 = (_QWORD *)*v30;
        }
        if ( v31 )
        {
          do
          {
            v32 = (_QWORD **)v31[1];
            v33 = (__int64)v31;
            v87 = v31;
            v34 = v31;
            if ( v32 )
            {
              v35 = *v32;
              v31 = v32;
              v82 = v32;
              if ( v35 )
              {
                do
                {
                  v36 = (_QWORD *)*v35;
                  v31 = v35;
                  v82 = v35;
                  v35 = v36;
                }
                while ( v36 );
              }
            }
            else
            {
              v31 = (_QWORD *)(v31[2] & 0xFFFFFFFFFFFFFFFCuLL);
              v82 = v31;
              if ( v31 )
              {
                do
                {
                  if ( (_QWORD *)*v31 == v34 )
                    break;
                  v34 = v31;
                  v31 = (_QWORD *)(v31[2] & 0xFFFFFFFFFFFFFFFCuLL);
                }
                while ( v31 );
                v82 = v31;
              }
            }
            v37 = (*(unsigned int *)(v33 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v33 + 32) << 32)) << 12;
            Address = MiLocateAddress(v37);
            v39 = *(unsigned int *)(v33 + 52);
            LODWORD(v39) = v39 & 0x7FFFFFFF;
            v40 = (unsigned __int64)*(unsigned __int8 *)(v33 + 34) << 31;
            v84 = (__int64)Address;
            if ( (v39 | v40) < 0x7FFFFFFFDLL && !MiIsVadLargePrivate(v33) )
            {
              v42 = v41 + ((v37 >> 9) & 0x7FFFFFFFF8LL);
              v43 = v41
                  + 8
                  * ((*(unsigned int *)(v33 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v33 + 33) << 32)) & 0xFFFFFFFFFLL);
              v89 = v43;
              do
              {
                MiFlushTbList((int *)v96);
                if ( MiWorkingSetIsContended((__int64)(v7 + 208)) || KeShouldYieldProcessor() )
                {
                  v77 = 0;
                  v44 = (volatile LONG *)MiGetSharedVm((__int64)(v7 + 208));
                  v47 = v44;
                  if ( (*v44 & 0x40000000) != 0 )
                  {
                    v76 = 1;
                    *((_DWORD *)v44 + 1) = 1;
                  }
                  else
                  {
                    v76 = 0;
                  }
                  MiUnlockWorkingSetExclusive((__int64)(v7 + 208), v75, v45, v46);
                  v48 = 0;
                  if ( v76 )
                  {
                    while ( *((_DWORD *)v47 + 1) )
                    {
                      KeYieldProcessorEx(&v77);
                      if ( (v77 & 0x3F) == 0 )
                      {
                        v48 = 1;
                        break;
                      }
                    }
                  }
                  ExAcquireSpinLockExclusive(v47);
                  if ( !v48 )
                    *((_DWORD *)v47 + 1) = 0;
                  v29 = v81;
                }
                updated = MiUpdateForkMaps((unsigned int)v94, v42, v43, (unsigned int)&v83, (__int64)v7, v75);
                v50 = *(_DWORD *)(v33 + 48);
                v42 = updated;
                if ( (*(_BYTE *)(v33 + 48) & 0x70) != 0x50 )
                {
                  if ( updated > v43 )
                    break;
                  v51 = v43;
                  v52 = (updated & 0xFFFFFFFFFFFFF000uLL) + 4088 <= v43;
                  v53 = v94[8];
                  if ( v52 )
                    v51 = (updated & 0xFFFFFFFFFFFFF000uLL) + 4088;
                  v54 = v94[5] - updated;
                  v55 = v51;
                  do
                  {
                    if ( (unsigned int)MiBuildForkPte(
                                         (__int64)v7,
                                         a2,
                                         v42,
                                         (_QWORD *)(v42 + v54),
                                         v88,
                                         v29,
                                         &v83,
                                         v53,
                                         (int *)v96,
                                         v84,
                                         (__int64)v87,
                                         a5,
                                         v75,
                                         &v95,
                                         &v78) )
                      v29 += 32LL;
                    v42 += 8LL;
                  }
                  while ( v42 <= v55 );
                  v33 = (__int64)v87;
                  v43 = v89;
                  v81 = v29;
                  v50 = *((_DWORD *)v87 + 12);
                }
              }
              while ( v42 <= v43 );
              v31 = v82;
              if ( (v50 & 0x600000) == 0x600000 )
              {
                MiLocateLockedVadEvent(v33, 4);
                LockedVadEvent = MiLocateLockedVadEvent(v84, v56);
                memmove(*(void **)(v58 + 16), *(const void **)(LockedVadEvent + 16), v59);
              }
            }
            j = 0LL;
          }
          while ( v31 );
          v14 = v90;
          v10 = (unsigned __int64 *)v85;
        }
        MiFlushTbList((int *)v96);
        MiFreeForkMaps(v94);
        v60 = v29 - v91;
        v61 = (__int64 *)v10[7];
        *(_QWORD *)(a2 + 1272) += v83;
        v8 = v60 >> 5;
        v83 = *(_QWORD *)(a2 + 1272);
        if ( v8 )
        {
          *v61 = v8;
          v10[6] = v8;
          v10[5] = v8;
        }
        else
        {
          RtlAvlRemoveNode(v7 + 158, v10);
        }
        MiDeleteCloneZombies((__int64)v7, 1);
        for ( i = (_QWORD *)v7[158]; i; i = (_QWORD *)*i )
          j = (unsigned __int64)i;
        if ( j )
        {
          v63 = v80;
          v64 = v86;
          do
          {
            _InterlockedIncrement64((volatile signed __int64 *)(*(_QWORD *)(j + 56) + 8LL));
            v65 = (_QWORD *)*v14;
            v63 += v14[8];
            v64 += *(_QWORD *)(j + 64);
            *(_OWORD *)v14 = *(_OWORD *)j;
            *((_OWORD *)v14 + 1) = *(_OWORD *)(j + 16);
            *((_OWORD *)v14 + 2) = *(_OWORD *)(j + 32);
            *((_OWORD *)v14 + 3) = *(_OWORD *)(j + 48);
            *((_OWORD *)v14 + 4) = *(_OWORD *)(j + 64);
            *((_OWORD *)v14 + 5) = *(_OWORD *)(j + 80);
            *((_OWORD *)v14 + 6) = *(_OWORD *)(j + 96);
            MiInsertClone(a2, v14, 0LL);
            v66 = *(_QWORD ***)(j + 8);
            v14 = v65;
            v67 = j;
            if ( v66 )
            {
              v68 = *v66;
              for ( j = *(_QWORD *)(j + 8); v68; v68 = (_QWORD *)*v68 )
                j = (unsigned __int64)v68;
            }
            else
            {
              while ( 1 )
              {
                j = *(_QWORD *)(j + 16) & 0xFFFFFFFFFFFFFFFCuLL;
                if ( !j || *(_QWORD *)j == v67 )
                  break;
                v67 = j;
              }
            }
          }
          while ( j );
          v86 = v64;
          v7 = v92;
          v80 = v63;
          v10 = (unsigned __int64 *)v85;
        }
        v28 = 0;
      }
      else
      {
        MiFreeForkMaps(v94);
        v28 = -1073741670;
      }
      MiUnlockWorkingSetExclusive((__int64)(v7 + 208), v75, v26, v27);
      MiLockAweVadsExclusive((__int64)CurrentThread);
      v69 = (volatile LONG *)MiGetSharedVm((__int64)(v7 + 208));
      ExAcquireSpinLockExclusive(v69);
      *((_DWORD *)v69 + 1) = 0;
      v7[156] = 0LL;
      MiUnlockWorkingSetExclusive((__int64)(v7 + 208), v75, v70, v71);
      MiUnlockAweVadsExclusive((__int64)CurrentThread);
      if ( v14 )
      {
        v72 = v80;
        do
        {
          v72 += v14[8];
          v73 = (_QWORD *)*v14;
          ExFreePoolWithTag(v14, 0);
          v14 = v73;
        }
        while ( v73 );
        v80 = v72;
        v10 = (unsigned __int64 *)v85;
      }
      if ( v80 > v86 )
        PsReturnProcessNonPagedPoolQuota((struct _KPROCESS *)a2, v80 - v86);
      if ( (_QWORD)v95 )
        MiReturnFullProcessCommitment(a2, v95);
      if ( *((_QWORD *)&v95 + 1) )
        MiReturnFullProcessCharges(a2, *((__int64 *)&v95 + 1));
      if ( !v8 || v28 < 0 )
        MiFreeCloneDescriptor(v7, v10);
      if ( v78 )
        *v93 = 1;
      return (unsigned int)v28;
    }
    MiUnlockWorkingSetExclusive((__int64)(v7 + 208), v17, v18, v19);
    MiUnlockAweVadsExclusive((__int64)CurrentThread);
    MiFreeCloneDescriptor(v7, v10);
    PsReturnProcessNonPagedPoolQuota((struct _KPROCESS *)a2, v11);
    ExFreePoolWithTag(v14, 0);
  }
}
