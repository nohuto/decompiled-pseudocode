/*
 * XREFs of ?AcquireSync@DXGKEYEDMUTEX@@SAJI_KHPEAT_LARGE_INTEGER@@PEA_KPEAXI2_N@Z @ 0x1C033E6E8
 * Callers:
 *     ?AcquireCPU@DXGDXGIKEYEDMUTEX@@QEAAJ_KHPEAT_LARGE_INTEGER@@PEAVDXGCONTEXT@@W4_OUTPUTDUPL_MUTEX_TYPE@@@Z @ 0x1C031F1CC (-AcquireCPU@DXGDXGIKEYEDMUTEX@@QEAAJ_KHPEAT_LARGE_INTEGER@@PEAVDXGCONTEXT@@W4_OUTPUTDUPL_MUTEX_T.c)
 *     DxgkAcquireKeyedMutex @ 0x1C0341D80 (DxgkAcquireKeyedMutex.c)
 *     DxgkAcquireKeyedMutex2 @ 0x1C0342090 (DxgkAcquireKeyedMutex2.c)
 *     ?VmBusAcquireKeyedMutexSync@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C03669B0 (-VmBusAcquireKeyedMutexSync@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000F574 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000F5FC (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C002B250 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??0DXGKEYEDMUTEXLOCK@@QEAA@PEAVDXGKEYEDMUTEX@@@Z @ 0x1C002C8B8 (--0DXGKEYEDMUTEXLOCK@@QEAA@PEAVDXGKEYEDMUTEX@@@Z.c)
 *     memmove @ 0x1C002CD00 (memmove.c)
 *     memset @ 0x1C002CFC0 (memset.c)
 *     ?ReleaseReference@DXGKEYEDMUTEX@@QEAAXXZ @ 0x1C005591C (-ReleaseReference@DXGKEYEDMUTEX@@QEAAXXZ.c)
 *     ??0DXGKEYEDMUTEXBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGKEYEDMUTEX@@@Z @ 0x1C00598B8 (--0DXGKEYEDMUTEXBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGKEYEDMUTEX@@@Z.c)
 *     ?IsOwner@DXGKEYEDMUTEX@@QEAAEI@Z @ 0x1C0059A58 (-IsOwner@DXGKEYEDMUTEX@@QEAAEI@Z.c)
 *     ?IsSameWaiter@DXGKEYEDMUTEX@@SAEIPEAUDXGKEYEDMUTEXWAITER@@@Z @ 0x1C0059A98 (-IsSameWaiter@DXGKEYEDMUTEX@@SAEIPEAUDXGKEYEDMUTEXWAITER@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0186AA0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?VmBusSendAcquireKeyedMutexSync@DXG_GUEST_GLOBAL_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGKEYEDMUTEX@@I_KHPEAT_LARGE_INTEGER@@PEA_K4@Z @ 0x1C0373A04 (-VmBusSendAcquireKeyedMutexSync@DXG_GUEST_GLOBAL_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGKEYEDMUTEX@@.c)
 */

__int64 __fastcall DXGKEYEDMUTEX::AcquireSync(
        __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        union _LARGE_INTEGER *a4,
        DXGKEYEDMUTEX *a5,
        void *a6,
        size_t Size,
        unsigned __int64 *a8,
        bool a9)
{
  __int64 v9; // rsi
  unsigned __int64 *v10; // r12
  unsigned int v11; // ebx
  struct DXGPROCESS *Current; // r13
  struct DXGKEYEDMUTEX *v13; // rdi
  void *v14; // r15
  unsigned int v15; // r14d
  unsigned int v16; // eax
  struct DXGGLOBAL *Global; // rax
  struct _LIST_ENTRY **p_Blink; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  int v22; // eax
  struct _LIST_ENTRY *Flink; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  struct _LIST_ENTRY ***v28; // rcx
  volatile unsigned int Lock; // r13d
  struct _LIST_ENTRY *v30; // rax
  struct _LIST_ENTRY *Blink; // rcx
  int v32; // eax
  unsigned __int64 *v33; // rcx
  const void *v34; // rdx
  ULONG64 v35; // r9
  struct DXGKEYEDMUTEX *v36; // [rsp+50h] [rbp-A8h] BYREF
  _BYTE v37[24]; // [rsp+58h] [rbp-A0h] BYREF
  struct _KEVENT v38[5]; // [rsp+70h] [rbp-88h] BYREF
  int v40; // [rsp+110h] [rbp+18h]

  v40 = a3;
  v9 = (unsigned int)a1;
  v10 = (unsigned __int64 *)a5;
  if ( !a5 )
  {
    WdLogSingleEntry1(1LL, 4065LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pFenceValue", 4065LL, 0LL, 0LL, 0LL, 0LL);
  }
  *v10 = 0LL;
  v11 = 0;
  Current = DXGPROCESS::GetCurrent(a1, a2, a3, (__int64)a4);
  v36 = 0LL;
  DXGKEYEDMUTEXBYHANDLE::DXGKEYEDMUTEXBYHANDLE((DXGKEYEDMUTEXBYHANDLE *)&a5, v9, Current, &v36);
  v13 = v36;
  if ( !v36 )
  {
    WdLogSingleEntry2(3LL, v9, -1073741811LL);
LABEL_20:
    if ( a5 )
      DXGKEYEDMUTEX::ReleaseReference(a5);
    return 3221225485LL;
  }
  DXGKEYEDMUTEXLOCK::DXGKEYEDMUTEXLOCK((DXGKEYEDMUTEXLOCK *)v37, v36);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v37);
  v14 = a6;
  if ( a6 )
  {
    v15 = Size;
    if ( !(_DWORD)Size )
    {
      WdLogSingleEntry2(3LL, v13, -1073741811LL);
      goto LABEL_19;
    }
    v16 = *((_DWORD *)v13 + 42);
    if ( (_DWORD)Size != v16 )
    {
      WdLogSingleEntry4(3LL, v13, (unsigned int)Size, v16, -1073741811LL);
      goto LABEL_19;
    }
  }
  else
  {
    v15 = Size;
    if ( (_DWORD)Size )
    {
      WdLogSingleEntry1((unsigned int)((_DWORD)a6 + 3), -1073741811LL);
LABEL_19:
      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v37);
      goto LABEL_20;
    }
  }
  if ( *((_BYTE *)v13 + 176) )
  {
    Global = DXGGLOBAL_GetGlobal();
    v11 = DXG_GUEST_GLOBAL_VMBUS::VmBusSendAcquireKeyedMutexSync(
            *((DXG_GUEST_GLOBAL_VMBUS **)Global + 218),
            Current,
            v13,
            v9,
            a2,
            v40,
            a4,
            v10,
            a8);
LABEL_52:
    if ( v14 )
    {
      if ( a9 )
      {
        v34 = (const void *)*((_QWORD *)v13 + 20);
        v35 = (ULONG64)v14 + v15;
        if ( v35 > MmUserProbeAddress || v35 <= (unsigned __int64)v14 )
          *(_BYTE *)MmUserProbeAddress = 0;
        memmove(v14, v34, v15);
      }
      else
      {
        memmove(v14, *((const void **)v13 + 20), v15);
      }
    }
LABEL_39:
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v37);
    if ( a5 )
      DXGKEYEDMUTEX::ReleaseReference(a5);
    return v11;
  }
  if ( *((_DWORD *)v13 + 14) != 3 )
  {
    if ( DXGKEYEDMUTEX::IsOwner(v13, v9)
      || *((_DWORD *)v13 + 14) == 2 && DXGKEYEDMUTEX::IsSameWaiter(v9, *((struct DXGPROCESS ***)v13 + 11)) )
    {
      WdLogSingleEntry3(2LL, -1073741811LL, v13, v9);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Keyed mutex does not support recursive Acquire's, returning 0x%I64x, pKeyedMutex  = 0x%I64x, hKeyedMutex = 0x%I64x",
        -1073741811LL,
        (__int64)v13,
        v9,
        0LL,
        0LL);
      goto LABEL_19;
    }
    v22 = *((_DWORD *)v13 + 14);
    if ( (v22 & 0xFFFFFFFD) != 0 && (v22 != 1 || a2 == *((_QWORD *)v13 + 9) || v40) )
    {
      Flink = (struct _LIST_ENTRY *)*((_QWORD *)v13 + 10);
LABEL_47:
      *v10 = (unsigned __int64)Flink;
      v33 = a8;
      if ( a8 )
        *a8 = *((_QWORD *)v13 + 9);
      if ( (unsigned int)(*((_DWORD *)v13 + 14) - 1) > 1 )
      {
        WdLogSingleEntry1(1LL, 4242LL);
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"(pKeyedMutex->m_OwnershipState == STATE_EVENT_SIGNALLED) || (pKeyedMutex->m_OwnershipState == STATE_PENDING_RELEASE)",
          4242LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      *((_DWORD *)v13 + 14) = 0;
      *((_DWORD *)v13 + 15) = v9;
      *((_QWORD *)v13 + 8) = DXGPROCESS::GetCurrent((__int64)v33, (__int64)p_Blink, v19, v20);
      *((_QWORD *)v13 + 11) = 0LL;
      goto LABEL_52;
    }
    memset(v38, 0, 0x50uLL);
    LODWORD(v38[0].Header.WaitListHead.Flink) = v9;
    v38[0].Header.WaitListHead.Blink = (struct _LIST_ENTRY *)DXGPROCESS::GetCurrent(v25, v24, v26, v27);
    *(_QWORD *)&v38[0].Header.Lock = a2;
    v38[2].Header.LockNV = 0;
    KeInitializeEvent(&v38[1], NotificationEvent, 0);
    v28 = (struct _LIST_ENTRY ***)*((_QWORD *)v13 + 13);
    if ( *v28 != (struct _LIST_ENTRY **)((char *)v13 + 96) )
      goto LABEL_59;
    v38[2].Header.WaitListHead.Blink = (struct _LIST_ENTRY *)((char *)v13 + 96);
    *(_QWORD *)&v38[3].Header.Lock = v28;
    *v28 = &v38[2].Header.WaitListHead.Blink;
    *((_QWORD *)v13 + 13) = &v38[2].Header.WaitListHead.Blink;
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v37);
    v11 = KeWaitForSingleObject(&v38[1], Executive, 0, 1u, a4);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v37);
    Lock = v38[2].Header.Lock;
    if ( v38[2].Header.LockNV )
    {
      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v37);
      if ( a5 )
        DXGKEYEDMUTEX::ReleaseReference(a5);
      return Lock;
    }
    v30 = *(struct _LIST_ENTRY **)&v38[3].Header.Lock;
    Blink = v38[2].Header.WaitListHead.Blink;
    if ( (struct _LIST_ENTRY **)v38[2].Header.WaitListHead.Blink->Blink != &v38[2].Header.WaitListHead.Blink
      || (p_Blink = &v38[2].Header.WaitListHead.Blink,
          **(struct _KEVENT ***)&v38[3].Header.Lock != (struct _KEVENT *)&v38[2].Header.WaitListHead.Blink) )
    {
LABEL_59:
      __fastfail(3u);
    }
    **(_QWORD **)&v38[3].Header.Lock = v38[2].Header.WaitListHead.Blink;
    Blink->Blink = v30;
    v32 = *((_DWORD *)v13 + 14);
    if ( v32 == 2 && *((struct _KEVENT **)v13 + 11) == v38 )
      v11 = 0;
    if ( v11 )
      goto LABEL_39;
    if ( v32 != 3 )
    {
      Flink = v38[2].Header.WaitListHead.Flink;
      goto LABEL_47;
    }
  }
  WdLogSingleEntry2(3LL, v13, 128LL);
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v37);
  if ( a5 )
    DXGKEYEDMUTEX::ReleaseReference(a5);
  return 128LL;
}
