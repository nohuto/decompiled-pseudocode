/*
 * XREFs of ?DestroyCoreAllocations@DXGSHAREDRESOURCE@@QEAAXPEAPEAXI@Z @ 0x1C019F020
 * Callers:
 *     ?Destroy@DXGSHAREDRESOURCE@@IEAAXPEAPEAXI@Z @ 0x1C019EFEC (-Destroy@DXGSHAREDRESOURCE@@IEAAXPEAPEAXI@Z.c)
 *     ?Stop@ADAPTER_RENDER@@QEAAXEE@Z @ 0x1C02C49B8 (-Stop@ADAPTER_RENDER@@QEAAXEE@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000C3F8 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000E350 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000E420 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?FreeHandleSafe@DXGPROCESS@@QEAAXI@Z @ 0x1C000ED3C (-FreeHandleSafe@DXGPROCESS@@QEAAXI@Z.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002B284 (McTemplateK0q_EtwWriteTransfer.c)
 *     McTemplateK0pppqxqqqqqqqpppqqqqqqqqqqtpht_EtwWriteTransfer @ 0x1C002BC60 (McTemplateK0pppqxqqqqqqqpppqqqqqqqqqqtpht_EtwWriteTransfer.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0186AA0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DdiDestroyAllocation@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_DESTROYALLOCATION@@E@Z @ 0x1C018B750 (-DdiDestroyAllocation@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_DESTROYALLOCATION@@E@Z.c)
 *     ?FreeHandle@HMGRTABLE@@QEAAXI@Z @ 0x1C019D5A0 (-FreeHandle@HMGRTABLE@@QEAAXI@Z.c)
 */

void __fastcall DXGSHAREDRESOURCE::DestroyCoreAllocations(DXGSHAREDRESOURCE *this, void **a2, unsigned int a3)
{
  char *v4; // r14
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  int v9; // eax
  struct DXGGLOBAL *Global; // rax
  struct DXGGLOBAL *v11; // r15
  unsigned int v12; // r12d
  _QWORD *v13; // rsi
  UINT v14; // r15d
  unsigned int v15; // r12d
  _QWORD *v16; // rdx
  __int64 v17; // r9
  void *v18; // rdx
  const HANDLE *v19; // rax
  ADAPTER_RENDER *v20; // rcx
  int v21; // r9d
  struct DXGPROCESS *Current; // rax
  int v23; // ecx
  DXGPROCESS *v24; // rcx
  __int64 v25; // rcx
  int v26; // [rsp+40h] [rbp-140h]
  int v27; // [rsp+48h] [rbp-138h]
  int v28; // [rsp+50h] [rbp-130h]
  int v29; // [rsp+60h] [rbp-120h]
  int v30; // [rsp+68h] [rbp-118h]
  int v31; // [rsp+70h] [rbp-110h]
  int v32; // [rsp+78h] [rbp-108h]
  int v33; // [rsp+88h] [rbp-F8h]
  int v34; // [rsp+E0h] [rbp-A0h]
  int v35; // [rsp+E8h] [rbp-98h]
  DXGFASTMUTEX *v36; // [rsp+100h] [rbp-80h] BYREF
  char v37; // [rsp+108h] [rbp-78h]
  struct _DXGKARG_DESTROYALLOCATION v38; // [rsp+110h] [rbp-70h] BYREF
  unsigned int v39; // [rsp+170h] [rbp-10h]
  void **v40; // [rsp+178h] [rbp-8h]

  v40 = (void **)*((_QWORD *)this + 21);
  if ( a2 && a3 >= *((_DWORD *)this + 33) )
  {
    v40 = a2;
  }
  else if ( !*((_QWORD *)this + 21) )
  {
    WdLogSingleEntry1(1LL, 12742LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pDestructionBuffer is NULL!", 12742LL, 0LL, 0LL, 0LL, 0LL);
    return;
  }
  v4 = (char *)this + 32;
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v4, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v21 = *((_DWORD *)v4 + 6);
      if ( v21 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0q_EtwWriteTransfer(v6, (const EVENT_DESCRIPTOR *)"g", v7, v21);
    }
    ExAcquirePushLockExclusiveEx(v4, 0LL);
  }
  *((_QWORD *)v4 + 1) = KeGetCurrentThread();
  if ( *((_DWORD *)this + 6) )
  {
    v9 = *((_DWORD *)this + 3);
    if ( (v9 & 8) != 0 )
    {
      WdLogSingleEntry1(1LL, 12750LL);
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"!m_NtSecuritySharing", 12750LL, 0LL, 0LL, 0LL, 0LL);
      v9 = *((_DWORD *)this + 3);
    }
    if ( (v9 & 0x2000) != 0 )
    {
      Current = DXGPROCESS::GetCurrent(v6, v5, v7, v8);
      if ( Current )
      {
        v23 = *((_DWORD *)Current + 106);
        if ( (v23 & 0x180) != 0 )
        {
          if ( (v23 & 0x100) != 0 )
            v24 = (DXGPROCESS *)*((_QWORD *)Current + 76);
          else
            v24 = (DXGPROCESS *)((unsigned __int64)Current & -(__int64)((v23 & 0x80u) != 0));
          DXGPROCESS::FreeHandleSafe(v24, *((_DWORD *)this + 6));
        }
      }
    }
    else
    {
      Global = DXGGLOBAL_GetGlobal();
      DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)&v36, (struct DXGGLOBAL *)((char *)Global + 288), 0);
      if ( v37 )
        WdLogSingleEntry5(0LL, 275LL, 4LL, &v36, 0LL, 0LL);
      DXGFASTMUTEX::Acquire(v36);
      v37 = 1;
      v11 = DXGGLOBAL_GetGlobal();
      v12 = *((_DWORD *)this + 6);
      if ( *((struct _KTHREAD **)v11 + 39) != KeGetCurrentThread() )
      {
        WdLogSingleEntry1(1LL, 1440LL);
        DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_ShareMutex.IsOwner()", 1440LL, 0LL, 0LL, 0LL, 0LL);
      }
      HMGRTABLE::FreeHandle((struct DXGGLOBAL *)((char *)v11 + 336), v12);
      if ( v37 )
      {
        v37 = 0;
        DXGFASTMUTEX::Release((struct _KTHREAD **)v36);
      }
    }
    *((_DWORD *)this + 6) = 0;
  }
  if ( (*((_DWORD *)this + 3) & 8) != 0 && *((_DWORD *)this + 7) )
  {
    WdLogSingleEntry1(1LL, 12775LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"NULL == m_hHostGlobalHandle", 12775LL, 0LL, 0LL, 0LL, 0LL);
  }
  v13 = (_QWORD *)*((_QWORD *)this + 17);
  LOBYTE(v7) = 0;
  v14 = 0;
  v15 = 0;
  LOBYTE(v39) = 0;
  if ( !*((_DWORD *)this + 33) )
    goto LABEL_52;
  do
  {
    v16 = (_QWORD *)*((_QWORD *)this + 10);
    v17 = v16[2];
    if ( !*(_BYTE *)(v17 + 209) )
    {
      if ( !*(v13 - 5) )
        goto LABEL_23;
      (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)(v16[81] + 8LL) + 136LL))(0LL, v16[82], *(v13 - 5));
      *(v13 - 5) = 0LL;
      goto LABEL_22;
    }
    if ( bTracingEnabled )
    {
      v25 = *((_DWORD *)v13 - 11) >> 21;
      LOWORD(v25) = v25 & 0x3F;
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x800) != 0 )
      {
        McTemplateK0pppqxqqqqqqqpppqqqqqqqqqqtpht_EtwWriteTransfer(
          v25,
          &EventDestroyAdapterAllocation,
          v7,
          0LL,
          0,
          v17,
          0,
          v13[8],
          v26,
          v27,
          v28,
          0,
          v29,
          v30,
          v31,
          v32,
          (_BYTE)v13 - 48,
          v33,
          0,
          0,
          0,
          0,
          0,
          0,
          0,
          0,
          0,
          0,
          v34,
          v35,
          v25,
          0);
LABEL_22:
        LOBYTE(v7) = v39;
      }
    }
LABEL_23:
    v7 = (unsigned __int8)v7;
    if ( (*((_BYTE *)v13 - 44) & 2) != 0 )
      v7 = 1LL;
    v39 = v7;
    v40[v15] = (void *)*(v13 - 4);
    if ( *(v13 - 4) )
    {
      if ( v14 != v15 )
      {
        WdLogSingleEntry1(1LL, 12837LL);
        DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"NumDriverHandles == i", 12837LL, 0LL, 0LL, 0LL, 0LL);
        v7 = v39;
      }
      ++v14;
    }
    *(v13 - 4) = 0LL;
    ++v15;
    v13 = (_QWORD *)*v13;
  }
  while ( v15 < *((_DWORD *)this + 33) );
  v4 = (char *)this + 32;
  if ( v14 )
    goto LABEL_31;
LABEL_52:
  if ( *((_QWORD *)this + 2) )
  {
LABEL_31:
    v18 = (void *)*((_QWORD *)this + 2);
    *(_QWORD *)(&v38.NumAllocations + 1) = 0LL;
    HIDWORD(v38.pAllocationList) = 0;
    *((_DWORD *)&v38.Flags + 1) = 0;
    v38.hResource = v18;
    v38.NumAllocations = v14;
    v19 = 0LL;
    v38.Flags.Value = v18 != 0LL;
    v20 = (ADAPTER_RENDER *)*((_QWORD *)this + 10);
    if ( v14 )
      v19 = v40;
    v38.pAllocationList = v19;
    ADAPTER_RENDER::DdiDestroyAllocation(v20, &v38, v7);
    *((_QWORD *)this + 2) = 0LL;
  }
  *((_DWORD *)this + 33) = 0;
  *((_QWORD *)v4 + 1) = 0LL;
  ExReleasePushLockExclusiveEx(v4, 0LL);
  KeLeaveCriticalRegion();
}
