/*
 * XREFs of ?Unlock@DXGDEVICE@@QEAAJPEBU_D3DKMT_UNLOCK@@E@Z @ 0x1C01CB270
 * Callers:
 *     ?DxgkCddPresentOnScreen@@YAJPEAU_DXGKCDD_PRESENT_ON_SCREEN@@@Z @ 0x1C0158B10 (-DxgkCddPresentOnScreen@@YAJPEAU_DXGKCDD_PRESENT_ON_SCREEN@@@Z.c)
 *     DxgkLock @ 0x1C016C080 (DxgkLock.c)
 *     ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C017D520 (-Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESET.c)
 *     ?DxgkCddUnlock@@YAJPEAU_D3DKMT_UNLOCK@@I@Z @ 0x1C01CACB0 (-DxgkCddUnlock@@YAJPEAU_D3DKMT_UNLOCK@@I@Z.c)
 *     DxgkUnlock @ 0x1C01CAE30 (DxgkUnlock.c)
 *     ?PresentCddShadowBuffer@@YAJPEAVDXGCONTEXT@@PEAVDXGHWQUEUE@@I@Z @ 0x1C02DD990 (-PresentCddShadowBuffer@@YAJPEAVDXGCONTEXT@@PEAVDXGHWQUEUE@@I@Z.c)
 *     ?CheckPrimaryContentTile@VIDPNSOURCEINFO@@AEAAJPEAVDXGDEVICE@@IIPEBUtagRECT@@PEAVCOREDEVICEACCESS@@PEAI3@Z @ 0x1C02ED964 (-CheckPrimaryContentTile@VIDPNSOURCEINFO@@AEAAJPEAVDXGDEVICE@@IIPEBUtagRECT@@PEAVCOREDEVICEACCES.c)
 *     ?SetPresentDodArg@PRESENTDODARG@@QEAAJPEAVDXGCONTEXT@@IPEAVDXGALLOCATION@@KEPEBUtagRECT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C03BE3B8 (-SetPresentDodArg@PRESENTDODARG@@QEAAJPEAVDXGCONTEXT@@IPEAVDXGALLOCATION@@KEPEBUtagRECT@@PEBU_D3.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z @ 0x1C0009418 (-IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z.c)
 *     ?GetAllocationSafe@DXGPROCESS@@QEAA?AVDXGALLOCATIONREFERENCE@@I@Z @ 0x1C000B970 (-GetAllocationSafe@DXGPROCESS@@QEAA-AVDXGALLOCATIONREFERENCE@@I@Z.c)
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000C10C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetDisplayedPrimary@DXGDEVICE@@QEAAPEBVDXGALLOCATION@@I@Z @ 0x1C0013D10 (-GetDisplayedPrimary@DXGDEVICE@@QEAAPEBVDXGALLOCATION@@I@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C017EAE0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0186AA0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DxgkThreadObjectCreateDxgThread@@YAPEAVDXGTHREAD@@XZ @ 0x1C018B028 (-DxgkThreadObjectCreateDxgThread@@YAPEAVDXGTHREAD@@XZ.c)
 *     ?UpdateDodFrontBuffer@DXGDEVICE@@QEAAJPEAVDXGALLOCATION@@@Z @ 0x1C0317470 (-UpdateDodFrontBuffer@DXGDEVICE@@QEAAJPEAVDXGALLOCATION@@@Z.c)
 *     ?VmBusSendUnlock2@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAU_D3DKMT_UNLOCK2@@E@Z @ 0x1C037EA44 (-VmBusSendUnlock2@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAU_D3DKMT_UN.c)
 */

__int64 __fastcall DXGDEVICE::Unlock(DXGDEVICE *this, const struct _D3DKMT_UNLOCK *a2, __int64 a3, __int64 a4)
{
  __int64 NumAllocations; // rcx
  D3DKMT_HANDLE *phAllocations; // rdx
  signed int hDevice; // r12d
  UINT i; // r15d
  unsigned int *v10; // rdx
  struct DXGALLOCATION *v11; // rax
  DXGDEVICE *v12; // r9
  int v13; // eax
  D3DKMT_HANDLE v14; // r14d
  struct DXGTHREAD *DxgThread; // rax
  D3DKMT_HANDLE v17; // eax
  __int64 v18; // rbx
  struct DXGPROCESS *Current; // rax
  unsigned int v20; // r14d
  unsigned int v21; // r14d
  __int64 v22; // r12
  struct DXGALLOCATION *DisplayedPrimary; // rcx
  unsigned int v24; // [rsp+50h] [rbp-58h]
  struct DXGTHREAD *v25; // [rsp+58h] [rbp-50h] BYREF
  struct DXGALLOCATION *v26[9]; // [rsp+60h] [rbp-48h] BYREF
  char v27; // [rsp+C0h] [rbp+18h]
  struct _D3DKMT_UNLOCK2 v28; // [rsp+C8h] [rbp+20h] BYREF

  v27 = a3;
  NumAllocations = a2->NumAllocations;
  if ( !(_DWORD)NumAllocations || (phAllocations = (D3DKMT_HANDLE *)a2->phAllocations) == 0LL )
  {
    WdLogSingleEntry2(3LL, this, -1073741811LL);
    return 3221225485LL;
  }
  if ( (*((_BYTE *)this + 1869) & 1) == 0 )
  {
    hDevice = 0;
    v28.hDevice = 0;
    for ( i = 0; ; ++i )
    {
      LODWORD(v25) = i;
      if ( i >= a2->NumAllocations )
        return (unsigned int)hDevice;
      if ( (_BYTE)a3 )
      {
        v10 = (unsigned int *)&a2->phAllocations[i];
        if ( (unsigned __int64)v10 >= MmUserProbeAddress )
          v10 = (unsigned int *)MmUserProbeAddress;
        v24 = *v10;
      }
      else
      {
        v24 = a2->phAllocations[i];
      }
      LODWORD(v25) = v24 & 0x3F;
      DXGPROCESS::GetAllocationSafe(*((_QWORD *)this + 5), (DXGALLOCATIONREFERENCE *)v26, v24);
      v11 = v26[0];
      if ( !v26[0] )
      {
        WdLogSingleEntry3(3LL, this, v24, -1073741811LL);
LABEL_42:
        v14 = -1073741811;
        goto LABEL_16;
      }
      if ( !*((_QWORD *)v26[0] + 3) )
      {
        WdLogSingleEntry4(3LL, this, v24, v26[0], -1073741811LL);
        goto LABEL_42;
      }
      if ( !*((_DWORD *)this + 108) )
      {
        v20 = *(_DWORD *)(*((_QWORD *)v26[0] + 6) + 4LL);
        if ( (v20 & 4) != 0 )
        {
          if ( v27 )
            break;
        }
      }
LABEL_13:
      v12 = (DXGDEVICE *)*((_QWORD *)v11 + 1);
      if ( v12 != this )
      {
        WdLogSingleEntry4(3LL, v11, this, v12, -1073741811LL);
        DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)v26);
        return 3221225485LL;
      }
      v13 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 648LL)
                                                                                          + 8LL)
                                                                              + 280LL))(
              *(_QWORD *)(*((_QWORD *)this + 2) + 656LL),
              *((_QWORD *)v11 + 3),
              (unsigned int)v25,
              0LL,
              0LL);
      v14 = v13;
      if ( v13 < 0 )
        WdLogSingleEntry4(3LL, this, v24, v26[0], v13);
LABEL_16:
      if ( hDevice < 0 )
        v14 = hDevice;
      hDevice = v14;
      v28.hDevice = v14;
      if ( v26[0] )
        ExReleaseRundownProtection((PEX_RUNDOWN_REF)v26[0] + 11);
      if ( *((_DWORD *)DXGGLOBAL_GetGlobal() + 347) )
      {
        v25 = 0LL;
        if ( (int)PsTlsGetValue(g_DxgkThreadTlsId, &v25) >= 0 )
        {
          DxgThread = v25;
          if ( v25 || (DxgThread = DxgkThreadObjectCreateDxgThread(), (v25 = DxgThread) != 0LL) )
          {
            if ( *((_DWORD *)DxgThread + 12) )
              WdLogSingleEntry5(0LL, 275LL, 38LL, *((int *)DxgThread + 12), 0LL, 0LL);
          }
        }
      }
      LOBYTE(a3) = v27;
    }
    v21 = (v20 >> 6) & 0xF;
    v22 = *((_QWORD *)this + 231);
    if ( v22 )
    {
      if ( !DXGADAPTER::IsCoreResourceSharedOwner(*((DXGADAPTER **)this + 231)) )
      {
        WdLogSingleEntry1(1LL, 366LL);
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"pDisplayAdapter->IsCoreResourceSharedOwner()",
          366LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      if ( *((_DWORD *)this + 144) != 1
        || !ADAPTER_DISPLAY::IsVidPnSourceOwner(*(DXGADAPTER ***)(v22 + 2792), this, v21) )
      {
        goto LABEL_52;
      }
      DisplayedPrimary = DXGDEVICE::GetDisplayedPrimary((struct _KTHREAD **)this, v21);
      v11 = v26[0];
      if ( DisplayedPrimary == v26[0] )
      {
        DXGDEVICE::UpdateDodFrontBuffer(this, v26[0]);
LABEL_52:
        v11 = v26[0];
      }
    }
    hDevice = v28.hDevice;
    goto LABEL_13;
  }
  if ( (_DWORD)NumAllocations == 1 )
  {
    v28 = 0LL;
    if ( (_BYTE)a3 )
    {
      NumAllocations = MmUserProbeAddress;
      if ( (unsigned __int64)phAllocations >= MmUserProbeAddress )
        phAllocations = (D3DKMT_HANDLE *)MmUserProbeAddress;
      v17 = *phAllocations;
    }
    else
    {
      v17 = *phAllocations;
    }
    v28.hAllocation = v17;
    v18 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
    Current = DXGPROCESS::GetCurrent(NumAllocations, (__int64)phAllocations, a3, a4);
    return DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendUnlock2(
             (DXG_GUEST_VIRTUALGPU_VMBUS *)(v18 + 4344),
             Current,
             this,
             &v28,
             1u);
  }
  else
  {
    WdLogSingleEntry2(2LL, this, -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Device 0x%I64x: NumAllocations must be 1, returning 0x%I64x",
      (__int64)this,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    return 3221225485LL;
  }
}
