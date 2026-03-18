/*
 * XREFs of DxgkAcquireHandleDataCB @ 0x1C01D1D60
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0004FC0 (DxgkLogInternalTriageEvent.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000B020 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000B330 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??0DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ @ 0x1C000B474 (--0DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ.c)
 *     ?SearchDxgThreadList@DXGGLOBAL@@QEAAPEAVDXGPROCESS@@PEAU_ETHREAD@@@Z @ 0x1C00164A0 (-SearchDxgThreadList@DXGGLOBAL@@QEAAPEAVDXGPROCESS@@PEAU_ETHREAD@@@Z.c)
 *     __security_check_cookie @ 0x1C0023E40 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C00240A0 (McTemplateK0q_EtwWriteTransfer.c)
 *     Feature_1344054585__private_IsEnabledDeviceUsage @ 0x1C0025464 (Feature_1344054585__private_IsEnabledDeviceUsage.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01B3460 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DxgkReferenceDxgResource@@YAXPEAVDXGRESOURCE@@@Z @ 0x1C01B622C (-DxgkReferenceDxgResource@@YAXPEAVDXGRESOURCE@@@Z.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1C01CA0D0 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 *     ?DxgkThreadObjectCreateDxgThread@@YAPEAVDXGTHREAD@@_N@Z @ 0x1C03440A8 (-DxgkThreadObjectCreateDxgThread@@YAPEAVDXGTHREAD@@_N@Z.c)
 */

ULONG_PTR __fastcall DxgkAcquireHandleDataCB(unsigned int *a1, struct _EX_RUNDOWN_REF **a2)
{
  __int64 v4; // rcx
  ULONG_PTR Count; // rdi
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  struct DXGPROCESS *v8; // rsi
  struct DXGTHREAD *Current; // rax
  struct DXGPROCESS *v10; // r14
  struct _ETHREAD *CurrentThread; // rbx
  KSPIN_LOCK *Global; // rax
  struct DXGTHREAD *DxgThread; // rbp
  volatile signed __int32 *v14; // rsi
  __int64 v15; // rcx
  __int64 v16; // r8
  int v17; // r9d
  unsigned int v18; // eax
  unsigned int v19; // r15d
  __int64 v20; // rbx
  __int64 v21; // rbx
  int v22; // edx
  __int64 v23; // rdx
  int v24; // ecx
  struct _EX_RUNDOWN_REF *v25; // rbx
  __int64 v26; // r9
  struct DXGPROCESS *v27; // rax
  unsigned int v28; // r14d
  struct DXGPROCESS *v29; // r15
  __int64 v30; // rbx
  __int64 v31; // rbx
  int v32; // ecx
  int v33; // ecx
  __int64 v34; // rbx
  __int64 v35; // r9
  struct DXGTHREAD *v37; // [rsp+50h] [rbp-88h] BYREF
  char v38[8]; // [rsp+58h] [rbp-80h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+60h] [rbp-78h] BYREF

  DXGVALIDATIONPROCESSREATTACH::DXGVALIDATIONPROCESSREATTACH((DXGVALIDATIONPROCESSREATTACH *)v38);
  Count = 0LL;
  if ( !a2 )
  {
    WdLogSingleEntry1(1LL, 170LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"nullptr != pReleaseHandle", 170LL, 0LL, 0LL, 0LL, 0LL);
  }
  CurrentProcess = PsGetCurrentProcess(v4);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v8 = (struct DXGPROCESS *)ProcessDxgProcess;
  if ( ProcessDxgProcess && (*(_DWORD *)(ProcessDxgProcess + 424) & 0x80) == 0 )
    goto LABEL_10;
  Current = DXGTHREAD::GetCurrent();
  if ( !Current )
  {
    CurrentThread = KeGetCurrentThread();
    Global = (KSPIN_LOCK *)DXGGLOBAL::GetGlobal();
    v10 = DXGGLOBAL::SearchDxgThreadList(Global, CurrentThread);
    if ( v10 )
      goto LABEL_11;
    WdLogSingleEntry1(2LL, 2923LL);
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Failed to find DXGPROCESS", 2923LL, 0LL, 0LL, 0LL, 0LL);
    goto LABEL_10;
  }
  v10 = (struct DXGPROCESS *)*((_QWORD *)Current + 3);
  if ( !v10 )
LABEL_10:
    v10 = v8;
LABEL_11:
  v37 = 0LL;
  if ( (int)PsTlsGetValue(g_DxgkThreadTlsId, &v37) >= 0 )
  {
    DxgThread = v37;
    if ( !v37 )
    {
      DxgThread = DxgkThreadObjectCreateDxgThread(1);
      v37 = DxgThread;
    }
  }
  else
  {
    DxgThread = 0LL;
  }
  v14 = (volatile signed __int32 *)((char *)v10 + 248);
  if ( v10 != (struct DXGPROCESS *)-248LL && *((struct _KTHREAD **)v10 + 32) == KeGetCurrentThread() )
  {
    WdLogSingleEntry1(1LL, 1453LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"bAllowAcquireRecursive || pPushLock == NULL || !m_pPushLock->IsExclusiveOwner()",
      1453LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx((char *)v10 + 248, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v17 = *((_DWORD *)v10 + 68);
      if ( v17 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0q_EtwWriteTransfer(v15, &EventBlockThread, v16, v17);
    }
    ExAcquirePushLockSharedEx((char *)v10 + 248, 0LL);
  }
  _InterlockedIncrement((volatile signed __int32 *)v10 + 66);
  v18 = a1[1];
  if ( v18 == 1 )
  {
    v19 = *a1;
    v20 = (*a1 >> 6) & 0xFFFFFF;
    if ( (unsigned int)Feature_1344054585__private_IsEnabledDeviceUsage() )
    {
      if ( (unsigned int)v20 >= *((_DWORD *)v10 + 74) )
        goto LABEL_32;
      v21 = *((_QWORD *)v10 + 35) + 16 * v20;
      v24 = *(_DWORD *)(v21 + 8);
      if ( ((v19 >> 25) & 0x60) != (*(_BYTE *)(v21 + 8) & 0x60) || (v24 & 0x2000) != 0 && (v24 & 0x4000) == 0 )
        goto LABEL_32;
      if ( (*(_DWORD *)(v21 + 8) & 0x1F) != 5 )
        goto LABEL_32;
    }
    else
    {
      if ( (unsigned int)v20 >= *((_DWORD *)v10 + 74) )
        goto LABEL_32;
      v21 = *((_QWORD *)v10 + 35) + 16 * v20;
      if ( ((v19 >> 25) & 0x60) != (*(_BYTE *)(v21 + 8) & 0x60) )
        goto LABEL_32;
      if ( (*(_DWORD *)(v21 + 8) & 0x2000) != 0 )
        goto LABEL_32;
      v22 = *(_DWORD *)(v21 + 8) & 0x1F;
      if ( !v22 )
        goto LABEL_32;
      if ( v22 != 5 )
        goto LABEL_31;
    }
    v25 = *(struct _EX_RUNDOWN_REF **)v21;
    if ( v25 )
    {
      if ( KeGetCurrentIrql() >= 2u )
      {
        v26 = *(_QWORD *)(*(_QWORD *)(v25[1].Count + 16) + 16LL);
        if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v26 + 216) + 64LL) + 40LL) + 28LL) >= 0x2003u )
          WdLogSingleEntry5(0LL, 275LL, 20LL, v26, 0LL, 0LL);
      }
      if ( !ExAcquireRundownProtection(v25 + 11) )
        WdLogSingleEntry5(0LL, 275LL, 38LL, v25, 0LL, 0LL);
      if ( DxgThread )
        ++*((_DWORD *)DxgThread + 12);
      *a2 = v25;
      if ( (a1[2] & 1) != 0 )
        Count = v25[4].Count;
      else
        Count = *(_QWORD *)(v25[6].Count + 16);
      goto LABEL_72;
    }
    goto LABEL_32;
  }
  if ( v18 != 2 )
  {
    v23 = (int)a1[1];
    goto LABEL_71;
  }
  v27 = DXGPROCESS::GetCurrent(v15);
  v28 = *a1;
  v29 = v27;
  v30 = (*a1 >> 6) & 0xFFFFFF;
  if ( (unsigned int)Feature_1344054585__private_IsEnabledDeviceUsage() )
  {
    if ( (unsigned int)v30 >= *((_DWORD *)v29 + 74) )
      goto LABEL_32;
    v31 = *((_QWORD *)v29 + 35) + 16 * v30;
    v33 = *(_DWORD *)(v31 + 8);
    if ( ((v28 >> 25) & 0x60) != (*(_BYTE *)(v31 + 8) & 0x60) || (v33 & 0x2000) != 0 && (v33 & 0x4000) == 0 )
      goto LABEL_32;
    if ( (*(_DWORD *)(v31 + 8) & 0x1F) != 4 )
      goto LABEL_32;
  }
  else
  {
    if ( (unsigned int)v30 >= *((_DWORD *)v29 + 74) )
      goto LABEL_32;
    v31 = *((_QWORD *)v29 + 35) + 16 * v30;
    if ( ((v28 >> 25) & 0x60) != (*(_BYTE *)(v31 + 8) & 0x60) )
      goto LABEL_32;
    if ( (*(_DWORD *)(v31 + 8) & 0x2000) != 0 )
      goto LABEL_32;
    v32 = *(_DWORD *)(v31 + 8) & 0x1F;
    if ( !v32 )
      goto LABEL_32;
    if ( v32 != 4 )
    {
LABEL_31:
      WdLogSingleEntry1(2LL, 316LL);
      DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 316LL, 0LL, 0LL, 0LL, 0LL);
LABEL_32:
      v23 = *a1;
LABEL_71:
      WdLogSingleEntry1(3LL, v23);
LABEL_72:
      _InterlockedDecrement(v14 + 4);
      ExReleasePushLockSharedEx(v14, 0LL);
      KeLeaveCriticalRegion();
      goto LABEL_73;
    }
  }
  v34 = *(_QWORD *)v31;
  if ( !v34 )
    goto LABEL_32;
  if ( KeGetCurrentIrql() >= 2u )
  {
    v35 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v34 + 8) + 16LL) + 16LL);
    if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v35 + 216) + 64LL) + 40LL) + 28LL) >= 0x2003u )
      WdLogSingleEntry5(0LL, 275LL, 20LL, v35, 0LL, 0LL);
  }
  DxgkReferenceDxgResource((struct _EX_RUNDOWN_REF *)v34);
  if ( DxgThread )
    ++*((_DWORD *)DxgThread + 12);
  _InterlockedDecrement(v14 + 4);
  ExReleasePushLockSharedEx(v14, 0LL);
  KeLeaveCriticalRegion();
  DXGFASTMUTEX::Acquire((DXGFASTMUTEX *)(v34 + 80));
  *a2 = (struct _EX_RUNDOWN_REF *)v34;
  Count = *(_QWORD *)(v34 + 56);
  if ( (*(_DWORD *)(v34 + 4) & 1) != 0 )
    Count = *(_QWORD *)(Count + 16);
LABEL_73:
  if ( v38[0] )
    KeUnstackDetachProcess(&ApcState);
  return Count;
}
