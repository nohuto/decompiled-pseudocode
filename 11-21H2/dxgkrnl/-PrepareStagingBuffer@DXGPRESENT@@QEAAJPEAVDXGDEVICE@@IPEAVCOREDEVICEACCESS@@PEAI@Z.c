/*
 * XREFs of ?PrepareStagingBuffer@DXGPRESENT@@QEAAJPEAVDXGDEVICE@@IPEAVCOREDEVICEACCESS@@PEAI@Z @ 0x1C0331EE0
 * Callers:
 *     ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C017D520 (-Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESET.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000C10C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002B284 (McTemplateK0q_EtwWriteTransfer.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C017D4D0 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C017EAE0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?CreateStagingSurface2@DXGDEVICE@@QEAAJPEAU_D3DKMDT_STAGINGSURFACEDATA@@PEAVCOREDEVICEACCESS@@PEAI2@Z @ 0x1C02E440C (-CreateStagingSurface2@DXGDEVICE@@QEAAJPEAU_D3DKMDT_STAGINGSURFACEDATA@@PEAVCOREDEVICEACCESS@@PE.c)
 *     ?DestroyStagingSurface@DXGDEVICE@@QEAAXIIPEAVCOREDEVICEACCESS@@@Z @ 0x1C02E4610 (-DestroyStagingSurface@DXGDEVICE@@QEAAXIIPEAVCOREDEVICEACCESS@@@Z.c)
 */

__int64 __fastcall DXGPRESENT::PrepareStagingBuffer(
        DXGPRESENT *this,
        struct DXGDEVICE *a2,
        unsigned int a3,
        struct COREDEVICEACCESS *a4,
        unsigned int *a5)
{
  __int64 v7; // r15
  int v9; // eax
  int v10; // ebx
  unsigned int v11; // r8d
  __int64 v12; // rbp
  __int64 v13; // rcx
  __int64 v14; // r8
  int v15; // r9d
  __int64 v16; // rax
  __int64 v17; // r9
  int v18; // edx
  struct _EX_RUNDOWN_REF *v19; // rdx
  UINT Pitch; // eax
  struct _EX_RUNDOWN_REF *v22; // [rsp+50h] [rbp-68h] BYREF
  struct _D3DKMDT_STAGINGSURFACEDATA v23; // [rsp+58h] [rbp-60h] BYREF

  v7 = a3;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*((_QWORD *)a2 + 2) + 16LL)) )
  {
    WdLogSingleEntry1(1LL, 11415LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"pDevice->GetRenderCore()->IsCoreResourceSharedOwner()",
      11415LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v9 = *((_DWORD *)this + 1);
  v10 = 0;
  if ( (v9 & 0x40) != 0 )
  {
    v11 = *((_DWORD *)this + 105);
    *((_DWORD *)this + 1) = v9 & 0xFFFFFFBF;
    if ( v11 )
    {
      DXGDEVICE::DestroyStagingSurface(a2, 0, v11, a4);
      *((_QWORD *)this + 52) = 0LL;
    }
  }
  if ( !*((_DWORD *)this + 105) )
  {
    v12 = *((_QWORD *)a2 + 5);
    KeEnterCriticalRegion();
    if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v12 + 248, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v15 = *(_DWORD *)(v12 + 272);
        if ( v15 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
          McTemplateK0q_EtwWriteTransfer(v13, (const EVENT_DESCRIPTOR *)"g", v14, v15);
      }
      ExAcquirePushLockSharedEx(v12 + 248, 0LL);
    }
    v16 = ((unsigned int)v7 >> 6) & 0xFFFFFF;
    if ( (unsigned int)v16 < *(_DWORD *)(v12 + 296) )
    {
      v17 = *(_QWORD *)(v12 + 280);
      v18 = *(_DWORD *)(v17 + 16 * v16 + 8);
      if ( (((unsigned int)v7 >> 25) & 0x60) == (*(_BYTE *)(v17 + 16 * v16 + 8) & 0x60)
        && (v18 & 0x2000) == 0
        && (v18 & 0x1F) != 0 )
      {
        if ( (v18 & 0x1F) == 5 )
        {
          v19 = *(struct _EX_RUNDOWN_REF **)(v17 + 16LL * (unsigned int)v16);
          goto LABEL_20;
        }
        WdLogSingleEntry1(2LL, 267LL);
        DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
      }
    }
    v19 = 0LL;
LABEL_20:
    DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v22, v19);
    ExReleasePushLockSharedEx(v12 + 248, 0LL);
    KeLeaveCriticalRegion();
    if ( v22 )
    {
      if ( *(_QWORD *)(*(_QWORD *)(v22[1].Count + 16) + 16LL) == *(_QWORD *)(*((_QWORD *)a2 + 2) + 16LL) )
      {
        v23.Width = *((_DWORD *)this + 19);
        v23.Height = *((_DWORD *)this + 20);
        v23.Pitch = 0;
        v10 = DXGDEVICE::CreateStagingSurface2(a2, &v23, a4, (unsigned int *)this + 104, (unsigned int *)this + 105);
        if ( v10 >= 0 )
        {
          if ( !*((_DWORD *)this + 104) )
          {
            WdLogSingleEntry1(1LL, 11462LL);
            DxgkLogInternalTriageEvent(
              0LL,
              262146,
              -1,
              (__int64)L"NULL != m_hStagingBufferAllocation",
              11462LL,
              0LL,
              0LL,
              0LL,
              0LL);
          }
          Pitch = v23.Pitch;
          if ( !v23.Pitch )
          {
            WdLogSingleEntry1(1LL, 11464LL);
            DxgkLogInternalTriageEvent(
              0LL,
              262146,
              -1,
              (__int64)L"0 != StagingSurfaceData.Pitch",
              11464LL,
              0LL,
              0LL,
              0LL,
              0LL);
            Pitch = v23.Pitch;
          }
          *((_DWORD *)this + 106) = Pitch;
        }
      }
      else
      {
        v10 = -1073741811;
        WdLogSingleEntry3(2LL, a2, v22, -1073741811LL);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Device 0x%p does not match allocation 0x%p owner, returning 0x%I64x",
          (__int64)a2,
          (__int64)v22,
          -1073741811LL,
          0LL,
          0LL);
      }
    }
    else
    {
      v10 = -1073741811;
      WdLogSingleEntry3(3LL, -1073741811LL, this, v7);
    }
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v22);
  }
  *a5 = *((_DWORD *)this + 104);
  return (unsigned int)v10;
}
