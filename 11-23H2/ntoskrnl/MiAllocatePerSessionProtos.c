/*
 * XREFs of MiAllocatePerSessionProtos @ 0x1407B6140
 * Callers:
 *     MiCreatePerSessionProtos @ 0x1407B5FE0 (MiCreatePerSessionProtos.c)
 *     MiCreateSessionDriverProtos @ 0x140A46080 (MiCreateSessionDriverProtos.c)
 * Callees:
 *     MmSizeOfMdl @ 0x140206EA0 (MmSizeOfMdl.c)
 *     MiMakeSubsectionPte @ 0x14021BEFC (MiMakeSubsectionPte.c)
 *     MiUpdateSystemProtoPtesTree @ 0x14021BF30 (MiUpdateSystemProtoPtesTree.c)
 *     MmProbeAndLockPages @ 0x140238860 (MmProbeAndLockPages.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140271580 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1402715F0 (MiPteInShadowRange.c)
 *     MiGetControlAreaPartition @ 0x140275940 (MiGetControlAreaPartition.c)
 *     MiChargeCommit @ 0x140276750 (MiChargeCommit.c)
 *     MmUnlockPages @ 0x1402CADA0 (MmUnlockPages.c)
 *     MiReturnCommit @ 0x1402DC4E0 (MiReturnCommit.c)
 *     MiAllocatePool @ 0x1402DF430 (MiAllocatePool.c)
 *     MiChargeResident @ 0x1402E4638 (MiChargeResident.c)
 *     IS_PTE_NOT_DEMAND_ZERO @ 0x14033ED54 (IS_PTE_NOT_DEMAND_ZERO.c)
 *     MiWritePteShadow @ 0x1403574EC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14035754C (MiPteHasShadow.c)
 *     memset @ 0x140435E00 (memset.c)
 *     MiFillPerSessionProtos @ 0x140A4A25C (MiFillPerSessionProtos.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiAllocatePerSessionProtos(__int64 a1, unsigned __int64 a2, unsigned int a3, __int64 a4, _QWORD *a5)
{
  unsigned int *v5; // rbx
  struct _MDL *v6; // r15
  __int64 v7; // r13
  __int64 ControlAreaPartition; // rdi
  _QWORD *Pool; // rax
  _QWORD *v10; // r14
  _QWORD *v11; // rax
  _QWORD *v12; // r12
  __int64 SubsectionPte; // rdi
  __int64 v14; // rdx
  unsigned __int64 v15; // rcx
  unsigned int v16; // eax
  unsigned int *v17; // r15
  unsigned int i; // r13d
  unsigned __int64 v19; // rbx
  __int64 v20; // r8
  __int64 v21; // rdx
  int v22; // r9d
  unsigned __int64 v23; // rdi
  __int64 v24; // r12
  int v25; // ebx
  bool v27; // zf
  int v28; // edx
  bool v29; // zf
  unsigned __int64 v30; // rbx
  SIZE_T v31; // rax
  struct _MDL *v32; // rax
  int v33; // ebx
  unsigned __int64 v34; // rdx
  void *v35; // rcx
  _QWORD *v36; // [rsp+38h] [rbp-A0h]
  _QWORD *v37; // [rsp+40h] [rbp-98h]
  unsigned int v38; // [rsp+50h] [rbp-88h]
  void *v39; // [rsp+58h] [rbp-80h]
  unsigned __int64 v40; // [rsp+60h] [rbp-78h]
  _QWORD *v41; // [rsp+68h] [rbp-70h]
  _QWORD v42[2]; // [rsp+70h] [rbp-68h] BYREF
  _QWORD v43[2]; // [rsp+80h] [rbp-58h] BYREF
  unsigned int *v44; // [rsp+90h] [rbp-48h]

  v5 = (unsigned int *)(a1 + 44);
  *a5 = 0LL;
  v6 = 0LL;
  v7 = 0LL;
  v41 = *(_QWORD **)a1;
  ControlAreaPartition = MiGetControlAreaPartition(*(_QWORD *)a1);
  v39 = (void *)ControlAreaPartition;
  v44 = v5;
  if ( !(unsigned int)MiChargeCommit(ControlAreaPartition, *v5, 0LL) )
    return 3221225773LL;
  Pool = MiAllocatePool(64, 0x58uLL, 0x73536D4Du);
  v10 = Pool;
  v42[0] = Pool;
  if ( !Pool )
    goto LABEL_23;
  *((_DWORD *)Pool + 20) = 1;
  v11 = MiAllocatePool(274, 8LL * *v5, 0x74536D4Du);
  v12 = v11;
  if ( !v11 )
    goto LABEL_23;
  v10[9] = v11;
  memset(v11, 0, 8LL * *v5);
  SubsectionPte = MiMakeSubsectionPte(a1);
  v7 = (__int64)(v10 + 3);
  v43[0] = v10 + 3;
  v10[6] = v10[6] & 0xFFFFFFFFFFFFFFF8uLL | 3;
  v15 = *(_QWORD *)(v14 + 8);
  v40 = v15;
  v16 = 0;
  v38 = 0;
  if ( !*v5 )
    goto LABEL_13;
  v17 = v5;
  for ( i = 0; i < *v17; ++i )
  {
    v19 = MI_READ_PTE_LOCK_FREE(v15);
    if ( !v19 )
      break;
    if ( a2 )
      goto LABEL_11;
    MiPteInShadowRange((unsigned __int64)v12);
    if ( (unsigned int)IS_PTE_NOT_DEMAND_ZERO(v19) )
    {
      v21 = SubsectionPte;
      v22 = 0;
      if ( !(_DWORD)v20 )
        goto LABEL_10;
      if ( MiPteHasShadow() )
      {
        v22 = 1;
        if ( !HIBYTE(word_140C66CFC) )
        {
          v27 = (SubsectionPte & 1) == 0;
LABEL_29:
          if ( !v27 )
            v21 |= 0x8000000000000000uLL;
        }
      }
      else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
      {
        v27 = (SubsectionPte & 1) == 0;
        goto LABEL_29;
      }
LABEL_10:
      *v12 = v21;
      if ( v22 )
        goto LABEL_41;
      goto LABEL_11;
    }
    v28 = 0;
    if ( (_DWORD)v20 )
    {
      if ( MiPteHasShadow() )
      {
        v28 = 1;
        if ( HIBYTE(word_140C66CFC) )
          goto LABEL_39;
        v29 = (v19 & 1) == 0;
      }
      else
      {
        if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
          goto LABEL_39;
        v29 = (v19 & 1) == 0;
      }
      if ( !v29 )
        v19 |= 0x8000000000000000uLL;
    }
LABEL_39:
    *v12 = v19;
    if ( v28 )
    {
      v21 = v19;
LABEL_41:
      MiWritePteShadow((__int64)v12, v21, v20);
    }
LABEL_11:
    ++v12;
    v15 = v40 + 8;
    v40 += 8LL;
  }
  v38 = i;
  v10 = (_QWORD *)v42[0];
  v6 = 0LL;
  v7 = v43[0];
  v16 = v38;
LABEL_13:
  v23 = v16;
  v10[7] = v16;
  MiUpdateSystemProtoPtesTree(v7, 1);
  v24 = v10[9];
  if ( !a2 )
  {
    ControlAreaPartition = (__int64)v39;
    goto LABEL_15;
  }
  v30 = v23 << 12;
  v31 = MmSizeOfMdl((PVOID)a2, v23 << 12);
  v32 = (struct _MDL *)MiAllocatePool(64, v31, 0x206C644Du);
  v6 = v32;
  if ( !v32 )
  {
    v25 = -1073741670;
    ControlAreaPartition = (__int64)v39;
    goto LABEL_16;
  }
  v32->Next = 0LL;
  v32->Size = 8 * (((v30 + (a2 & 0xFFF) + 4095) >> 12) + 6);
  v32->MdlFlags = 0;
  v32->StartVa = (PVOID)(a2 & 0xFFFFFFFFFFFFF000uLL);
  v32->ByteOffset = a2 & 0xFFF;
  v32->ByteCount = v30;
  MmProbeAndLockPages(v32, 0, IoReadAccess);
  v33 = (*(unsigned __int16 *)(a1 + 32) >> 1) & 0x1F;
  v34 = v23;
  ControlAreaPartition = (__int64)v39;
  if ( !(unsigned int)MiChargeResident(v39, v34, 0LL) )
  {
LABEL_23:
    v25 = -1073741670;
    goto LABEL_16;
  }
  if ( (MiFlags & 0xC000) == 49152 && (v33 & 2) != 0 )
  {
    v42[1] = *(_QWORD *)(v41[12] + 56LL);
    v42[0] = (unsigned __int64)a3 << 12;
    v43[1] = 0LL;
    v43[0] = a4 + v42[0] + *(_QWORD *)(*v41 + 32LL);
    v37 = v43;
    v36 = v42;
  }
  else
  {
    v37 = 0LL;
    v36 = 0LL;
  }
  v25 = MiFillPerSessionProtos((_DWORD)v41, v24, (int)v6 + 48, v38, v33, a3, a4, (__int64)v36, (__int64)v37);
  if ( v25 >= 0 )
  {
LABEL_15:
    *a5 = v10;
    v10 = 0LL;
    v25 = 0;
  }
LABEL_16:
  if ( v6 )
  {
    MmUnlockPages(v6);
    ExFreePoolWithTag(v6, 0);
  }
  if ( v10 )
  {
    if ( v7 )
      MiUpdateSystemProtoPtesTree(v7, 0);
    v35 = (void *)v10[9];
    if ( v35 )
      ExFreePoolWithTag(v35, 0);
    ExFreePoolWithTag(v10, 0);
  }
  if ( v25 < 0 )
    MiReturnCommit(ControlAreaPartition, *v44);
  return (unsigned int)v25;
}
