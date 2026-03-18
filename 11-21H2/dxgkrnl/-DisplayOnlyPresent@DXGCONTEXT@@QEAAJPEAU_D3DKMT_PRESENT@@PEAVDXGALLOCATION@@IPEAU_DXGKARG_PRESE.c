/*
 * XREFs of ?DisplayOnlyPresent@DXGCONTEXT@@QEAAJPEAU_D3DKMT_PRESENT@@PEAVDXGALLOCATION@@IPEAU_DXGKARG_PRESENT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0319550
 * Callers:
 *     ?PresentMultiPlaneOverlay3@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAVCOREDEVICEACCESS@@PEAPEAV1@@Z @ 0x1C0196940 (-PresentMultiPlaneOverlay3@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAVCOREDEV.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?SetDisplayedPrimary@DXGDEVICE@@QEAAXIPEBVDXGALLOCATION@@IE@Z @ 0x1C000E260 (-SetDisplayedPrimary@DXGDEVICE@@QEAAXIPEBVDXGALLOCATION@@IE@Z.c)
 *     ?GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z @ 0x1C000F16C (-GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     ?DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z @ 0x1C0179C10 (-DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z.c)
 *     ?DisableOverlayPlanes@ADAPTER_DISPLAY@@QEAAXI@Z @ 0x1C01962B0 (-DisableOverlayPlanes@ADAPTER_DISPLAY@@QEAAXI@Z.c)
 *     ?PresentDisplayOnly@ADAPTER_DISPLAY@@QEAAJPEAVDXGCONTEXT@@IPEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT@@PEAVCOREDEVICEACCESS@@PEAUtagRECT@@@Z @ 0x1C02C16C8 (-PresentDisplayOnly@ADAPTER_DISPLAY@@QEAAJPEAVDXGCONTEXT@@IPEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRE.c)
 */

__int64 __fastcall DXGCONTEXT::DisplayOnlyPresent(
        DXGCONTEXT *this,
        struct _D3DKMT_PRESENT *a2,
        struct DXGALLOCATION *a3,
        unsigned int a4,
        struct _DXGKARG_PRESENT *a5,
        struct COREDEVICEACCESS *a6)
{
  bool v6; // zf
  unsigned int v11; // edx
  __int128 v13; // xmm0
  __int64 v14; // rax
  void *v15; // rcx
  __int64 v16; // rax
  __int64 v17; // r8
  int v18; // eax
  __int64 v19; // rbx
  int v20; // ecx
  D3DDDIFORMAT Format; // eax
  int v22; // r15d
  __int64 v23; // r10
  __int64 v24; // r8
  struct _DXGKARG_DESCRIBEALLOCATION v25; // [rsp+50h] [rbp-89h] BYREF
  __int128 v26; // [rsp+80h] [rbp-59h]
  struct tagRECT v27; // [rsp+D0h] [rbp-9h] BYREF

  v6 = (a2->Flags.Value & 0x10000000) == 0;
  v27 = 0LL;
  if ( v6 )
  {
    v11 = *(_DWORD *)(*((_QWORD *)a3 + 6) + 4LL);
    if ( (v11 & 0x10) != 0 )
    {
      WdLogSingleEntry3(4LL, -1071775482LL, this, a3);
      return 3223191814LL;
    }
    v13 = *(_OWORD *)ADAPTER_DISPLAY::GetDisplayModeInfo(
                       *(ADAPTER_DISPLAY **)(*(_QWORD *)(*((_QWORD *)this + 2) + 1848LL) + 2792LL),
                       (v11 >> 6) & 0xF);
    v25.Rotation = -1;
    v14 = *((_QWORD *)a3 + 6);
    memset(&v25.Width, 0, 32);
    v25.Flags.Value = 1;
    v26 = v13;
    v15 = *(void **)(v14 + 16);
    v16 = *((_QWORD *)this + 2);
    v25.hAllocation = v15;
    v18 = ADAPTER_RENDER::DdiDescribeAllocation(
            *(ADAPTER_RENDER **)(*(_QWORD *)(*(_QWORD *)(v16 + 16) + 16LL) + 2800LL),
            &v25,
            v17);
    if ( v18 < 0 )
    {
      v19 = v18;
      WdLogSingleEntry5(
        2LL,
        v18,
        this,
        *((unsigned int *)a3 + 4),
        a3,
        (*(_DWORD *)(*((_QWORD *)a3 + 6) + 4LL) >> 6) & 0xF);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"ret = 0x%I64x Device 0x%I64x: DdiDescribeAllocation failed 0x%I64x 0x%I64x 0x%I64x",
        v19,
        (__int64)this,
        *((unsigned int *)a3 + 4),
        (__int64)a3,
        (*(_DWORD *)(*((_QWORD *)a3 + 6) + 4LL) >> 6) & 0xF);
      return 3221225485LL;
    }
    if ( *(_QWORD *)&v25.Width != (_QWORD)v26 )
      goto LABEL_19;
    v20 = 22;
    Format = D3DDDIFMT_X8R8G8B8;
    if ( v25.Format != D3DDDIFMT_A8R8G8B8 )
      Format = v25.Format;
    if ( DWORD2(v26) != 21 )
      v20 = DWORD2(v26);
    if ( Format != v20 )
    {
LABEL_19:
      WdLogSingleEntry3(4LL, -1071775482LL, this, a3);
      return 3223191557LL;
    }
    v27.right = v25.Width;
    v27.bottom = v25.Height;
  }
  v22 = ADAPTER_DISPLAY::PresentDisplayOnly(
          *(ADAPTER_DISPLAY **)(*(_QWORD *)(*((_QWORD *)this + 2) + 1848LL) + 2792LL),
          this,
          a4,
          a2,
          a5,
          a6,
          &v27);
  if ( v22 >= 0 && (a2->Flags.Value & 4) != 0 )
  {
    v23 = *((_QWORD *)this + 2);
    v24 = *(_QWORD *)(v23 + 1848);
    if ( v24 == *(_QWORD *)(*(_QWORD *)(v23 + 16) + 16LL) )
    {
      ADAPTER_DISPLAY::DisableOverlayPlanes(*(ADAPTER_DISPLAY **)(v24 + 2792), a4);
      v23 = *((_QWORD *)this + 2);
    }
    DXGDEVICE::SetDisplayedPrimary((struct _KTHREAD **)v23, a4, a3, 0, 1u);
  }
  return (unsigned int)v22;
}
