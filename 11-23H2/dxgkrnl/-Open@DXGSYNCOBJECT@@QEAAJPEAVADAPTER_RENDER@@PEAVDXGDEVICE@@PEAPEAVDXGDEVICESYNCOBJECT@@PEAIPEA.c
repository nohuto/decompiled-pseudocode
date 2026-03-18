/*
 * XREFs of ?Open@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEAPEAXPEA_KIPEAPEAVDXGADAPTERSYNCOBJECT@@_NU_D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS@@@Z @ 0x1C01B2C5C
 * Callers:
 *     ?OpenSyncObject@DXGGLOBAL@@QEAAJIPEAPEAVDXGSYNCOBJECT@@PEAIPEAPEAVDXGADAPTERSYNCOBJECT@@@Z @ 0x1C016C28C (-OpenSyncObject@DXGGLOBAL@@QEAAJIPEAPEAVDXGSYNCOBJECT@@PEAIPEAPEAVDXGADAPTERSYNCOBJECT@@@Z.c)
 *     DxgkOpenResourceFromNtHandleInternal @ 0x1C01A3FC0 (DxgkOpenResourceFromNtHandleInternal.c)
 *     ?CreateSyncObject@DXGGLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@IPEAU_D3DDDI_SYNCHRONIZATIONOBJECTINFO2@@U_VIDSCH_SYNC_OBJECT_CLIENTHINT@@_NPEAVDXGPAGINGQUEUE@@PEAPEAVDXGSYNCOBJECT@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEAPEAVDXGADAPTERSYNCOBJECT@@@Z @ 0x1C01A6A78 (-CreateSyncObject@DXGGLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@IPEAU_D3DDDI_SYNCHRONIZATIO.c)
 *     ?DxgkOpenSyncObjectFromNtHandle2Impl@@YAJPEAU_D3DKMT_OPENSYNCOBJECTFROMNTHANDLE2@@EEEPEAX@Z @ 0x1C01ED178 (-DxgkOpenSyncObjectFromNtHandle2Impl@@YAJPEAU_D3DKMT_OPENSYNCOBJECTFROMNTHANDLE2@@EEEPEAX@Z.c)
 *     DxgkOpenSyncObjectFromNtHandle @ 0x1C0328E60 (DxgkOpenSyncObjectFromNtHandle.c)
 *     ?OpenForDevice@DXGDXGIKEYEDMUTEX@@QEAAJPEAVDXGDEVICE@@@Z @ 0x1C032D03C (-OpenForDevice@DXGDXGIKEYEDMUTEX@@QEAAJPEAVDXGDEVICE@@@Z.c)
 *     ?VmBusOpenSyncObject@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0382800 (-VmBusOpenSyncObject@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ?FreeHandleSafe@DXGPROCESS@@QEAAXI@Z @ 0x1C000481C (-FreeHandleSafe@DXGPROCESS@@QEAAXI@Z.c)
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0004D78 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0004FC0 (DxgkLogInternalTriageEvent.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0007B4C (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0008468 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000AFB0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000B020 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000B330 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??1DXGSYNCOBJECTMUTEX@@QEAA@XZ @ 0x1C0015690 (--1DXGSYNCOBJECTMUTEX@@QEAA@XZ.c)
 *     ?IsSyncObjectLockSharedOwner@DXGGLOBAL@@QEBAEXZ @ 0x1C0016440 (-IsSyncObjectLockSharedOwner@DXGGLOBAL@@QEBAEXZ.c)
 *     ?AddReference@DXGSYNCOBJECT@@QEAAJXZ @ 0x1C002623C (-AddReference@DXGSYNCOBJECT@@QEAAJXZ.c)
 *     Feature_1999418683__private_IsEnabledDeviceUsage @ 0x1C0026298 (Feature_1999418683__private_IsEnabledDeviceUsage.c)
 *     ??_GDXGDEVICESYNCOBJECT@@QEAAPEAXI@Z @ 0x1C00487F0 (--_GDXGDEVICESYNCOBJECT@@QEAAPEAXI@Z.c)
 *     ??0DXGDEVICESYNCOBJECT@@QEAA@PEAVDXGDEVICE@@_N1@Z @ 0x1C01A5970 (--0DXGDEVICESYNCOBJECT@@QEAA@PEAVDXGDEVICE@@_N1@Z.c)
 *     ?Initialize@DXGDEVICESYNCOBJECT@@QEAAJPEAVDXGSYNCOBJECT@@U_D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS@@I@Z @ 0x1C01A6F98 (-Initialize@DXGDEVICESYNCOBJECT@@QEAAJPEAVDXGSYNCOBJECT@@U_D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS@@I.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01B3460 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z @ 0x1C01B3D00 (-AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z.c)
 *     ?GetDxgAdapterSyncObject@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAPEAVDXGADAPTERSYNCOBJECT@@@Z @ 0x1C01DEF28 (-GetDxgAdapterSyncObject@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAPEAVDXGADAPTERSYNCOBJECT@@@Z.c)
 *     ?DetachGlobalSyncObjectOnError@DXGDEVICESYNCOBJECT@@QEAAXXZ @ 0x1C03547B0 (-DetachGlobalSyncObjectOnError@DXGDEVICESYNCOBJECT@@QEAAXXZ.c)
 *     ?VmBusSendOpenSyncObject@DXG_GUEST_GLOBAL_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@IPEAVDXGSYNCOBJECT@@PEAVDXGDEVICESYNCOBJECT@@IU_D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS@@@Z @ 0x1C038C0EC (-VmBusSendOpenSyncObject@DXG_GUEST_GLOBAL_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@IPEAVDXGSYN.c)
 */

__int64 __fastcall DXGSYNCOBJECT::Open(
        DXGSYNCOBJECT *this,
        struct ADAPTER_RENDER *a2,
        struct DXGDEVICE *a3,
        struct DXGDEVICESYNCOBJECT **a4,
        unsigned int *a5,
        void **a6,
        unsigned __int64 *a7,
        unsigned int a8,
        struct DXGADAPTERSYNCOBJECT **a9,
        char a10,
        struct _D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS a11)
{
  int DxgAdapterSyncObject; // esi
  struct DXGADAPTERSYNCOBJECT *v16; // rsi
  struct _D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS::$3C5DE337AE066ABB2671F6BD60EC95FB::$363714554E8B1FDEDD2ECFF06774C94E v17; // ebx
  int v18; // ecx
  int v19; // eax
  unsigned int *v20; // rsi
  PERESOURCE *v21; // rax
  _QWORD *v22; // r14
  unsigned int v23; // eax
  unsigned int v24; // edx
  __int64 v25; // rax
  int v26; // r8d
  struct DXGGLOBAL *v27; // rax
  int v28; // ebx
  struct DXGPROCESS *v29; // rax
  unsigned int v30; // ecx
  DXGDEVICESYNCOBJECT *Pool2; // rax
  unsigned int *v32; // r12
  DXGDEVICESYNCOBJECT *v33; // rax
  DXGDEVICESYNCOBJECT *v34; // r14
  unsigned int v35; // r13d
  struct DXGSYNCOBJECT *v36; // rsi
  struct DXGGLOBAL *Global; // rax
  struct DXGPROCESS *v38; // rax
  struct DXGPROCESS *Current; // [rsp+50h] [rbp-30h]
  DXGFASTMUTEX *v41; // [rsp+58h] [rbp-28h] BYREF
  char v42; // [rsp+60h] [rbp-20h]
  _BYTE v43[24]; // [rsp+68h] [rbp-18h] BYREF
  struct DXGADAPTERSYNCOBJECT *v44; // [rsp+C0h] [rbp+40h] BYREF
  struct DXGDEVICE *v45; // [rsp+D0h] [rbp+50h]

  v45 = a3;
  Current = DXGPROCESS::GetCurrent();
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)&v41, (DXGSYNCOBJECT *)((char *)this + 32), 0);
  if ( v42 )
    WdLogSingleEntry5(0LL, 275LL, 4LL, &v41, 0LL, 0LL);
  DXGFASTMUTEX::Acquire(v41);
  v42 = 1;
  v44 = 0LL;
  DxgAdapterSyncObject = DXGSYNCOBJECT::GetDxgAdapterSyncObject(this, a2, &v44);
  if ( DxgAdapterSyncObject >= 0 || !a2 )
  {
    v16 = v44;
    if ( a9 )
      *a9 = v44;
    v17 = a11.0;
    if ( ((*((_BYTE *)this + 204) ^ *(_BYTE *)&a11.0) & 0x80u) != 0 )
    {
      WdLogSingleEntry1(2LL, 2276LL);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"When opening a synchronization object, the NoGPUAccess flag specified at open time must match the flag "
                  "specified at creation time.",
        2276LL,
        0LL,
        0LL,
        0LL,
        0LL);
      DxgAdapterSyncObject = -1073741811;
      goto LABEL_64;
    }
    if ( !v42 )
      WdLogSingleEntry5(0LL, 275LL, 4LL, &v41, 0LL, 0LL);
    v42 = 0;
    DXGFASTMUTEX::Release((struct _KTHREAD **)v41);
    if ( v16 && *((_BYTE *)v16 + 25) )
    {
      DxgAdapterSyncObject = -1073741823;
      WdLogSingleEntry2(4LL, this, -1073741823LL);
      goto LABEL_64;
    }
    v18 = *((_DWORD *)this + 71);
    if ( (v18 & 0x10) != 0 && (*((_DWORD *)Current + 106) & 0x180) == 0 && (v18 & 0x20) == 0 )
    {
      WdLogSingleEntry2(3LL, this, -1073741790LL);
      DxgAdapterSyncObject = -1073741823;
      goto LABEL_64;
    }
    if ( (unsigned int)(*((_DWORD *)this + 50) - 5) <= 1 )
    {
      if ( !a3 || !a2 )
      {
        WdLogSingleEntry1(1LL, 2316LL);
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"pDevice != NULL && pRenderCore != NULL",
          2316LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      Pool2 = (DXGDEVICESYNCOBJECT *)ExAllocatePool2(257LL, 96LL, 1265072196LL);
      if ( Pool2
        && (v32 = a5, v33 = DXGDEVICESYNCOBJECT::DXGDEVICESYNCOBJECT(Pool2, v45, a10, a5 != 0LL), (v34 = v33) != 0LL) )
      {
        v35 = a8;
        DxgAdapterSyncObject = DXGDEVICESYNCOBJECT::Initialize(
                                 v33,
                                 this,
                                 (struct _D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS)v17,
                                 a8);
        if ( DxgAdapterSyncObject >= 0 )
        {
          v36 = (struct DXGSYNCOBJECT *)*((_QWORD *)v34 + 4);
          if ( (*((_DWORD *)v36 + 71) & 2) == 0
            || *((_DWORD *)this + 6) <= 1u
            || (Global = DXGGLOBAL::GetGlobal(),
                DxgAdapterSyncObject = DXG_GUEST_GLOBAL_VMBUS::VmBusSendOpenSyncObject(
                                         *((DXG_GUEST_GLOBAL_VMBUS **)Global + 214),
                                         Current,
                                         v45,
                                         0,
                                         v36,
                                         v34,
                                         v35,
                                         (struct _D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS)v17),
                DxgAdapterSyncObject >= 0) )
          {
            if ( v32 )
              *v32 = *((_DWORD *)v34 + 10);
            *a6 = (void *)*((_QWORD *)v34 + 7);
            *a7 = *((_QWORD *)v34 + 6);
            v38 = DXGPROCESS::GetCurrent();
            WdLogSingleEntry3(4LL, this, *((unsigned int *)v34 + 10), v38);
            if ( a4 )
              *a4 = v34;
            DxgAdapterSyncObject = 0;
            goto LABEL_64;
          }
        }
        DXGDEVICESYNCOBJECT::DetachGlobalSyncObjectOnError(v34);
        DXGDEVICESYNCOBJECT::`scalar deleting destructor'(v34);
      }
      else
      {
        DxgAdapterSyncObject = -1073741801;
        WdLogSingleEntry2(6LL, this, -1073741801LL);
        DxgkLogInternalTriageEvent(
          0LL,
          262145,
          -1,
          (__int64)L"pSyncObject 0x%I64x: Failed to allocate device sync object, returning 0x%I64x",
          (__int64)this,
          -1073741801LL,
          0LL,
          0LL,
          0LL);
      }
      if ( a4 )
        *a4 = 0LL;
    }
    else
    {
      if ( (unsigned int)Feature_1999418683__private_IsEnabledDeviceUsage() )
      {
        v19 = DXGSYNCOBJECT::AddReference(this);
        DxgAdapterSyncObject = v19;
        if ( v19 < 0 )
        {
          WdLogSingleEntry2(3LL, this, v19);
          goto LABEL_64;
        }
      }
      v20 = a5;
      if ( !a5 )
        goto LABEL_67;
      v21 = (PERESOURCE *)DXGGLOBAL::GetGlobal();
      if ( !DXGGLOBAL::IsSyncObjectLockSharedOwner(v21) )
      {
        WdLogSingleEntry1(1LL, 2438LL);
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"DXGGLOBAL::GetGlobal()->IsSyncObjectLockSharedOwner()",
          2438LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v43, Current);
      v22 = (_QWORD *)((char *)Current + 280);
      v23 = HMGRTABLE::AllocHandle((char *)Current + 280, this, 8LL, 0LL, 0);
      *v20 = v23;
      v24 = v23;
      if ( !v23 )
      {
        DxgAdapterSyncObject = -1073741801;
        WdLogSingleEntry2(6LL, this, -1073741801LL);
        DxgkLogInternalTriageEvent(
          0LL,
          262145,
          -1,
          (__int64)L"pSyncObject 0x%I64x: Fail to allocate per process handle, returning 0x%I64x",
          (__int64)this,
          -1073741801LL,
          0LL,
          0LL,
          0LL);
        if ( (unsigned int)Feature_1999418683__private_IsEnabledDeviceUsage() )
          _InterlockedDecrement((volatile signed __int32 *)this + 6);
        DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v43);
        goto LABEL_64;
      }
      v25 = (v23 >> 6) & 0xFFFFFF;
      if ( (unsigned int)v25 < *((_DWORD *)Current + 74) )
      {
        v26 = *(_DWORD *)(*v22 + 16 * v25 + 8);
        if ( ((v24 >> 25) & 0x60) == (*(_BYTE *)(*v22 + 16 * v25 + 8) & 0x60)
          && (v26 & 0x2000) == 0
          && (v26 & 0x1F) != 0 )
        {
          *(_DWORD *)(*v22 + 16 * (((unsigned __int64)v24 >> 6) & 0xFFFFFF) + 8) |= 0x2000u;
        }
      }
      DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v43);
      if ( (*((_DWORD *)this + 71) & 2) != 0
        && *((_DWORD *)this + 6) > (unsigned int)((unsigned int)Feature_1999418683__private_IsEnabledDeviceUsage() != 0)
        && (v27 = DXGGLOBAL::GetGlobal(),
            v28 = DXG_GUEST_GLOBAL_VMBUS::VmBusSendOpenSyncObject(
                    *((DXG_GUEST_GLOBAL_VMBUS **)v27 + 214),
                    Current,
                    0LL,
                    *v20,
                    this,
                    0LL,
                    0,
                    (struct _D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS)v17),
            v28 < 0) )
      {
        DXGPROCESS::FreeHandleSafe(Current, *v20);
        *v20 = 0;
        if ( (unsigned int)Feature_1999418683__private_IsEnabledDeviceUsage() )
          _InterlockedDecrement((volatile signed __int32 *)this + 6);
        DxgAdapterSyncObject = v28;
      }
      else
      {
LABEL_67:
        if ( !(unsigned int)Feature_1999418683__private_IsEnabledDeviceUsage() )
          _InterlockedIncrement((volatile signed __int32 *)this + 6);
        v29 = DXGPROCESS::GetCurrent();
        if ( v20 )
          v30 = *v20;
        else
          v30 = 0;
        WdLogSingleEntry3(4LL, this, v30, v29);
        DxgAdapterSyncObject = 0;
      }
    }
  }
LABEL_64:
  DXGSYNCOBJECTMUTEX::~DXGSYNCOBJECTMUTEX((DXGSYNCOBJECTMUTEX *)&v41);
  return (unsigned int)DxgAdapterSyncObject;
}
