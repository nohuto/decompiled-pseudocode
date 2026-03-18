/*
 * XREFs of ?CheckExclusiveOwnership@DXGGLOBAL@@QEAAEXZ @ 0x1C01EB970
 * Callers:
 *     DxgkCheckExclusiveOwnership @ 0x1C01EB900 (DxgkCheckExclusiveOwnership.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C000BB70 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000F3FC (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C000F480 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?Release@COREADAPTERACCESS@@QEAAXXZ @ 0x1C000F7D4 (-Release@COREADAPTERACCESS@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002B284 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C03099FC (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 */

__int64 __fastcall DXGGLOBAL::CheckExclusiveOwnership(DXGGLOBAL *this)
{
  struct _KTHREAD **v2; // rbx
  __int64 v3; // rcx
  __int64 v4; // r8
  int v5; // eax
  char *v6; // r14
  char *v7; // rdi
  char *v8; // rbx
  char *v9; // rsi
  signed __int64 v10; // rax
  signed __int64 v11; // rtt
  char v12; // al
  int v13; // eax
  __int64 v14; // r9
  unsigned int v15; // edx
  unsigned int v16; // r8d
  __int64 v17; // r10
  __int64 v18; // rcx
  unsigned int v19; // edx
  __int64 v20; // r10
  __int64 v21; // rcx
  struct DXGADAPTER *v22; // rcx
  struct DXGADAPTER *v23; // rcx
  unsigned __int8 v24; // di
  struct _KTHREAD **v25; // rbx
  int v26; // ecx
  int v27; // ecx
  int v29; // eax
  int v30; // r9d
  struct _KTHREAD **v31; // [rsp+50h] [rbp-B0h]
  char v32; // [rsp+58h] [rbp-A8h]
  _QWORD v33[2]; // [rsp+68h] [rbp-98h] BYREF
  char v34; // [rsp+78h] [rbp-88h]
  char v35; // [rsp+80h] [rbp-80h] BYREF
  char v36; // [rsp+81h] [rbp-7Fh]
  char v37[8]; // [rsp+88h] [rbp-78h] BYREF
  __int64 v38; // [rsp+90h] [rbp-70h]
  struct DXGADAPTER *v39; // [rsp+98h] [rbp-68h]
  char v40; // [rsp+A0h] [rbp-60h]
  __int64 v41; // [rsp+A8h] [rbp-58h]
  char v42[8]; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v43; // [rsp+D0h] [rbp-30h]
  struct DXGADAPTER *v44; // [rsp+D8h] [rbp-28h]
  char v45; // [rsp+E0h] [rbp-20h]
  __int64 v46; // [rsp+E8h] [rbp-18h]

  v31 = (struct _KTHREAD **)((char *)this + 704);
  v32 = 0;
  if ( this == (DXGGLOBAL *)-704LL )
  {
    WdLogSingleEntry1(1LL, 573LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_pMutex != NULL", 573LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( v31[3] == KeGetCurrentThread() )
  {
    WdLogSingleEntry1(1LL, 580LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"!m_pMutex->IsOwner()", 580LL, 0LL, 0LL, 0LL, 0LL);
  }
  v2 = v31;
  KeEnterCriticalRegion();
  if ( v2[3] == KeGetCurrentThread() )
  {
    v29 = *((_DWORD *)v2 + 8);
    if ( v29 <= 0 )
    {
      WdLogSingleEntry1(1LL, 472LL);
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_OwnerAcquireCount > 0", 472LL, 0LL, 0LL, 0LL, 0LL);
      v29 = *((_DWORD *)v2 + 8);
    }
    v5 = v29 + 1;
  }
  else
  {
    if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v2 + 1, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v30 = *((_DWORD *)v2 + 9);
        if ( v30 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
          McTemplateK0q_EtwWriteTransfer(v3, (const EVENT_DESCRIPTOR *)"g", v4, v30);
      }
      _InterlockedIncrement64((volatile signed __int64 *)v2 + 2);
      ExAcquirePushLockExclusiveEx(v2 + 1, 0LL);
    }
    if ( v2[3] )
    {
      WdLogSingleEntry1(1LL, 496LL);
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"NULL == m_OwningThread", 496LL, 0LL, 0LL, 0LL, 0LL);
    }
    if ( *((_DWORD *)v2 + 8) )
    {
      WdLogSingleEntry1(1LL, 497LL);
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"0 == m_OwnerAcquireCount", 497LL, 0LL, 0LL, 0LL, 0LL);
    }
    v2[3] = KeGetCurrentThread();
    v5 = 1;
  }
  *((_DWORD *)v2 + 8) = v5;
  v6 = (char *)this + 800;
  v7 = (char *)*((_QWORD *)this + 100);
  v32 = 1;
  while ( 1 )
  {
    do
    {
      if ( v7 == v6 || !v7 )
      {
        v24 = 0;
        goto LABEL_50;
      }
      v8 = v7;
      v9 = v7;
      v7 = *(char **)v7;
      _m_prefetchw(v8 + 24);
      v10 = *((_QWORD *)v8 + 3);
      if ( v10 )
      {
        while ( 1 )
        {
          v11 = v10;
          v10 = _InterlockedCompareExchange64((volatile signed __int64 *)v8 + 3, v10 + 1, v10);
          if ( v11 == v10 )
            break;
          if ( !v10 )
            goto LABEL_60;
        }
        v12 = 1;
      }
      else
      {
LABEL_60:
        v12 = 0;
      }
    }
    while ( !v12 );
    v36 = 0;
    v39 = (struct DXGADAPTER *)v8;
    v40 = 0;
    v41 = 0LL;
    _InterlockedIncrement64((volatile signed __int64 *)v9 + 3);
    v38 = -1LL;
    v44 = (struct DXGADAPTER *)v8;
    v45 = 0;
    v46 = 0LL;
    _InterlockedIncrement64((volatile signed __int64 *)v9 + 3);
    v43 = -1LL;
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v8 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v8 + 2), (struct DXGADAPTER *)v8);
    if ( *((_QWORD *)v8 + 349) )
      break;
LABEL_33:
    if ( v36 )
      COREADAPTERACCESS::Release((COREADAPTERACCESS *)&v35);
    v22 = v44;
    if ( v44 )
    {
      if ( v45 )
      {
        COREACCESS::Release((COREACCESS *)v42);
        v22 = v44;
      }
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v22 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v22 + 2), v22);
    }
    v23 = v39;
    if ( v39 )
    {
      if ( v40 )
      {
        COREACCESS::Release((COREACCESS *)v37);
        v23 = v39;
      }
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v23 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v23 + 2), v23);
    }
  }
  v33[1] = v8;
  _InterlockedIncrement64((volatile signed __int64 *)v9 + 3);
  v33[0] = -1LL;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v9 + 136, 0LL);
  v13 = *((_DWORD *)v8 + 50);
  v34 = 1;
  if ( v13 != 1 )
  {
LABEL_31:
    ExReleasePushLockSharedEx(v8 + 136, 0LL);
    KeLeaveCriticalRegion();
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v8 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v8 + 2), (struct DXGADAPTER *)v8);
    goto LABEL_33;
  }
  v14 = *((_QWORD *)v8 + 349);
  v15 = 0;
  v16 = *(_DWORD *)(v14 + 96);
  if ( !v16 )
  {
LABEL_27:
    v19 = 0;
    if ( v16 )
    {
      v20 = *(_QWORD *)(v14 + 128);
      while ( 1 )
      {
        v21 = 4000LL * v19;
        if ( *(_QWORD *)(v21 + v20 + 728) )
        {
          if ( *(_DWORD *)(v21 + v20 + 736) == 3 )
            goto LABEL_69;
        }
        if ( ++v19 >= v16 )
          goto LABEL_31;
      }
    }
    goto LABEL_31;
  }
  v17 = *(_QWORD *)(v14 + 128);
  while ( 1 )
  {
    v18 = 4000LL * v15;
    if ( *(_QWORD *)(v18 + v17 + 728) )
    {
      if ( *(_DWORD *)(v18 + v17 + 736) == 2 )
        break;
    }
    if ( ++v15 >= v16 )
      goto LABEL_27;
  }
LABEL_69:
  DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v33);
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)&v35);
  v24 = 1;
LABEL_50:
  if ( v32 )
  {
    v25 = v31;
    v32 = 0;
    if ( v31[3] != KeGetCurrentThread() )
      WdLogSingleEntry5(0LL, 275LL, 4LL, v31, 0LL, 0LL);
    v26 = *((_DWORD *)v25 + 8);
    if ( v26 <= 0 )
    {
      WdLogSingleEntry1(1LL, 516LL);
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_OwnerAcquireCount > 0", 516LL, 0LL, 0LL, 0LL, 0LL);
      v26 = *((_DWORD *)v25 + 8);
    }
    v27 = v26 - 1;
    *((_DWORD *)v25 + 8) = v27;
    if ( !v27 )
    {
      v25[3] = 0LL;
      ExReleasePushLockExclusiveEx(v25 + 1, 0LL);
    }
    KeLeaveCriticalRegion();
  }
  return v24;
}
