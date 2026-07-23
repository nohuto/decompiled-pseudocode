/*
 * XREFs of sub_1407A0088 @ 0x1407A0088
 * Callers:
 *     sub_1406C2560 @ 0x1406C2560 (sub_1406C2560.c)
 *     sub_14079F130 @ 0x14079F130 (sub_14079F130.c)
 *     sub_1407D7CA0 @ 0x1407D7CA0 (sub_1407D7CA0.c)
 * Callees:
 *     PsGetHostSilo @ 0x140203DC0 (PsGetHostSilo.c)
 *     sub_14024BA7C @ 0x14024BA7C (sub_14024BA7C.c)
 *     sub_1402A86B0 @ 0x1402A86B0 (sub_1402A86B0.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     sub_1402AC800 @ 0x1402AC800 (sub_1402AC800.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     MmUnlockPages @ 0x1402B8AD0 (MmUnlockPages.c)
 *     KeDelayExecutionThread @ 0x1402B90A0 (KeDelayExecutionThread.c)
 *     PsAttachSiloToCurrentThread @ 0x1402D7FB0 (PsAttachSiloToCurrentThread.c)
 *     sub_1402F00BC @ 0x1402F00BC (sub_1402F00BC.c)
 *     sub_1402F0574 @ 0x1402F0574 (sub_1402F0574.c)
 *     sub_1402F0604 @ 0x1402F0604 (sub_1402F0604.c)
 *     sub_1402F0880 @ 0x1402F0880 (sub_1402F0880.c)
 *     KeQuerySystemTimePrecise @ 0x1402F08A0 (KeQuerySystemTimePrecise.c)
 *     ExWaitForRundownProtectionRelease @ 0x1402F0990 (ExWaitForRundownProtectionRelease.c)
 *     sub_1402F89B0 @ 0x1402F89B0 (sub_1402F89B0.c)
 *     ObReferenceObjectSafeWithTag @ 0x140302BD0 (ObReferenceObjectSafeWithTag.c)
 *     sub_140310810 @ 0x140310810 (sub_140310810.c)
 *     PsGetProcessServerSilo @ 0x140347680 (PsGetProcessServerSilo.c)
 *     sub_140347920 @ 0x140347920 (sub_140347920.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     sub_14035EB3C @ 0x14035EB3C (sub_14035EB3C.c)
 *     sub_14036A100 @ 0x14036A100 (sub_14036A100.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     ZwFreeVirtualMemory @ 0x14041BB20 (ZwFreeVirtualMemory.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_14056C058 @ 0x14056C058 (sub_14056C058.c)
 *     sub_140683990 @ 0x140683990 (sub_140683990.c)
 *     sub_1406F653C @ 0x1406F653C (sub_1406F653C.c)
 *     sub_1406F83A0 @ 0x1406F83A0 (sub_1406F83A0.c)
 *     sub_1406F8640 @ 0x1406F8640 (sub_1406F8640.c)
 *     ObCloseHandle @ 0x14074F6A0 (ObCloseHandle.c)
 *     sub_140791970 @ 0x140791970 (sub_140791970.c)
 *     SeAuditingWithTokenForSubcategory @ 0x14079D560 (SeAuditingWithTokenForSubcategory.c)
 *     sub_14079EE84 @ 0x14079EE84 (sub_14079EE84.c)
 *     sub_14079FBD4 @ 0x14079FBD4 (sub_14079FBD4.c)
 *     sub_14079FC78 @ 0x14079FC78 (sub_14079FC78.c)
 *     sub_14079FD44 @ 0x14079FD44 (sub_14079FD44.c)
 *     sub_14079FFE8 @ 0x14079FFE8 (sub_14079FFE8.c)
 *     sub_1407A0818 @ 0x1407A0818 (sub_1407A0818.c)
 *     sub_1407A08FC @ 0x1407A08FC (sub_1407A08FC.c)
 *     sub_1407A0920 @ 0x1407A0920 (sub_1407A0920.c)
 *     LpcRequestPort @ 0x1407A7CB0 (LpcRequestPort.c)
 *     sub_1407DB734 @ 0x1407DB734 (sub_1407DB734.c)
 *     sub_1407E0CE4 @ 0x1407E0CE4 (sub_1407E0CE4.c)
 *     sub_14092A938 @ 0x14092A938 (sub_14092A938.c)
 *     sub_14092A9F4 @ 0x14092A9F4 (sub_14092A9F4.c)
 *     sub_1409B1558 @ 0x1409B1558 (sub_1409B1558.c)
 *     sub_1409B16A8 @ 0x1409B16A8 (sub_1409B16A8.c)
 *     sub_1409C7C84 @ 0x1409C7C84 (sub_1409C7C84.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_1407A0088(unsigned int a1)
{
  struct _KTHREAD *CurrentThread; // rdi
  ULONG_PTR v3; // r14
  ULONG_PTR v4; // r8
  void *v5; // rbx
  volatile signed __int64 *v6; // rbx
  unsigned int v7; // ebx
  void *v8; // r12
  void *v9; // rbx
  int v10; // eax
  LARGE_INTEGER v11; // rcx
  unsigned __int64 v12; // rbx
  __int64 v13; // r8
  __int64 v14; // r9
  void *v15; // rcx
  __int16 v16; // ax
  char v17; // al
  bool v18; // zf
  __int64 v19; // rcx
  _QWORD *v20; // rbx
  __int64 v21; // rdx
  void *v22; // rcx
  _QWORD *v24; // r12
  _QWORD *v25; // rax
  _QWORD *v26; // r15
  unsigned __int64 v27; // rbx
  void *v28; // rcx
  int v29; // eax
  void *v30; // rbx
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 v32; // rdx
  _DWORD *v33; // rbx
  signed __int32 v34[8]; // [rsp+0h] [rbp-E8h] BYREF
  PLARGE_INTEGER Timeout; // [rsp+20h] [rbp-C8h]
  ULONG_PTR RegionSize; // [rsp+30h] [rbp-B8h] BYREF
  ULONG_PTR v37; // [rsp+38h] [rbp-B0h] BYREF
  _OWORD v38[2]; // [rsp+40h] [rbp-A8h] BYREF
  __int128 v39; // [rsp+60h] [rbp-88h]
  PVOID BaseAddress; // [rsp+70h] [rbp-78h] BYREF
  PVOID v41; // [rsp+78h] [rbp-70h] BYREF
  ULONG_PTR v42; // [rsp+80h] [rbp-68h]
  struct _KTHREAD *v43; // [rsp+88h] [rbp-60h]
  __int128 v44; // [rsp+90h] [rbp-58h] BYREF
  __int128 v45; // [rsp+A0h] [rbp-48h] BYREF
  char v47; // [rsp+F8h] [rbp+10h]
  PMDL MemoryDescriptorList; // [rsp+100h] [rbp+18h] BYREF
  PVOID Object; // [rsp+108h] [rbp+20h]

  memset(v38, 0, sizeof(v38));
  v39 = 0LL;
  v45 = 0LL;
  v44 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v43 = CurrentThread;
  v42 = *((_QWORD *)CurrentThread + 68);
  v3 = v42;
  sub_1407A0920(CurrentThread, *((_QWORD *)CurrentThread + 154), CurrentThread);
  v4 = *((_QWORD *)CurrentThread + 23);
  if ( v42 != v4 )
    KeBugCheckEx(5u, v42, v4, *((unsigned __int8 *)CurrentThread + 586), (ULONG_PTR)CurrentThread);
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v32 = *((_QWORD *)CurrentPrcb + 4375);
      v18 = (*(_DWORD *)(v32 + 20) & 0xFFFF0001) == 0;
      *(_DWORD *)(v32 + 20) &= 0xFFFF0001;
      if ( v18 )
        sub_140418E4C((__int64)CurrentPrcb);
    }
  }
  __writecr8(0LL);
  if ( (*((_DWORD *)CurrentThread + 345) & 1) != 0 )
    KeBugCheckEx(0xE9u, (ULONG_PTR)CurrentThread, 0LL, 0LL, 0LL);
  if ( *((_DWORD *)CurrentThread + 121) )
    KeBugCheckEx(0x20u, 0LL, *((unsigned int *)CurrentThread + 121), 0LL, 1uLL);
  if ( *((_QWORD *)CurrentThread + 165) )
  {
    sub_140310810((__int64)CurrentThread, 0LL);
    ObfDereferenceObjectWithTag(*((PVOID *)CurrentThread + 165), 0x79517350u);
    *((_QWORD *)CurrentThread + 165) = 0LL;
  }
  sub_1407A08FC((char *)CurrentThread + 1560);
  sub_1402A86B0((ULONG_PTR)CurrentThread);
  ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)CurrentThread + 169);
  v5 = (void *)*((_QWORD *)CurrentThread + 166);
  if ( v5 )
  {
    sub_14036A100(*((_BYTE **)CurrentThread + 166));
    ObfDereferenceObject(v5);
    *((_QWORD *)CurrentThread + 166) = 0LL;
  }
  v47 = 0;
  Object = 0LL;
  *((_DWORD *)CurrentThread + 358) = a1;
  if ( (xmmword_140D06900[0] & 2) != 0 )
    sub_1406F653C((__int64)CurrentThread, 0LL, 0);
  --*((_WORD *)CurrentThread + 242);
  if ( (*(_DWORD *)(v3 + 2172) & 1) == 0 || *(_QWORD *)(v3 + 2240) )
    sub_1406F8640(CurrentThread, 0, 0);
  v6 = (volatile signed __int64 *)(v3 + 1080);
  ExAcquirePushLockExclusiveEx(v3 + 1080, 0LL);
  if ( --*(_DWORD *)(v3 + 1520) )
  {
    if ( a1 != -1073741749 )
      *(_DWORD *)(v3 + 1532) = a1;
  }
  else
  {
    _InterlockedOr((volatile signed __int32 *)(v3 + 1124), 0x2000008u);
    sub_14035EB3C(v3);
    v47 = 1;
    if ( *(_DWORD *)(v3 + 2004) == 259 )
    {
      if ( a1 == -1073741749 )
        *(_DWORD *)(v3 + 2004) = *(_DWORD *)(v3 + 1532);
      else
        *(_DWORD *)(v3 + 2004) = a1;
    }
    v24 = *(_QWORD **)(v3 + 1504);
    if ( v24 != (_QWORD *)(v3 + 1504) )
    {
      v25 = (_QWORD *)(v3 + 1504);
      v26 = 0LL;
      do
      {
        if ( v24 - 167 != (_QWORD *)CurrentThread )
        {
          if ( !*((_BYTE *)v24 - 1332) && ObReferenceObjectSafeWithTag((__int64)(v24 - 167)) )
          {
            if ( (_InterlockedExchangeAdd64(v6, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
              ExfTryToWakePushLock(v3 + 1080);
            sub_1402AFC00(v3 + 1080);
            sub_1402AC800((__int64)CurrentThread);
            KeWaitForSingleObject(v24 - 167, Executive, 0, 0, 0LL);
            if ( v26 )
              ObfDereferenceObjectWithTag(v26, 0x65547350u);
            v26 = v24 - 167;
            --*((_WORD *)CurrentThread + 242);
            ExAcquirePushLockExclusiveEx(v3 + 1080, 0LL);
          }
          v25 = (_QWORD *)(v3 + 1504);
        }
        v24 = (_QWORD *)*v24;
      }
      while ( v24 != v25 );
      Object = v26;
    }
  }
  if ( (_InterlockedExchangeAdd64(v6, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v3 + 1080);
  sub_1402AFC00(v3 + 1080);
  sub_1402AC800((__int64)CurrentThread);
  if ( Object )
    ObfDereferenceObjectWithTag(Object, 0x65547350u);
  if ( *((_QWORD *)CurrentThread + 203) != -3LL )
  {
    v33 = (_DWORD *)PsAttachSiloToCurrentThread(-3LL);
    if ( v33 == (_DWORD *)PsGetHostSilo()
      || (POBJECT_TYPE *)qword_140D07490[(unsigned __int8)dword_140D06C0C ^ *((unsigned __int8 *)v33 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)v33 - 48) >> 8)] != PsJobType
      || (v33[379] & 2) == 0 )
    {
      KeBugCheckEx(0x1CBu, (ULONG_PTR)CurrentThread, (ULONG_PTR)v33, v3, 1uLL);
    }
    ObfDereferenceObjectWithTag(v33, 0x6D497350u);
  }
  if ( *(_QWORD *)(v3 + 1400) && (*((_DWORD *)CurrentThread + 29) & 0x400) == 0 )
  {
    if ( !v47 )
    {
      v7 = a1;
      sub_14092A9F4(a1);
      goto LABEL_23;
    }
    sub_14092A938(*(unsigned int *)(v3 + 2004));
  }
  v7 = a1;
LABEL_23:
  if ( (*(_BYTE *)(v3 + 992) & 1) != 0 )
  {
    MemoryDescriptorList = 0LL;
    if ( (int)sub_14056C058((__int64)&MemoryDescriptorList) >= 0 )
    {
      MmUnlockPages(MemoryDescriptorList);
      ExFreePoolWithTag(MemoryDescriptorList, 0x65537350u);
    }
  }
  if ( (_BYTE)KdDebuggerEnabled
    && (*((_DWORD *)CurrentThread + 344) & 0x20) != 0
    && (*(_DWORD *)(*((_QWORD *)CurrentThread + 68) + 1124LL) & 0x40000008) == 0 )
  {
    PsGetProcessServerSilo(v3);
    LODWORD(Timeout) = v7;
    sub_1409B1558("Critical thread 0x%p (in %s) exited\n", CurrentThread, (const char *)(v3 + 1448));
  }
  if ( v47 && (*(_DWORD *)(v3 + 1124) & 0x2000) != 0 )
  {
    PsGetProcessServerSilo(v3);
    LODWORD(Timeout) = v7;
    sub_1409B1558("Critical process 0x%p (%s) exited\n", (const void *)v3, (const char *)(v3 + 1448));
  }
  v8 = (void *)*((_QWORD *)CurrentThread + 149);
  if ( v8 )
  {
    *(_QWORD *)&v38[0] = 0x600300008LL;
    *((_QWORD *)&v39 + 1) = *((_QWORD *)CurrentThread + 144);
    do
    {
      while ( 1 )
      {
        v29 = LpcRequestPort(*((_QWORD *)v8 + 1), v38);
        if ( v29 != -1073741801 && v29 != -1073741670 )
          break;
        KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&stru_140015710);
      }
      ObfDereferenceObject(*((PVOID *)v8 + 1));
      v30 = *(void **)v8;
      ExFreePoolWithTag(v8, 0x70547350u);
      v8 = v30;
    }
    while ( v30 );
  }
  if ( (*((_DWORD *)CurrentThread + 344) & 2) != 0 )
  {
    v9 = sub_14079FFE8(v3);
    if ( v9 )
    {
      *(_QWORD *)&v38[0] = 0x600300008LL;
      *((_QWORD *)&v39 + 1) = *((_QWORD *)CurrentThread + 144);
      while ( 1 )
      {
        v10 = LpcRequestPort(v9, v38);
        if ( v10 != -1073741801 && v10 != -1073741670 )
          break;
        KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&stru_140015710);
      }
      ObfDereferenceObject(v9);
    }
  }
  if ( *((_QWORD *)CurrentThread + 57) )
  {
    *(_QWORD *)&v44 = CurrentThread;
    DWORD2(v44) = 1;
    sub_1406F83A0(1, (__int64)&v44, 0, 0LL);
  }
  if ( v47 && *(_QWORD *)(v3 + 1288) )
  {
    *(_QWORD *)&v45 = v3;
    DWORD2(v45) = 0;
    sub_1406F83A0(0, (__int64)&v45, 0, 0LL);
  }
  if ( (*((_DWORD *)CurrentThread + 30) & 0x40) == 0 )
    KeBugCheckEx(0x94u, 0LL, (ULONG_PTR)CurrentThread, 0LL, 0LL);
  sub_1407A0818(CurrentThread, 0LL);
  sub_14079FC78(v11);
  sub_1402F0574();
  sub_14079FD44((__int64)CurrentThread);
  sub_1402F0604((ULONG_PTR)KeGetCurrentThread());
  v12 = *((_QWORD *)CurrentThread + 30);
  Object = (PVOID)v12;
  if ( v12 )
  {
    *((_QWORD *)CurrentThread + 30) = 0LL;
    --*((_WORD *)CurrentThread + 242);
    _InterlockedOr(v34, 0);
    if ( (*((_QWORD *)CurrentThread + 170) & 1) != 0 )
      sub_14024BA7C((ULONG_PTR)CurrentThread + 1360);
    sub_1402AC800((__int64)CurrentThread);
    if ( (*((_DWORD *)CurrentThread + 29) & 0x400) == 0 && (*(_DWORD *)(v3 + 1124) & 0x40000008) == 0 )
    {
      if ( (*((_DWORD *)CurrentThread + 344) & 2) != 0 )
      {
        BaseAddress = *(PVOID *)(v12 + 5240);
        RegionSize = 0LL;
        ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 0x8000u);
        if ( *(_QWORD *)(v3 + 1408) )
        {
          v16 = *(_WORD *)(v3 + 2412);
          if ( v16 == 332 || (v18 = v16 == 452, v17 = 0, v18) )
            v17 = 1;
          if ( v17 )
          {
            v41 = (PVOID)*(unsigned int *)(v12 + 11788);
            v37 = 0LL;
            ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &v41, &v37, 0x8000u);
          }
        }
      }
      v15 = *(void **)(v12 + 5800);
      if ( v15 )
        ObCloseHandle(v15, 1);
      if ( (*((_DWORD *)CurrentThread + 29) & 0x100000) != 0 && (*((_DWORD *)CurrentThread + 344) & 2) != 0 )
        sub_1409B16A8();
      sub_14079EE84(v3, v12, v13, v14);
    }
  }
  v20 = (_QWORD *)((char *)CurrentThread + 1160);
  if ( sub_1402F0880() )
    KeQuerySystemTimePrecise((_QWORD *)CurrentThread + 145);
  else
    *v20 = MEMORY[0xFFFFF78000000014];
  if ( v47 )
  {
    *(_QWORD *)(v3 + 2112) = *v20;
    LOBYTE(v19) = 1;
    sub_1407DB734(v19, v3);
    v27 = sub_140347920(v3, 0x65547350u);
    if ( SeAuditingWithTokenForSubcategory(134, v27) )
      sub_1409C7C84(v3, *(unsigned int *)(v3 + 2004));
    sub_1402F89B0((signed __int64 *)(v3 + 1208), v27, 0x65547350u);
    sub_140791970(v3, 0);
    sub_140683990(v3, 1);
    sub_1407E0CE4(v3);
    v28 = *(void **)(v3 + 2120);
    if ( v28 )
    {
      ExFreePoolWithTag(v28, 0);
      *(_QWORD *)(v3 + 2120) = 0LL;
    }
  }
  sub_14079FBD4((__int64)CurrentThread);
  if ( *((_QWORD *)CurrentThread + 90) && qword_140D3B240 )
    sub_14042A5E0(CurrentThread, v21);
  sub_1407A0818(CurrentThread, 1LL);
  v22 = (void *)*((_QWORD *)CurrentThread + 205);
  if ( v22 )
  {
    ExFreePoolWithTag(v22, 0x63537350u);
    *((_QWORD *)CurrentThread + 205) = 0LL;
  }
  return sub_1402F00BC((char *)CurrentThread);
}
