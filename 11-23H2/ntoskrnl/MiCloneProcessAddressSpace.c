/*
 * XREFs of MiCloneProcessAddressSpace @ 0x140A48C04
 * Callers:
 *     MmInitializeProcessAddressSpace @ 0x1406B2ACC (MmInitializeProcessAddressSpace.c)
 * Callees:
 *     MiIsStoreProcess @ 0x140216D94 (MiIsStoreProcess.c)
 *     KiStackAttachProcess @ 0x14022D710 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x14022DAD0 (KiUnstackDetachProcess.c)
 *     PsReturnProcessNonPagedPoolQuota @ 0x14028B5C0 (PsReturnProcessNonPagedPoolQuota.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     MiCloneVads @ 0x1406637C8 (MiCloneVads.c)
 *     MiCreateCloneChain @ 0x140663F6C (MiCreateCloneChain.c)
 *     MiCreateForkWsles @ 0x1406641C0 (MiCreateForkWsles.c)
 *     MiInsertClone @ 0x14066565C (MiInsertClone.c)
 *     MiLockDownWorkingSet @ 0x1406656E0 (MiLockDownWorkingSet.c)
 *     MiUnlockVadRange @ 0x1406AFF94 (MiUnlockVadRange.c)
 *     MiLockVadRange @ 0x1406B0064 (MiLockVadRange.c)
 *     MiAllocateChildVads @ 0x140A4862C (MiAllocateChildVads.c)
 *     MiBuildNewCloneDescriptor @ 0x140A48AA8 (MiBuildNewCloneDescriptor.c)
 *     MiDeleteInsertedCloneVads @ 0x140A48F68 (MiDeleteInsertedCloneVads.c)
 *     MiFreeCloneDescriptor @ 0x140A492A4 (MiFreeCloneDescriptor.c)
 *     MiMapChildLargePageVads @ 0x140A4952C (MiMapChildLargePageVads.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiCloneProcessAddressSpace(_KPROCESS *BugCheckParameter1, _KPROCESS *a2, int a3)
{
  char v3; // r12
  int v6; // r13d
  int v7; // r15d
  _QWORD *v8; // r14
  _KPROCESS *Process; // rdi
  int v11; // r12d
  int v12; // edi
  _QWORD *v13; // r12
  _QWORD *v14; // rbx
  _QWORD *v15; // rax
  unsigned __int64 v16; // r8
  __int64 v17; // rcx
  unsigned int v18; // edx
  __int64 v19; // rax
  int v20; // [rsp+30h] [rbp-49h] BYREF
  PVOID P; // [rsp+38h] [rbp-41h] BYREF
  int v22; // [rsp+40h] [rbp-39h]
  __int64 v23; // [rsp+48h] [rbp-31h] BYREF
  __int64 v24; // [rsp+50h] [rbp-29h]
  unsigned __int64 v25; // [rsp+58h] [rbp-21h]
  _KPROCESS *v26; // [rsp+60h] [rbp-19h]
  $115DCDF994C6370D29323EAB0E0C9502 v27; // [rsp+68h] [rbp-11h] BYREF

  v22 = a3;
  v23 = 0LL;
  memset(&v27, 0, sizeof(v27));
  v3 = a3;
  v6 = 0;
  v7 = 1;
  P = 0LL;
  v8 = 0LL;
  v20 = 0;
  Process = KeGetCurrentThread()->ApcState.Process;
  v26 = Process;
  if ( (unsigned int)MiIsStoreProcess((__int64)BugCheckParameter1) )
    return 3221225659LL;
  MiLockDownWorkingSet(a2, 1);
  if ( Process != BugCheckParameter1 )
  {
    v6 = 1;
    KiStackAttachProcess(BugCheckParameter1, 0, (__int64)&v27);
  }
  v11 = v3 & 1;
  v25 = BugCheckParameter1[1].ActiveProcessors.StaticBitmap[28];
  if ( *(_QWORD *)(v25 + 344) && !v11 )
  {
    v12 = -1073741637;
    goto LABEL_11;
  }
  v24 = MiLockVadRange((__int64)BugCheckParameter1, 0xFFFFFFFFFFFFFFFFuLL, 0xFFFFFFFFFFFFFFFFuLL, 1);
  if ( !v24 )
  {
    v12 = -1073741558;
LABEL_10:
    MiUnlockVadRange((__int64)BugCheckParameter1, 0xFFFFFFFFFFFFFFFFuLL, v24, 1);
    goto LABEL_11;
  }
  v12 = MiCreateCloneChain(a2, &P);
  if ( v12 < 0 )
    goto LABEL_10;
  v12 = MiAllocateChildVads((ULONG_PTR)a2, &v23);
  if ( v12 < 0 )
    goto LABEL_10;
  if ( v11 )
  {
    v15 = MiBuildNewCloneDescriptor(a2, 2LL, *(_QWORD *)(v25 + 344));
    v8 = v15;
    if ( !v15 )
    {
      v12 = -1073741670;
      goto LABEL_10;
    }
    memset((void *)v15[3], 0, 32LL * v15[5]);
    *(_QWORD *)(v8[3] + 16LL) = *(_QWORD *)(v8[3] + 16LL) & 0xF07FFFFFFFFFFFFFuLL | 0x200000000000000LL;
    *(_QWORD *)(v8[3] + 48LL) = *(_QWORD *)(v8[3] + 48LL) & 0xF07FFFFFFFFFFFFFuLL | 0x80000000000000LL;
  }
  v12 = MiCloneVads(BugCheckParameter1, (__int64)a2, (__int64)P, (__int64)v8, v22, &v20);
  if ( v12 < 0 )
    goto LABEL_10;
  P = 0LL;
  v12 = MiMapChildLargePageVads(a2, v23);
  MiUnlockVadRange((__int64)BugCheckParameter1, 0xFFFFFFFFFFFFFFFFuLL, v24, 1);
  if ( v6 )
  {
    KiUnstackDetachProcess(&v27);
    v6 = 0;
  }
  if ( v26 != a2 )
  {
    v6 = 1;
    KiStackAttachProcess(a2, 0, (__int64)&v27);
  }
  MiCreateForkWsles();
  if ( v8 )
  {
    v16 = v8[5];
    v17 = 0LL;
    v18 = 0;
    if ( !v16 )
      goto LABEL_38;
    v19 = 0LL;
    do
    {
      ++v18;
      v17 += *(_QWORD *)(32 * v19 + v8[3] + 24);
      v19 = v18;
    }
    while ( v18 < v16 );
    if ( v17 )
    {
      v8[6] = v17;
      MiInsertClone((__int64)a2, (unsigned __int64)v8, 0);
    }
    else
    {
LABEL_38:
      MiFreeCloneDescriptor(a2, v8);
    }
    v8 = 0LL;
  }
  if ( v12 >= 0 )
  {
    MiLockDownWorkingSet(a2, 0);
    v7 = 0;
    if ( v6 )
    {
      KiUnstackDetachProcess(&v27);
      v6 = 0;
    }
    if ( !v20 )
      return (unsigned int)v12;
    v12 = -1073741670;
  }
LABEL_11:
  v13 = P;
  if ( P )
  {
    do
    {
      v14 = (_QWORD *)*v13;
      PsReturnProcessNonPagedPoolQuota(a2, v13[8]);
      ExFreePoolWithTag(v13, 0);
      v13 = v14;
    }
    while ( v14 );
  }
  if ( v8 )
    MiFreeCloneDescriptor(a2, v8);
  if ( v6 )
    KiUnstackDetachProcess(&v27);
  if ( v7 )
    MiLockDownWorkingSet(a2, 0);
  MiDeleteInsertedCloneVads(a2);
  return (unsigned int)v12;
}
