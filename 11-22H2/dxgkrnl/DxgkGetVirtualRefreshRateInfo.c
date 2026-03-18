/*
 * XREFs of DxgkGetVirtualRefreshRateInfo @ 0x1C01DC820
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0004FC0 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z @ 0x1C0007174 (-AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000763C (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C00076A0 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C00076E8 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z @ 0x1C00082D8 (-GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z.c)
 *     ?AssignByLuid@DXGADAPTER_REFERENCE@@QEAA_NAEBU_LUID@@@Z @ 0x1C00088CC (-AssignByLuid@DXGADAPTER_REFERENCE@@QEAA_NAEBU_LUID@@@Z.c)
 *     DxgkReleaseSessionModeChangeLock @ 0x1C019D2BC (DxgkReleaseSessionModeChangeLock.c)
 *     ?GetSessionViewOwner@ADAPTER_DISPLAY@@QEBAPEAVSESSION_VIEW@@I@Z @ 0x1C019D414 (-GetSessionViewOwner@ADAPTER_DISPLAY@@QEBAPEAVSESSION_VIEW@@I@Z.c)
 */

__int64 __fastcall DxgkGetVirtualRefreshRateInfo(struct _LUID a1, unsigned int a2, _DWORD *a3)
{
  __int64 v3; // r14
  DWORD LowPart; // ebx
  DXGADAPTER *v6; // rsi
  __int64 v7; // rax
  int v8; // eax
  __int64 v9; // r15
  int v10; // ebx
  __int64 v11; // rdx
  unsigned int v12; // r14d
  const struct _DXGK_DISPLAYMODE_INFO *DisplayModeInfo; // rcx
  __int64 HighPart; // rdi
  const wchar_t *v16; // r9
  __int64 v17; // rbx
  __int64 v18; // [rsp+28h] [rbp-58h]
  __int64 v19; // [rsp+30h] [rbp-50h]
  DXGADAPTER *v20; // [rsp+50h] [rbp-30h] BYREF
  char v21[8]; // [rsp+60h] [rbp-20h] BYREF
  DXGADAPTER *v22; // [rsp+68h] [rbp-18h]
  char v23; // [rsp+70h] [rbp-10h]
  struct _LUID v24; // [rsp+B0h] [rbp+30h] BYREF
  char v25; // [rsp+C8h] [rbp+48h] BYREF

  v24 = a1;
  v3 = a2;
  LowPart = a1.LowPart;
  v20 = 0LL;
  DXGADAPTER_REFERENCE::AssignByLuid((DXGADAPTER_REFERENCE *)&v20, &v24);
  v6 = v20;
  if ( !v20 )
  {
    HighPart = v24.HighPart;
    v12 = -1073741811;
    WdLogSingleEntry3(2LL, v24.HighPart, LowPart, -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to reference adapter by LUID (0x%I64x%08I64x) in DxgkGetVirtualRefreshRateInfo function, returning 0x%I64x.",
      HighPart,
      LowPart,
      -1073741811LL,
      0LL,
      0LL);
    goto LABEL_12;
  }
  v7 = *((_QWORD *)v20 + 365);
  if ( !v7 )
  {
    v12 = -1073741811;
    WdLogSingleEntry2(2LL, v20, -1073741811LL);
    v16 = L"Caller specified adapter 0x%I64x is not a display adapter in DxgkGetVirtualRefreshRateInfo function, returning 0x%I64x.";
    v19 = 0LL;
    v18 = -1073741811LL;
LABEL_22:
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v16, (__int64)v6, v18, v19, 0LL, 0LL);
    goto LABEL_12;
  }
  if ( (unsigned int)v3 >= *(_DWORD *)(v7 + 96) )
  {
    v17 = v3;
    v12 = -1073741811;
    WdLogSingleEntry3(2LL, v20, v17, -1073741811LL);
    v16 = L"Adapter 0x%I64x does not have caller specified VidPn source Id 0x%I64x in DxgkGetVirtualRefreshRateInfo functi"
           "on, returning 0x%I64x.";
    v19 = -1073741811LL;
    v18 = v17;
    goto LABEL_22;
  }
  v25 = 0;
  v8 = DXGSESSIONMODECHANGELOCK::AcquireModeChangeLock((DXGSESSIONMODECHANGELOCK *)&v25, 0);
  v9 = v8;
  if ( v8 < 0 )
  {
    WdLogSingleEntry1(2LL, v8);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to acquire session mode change lock shared (Status = 0x%I64x)",
      v9,
      0LL,
      0LL,
      0LL,
      0LL);
    v12 = v9;
  }
  else
  {
    v22 = v6;
    v23 = 0;
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v21);
    v10 = 1;
    if ( *((_DWORD *)v6 + 50) == 1 )
    {
      v6 = v20;
      if ( ADAPTER_DISPLAY::GetSessionViewOwner(*((ADAPTER_DISPLAY **)v20 + 365), v3) )
      {
        DisplayModeInfo = ADAPTER_DISPLAY::GetDisplayModeInfo(*((ADAPTER_DISPLAY **)v6 + 365), v3);
        if ( *((_DWORD *)DisplayModeInfo + 14) == -2 && *((_DWORD *)DisplayModeInfo + 15) == -2 )
        {
          a3[6] = 1;
          a3[5] = 64;
          a3[7] = 64;
          a3[8] = 1;
        }
        else
        {
          a3[5] = *((_DWORD *)DisplayModeInfo + 16);
          a3[6] = *((_DWORD *)DisplayModeInfo + 17);
          a3[7] = *((_DWORD *)DisplayModeInfo + 14);
          a3[8] = *((_DWORD *)DisplayModeInfo + 15);
          v10 = *((_DWORD *)DisplayModeInfo + 18);
        }
        a3[9] = v10;
        v12 = 0;
      }
      else
      {
        v11 = (unsigned int)v3;
        v12 = -1073741811;
        WdLogSingleEntry3(3LL, v11, v6, -1073741811LL);
      }
    }
    else
    {
      v6 = v20;
      v12 = -1073741130;
      WdLogSingleEntry2(3LL, v20, -1073741130LL);
    }
    if ( v23 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v21);
  }
  if ( v25 )
    DxgkReleaseSessionModeChangeLock();
LABEL_12:
  if ( v6 )
    DXGADAPTER::ReleaseReference(v6);
  return v12;
}
