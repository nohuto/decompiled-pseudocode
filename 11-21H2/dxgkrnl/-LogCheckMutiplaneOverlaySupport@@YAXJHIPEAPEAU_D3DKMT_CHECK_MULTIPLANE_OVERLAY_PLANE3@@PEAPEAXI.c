/*
 * XREFs of ?LogCheckMutiplaneOverlaySupport@@YAXJHIPEAPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@PEAPEAXIPEAPEAU_D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE@@PEAVADAPTER_RENDER@@@Z @ 0x1C015ED50
 * Callers:
 *     ?CheckMultiPlaneOverlaySupport3@DXGDEVICE@@QEAAJIPEAPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@IPEAPEAU_D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE@@_NPEAHPEAUD3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO@@@Z @ 0x1C015DFB4 (-CheckMultiPlaneOverlaySupport3@DXGDEVICE@@QEAAJIPEAPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@.c)
 *     ?CheckMultiPlaneOverlayInternal3@@YAJIPEAVADAPTER_RENDER@@PEAVADAPTER_DISPLAY@@PEAHPEAUD3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO@@@Z @ 0x1C015E960 (-CheckMultiPlaneOverlayInternal3@@YAJIPEAVADAPTER_RENDER@@PEAVADAPTER_DISPLAY@@PEAHPEAUD3DKMT_CH.c)
 * Callees:
 *     McTemplateK0qqddddddddq_EtwWriteTransfer @ 0x1C004C5F8 (McTemplateK0qqddddddddq_EtwWriteTransfer.c)
 *     McTemplateK0qqqddddddddddddqqqqqq_EtwWriteTransfer @ 0x1C004C710 (McTemplateK0qqqddddddddddddqqqqqq_EtwWriteTransfer.c)
 *     McTemplateK0qqqqqq_EtwWriteTransfer @ 0x1C004C918 (McTemplateK0qqqqqq_EtwWriteTransfer.c)
 *     ?IsYUVAllocation@@YAHPEAXPEAVADAPTER_RENDER@@@Z @ 0x1C015EE98 (-IsYUVAllocation@@YAHPEAXPEAVADAPTER_RENDER@@@Z.c)
 */

void __fastcall LogCheckMutiplaneOverlaySupport(
        D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3 *pPlaneAttributes,
        __int64 a2,
        unsigned int a3,
        struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 **a4,
        void **a5,
        unsigned int a6,
        struct _D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE **a7,
        struct ADAPTER_RENDER *a8)
{
  __int64 v9; // rdi
  int v10; // r12d
  char v11; // r15
  float v12; // xmm2_4
  char v13; // bp
  int v14; // r14d
  int v15; // r10d
  __int64 v16; // r8
  float v17; // xmm3_4
  struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 **v18; // r11
  __int64 v19; // rbx
  float v20; // xmm1_4
  void **v21; // rbx
  signed __int64 v22; // rsi
  __int64 v23; // r8
  unsigned int *v24; // r14
  _DWORD *v25; // rdx
  __int64 v27; // rbp
  int *v28; // rcx
  int v29; // [rsp+28h] [rbp-C0h]

  v9 = a3;
  v10 = a2;
  v11 = (char)pPlaneAttributes;
  if ( bTracingEnabled )
  {
    v12 = FLOAT_1_0;
    v13 = 1;
    v14 = 1;
    v15 = 1;
    v16 = 1LL;
    v17 = FLOAT_1_0;
    if ( (_DWORD)v9 )
    {
      v18 = a4;
      v19 = (unsigned int)v9;
      do
      {
        pPlaneAttributes = (*v18)->pPlaneAttributes;
        a2 = (unsigned int)(pPlaneAttributes->SrcRect.right - pPlaneAttributes->SrcRect.left);
        v20 = (float)(pPlaneAttributes->DstRect.right - pPlaneAttributes->DstRect.left)
            / (float)(pPlaneAttributes->SrcRect.right - pPlaneAttributes->SrcRect.left);
        if ( v20 > v12 )
        {
          v13 = LOBYTE(pPlaneAttributes->SrcRect.right) - LOBYTE(pPlaneAttributes->SrcRect.left);
          v14 = pPlaneAttributes->DstRect.right - pPlaneAttributes->DstRect.left;
          v12 = (float)v14 / (float)(pPlaneAttributes->SrcRect.right - pPlaneAttributes->SrcRect.left);
        }
        else if ( v17 > v20 )
        {
          v15 = pPlaneAttributes->SrcRect.right - pPlaneAttributes->SrcRect.left;
          v16 = (unsigned int)(pPlaneAttributes->DstRect.right - pPlaneAttributes->DstRect.left);
          v17 = (float)(pPlaneAttributes->DstRect.right - pPlaneAttributes->DstRect.left) / (float)v15;
        }
        ++v18;
        --v19;
      }
      while ( v19 );
    }
    if ( v15 == 1 )
    {
      v16 = (unsigned int)v14;
      LOBYTE(v15) = v13;
    }
    if ( v10 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0qqqqqq_EtwWriteTransfer(
          (__int64)pPlaneAttributes,
          &EventCheckMultiPlaneOverlaySuccess,
          v16,
          (*a4)->VidPnSourceId,
          v9,
          v29,
          v15,
          v16,
          0);
    }
    else if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
    {
      McTemplateK0qqqqqq_EtwWriteTransfer(
        (__int64)pPlaneAttributes,
        &EventCheckMultiPlaneOverlayFail,
        v16,
        (*a4)->VidPnSourceId,
        v9,
        v29,
        v15,
        v16,
        v11);
    }
    if ( a6 )
    {
      v27 = a6;
      do
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        {
          v28 = (int *)*a7;
          McTemplateK0qqddddddddq_EtwWriteTransfer(
            (__int64)v28,
            a2,
            v16,
            *v28,
            v28[1],
            v28[2],
            v28[4],
            v28[3],
            v28[5],
            v28[6],
            v28[8],
            v28[7],
            v28[9],
            v28[10]);
        }
        ++a7;
        --v27;
      }
      while ( v27 );
    }
    if ( (_DWORD)v9 )
    {
      v21 = a5;
      v22 = (char *)a4 - (char *)a5;
      do
      {
        v23 = 0LL;
        v24 = *(unsigned int **)((char *)v21 + v22);
        if ( *v21 )
          v23 = (unsigned int)IsYUVAllocation(*v21, a8);
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        {
          v25 = (_DWORD *)*((_QWORD *)v24 + 3);
          McTemplateK0qqqddddddddddddqqqqqq_EtwWriteTransfer(
            *v24,
            (__int64)v25,
            v23,
            v24[4],
            v23,
            *v25,
            v25[1],
            v25[3],
            v25[2],
            v25[4],
            v25[5],
            v25[7],
            v25[6],
            v25[8],
            v25[9],
            v25[11],
            v25[10],
            v25[12],
            v25[13],
            v25[14],
            v25[18],
            v25[19],
            *v24,
            v25[20]);
        }
        ++v21;
        --v9;
      }
      while ( v9 );
    }
  }
}
