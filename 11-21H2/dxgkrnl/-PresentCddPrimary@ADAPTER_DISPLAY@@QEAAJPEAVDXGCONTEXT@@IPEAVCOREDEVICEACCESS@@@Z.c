/*
 * XREFs of ?PresentCddPrimary@ADAPTER_DISPLAY@@QEAAJPEAVDXGCONTEXT@@IPEAVCOREDEVICEACCESS@@@Z @ 0x1C01588F8
 * Callers:
 *     ?DxgkpDelayPresentCddPrimary@@YAXPEAU_DEVICE_OBJECT@@PEAXPEAU_IO_WORKITEM@@@Z @ 0x1C01586A0 (-DxgkpDelayPresentCddPrimary@@YAXPEAU_DEVICE_OBJECT@@PEAXPEAU_IO_WORKITEM@@@Z.c)
 *     ?DxgkCddPresentOnScreen@@YAJPEAU_DXGKCDD_PRESENT_ON_SCREEN@@@Z @ 0x1C0158B10 (-DxgkCddPresentOnScreen@@YAJPEAU_DXGKCDD_PRESENT_ON_SCREEN@@@Z.c)
 *     DxgkGetSharedPrimaryHandle @ 0x1C02D1520 (DxgkGetSharedPrimaryHandle.c)
 *     ?PresentCddShadowBuffer@@YAJPEAVDXGCONTEXT@@PEAVDXGHWQUEUE@@I@Z @ 0x1C02DD990 (-PresentCddShadowBuffer@@YAJPEAVDXGCONTEXT@@PEAVDXGHWQUEUE@@I@Z.c)
 * Callees:
 *     ?GetCddDisplayMode@ADAPTER_DISPLAY@@QEBAAEBU_D3DKMT_DISPLAYMODE@@I@Z @ 0x1C0001CE0 (-GetCddDisplayMode@ADAPTER_DISPLAY@@QEBAAEBU_D3DKMT_DISPLAYMODE@@I@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x1C000EEA8 (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ?IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C000F6D8 (-IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00131F8 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?AcquireExclusive@COREDEVICEACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@PEAD@Z @ 0x1C0013788 (-AcquireExclusive@COREDEVICEACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@PEAD@Z.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C002CFC0 (memset.c)
 *     ?FlushScheduler@DXGDEVICE@@QEAAXW4DXGDEVICE_FLUSHSCHEDULER_REASON@@I_N@Z @ 0x1C016E478 (-FlushScheduler@DXGDEVICE@@QEAAXW4DXGDEVICE_FLUSHSCHEDULER_REASON@@I_N@Z.c)
 *     ?GetCddPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@IE@Z @ 0x1C01C3758 (-GetCddPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@IE@Z.c)
 *     ?SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z @ 0x1C01C69E4 (-SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::PresentCddPrimary(
        ADAPTER_DISPLAY *this,
        struct DXGCONTEXT *a2,
        unsigned int a3,
        struct COREDEVICEACCESS *a4)
{
  __int64 v5; // rdi
  int v8; // eax
  __int64 v9; // r14
  struct DXGADAPTERALLOCATION *CddPrimaryAllocation; // r14
  __int64 v11; // rdx
  __int64 v12; // rax
  _QWORD *v13; // rbx
  const struct _D3DKMT_DISPLAYMODE *CddDisplayMode; // rax
  int v15; // eax
  int v16; // eax
  const wchar_t *v18; // r9
  _QWORD *v19; // [rsp+50h] [rbp-B0h] BYREF
  _QWORD *v20; // [rsp+58h] [rbp-A8h] BYREF
  _QWORD v21[2]; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v22; // [rsp+70h] [rbp-90h] BYREF
  _OWORD v23[3]; // [rsp+80h] [rbp-80h] BYREF
  __int64 v24; // [rsp+B0h] [rbp-50h]
  _QWORD v25[18]; // [rsp+C0h] [rbp-40h] BYREF

  v5 = a3;
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(*((PERESOURCE **)this + 2)) )
  {
    if ( !a4 )
    {
      WdLogSingleEntry1(1LL, 1601LL);
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pCoreAccess != NULL", 1601LL, 0LL, 0LL, 0LL, 0LL);
    }
    COREDEVICEACCESS::Release(a4);
    v8 = COREDEVICEACCESS::AcquireExclusive((__int64)a4, 1u);
    v9 = v8;
    if ( v8 < 0 )
    {
      WdLogSingleEntry2(2LL, *((_QWORD *)this + 2), v8);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Failed to acquire device core access exclusive on adapter 0x%I64x (Status = 0x%I64x).",
        *((_QWORD *)this + 2),
        v9,
        0LL,
        0LL,
        0LL);
      return (unsigned int)v9;
    }
  }
  if ( ADAPTER_DISPLAY::IsVidPnSourceActive(this, v5) )
  {
    CddPrimaryAllocation = ADAPTER_DISPLAY::GetCddPrimaryAllocation(this, v5, 0);
    if ( !CddPrimaryAllocation )
    {
      LODWORD(v9) = -1073741811;
      return (unsigned int)v9;
    }
    DXGDEVICE::FlushScheduler(*((_QWORD *)a2 + 2), 1LL, 4294967293LL);
    v11 = *((_QWORD *)CddPrimaryAllocation + 1);
    v19 = v21;
    v21[0] = *((_QWORD *)a2 + 23);
    v21[1] = *((_QWORD *)CddPrimaryAllocation + 2);
    v12 = *((_QWORD *)this + 2);
    v22 = 0LL;
    v13 = *(_QWORD **)(v12 + 2800);
    (*(void (__fastcall **)(_QWORD, __int64, __int128 *, char *, _QWORD))(*(_QWORD *)(v13[81] + 8LL) + 224LL))(
      v13[82],
      v11,
      &v22,
      (char *)&v22 + 8,
      0LL);
    memset(v25, 0, sizeof(v25));
    LODWORD(v25[2]) = 3;
    v20 = v25;
    HIDWORD(v25[3]) = 1;
    v25[4] = &v19;
    CddDisplayMode = ADAPTER_DISPLAY::GetCddDisplayMode((DXGADAPTER **)this, v5);
    *(_QWORD *)((char *)&v25[7] + 4) = 0LL;
    *(_QWORD *)((char *)&v25[8] + 4) = *(_QWORD *)&CddDisplayMode->Width;
    v24 = 0LL;
    v23[0] = 0LL;
    HIDWORD(v25[13]) = 1;
    v23[1] = (unsigned __int64)&v20;
    *(_OWORD *)((char *)&v25[11] + 4) = *(_OWORD *)((char *)&v25[7] + 4);
    LODWORD(v23[0]) = v5;
    *(_OWORD *)((char *)&v25[9] + 4) = *(_OWORD *)((char *)&v25[7] + 4);
    HIDWORD(v23[0]) = 1;
    v23[2] = 0LL;
    v15 = (*(__int64 (__fastcall **)(_QWORD, _OWORD *))(*(_QWORD *)(v13[78] + 8LL) + 824LL))(v13[79], v23);
    v9 = v15;
    if ( v15 < 0 )
    {
      WdLogSingleEntry3(2LL, v5, *((_QWORD *)this + 2), v15);
      v18 = L"Failed to set CDD primary on source 0x%I64x on adapter 0x%I64x via MPO3 (status = 0x%I64x)";
    }
    else
    {
      v16 = ADAPTER_DISPLAY::SetVidPnSourceVisibility(this, v5, 1u, 0x20u, 1u);
      v9 = v16;
      if ( v16 >= 0 )
        return (unsigned int)v9;
      WdLogSingleEntry3(2LL, v5, *((_QWORD *)this + 2), v16);
      v18 = L"Failed to turn visibility on source 0x%I64x on adapter 0x%I64x via MPO3 (status = 0x%I64x)";
    }
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v18, v5, *((_QWORD *)this + 2), v9, 0LL, 0LL);
    return (unsigned int)v9;
  }
  WdLogSingleEntry3(2LL, v5, *((_QWORD *)this + 2), -1071775738LL);
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    -1,
    (__int64)L"Cannot present CDD primary on an inactive source 0x%I64x on adapter 0x%I64x (status = 0x%I64x)",
    v5,
    *((_QWORD *)this + 2),
    -1071775738LL,
    0LL,
    0LL);
  return 3223191558LL;
}
