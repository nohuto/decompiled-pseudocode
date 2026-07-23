/*
 * XREFs of MmFreeVirtualMemory @ 0x1407452B0
 * Callers:
 *     PsDispatchIumService @ 0x1405A53D4 (PsDispatchIumService.c)
 *     NtFreeVirtualMemory @ 0x1407451E0 (NtFreeVirtualMemory.c)
 *     PspDeleteUserStack @ 0x1407E83A4 (PspDeleteUserStack.c)
 *     PspFreeUserFiberShadowStack @ 0x1409B1358 (PspFreeUserFiberShadowStack.c)
 *     PspReserveAndCommitUserShadowStack @ 0x1409B1950 (PspReserveAndCommitUserShadowStack.c)
 *     PspSetupUserFiberShadowStack @ 0x1409B1C30 (PspSetupUserFiberShadowStack.c)
 *     PspSetupUserShadowStack @ 0x1409B1D0C (PspSetupUserShadowStack.c)
 *     PspFreeCurrentThreadUserShadowStack @ 0x1409B3D70 (PspFreeCurrentThreadUserShadowStack.c)
 * Callees:
 *     UNLOCK_ADDRESS_SPACE_UNORDERED @ 0x140214D94 (UNLOCK_ADDRESS_SPACE_UNORDERED.c)
 *     KiStackAttachProcess @ 0x14022D710 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x14022DAD0 (KiUnstackDetachProcess.c)
 *     ObfDereferenceObjectWithTag @ 0x14022F6C0 (ObfDereferenceObjectWithTag.c)
 *     MiUnlockAndDereferenceVad @ 0x140274D20 (MiUnlockAndDereferenceVad.c)
 *     MiObtainReferencedVadEx @ 0x140274F40 (MiObtainReferencedVadEx.c)
 *     MiGetVadPageSize @ 0x140275904 (MiGetVadPageSize.c)
 *     MiFreeVadRange @ 0x140309E30 (MiFreeVadRange.c)
 *     MiLocateVadEvent @ 0x14030B69C (MiLocateVadEvent.c)
 *     MiDeleteEmptyPageTables @ 0x140357940 (MiDeleteEmptyPageTables.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1406E6330 (ObpReferenceObjectByHandleWithTag.c)
 *     MiCheckSecuredVad @ 0x14071A2B4 (MiCheckSecuredVad.c)
 *     MiDecommitRegion @ 0x140744750 (MiDecommitRegion.c)
 *     PerfInfoLogVirtualFree @ 0x1409E7354 (PerfInfoLogVirtualFree.c)
 *     MiCoalescePlaceholderAllocations @ 0x140A322E8 (MiCoalescePlaceholderAllocations.c)
 *     MiDecommitEnclavePages @ 0x140A3E03C (MiDecommitEnclavePages.c)
 *     MiFreeEnclaveModules @ 0x140A3E0D8 (MiFreeEnclaveModules.c)
 */

__int64 __fastcall MmFreeVirtualMemory(
        ULONG_PTR BugCheckParameter1,
        unsigned __int64 *a2,
        __int64 *a3,
        int a4,
        unsigned __int8 a5,
        int a6)
{
  ULONG_PTR v6; // r15
  int v7; // edi
  unsigned __int64 *v8; // rsi
  unsigned __int64 v9; // r9
  __int64 v10; // r14
  bool v11; // zf
  _KPROCESS *Process; // rdx
  __int64 v13; // rcx
  unsigned __int64 v14; // rcx
  int v15; // ecx
  unsigned __int64 v16; // r12
  int v17; // ebx
  unsigned __int64 v18; // r13
  _QWORD *p_Lock; // r10
  __int64 *v20; // r15
  int v21; // r9d
  unsigned __int64 v22; // r11
  unsigned __int64 v23; // rcx
  unsigned __int64 v24; // r8
  unsigned __int64 v25; // r10
  int v26; // edx
  int v27; // eax
  int v28; // ecx
  int v29; // r11d
  _DWORD *v30; // rdx
  int v31; // ecx
  __int64 v32; // rax
  int v33; // esi
  PVOID v34; // rdi
  __int64 result; // rax
  int v36; // eax
  PVOID v37; // rbx
  unsigned int v38; // edi
  __int64 v39; // r11
  __int64 v40; // rax
  __int64 v41; // rcx
  int v42; // eax
  unsigned __int64 v43; // r8
  unsigned __int64 v44; // rdx
  int v45; // eax
  unsigned int v46; // [rsp+40h] [rbp-C0h] BYREF
  char v47; // [rsp+44h] [rbp-BCh] BYREF
  PVOID Object; // [rsp+48h] [rbp-B8h]
  int v49; // [rsp+50h] [rbp-B0h]
  int v50; // [rsp+54h] [rbp-ACh]
  ULONG_PTR BugCheckParameter1a; // [rsp+58h] [rbp-A8h] BYREF
  unsigned __int64 v52; // [rsp+60h] [rbp-A0h]
  ULONG_PTR v53; // [rsp+68h] [rbp-98h]
  unsigned __int64 v54; // [rsp+70h] [rbp-90h]
  unsigned __int64 v55; // [rsp+78h] [rbp-88h]
  unsigned __int64 v56; // [rsp+80h] [rbp-80h]
  unsigned __int64 v57; // [rsp+88h] [rbp-78h]
  __int64 *v58; // [rsp+90h] [rbp-70h]
  _QWORD v59[2]; // [rsp+98h] [rbp-68h] BYREF
  unsigned __int64 *v60; // [rsp+A8h] [rbp-58h]
  struct _KTHREAD *CurrentThread; // [rsp+B0h] [rbp-50h]
  $115DCDF994C6370D29323EAB0E0C9502 v62; // [rsp+B8h] [rbp-48h] BYREF

  v53 = BugCheckParameter1;
  v58 = a3;
  v60 = a2;
  v6 = BugCheckParameter1;
  memset(&v62, 0, 32);
  *(_QWORD *)&v62.SavedApcStateFill[40] = 0LL;
  BugCheckParameter1a = 0LL;
  v46 = 0;
  v59[1] = 0LL;
  v7 = a4;
  v59[0] = 0LL;
  v8 = a2;
  if ( (a4 & 0xC000) == 0 || (a4 & 0xC000) == 49152 )
    return 3221225714LL;
  v9 = *a2;
  v10 = *a3;
  v11 = *a3 == 0;
  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->ApcState.Process;
  v55 = (unsigned __int64)Process;
  v13 = v10 - 1;
  v57 = v9;
  if ( v11 )
    v13 = 0LL;
  v14 = v9 + v13;
  if ( v14 < v9 || v14 > 0x7FFFFFFEFFFFLL )
    return 3221225485LL;
  if ( (v7 & 2) != 0 )
  {
    if ( (v7 & 1) != 0 )
      return 3221225485LL;
    v15 = a6 | 0x4000000;
    v7 &= ~2u;
  }
  else
  {
    v15 = a6;
  }
  v49 = v15;
  if ( (v7 & 1) == 0 )
    goto LABEL_9;
  if ( (v7 & 2) != 0 )
    return 3221225485LL;
  v15 |= 0xC000000u;
  v49 = v15;
  v7 &= ~1u;
LABEL_9:
  v50 = v15 & 0x4000000;
  if ( (v15 & 0x4000000) != 0 )
  {
    if ( v7 == 0x8000 )
    {
      if ( !v10 || v10 != (v10 & 0xFFFFFFFFFFFFF000uLL) )
        return 3221225713LL;
      v16 = v9 & 0xFFFFFFFFFFFFF000uLL;
      if ( v9 != (v9 & 0xFFFFFFFFFFFFF000uLL) )
        return 3221225712LL;
      goto LABEL_11;
    }
    return 3221225714LL;
  }
  v16 = v9 & 0xFFFFFFFFFFFFF000uLL;
LABEL_11:
  v17 = 0;
  v54 = v16 >> 12;
  v18 = (v9 + v10 - 1) | 0xFFF;
  v62.SavedApcState.Process = 0LL;
  v52 = v18 >> 12;
  if ( v6 == -1LL )
  {
    p_Lock = &Process->Header.Lock;
    Object = Process;
  }
  else
  {
    result = ObpReferenceObjectByHandleWithTag(
               v6,
               8,
               (__int64)PsProcessType,
               a5,
               0x6D566D4Du,
               &BugCheckParameter1a,
               0LL,
               0LL);
    v46 = result;
    if ( (int)result < 0 )
      return result;
    p_Lock = (_QWORD *)BugCheckParameter1a;
    Object = (PVOID)BugCheckParameter1a;
    if ( v55 != BugCheckParameter1a )
    {
      v17 = 1;
      KiStackAttachProcess((_KPROCESS *)BugCheckParameter1a, 0, (__int64)&v62);
      p_Lock = (_QWORD *)BugCheckParameter1a;
    }
    v15 = v49;
  }
  v47 = 0;
  if ( (v7 & 0xFFFF3FFF) != 0 && (!p_Lock[280] || (v7 & 0x10000) == 0 || (v7 & 0x4000) != 0) )
  {
    v38 = -1073741582;
    goto LABEL_129;
  }
  if ( (v15 & 0xC000000) == 0xC000000 )
  {
    result = MiCoalescePlaceholderAllocations(p_Lock, v16, v18, a5);
    LODWORD(BugCheckParameter1a) = result;
    if ( v17 )
    {
      KiUnstackDetachProcess(&v62);
      result = (unsigned int)BugCheckParameter1a;
    }
    if ( v6 != -1LL )
    {
      ObfDereferenceObjectWithTag(Object, 0x6D566D4Du);
      return (unsigned int)BugCheckParameter1a;
    }
    return result;
  }
  LODWORD(BugCheckParameter1a) = v7 & 0x8000;
  v20 = MiObtainReferencedVadEx(v16, (_DWORD)BugCheckParameter1a != 0, (int *)&v46);
  if ( !v20 )
  {
    v38 = v46;
    goto LABEL_128;
  }
  while ( 1 )
  {
    v21 = BugCheckParameter1a;
    v22 = *((unsigned int *)v20 + 6) | ((unsigned __int64)*((unsigned __int8 *)v20 + 32) << 32);
    v23 = *((unsigned int *)v20 + 7) | ((unsigned __int64)*((unsigned __int8 *)v20 + 33) << 32);
    v55 = v22;
    v56 = v23;
    if ( v10 )
    {
      v24 = v52;
LABEL_18:
      v25 = v54;
      if ( v54 < v22 )
        goto LABEL_124;
      goto LABEL_19;
    }
    v52 = v23;
    v24 = v23;
    v18 = (v23 << 12) | 0xFFF;
    if ( !(_DWORD)BugCheckParameter1a )
      goto LABEL_18;
    v25 = v54;
    if ( v54 != v22 )
      goto LABEL_123;
    v16 = v22 << 12;
LABEL_19:
    if ( v25 > v23 || v24 < v22 || v24 > v23 )
    {
LABEL_124:
      v38 = -1073741798;
      goto LABEL_125;
    }
    v26 = *((_DWORD *)v20 + 12);
    v27 = v26 & 0x200000;
    v46 = v26;
    if ( (v7 & 0x10000) != 0 )
    {
      if ( v27 || (v26 & 0x70) != 0 || v25 == v22 && v24 == v23 )
      {
LABEL_93:
        v38 = -1073741797;
        goto LABEL_125;
      }
    }
    else if ( !v27 || (v26 & 0x70) == 0x10 )
    {
      goto LABEL_93;
    }
    v28 = v50;
    if ( v50 )
    {
      if ( MiLocateVadEvent((__int64)v20, 128LL) )
      {
        v41 = *((unsigned int *)v20 + 13);
        LODWORD(v41) = v41 & 0x7FFFFFFF;
        if ( (((unsigned __int64)*((unsigned __int8 *)v20 + 34) << 31) | v41) != 0x7FFFFFFFDLL )
        {
LABEL_100:
          v28 = v50;
          goto LABEL_26;
        }
      }
      else
      {
        v40 = *((unsigned int *)v20 + 13);
        LODWORD(v40) = v40 & 0x7FFFFFFF;
        if ( (v40 | ((unsigned __int64)*((unsigned __int8 *)v20 + 34) << 31)) != 0x7FFFFFFFDLL )
          goto LABEL_102;
        v52 = v24;
      }
      if ( v25 == v39 && v24 == v56 )
      {
LABEL_102:
        v38 = -1073741800;
        goto LABEL_125;
      }
      goto LABEL_100;
    }
LABEL_26:
    v29 = v49;
    if ( (v49 & 0x40000000) != 0 && (v46 & 0xA200000) != 0x8200000 )
      goto LABEL_102;
    if ( (v46 & 8) == 0 || (v49 & 0x40000000) != 0 )
    {
      v30 = Object;
      goto LABEL_29;
    }
    if ( v21 )
    {
      v30 = Object;
      if ( (*((_DWORD *)Object + 281) & 0x20) != 0 )
      {
        v42 = 0;
        goto LABEL_110;
      }
      v43 = v56 - v55;
      v44 = v55 << 12;
    }
    else
    {
      v44 = v57;
      v43 = v24 - v25;
    }
    v42 = MiCheckSecuredVad((ULONG_PTR)v20, v44, (v43 + 1) << 12, 0x55u, a5);
    v30 = Object;
    v29 = v49;
    v21 = BugCheckParameter1a;
    v24 = v52;
    v28 = v50;
    v25 = v54;
LABEL_110:
    v46 = v42;
    if ( v42 < 0 )
      goto LABEL_68;
LABEL_29:
    if ( !v21 )
      break;
    if ( (v30[543] & 0x100) != 0 && (v25 != v55 || v24 != v56) )
    {
      v38 = -1073741558;
      goto LABEL_125;
    }
    v36 = MiFreeVadRange(v20, (int)&v47, v25, v24, (__int64)v30, v28 != 0, (__int64)v59);
    v46 = v36;
    if ( v36 >= 0 )
    {
      if ( v17 )
        KiUnstackDetachProcess(&v62);
      v37 = Object;
      if ( v59[0] )
        MiFreeEnclaveModules(v59);
      if ( v53 != -1LL )
        ObfDereferenceObjectWithTag(v37, 0x6D566D4Du);
      *v58 = v18 - v16 + 1;
      goto LABEL_49;
    }
    if ( v36 != -1073741267 )
      goto LABEL_68;
  }
  if ( v10 )
    v10 = v18 - v16 + 1;
  if ( (v20[6] & 0x6200000) != 0x4200000
    || (v45 = MiDecommitEnclavePages((_DWORD)Object, (_DWORD)v20, v16, v10, v29), v46 = v45, v45 == -1073741802) )
  {
    v31 = *((_DWORD *)v20 + 12);
    if ( (v20[6] & 0x70) == 0x30
      || (v31 & 0x200000) != 0
      && ((v31 & 0x800000) != 0 || (v31 & 0x180000u) >= 0x100000)
      && ((v31 & 0xA00000) != 0xA00000 || v10 && (((MiGetVadPageSize((__int64)v20) << 12) - 1) & (v16 | (v18 + 1))) != 0)
      || (v32 = *((unsigned int *)v20 + 13),
          LODWORD(v32) = v32 & 0x7FFFFFFF,
          (v32 | ((unsigned __int64)*((unsigned __int8 *)v20 + 34) << 31)) == 0x7FFFFFFFDLL) )
    {
      v38 = -1073741664;
      goto LABEL_125;
    }
    if ( !v10 )
    {
      if ( v57 >> 12 != (*((unsigned int *)v20 + 6) | ((unsigned __int64)*((unsigned __int8 *)v20 + 32) << 32)) )
      {
LABEL_123:
        v38 = -1073741665;
        goto LABEL_125;
      }
      v18 = ((*((unsigned int *)v20 + 7) | ((unsigned __int64)*((unsigned __int8 *)v20 + 33) << 32)) << 12) | 0xFFF;
    }
    v33 = MiDecommitRegion((__int64)v20, v16, v18);
    MiUnlockAndDereferenceVad((char *)v20);
    if ( v33 )
      MiDeleteEmptyPageTables(v16, v18, 0);
    v8 = v60;
    goto LABEL_42;
  }
  if ( v45 >= 0 )
  {
    MiUnlockAndDereferenceVad((char *)v20);
LABEL_42:
    v34 = Object;
    if ( (WORD2(PerfGlobalGroupMask) & 0x8000) != 0 )
      PerfInfoLogVirtualFree(v16, v10, Object);
    if ( v17 )
      KiUnstackDetachProcess(&v62);
    if ( v53 != -1LL )
      ObfDereferenceObjectWithTag(v34, 0x6D566D4Du);
    *v58 = v10;
LABEL_49:
    *v8 = v16;
    return 0LL;
  }
LABEL_68:
  v38 = v46;
LABEL_125:
  MiUnlockAndDereferenceVad((char *)v20);
  if ( v47 )
    UNLOCK_ADDRESS_SPACE_UNORDERED((__int64)CurrentThread, (__int64)Object);
LABEL_128:
  v6 = v53;
  p_Lock = Object;
LABEL_129:
  if ( v17 )
  {
    KiUnstackDetachProcess(&v62);
    p_Lock = Object;
  }
  if ( v6 != -1LL )
    ObfDereferenceObjectWithTag(p_Lock, 0x6D566D4Du);
  return v38;
}
