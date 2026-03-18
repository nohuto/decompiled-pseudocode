/*
 * XREFs of ?Initialize@DXGDEVICE@@QEAAJEE@Z @ 0x1C0168CB0
 * Callers:
 *     ?CreateDevice@ADAPTER_RENDER@@QEAAJPEAPEAVDXGDEVICE@@U_D3DKMT_CREATEDEVICEFLAGS@@W4DXGDEVICECLIENT_TYPE@@PEAVDXGADAPTER@@EEEPEAUDXGK_VIRTUAL_GPU_PARAV@@PEAPEAUDXG_SET_GUEST_DATA@@E@Z @ 0x1C0168698 (-CreateDevice@ADAPTER_RENDER@@QEAAJPEAPEAVDXGDEVICE@@U_D3DKMT_CREATEDEVICEFLAGS@@W4DXGDEVICECLIE.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000CD40 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C000EDA8 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000EE00 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000FABC (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0ppqpttqpqp_EtwWriteTransfer @ 0x1C004C4F8 (McTemplateK0ppqpttqpqp_EtwWriteTransfer.c)
 *     ?OpenAdapter@DXGPROCESS@@QEAAJPEAVADAPTER_RENDER@@_N@Z @ 0x1C01688A8 (-OpenAdapter@DXGPROCESS@@QEAAJPEAVADAPTER_RENDER@@_N@Z.c)
 *     ?DdiCreateDevice@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_CREATEDEVICE@@@Z @ 0x1C0169248 (-DdiCreateDevice@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_CREATEDEVICE@@@Z.c)
 *     ?GetMaximumGlobalAdapterCount@DXGGLOBAL@@QEAAKXZ @ 0x1C0179890 (-GetMaximumGlobalAdapterCount@DXGGLOBAL@@QEAAKXZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0186AA0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z @ 0x1C0195A00 (-AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z.c)
 *     ?GetHostProcess@DXGPROCESS@@QEAAIXZ @ 0x1C033633C (-GetHostProcess@DXGPROCESS@@QEAAIXZ.c)
 *     ?VmBusSendCreateDevice@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAIIU_D3DKMT_CREATEDEVICEFLAGS@@EPEAVCRefCountedBuffer@@@Z @ 0x1C037545C (-VmBusSendCreateDevice@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAIIU_D3DKMT_CREATEDEVICEFLAGS@@EPEAVCRefCo.c)
 */

__int64 __fastcall DXGDEVICE::Initialize(DXGDEVICE *this, char a2, unsigned __int8 a3)
{
  __int64 v3; // r9
  int v5; // r15d
  __int64 v7; // rcx
  struct DXGPROCESS *Current; // rax
  unsigned int v9; // eax
  unsigned __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // r9
  int v14; // r8d
  __int64 v15; // r9
  struct _ERESOURCE *v16; // rax
  NTSTATUS v17; // eax
  __int64 v18; // r9
  __int64 v19; // rsi
  struct _KEVENT *v20; // rax
  _QWORD *v21; // rdx
  __int64 v22; // rax
  __int64 result; // rax
  __int64 v24; // rax
  __int64 v25; // rcx
  ADAPTER_RENDER *v26; // rcx
  __int64 v27; // rdx
  __int64 v28; // rsi
  __int64 v29; // r14
  DXGGLOBAL *v30; // rax
  void *v31; // rax
  int v32; // edx
  int v33; // ecx
  int v34; // eax
  unsigned int v35; // r8d
  int v36; // r8d
  __int64 v37; // rax
  int v38; // eax
  __int64 v39; // rsi
  unsigned __int64 v40; // rdi
  __int64 v41; // rax
  __int64 v42; // rdx
  __int64 v43; // rdi
  UINT v44; // ecx
  __int64 v45; // r14
  __int64 v46; // rsi
  DXGGLOBAL *Global; // rax
  int v48; // eax
  signed __int64 v49; // rax
  __int64 v50; // rax
  unsigned int HostProcess; // edx
  unsigned int Device; // eax
  __int64 v53; // [rsp+30h] [rbp-61h]
  __int64 v54; // [rsp+40h] [rbp-51h]
  __int64 v55; // [rsp+48h] [rbp-49h]
  __int128 v56; // [rsp+78h] [rbp-19h] BYREF
  __int64 v57; // [rsp+88h] [rbp-9h]
  _BYTE v58[24]; // [rsp+90h] [rbp-1h] BYREF
  _DXGKARG_CREATEDEVICE v59; // [rsp+A8h] [rbp+17h] BYREF

  v3 = *((_QWORD *)this + 2);
  v5 = a3;
  v7 = *(_QWORD *)(v3 + 16);
  if ( (*(_DWORD *)(v7 + 2664) & 8) != 0 )
  {
    v48 = *(_DWORD *)(v7 + 2156);
    if ( (v48 & 0x80u) == 0 && (v48 & 0x40) == 0 )
    {
      v49 = _InterlockedCompareExchange64((volatile signed __int64 *)(v3 + 176), *((_QWORD *)this + 5), 0LL);
      if ( v49 && *((_QWORD *)this + 5) != v49 )
      {
        LODWORD(v19) = -1071775744;
        WdLogSingleEntry3(3LL, this, v49, -1071775744LL);
        return (unsigned int)v19;
      }
      *((_BYTE *)this + 1869) |= 4u;
      _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 184LL));
    }
  }
  Current = DXGPROCESS::GetCurrent();
  DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v58, Current);
  v9 = HMGRTABLE::AllocHandle(*((_QWORD *)this + 5) + 280LL, this, 3LL, 0LL, 0);
  *((_DWORD *)this + 109) = v9;
  v10 = v9;
  if ( !v9 )
  {
    WdLogSingleEntry2(3LL, this, -1073741801LL);
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v58);
    return 3221225495LL;
  }
  v11 = *((_QWORD *)this + 5);
  v12 = (v9 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v12 < *(_DWORD *)(v11 + 296) )
  {
    v13 = *(_QWORD *)(v11 + 280);
    v14 = *(_DWORD *)(v13 + 16 * v12 + 8);
    if ( (((unsigned int)v10 >> 25) & 0x60) == (*(_BYTE *)(v13 + 16 * v12 + 8) & 0x60)
      && (v14 & 0x2000) == 0
      && (v14 & 0x1F) != 0 )
    {
      *(_DWORD *)(v13 + 16 * ((v10 >> 6) & 0xFFFFFF) + 8) |= 0x2000u;
    }
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v58);
  v16 = (struct _ERESOURCE *)operator new[](0x68uLL, 0x4B677844u, 64LL, v15);
  *((_QWORD *)this + 17) = v16;
  if ( !v16 )
    goto LABEL_55;
  v17 = ExInitializeResourceLite(v16);
  v19 = v17;
  if ( v17 < 0 )
    goto LABEL_58;
  if ( (*((_BYTE *)this + 1869) & 1) != 0 )
  {
    v50 = operator new[](0x14uLL, 0x4B677844u, 64LL, v18);
    *((_QWORD *)this + 56) = v50;
    if ( v50 )
    {
      *(_QWORD *)v50 = 0LL;
      *(_DWORD *)(v50 + 8) = 4;
      *(_DWORD *)(v50 + 12) = 1;
      *(_DWORD *)(*((_QWORD *)this + 56) + 16LL) = 0;
      HostProcess = DXGPROCESS::GetHostProcess(*((DXGPROCESS **)this + 5));
      if ( !HostProcess )
      {
        WdLogSingleEntry1(2LL, -1073741823LL);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Failed to get host adapter process, returning 0x%I64x",
          -1073741823LL,
          0LL,
          0LL,
          0LL,
          0LL);
        return 3221225473LL;
      }
      Device = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendCreateDevice(
                 (DXG_GUEST_VIRTUALGPU_VMBUS *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 4344LL),
                 HostProcess,
                 *(struct _D3DKMT_CREATEDEVICEFLAGS *)((char *)this + 456),
                 *((_DWORD *)this + 108) == 2,
                 *((struct CRefCountedBuffer **)this + 56));
      *((_DWORD *)this + 110) = Device;
      if ( !Device )
      {
        WdLogSingleEntry1(2LL, 1070LL);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Failed to create device on the host",
          1070LL,
          0LL,
          0LL,
          0LL,
          0LL);
        return -1073741823LL;
      }
      goto LABEL_33;
    }
    WdLogSingleEntry1(6LL, 1048LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
      -1,
      (__int64)L"Failed to allocate m_pVidSchErrorCode",
      1048LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225495LL;
  }
  v20 = (struct _KEVENT *)operator new[](0x18uLL, 0x4B677844u, 64LL, v18);
  *((_QWORD *)this + 235) = v20;
  if ( !v20 )
    goto LABEL_55;
  KeInitializeEvent(v20, NotificationEvent, 1u);
  v21 = (_QWORD *)*((_QWORD *)this + 2);
  memset(&v59.8, 0, 24);
  v59.hDevice = this;
  if ( (*(_DWORD *)(v21[2] + 2152LL) & 1) != 0 )
  {
    if ( (*((_BYTE *)this + 1869) & 8) != 0 )
      v59.Flags.Value |= 2u;
  }
  else
  {
    v59.pInfo = (DXGK_DEVICEINFO *)((char *)this + 592);
  }
  if ( (*(_DWORD *)(v21[2] + 436LL) & 0x10) != 0 )
  {
    v44 = v59.Flags.Value & 0x7FFFFFFF | (v5 << 31);
    LOBYTE(v5) = 1;
    v59.Flags.Value = v44;
  }
  *((_BYTE *)this + 1865) = a2;
  *((_BYTE *)this + 1866) = v5;
  v22 = (*(__int64 (__fastcall **)(_QWORD, DXGDEVICE *, __int64))(*(_QWORD *)(v21[81] + 8LL) + 400LL))(
          v21[82],
          this,
          8LL);
  *((_QWORD *)this + 95) = v22;
  if ( !v22 )
  {
LABEL_55:
    WdLogSingleEntry2(3LL, this, -1073741801LL);
    return 3221225495LL;
  }
  result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 648LL) + 8LL) + 408LL))(v22);
  if ( (int)result < 0 )
    return result;
  LODWORD(v19) = DXGPROCESS::OpenAdapter(*((DXGPROCESS **)this + 5), *((struct ADAPTER_RENDER **)this + 2), 1);
  if ( (int)v19 < 0 )
    goto LABEL_51;
  v24 = *((_QWORD *)this + 2);
  *((_BYTE *)this + 1870) = 1;
  v25 = *(_QWORD *)(v24 + 16);
  if ( (*(_DWORD *)(v25 + 2156) & 0x80u) != 0 )
  {
    v45 = *((_QWORD *)this + 5);
    v46 = *(unsigned int *)(v25 + 240);
    Global = DXGGLOBAL_GetGlobal();
    if ( (unsigned int)v46 < DXGGLOBAL::GetMaximumGlobalAdapterCount(Global) )
    {
      _mm_lfence();
      v59.Pasid = **(_DWORD **)(*(_QWORD *)(*(_QWORD *)(v45 + 48) + 8 * v46) + 8LL);
    }
  }
  v26 = (ADAPTER_RENDER *)*((_QWORD *)this + 2);
  v27 = *((_QWORD *)v26 + 2);
  if ( (*(_DWORD *)(v27 + 2156) & 0x40) != 0 )
  {
    v28 = *((_QWORD *)this + 5);
    v29 = *(unsigned int *)(v27 + 240);
    v30 = DXGGLOBAL_GetGlobal();
    if ( (unsigned int)v29 < DXGGLOBAL::GetMaximumGlobalAdapterCount(v30)
      && *(_QWORD *)(*(_QWORD *)(v28 + 48) + 8 * v29) )
    {
      _mm_lfence();
      v31 = *(void **)(*(_QWORD *)(*(_QWORD *)(v28 + 48) + 8 * v29) + 16LL);
    }
    else
    {
      v31 = 0LL;
    }
    v26 = (ADAPTER_RENDER *)*((_QWORD *)this + 2);
    v59.hKmdProcess = v31;
  }
  LODWORD(v19) = ADAPTER_RENDER::DdiCreateDevice(v26, &v59);
  if ( (int)v19 < 0 )
  {
LABEL_51:
    WdLogSingleEntry1(3LL, this);
    return (unsigned int)v19;
  }
  v32 = *((_DWORD *)this + 108);
  *((_QWORD *)this + 73) = v59.hDevice;
  v33 = 0;
  v56 = 0LL;
  if ( v32 == 2 )
    v33 = 8;
  v34 = 0;
  v35 = _mm_cvtsi128_si32((__m128i)0LL) & 0xFFFFFFD1 | v33 & 0xFFFFFFDF | (2 * (a2 & 1 | (2 * (v5 & 1))));
  if ( v32 == 1 )
    v34 = 32;
  v36 = v34 | v35;
  v57 = *((_QWORD *)this + 56);
  v37 = *((_QWORD *)this + 2);
  LODWORD(v56) = v36;
  v38 = (*(__int64 (__fastcall **)(DXGDEVICE *, __int128 *, char *))(*(_QWORD *)(*(_QWORD *)(v37 + 624) + 8LL) + 112LL))(
          this,
          &v56,
          (char *)this + 768);
  v19 = v38;
  if ( v38 < 0 )
  {
LABEL_58:
    WdLogSingleEntry2(3LL, this, v19);
    return (unsigned int)v19;
  }
  (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 648LL) + 8LL) + 1096LL))(
    *((_QWORD *)this + 95),
    *((_QWORD *)this + 96));
LABEL_33:
  v39 = *((_QWORD *)this + 5);
  v40 = *((unsigned int *)this + 109);
  *((_DWORD *)this + 144) = 1;
  DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(v39 + 248));
  v41 = ((unsigned int)v40 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v41 < *(_DWORD *)(v39 + 296) )
  {
    v42 = *(_QWORD *)(v39 + 280);
    if ( (((unsigned int)v40 >> 25) & 0x60) == (*(_BYTE *)(v42 + 16 * v41 + 8) & 0x60)
      && (*(_DWORD *)(v42 + 16 * v41 + 8) & 0x1F) != 0 )
    {
      v43 = 2 * ((v40 >> 6) & 0xFFFFFF);
      if ( (*(_DWORD *)(v42 + 8 * v43 + 8) & 0x2000) == 0 )
      {
        WdLogSingleEntry1(1LL, 217LL);
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"m_pEntryTable[GetIndex(hObject)].Destroyed",
          217LL,
          0LL,
          0LL,
          0LL,
          0LL);
        v42 = *(_QWORD *)(v39 + 280);
      }
      *(_DWORD *)(v42 + 8 * v43 + 8) &= ~0x2000u;
    }
  }
  *(_QWORD *)(v39 + 256) = 0LL;
  ExReleasePushLockExclusiveEx(v39 + 248, 0LL);
  KeLeaveCriticalRegion();
  WdLogSingleEntry3(4LL, this, *((unsigned int *)this + 109), *((_QWORD *)this + 5));
  if ( bTracingEnabled )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x400) != 0 )
    {
      LODWORD(v55) = *((unsigned __int8 *)this + 1866);
      LODWORD(v54) = *((unsigned __int8 *)this + 1865);
      LODWORD(v53) = *((_DWORD *)this + 108);
      McTemplateK0ppqpttqpqp_EtwWriteTransfer(
        *((unsigned __int8 *)this + 1866),
        &EventCreateDevice,
        *((_QWORD *)this + 14),
        *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 5) + 64LL) + 80LL),
        *(_QWORD *)(*((_QWORD *)this + 2) + 16LL),
        v53,
        this,
        v54,
        v55,
        *((_DWORD *)this + 109),
        *((_QWORD *)this + 5),
        *((_DWORD *)this + 110),
        *((_QWORD *)this + 14));
    }
  }
  return 0LL;
}
