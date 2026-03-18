/*
 * XREFs of ?UpdateDodFrontBuffer@DXGDEVICE@@QEAAJPEAVDXGALLOCATION@@@Z @ 0x1C0317470
 * Callers:
 *     ?Unlock@DXGDEVICE@@QEAAJPEBU_D3DKMT_UNLOCK@@E@Z @ 0x1C01CB270 (-Unlock@DXGDEVICE@@QEAAJPEBU_D3DKMT_UNLOCK@@E@Z.c)
 *     ?Unlock2@DXGDEVICE@@QEAAJPEAVDXGALLOCATION@@H@Z @ 0x1C03172F0 (-Unlock2@DXGDEVICE@@QEAAJPEAVDXGALLOCATION@@H@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z @ 0x1C000F16C (-GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C002CFC0 (memset.c)
 *     ?DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z @ 0x1C0179C10 (-DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z.c)
 *     ?IsVSyncAvailable@DXGADAPTER@@QEAAEI@Z @ 0x1C01C5974 (-IsVSyncAvailable@DXGADAPTER@@QEAAEI@Z.c)
 *     ?DxgkpGetDodPrimaryInfo@@YAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@PEAU_D3DKMT_KMDOD_ESCAPE@@@Z @ 0x1C03BC258 (-DxgkpGetDodPrimaryInfo@@YAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@PEAU_D3DKMT_KMDOD_ESCAPE@@@Z.c)
 *     ?PresentDisplayOnly@BLTQUEUE@@QEAAJPEAU_DXGKARG_PRESENT_DISPLAYONLY@@IW4BltQueuePresentDisplayOnlySource@1@@Z @ 0x1C03BDC58 (-PresentDisplayOnly@BLTQUEUE@@QEAAJPEAU_DXGKARG_PRESENT_DISPLAYONLY@@IW4BltQueuePresentDisplayOn.c)
 */

__int64 __fastcall DXGDEVICE::UpdateDodFrontBuffer(ADAPTER_RENDER **this, struct DXGALLOCATION *a2)
{
  unsigned int v4; // edx
  DXGADAPTER *v6; // rcx
  __int64 v7; // r8
  unsigned int v8; // ebx
  __int64 v9; // rax
  int v10; // eax
  __int64 v11; // r14
  const struct _DXGK_DISPLAYMODE_INFO *DisplayModeInfo; // rax
  __int128 v13; // xmm2
  __int128 v14; // xmm0
  __int64 v15; // rax
  int v16; // ecx
  D3DDDIFORMAT Format; // eax
  int v18; // eax
  __int64 v19; // rax
  unsigned int v20; // edx
  int v21; // eax
  __int64 v22; // rax
  __int64 v23; // r8
  struct _DXGKARG_DESCRIBEALLOCATION v24; // [rsp+50h] [rbp-B0h] BYREF
  _QWORD v25[8]; // [rsp+80h] [rbp-80h] BYREF
  __int128 v26; // [rsp+C0h] [rbp-40h]
  __int128 v27; // [rsp+D0h] [rbp-30h]
  _DWORD v28[20]; // [rsp+110h] [rbp+10h] BYREF
  __int128 v29; // [rsp+160h] [rbp+60h] BYREF

  v4 = *(_DWORD *)(*((_QWORD *)a2 + 6) + 4LL);
  if ( (v4 & 0x10) != 0 )
  {
    WdLogSingleEntry3(4LL, -1071775482LL, this, a2);
    return 3223191814LL;
  }
  v6 = this[231];
  if ( v6 && !DXGADAPTER::IsVSyncAvailable(v6, (v4 >> 6) & 0xF) )
  {
    WdLogSingleEntry3(4LL, 0LL, this, (*(_DWORD *)(*((_QWORD *)a2 + 6) + 4LL) >> 6) & 0xF);
    return 0LL;
  }
  memset(v28, 0, sizeof(v28));
  DxgkpGetDodPrimaryInfo((struct DXGDEVICE *)this, a2, (struct _D3DKMT_KMDOD_ESCAPE *)v28);
  if ( !v28[8] )
  {
    v8 = -1073741811;
    WdLogSingleEntry4(2LL, -1073741811LL, this, a2, *((unsigned int *)a2 + 4));
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"ret = 0x%I64x Device 0x%I64x: DxgkpGetDodPrimaryInfo failed for front buffer 0x%I64x 0x%I64x",
      -1073741811LL,
      (__int64)this,
      (__int64)a2,
      *((unsigned int *)a2 + 4),
      0LL);
    return v8;
  }
  v9 = *((_QWORD *)a2 + 6);
  v24.Rotation = -1;
  memset(&v24.Width, 0, 32);
  v24.Flags.Value = 1;
  v24.hAllocation = *(HANDLE *)(v9 + 16);
  v10 = ADAPTER_RENDER::DdiDescribeAllocation(this[2], &v24, v7);
  v11 = v10;
  if ( v10 < 0 )
  {
    WdLogSingleEntry5(
      2LL,
      v10,
      this,
      a2,
      (*(_DWORD *)(*((_QWORD *)a2 + 6) + 4LL) >> 6) & 0xF,
      *((unsigned int *)a2 + 4));
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"ret = 0x%I64x Device 0x%I64x: DdiDescribeAllocation failed for front buffer 0x%I64x 0x%I64x 0x%I64x",
      v11,
      (__int64)this,
      (__int64)a2,
      (*(_DWORD *)(*((_QWORD *)a2 + 6) + 4LL) >> 6) & 0xF,
      *((unsigned int *)a2 + 4));
    return (unsigned int)v11;
  }
  DisplayModeInfo = ADAPTER_DISPLAY::GetDisplayModeInfo(
                      *((ADAPTER_DISPLAY **)this[231] + 349),
                      (*(_DWORD *)(*((_QWORD *)a2 + 6) + 4LL) >> 6) & 0xF);
  v13 = *(_OWORD *)DisplayModeInfo;
  v14 = *((_OWORD *)DisplayModeInfo + 1);
  v15 = *(_QWORD *)DisplayModeInfo;
  v26 = v13;
  v27 = v14;
  if ( *(_QWORD *)&v24.Width == v15 && (v24.Rotation == -1 || v24.Rotation == HIDWORD(v27)) )
  {
    v16 = 22;
    Format = D3DDDIFMT_X8R8G8B8;
    if ( v24.Format != D3DDDIFMT_A8R8G8B8 )
      Format = v24.Format;
    if ( DWORD2(v26) != 21 )
      v16 = DWORD2(v26);
    if ( Format == v16 )
    {
      memset(v25, 0, sizeof(v25));
      v18 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64, _DWORD, _QWORD, _QWORD *))(*(_QWORD *)(*((_QWORD *)this[2] + 81) + 8LL)
                                                                                                 + 272LL))(
              *((_QWORD *)this[2] + 82),
              *((_QWORD *)a2 + 3),
              *((_DWORD *)a2 + 4) & 0x3F,
              2LL,
              0,
              0LL,
              &v25[1]);
      v11 = v18;
      if ( v18 < 0 )
      {
        WdLogSingleEntry4(2LL, v18, this, a2, *((unsigned int *)a2 + 4));
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"ret = 0x%I64x Device 0x%I64x: VidMmBeginCPUAccess failed for front buffer 0x%I64x 0x%I64x 0x%I64x",
          v11,
          (__int64)this,
          (__int64)a2,
          *((unsigned int *)a2 + 4),
          0LL);
        return (unsigned int)v11;
      }
      v19 = *((_QWORD *)a2 + 6);
      v29 = 0LL;
      v20 = (*(_DWORD *)(v19 + 4) >> 6) & 0xF;
      LODWORD(v25[0]) = v20;
      if ( (unsigned int)(v24.Format - 21) > 1 )
      {
        v8 = -1073741811;
        WdLogSingleEntry4(2LL, -1073741811LL, this, a2, v24.Format);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"ret = 0x%I64x Device 0x%I64x: front buffer's format is not supported 0x%I64x 0x%I64x",
          -1073741811LL,
          (__int64)this,
          (__int64)a2,
          v24.Format,
          0LL);
        return v8;
      }
      LODWORD(v25[2]) = 4;
      if ( HIDWORD(v27) != 1 )
      {
        if ( HIDWORD(v27) == 2 )
        {
LABEL_27:
          *((_QWORD *)&v29 + 1) = __PAIR64__(v24.Width, v24.Height);
          v21 = v28[9];
LABEL_29:
          HIDWORD(v25[2]) = v21;
          goto LABEL_30;
        }
        if ( HIDWORD(v27) != 3 )
        {
          if ( HIDWORD(v27) != 4 )
          {
LABEL_30:
            if ( HIDWORD(v27) != 1 )
              LODWORD(v25[3]) |= 1u;
            LODWORD(v25[5]) = 1;
            v25[6] = &v29;
            v22 = *(_QWORD *)(*((_QWORD *)this[231] + 349) + 448LL);
            if ( v22 && v20 < *(_DWORD *)v22 && (v23 = *(_QWORD *)(v22 + 8)) != 0 )
              v8 = BLTQUEUE::PresentDisplayOnly(v23 + 2920LL * v20, v25, 0LL, 1LL);
            else
              v8 = -1073741811;
            (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD *)(*((_QWORD *)this[2] + 81) + 8LL)
                                                                           + 280LL))(
              *((_QWORD *)this[2] + 82),
              *((_QWORD *)a2 + 3),
              *((_DWORD *)a2 + 4) & 0x3F,
              0LL,
              0LL);
            return v8;
          }
          goto LABEL_27;
        }
      }
      *((_QWORD *)&v29 + 1) = *(_QWORD *)&v24.Width;
      v21 = v28[8];
      goto LABEL_29;
    }
  }
  WdLogSingleEntry3(4LL, -1071775482LL, this, a2);
  return 3223191557LL;
}
