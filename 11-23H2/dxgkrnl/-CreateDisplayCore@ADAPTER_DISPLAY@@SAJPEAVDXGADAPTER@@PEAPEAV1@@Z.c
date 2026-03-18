/*
 * XREFs of ?CreateDisplayCore@ADAPTER_DISPLAY@@SAJPEAVDXGADAPTER@@PEAPEAV1@@Z @ 0x1C01FAC70
 * Callers:
 *     ?Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z @ 0x1C01FC874 (-Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0004FC0 (DxgkLogInternalTriageEvent.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000A400 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??_GADAPTER_DISPLAY@@QEAAPEAXI@Z @ 0x1C003F740 (--_GADAPTER_DISPLAY@@QEAAPEAXI@Z.c)
 *     ?DriverSupportSetTimingsFromVidPn@DXGADAPTER@@QEBAEXZ @ 0x1C01B25DC (-DriverSupportSetTimingsFromVidPn@DXGADAPTER@@QEBAEXZ.c)
 *     ??0ADAPTER_DISPLAY@@QEAA@PEAVDXGADAPTER@@@Z @ 0x1C01F8B00 (--0ADAPTER_DISPLAY@@QEAA@PEAVDXGADAPTER@@@Z.c)
 *     ?Initialize@ADAPTER_DISPLAY@@QEAAJXZ @ 0x1C01FEF00 (-Initialize@ADAPTER_DISPLAY@@QEAAJXZ.c)
 *     ?Destroy@ADAPTER_DISPLAY@@QEAAXXZ @ 0x1C02BBE10 (-Destroy@ADAPTER_DISPLAY@@QEAAXXZ.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::CreateDisplayCore(
        struct DXGADAPTER *a1,
        struct ADAPTER_DISPLAY **a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v6; // rdx
  _BOOL8 v7; // rcx
  char *v8; // rax
  ADAPTER_DISPLAY *v9; // rax
  ADAPTER_DISPLAY *v10; // rdi
  int v11; // esi
  __int64 result; // rax
  bool v13; // zf
  const wchar_t *v14; // r9
  __int64 v15; // rax
  const wchar_t *v16; // r9

  if ( !a1 )
  {
    WdLogSingleEntry1(1LL, 4344LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"i_pAdapter != NULL", 4344LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( !a2 )
  {
    WdLogSingleEntry1(1LL, 4345LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"o_ppDisplayCore != NULL", 4345LL, 0LL, 0LL, 0LL, 0LL);
  }
  v6 = *((_QWORD *)a1 + 76);
  if ( !v6
    || !*((_QWORD *)a1 + 77)
    || !*((_QWORD *)a1 + 78)
    || !*((_QWORD *)a1 + 80)
    || !*((_QWORD *)a1 + 81) && !DXGADAPTER::DriverSupportSetTimingsFromVidPn(a1)
    || !*((_QWORD *)a1 + 82) && *((int *)a1 + 705) < 2200
    || !*((_QWORD *)a1 + 69)
    || !*((_QWORD *)a1 + 70) )
  {
    if ( *((int *)a1 + 705) >= 1200 || (*((_DWORD *)a1 + 109) & 0x10) != 0 )
    {
      if ( !v6
        && !*((_QWORD *)a1 + 77)
        && !*((_QWORD *)a1 + 78)
        && !*((_QWORD *)a1 + 79)
        && !*((_QWORD *)a1 + 80)
        && !*((_QWORD *)a1 + 81)
        && !*((_QWORD *)a1 + 82)
        && !*((_QWORD *)a1 + 68)
        && !*((_QWORD *)a1 + 69)
        && !*((_QWORD *)a1 + 70)
        && !*((_QWORD *)a1 + 84)
        && !*((_QWORD *)a1 + 83)
        && !*((_QWORD *)a1 + 98)
        && !*((_QWORD *)a1 + 144)
        && !*((_QWORD *)a1 + 145)
        && !*((_QWORD *)a1 + 146)
        && !*((_QWORD *)a1 + 147) )
      {
        if ( !*((_DWORD *)a1 + 418) && !*((_DWORD *)a1 + 419) )
          goto LABEL_64;
        WdLogSingleEntry3(2LL, *((unsigned int *)a1 + 418), *((unsigned int *)a1 + 419), -1073741735LL);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Number of VidPn Source 0x%I64x or Target 0x%I64x are not 0 on render only adapter 0x%I64x (Status = 0x%I64x).",
          *((unsigned int *)a1 + 418),
          *((unsigned int *)a1 + 419),
          -1073741735LL,
          0LL,
          0LL);
        return 3221225561LL;
      }
      WdLogSingleEntry2(2LL, a1, -1073741735LL);
      v14 = L"Not all the display relevant DDIs on adapter 0x%I64x are NULL (Status = 0x%I64x).";
    }
    else
    {
      WdLogSingleEntry2(2LL, a1, -1073741735LL);
      v14 = L"Miniport did not provide required DDIs on adapter 0x%I64x (Status = 0x%I64x).";
    }
LABEL_90:
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v14, (__int64)a1, -1073741735LL, 0LL, 0LL, 0LL);
    return 3221225561LL;
  }
  if ( !*((_QWORD *)a1 + 366) )
  {
    if ( *((_QWORD *)a1 + 103) )
    {
      v7 = *((_QWORD *)a1 + 86) == 0LL;
      if ( (*((_QWORD *)a1 + 84) == 0LL) == v7 )
        goto LABEL_16;
      WdLogSingleEntry2(2LL, a1, -1073741735LL);
      v14 = L"Either both GetScanLine & ControlInterrupts must be implemented or neither, on adapter 0x%I64x are implement"
             "ed (Status = 0x%I64x).";
    }
    else
    {
      WdLogSingleEntry2(2LL, a1, -1073741735LL);
      v14 = L"Not all the display only relevant DDIs on adapter 0x%I64x are implemented (Status = 0x%I64x).";
    }
    goto LABEL_90;
  }
  if ( DXGADAPTER::DriverSupportSetTimingsFromVidPn(a1) )
    v13 = *((_QWORD *)a1 + 128) == 0LL;
  else
    v13 = *((_QWORD *)a1 + 79) == 0LL;
  if ( v13 || !*((_QWORD *)a1 + 84) || !*((_QWORD *)a1 + 68) && *((int *)a1 + 705) < 1200 )
  {
    WdLogSingleEntry2(2LL, a1, -1073741735LL);
    v14 = L"Not all the display relevant DDIs for full WDDM on adapter 0x%I64x are implemented 0x%I64x).";
    goto LABEL_90;
  }
LABEL_16:
  *(_QWORD *)(WdLogNewEntry5_WdTrace(v7, v6, a3, a4) + 24) = a1;
  if ( *((int *)a1 + 705) >= 1200 && !*((_DWORD *)a1 + 418) && !*((_DWORD *)a1 + 419) )
  {
LABEL_64:
    *(_QWORD *)(WdLogNewEntry5_WdTrace(a1, v6, a3, a4) + 24) = a1;
    result = 0LL;
    *a2 = 0LL;
    return result;
  }
  if ( (unsigned int)(*((_DWORD *)a1 + 418) - 1) > 0xF )
  {
    WdLogSingleEntry2(2LL, a1, *((unsigned int *)a1 + 418));
    v15 = *((unsigned int *)a1 + 418);
    v16 = L"Adapter 0x%I64x: Incorrect number of outputs 0x%I64x";
    goto LABEL_84;
  }
  if ( !*((_DWORD *)a1 + 419) )
  {
    WdLogSingleEntry2(2LL, a1, 0LL);
    v15 = *((unsigned int *)a1 + 419);
    v16 = L"Adapter 0x%I64x: Incorrect number of targets 0x%I64x";
LABEL_84:
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v16, (__int64)a1, v15, 0LL, 0LL, 0LL);
    return 3221225485LL;
  }
  if ( *((_BYTE *)a1 + 2832) && *((int *)a1 + 638) >= 4608 && (!*((_BYTE *)a1 + 2752) || !*((_BYTE *)a1 + 2753)) )
  {
    WdLogSingleEntry1(2LL, 4518LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Driver reports WDDM version 1.2 but does not implement all mandatory WDDM 1.2 display features.",
      4518LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225485LL;
  }
  if ( !*((_QWORD *)a1 + 83) )
    *((_QWORD *)a1 + 83) = W32kStub_UserRemoveWindowedSwapChain;
  if ( !*((_QWORD *)a1 + 98) )
    *((_QWORD *)a1 + 98) = ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange;
  if ( !*((_QWORD *)a1 + 135) )
    *((_QWORD *)a1 + 135) = W32kStub_GreSfmOpenTokenEvent;
  if ( !*((_QWORD *)a1 + 145) )
    *((_QWORD *)a1 + 145) = W32kStub_GreSfmOpenTokenEvent;
  if ( !*((_QWORD *)a1 + 146) )
    *((_QWORD *)a1 + 146) = W32kStub_GreSfmOpenTokenEvent;
  if ( !*((_QWORD *)a1 + 147) )
    *((_QWORD *)a1 + 147) = W32kStub_GreSfmOpenTokenEvent;
  v8 = (char *)operator new[](0x400uLL, 0x4B677844u, 64LL);
  if ( v8 && (v9 = ADAPTER_DISPLAY::ADAPTER_DISPLAY(v8, a1), (v10 = v9) != 0LL) )
  {
    v11 = ADAPTER_DISPLAY::Initialize(v9);
    if ( v11 < 0 )
    {
      ADAPTER_DISPLAY::Destroy(v10);
      ADAPTER_DISPLAY::`scalar deleting destructor'(v10);
    }
    else
    {
      WdLogSingleEntry2(4LL, v10, a1);
      *a2 = v10;
    }
    return (unsigned int)v11;
  }
  else
  {
    WdLogSingleEntry1(6LL, -1073741801LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
      -1,
      (__int64)L"Out of memory allocating ADAPTER_DISPLAY class, returning 0x%I64x",
      -1073741801LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225495LL;
  }
}
