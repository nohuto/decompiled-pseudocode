/*
 * XREFs of ?DisableMPOPlanes@ADAPTER_DISPLAY@@QEAAXIE@Z @ 0x1C01C70A8
 * Callers:
 *     ?DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEAPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEBIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C019B990 (-DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEA.c)
 *     ?SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@EPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C01B85D0 (-SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_.c)
 *     ?SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z @ 0x1C01C69E4 (-SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000C3F8 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000F574 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000F5FC (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C002CFC0 (memset.c)
 *     McTemplateK0pqqxpxqqqddddddddddddqqtqq_EtwWriteTransfer @ 0x1C0045F84 (McTemplateK0pqqxpxqqqddddddddddddqqtqq_EtwWriteTransfer.c)
 *     ?DisableOverlayPlanes@ADAPTER_DISPLAY@@QEAAXI@Z @ 0x1C01962B0 (-DisableOverlayPlanes@ADAPTER_DISPLAY@@QEAAXI@Z.c)
 *     ?DisableAllPlanesOnVidPnSourcesImmediate@ADAPTER_DISPLAY@@QEAAXI@Z @ 0x1C01C6F6C (-DisableAllPlanesOnVidPnSourcesImmediate@ADAPTER_DISPLAY@@QEAAXI@Z.c)
 *     ?GetLatestPlaneConfigInternal@DISPLAY_SOURCE@@QEAAPEAU_DISPLAY_PLANE_CONFIG@@I@Z @ 0x1C01E6CCC (-GetLatestPlaneConfigInternal@DISPLAY_SOURCE@@QEAAPEAU_DISPLAY_PLANE_CONFIG@@I@Z.c)
 */

void __fastcall ADAPTER_DISPLAY::DisableMPOPlanes(ADAPTER_DISPLAY *this, unsigned int a2, char a3)
{
  bool v3; // bl
  __int64 v5; // r14
  __int64 v7; // rax
  unsigned int v8; // edi
  DISPLAY_SOURCE *v9; // rcx
  struct _DISPLAY_PLANE_CONFIG *LatestPlaneConfigInternal; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rcx
  int v17; // [rsp+38h] [rbp-138h]
  int v18; // [rsp+48h] [rbp-128h]
  int v19; // [rsp+50h] [rbp-120h]
  int v20; // [rsp+58h] [rbp-118h]
  __int64 v21; // [rsp+F8h] [rbp-78h]
  _DWORD *v22; // [rsp+100h] [rbp-70h] BYREF
  _BYTE v23[16]; // [rsp+108h] [rbp-68h] BYREF
  _OWORD v24[3]; // [rsp+118h] [rbp-58h] BYREF
  __int64 v25; // [rsp+148h] [rbp-28h]
  _DWORD v26[36]; // [rsp+150h] [rbp-20h] BYREF

  v3 = 0;
  v5 = a2;
  v7 = *(_QWORD *)(*((_QWORD *)this + 2) + 2800LL);
  if ( v7 )
  {
    v8 = a3 == 0;
    if ( v8 < *(_DWORD *)(*(_QWORD *)(v7 + 16) + 2632LL) )
    {
      v21 = 4000LL * a2;
      do
      {
        DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v23, (ADAPTER_DISPLAY *)((char *)this + 608), 0);
        DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v23);
        v9 = (DISPLAY_SOURCE *)(*((_QWORD *)this + 16) + v21);
        if ( v8 < *((_DWORD *)v9 + 940) )
        {
          LatestPlaneConfigInternal = DISPLAY_SOURCE::GetLatestPlaneConfigInternal(v9, v8);
          if ( LatestPlaneConfigInternal )
            v3 = (*((_BYTE *)LatestPlaneConfigInternal + 8) & 3) != 0;
        }
        if ( v23[8] )
          DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v23);
        if ( v3 )
        {
          memset(&v26[1], 0, 0x8CuLL);
          v26[0] = v8;
          v22 = v26;
          v3 = 0;
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0LL )
            McTemplateK0pqqxpxqqqddddddddddddqqtqq_EtwWriteTransfer(
              v12,
              v11,
              v13,
              *((_QWORD *)this + 2),
              v5,
              v8,
              0,
              v17,
              0,
              v18,
              v19,
              v20,
              0,
              0,
              0,
              0,
              0,
              0,
              0,
              0,
              0,
              0,
              0,
              0);
          v25 = 0LL;
          v24[0] = 0LL;
          LODWORD(v24[0]) = v5;
          v24[1] = (unsigned __int64)&v22;
          v14 = *((_QWORD *)this + 2);
          v24[2] = 0LL;
          HIDWORD(v24[0]) = 1;
          if ( (*(int (__fastcall **)(_QWORD, _OWORD *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v14 + 2800) + 624LL) + 8LL)
                                                       + 824LL))(
                 *(_QWORD *)(*(_QWORD *)(v14 + 2800) + 632LL),
                 v24) >= 0 )
            goto LABEL_9;
          WdLogSingleEntry3(2LL, v8, v5, *((_QWORD *)this + 2));
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"Failed to disable MPO plane 0x%I64x in SetVidPnSourceVisibility, VidPnSourceId: 0x%I64x, Adapter 0x%I64x",
            v8,
            v5,
            *((_QWORD *)this + 2),
            0LL,
            0LL);
        }
        v3 = 0;
LABEL_9:
        ++v8;
      }
      while ( v8 < *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 2800LL) + 16LL) + 2632LL) );
    }
    if ( a3 )
    {
      ADAPTER_DISPLAY::DisableAllPlanesOnVidPnSourcesImmediate(this, 1 << v5);
    }
    else
    {
      v15 = *(_QWORD *)(4000 * v5 + *((_QWORD *)this + 16) + 728);
      if ( v15 )
      {
        v16 = *(_QWORD *)(v15 + 1848);
        if ( v16 == *(_QWORD *)(*(_QWORD *)(v15 + 16) + 16LL) )
          ADAPTER_DISPLAY::DisableOverlayPlanes(*(ADAPTER_DISPLAY **)(v16 + 2792), v5);
      }
    }
  }
}
