/*
 * XREFs of ?CallCheckMultiPlaneOverlaySupport3DDI@@YAJIPEAPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@PEAPEAXIPEAPEAU_D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE@@PEAVADAPTER_DISPLAY@@PEAHPEAUD3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO@@@Z @ 0x1C015F208
 * Callers:
 *     ?CheckMultiPlaneOverlayInternal3@@YAJIPEAVADAPTER_RENDER@@PEAVADAPTER_DISPLAY@@PEAHPEAUD3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO@@@Z @ 0x1C015E960 (-CheckMultiPlaneOverlayInternal3@@YAJIPEAVADAPTER_RENDER@@PEAVADAPTER_DISPLAY@@PEAHPEAUD3DKMT_CH.c)
 * Callees:
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     memset @ 0x1C002CFC0 (memset.c)
 *     ?DdiCheckMultiPlaneOverlaySupport3@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_CHECKMULTIPLANEOVERLAYSUPPORT3@@@Z @ 0x1C015F518 (-DdiCheckMultiPlaneOverlaySupport3@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_CHECKMULTIPLANEOVERLAYSUPP.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@PEAU_DXGK_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE@@$00@@QEAAPEAPEAU_DXGK_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE@@I@Z @ 0x1C02E37E0 (-AllocateElements@-$PagedPoolZeroedArray@PEAU_DXGK_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOUR.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@U_DXGK_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE@@$00@@QEAAPEAU_DXGK_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE@@I@Z @ 0x1C02E385C (-AllocateElements@-$PagedPoolZeroedArray@U_DXGK_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE@.c)
 */

__int64 __fastcall CallCheckMultiPlaneOverlaySupport3DDI(
        unsigned int a1,
        unsigned __int64 a2,
        void **a3,
        __int64 a4,
        struct _D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE **a5,
        struct ADAPTER_DISPLAY *a6,
        int *a7,
        struct D3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO *a8)
{
  __int64 v8; // r13
  unsigned __int64 v9; // rbx
  struct D3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO *v10; // rcx
  struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 **v11; // r12
  __int64 v12; // r14
  _BYTE *Pool2; // r15
  unsigned __int64 v14; // rdi
  struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 *v15; // rsi
  DXGK_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE **v16; // r10
  LONG *p_HighPart; // r8
  __int64 v18; // r9
  signed __int64 v19; // rbx
  struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 *v20; // r11
  int v21; // edx
  int v22; // eax
  unsigned int v23; // ebx
  __int64 CurrentProcess; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // rax
  struct _D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE **v33; // r9
  __int64 v34; // r8
  __int64 v35; // rdi
  __int64 v36; // rdx
  int v37; // ecx
  int v38; // [rsp+20h] [rbp-E0h]
  PVOID P; // [rsp+28h] [rbp-D8h] BYREF
  char v40; // [rsp+30h] [rbp-D0h] BYREF
  int v41; // [rsp+38h] [rbp-C8h]
  void **v42; // [rsp+40h] [rbp-C0h]
  ADAPTER_DISPLAY *v43; // [rsp+48h] [rbp-B8h]
  int *v44; // [rsp+50h] [rbp-B0h]
  struct DXGK_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO::$3235B0AF7BF3D9B607A1C4FD103E9694::$7E5D53739D5A0755634D9029F4E2827E *v45; // [rsp+58h] [rbp-A8h]
  _DXGKARG_CHECKMULTIPLANEOVERLAYSUPPORT3 v46; // [rsp+60h] [rbp-A0h] BYREF
  PVOID v47; // [rsp+88h] [rbp-78h]
  _BYTE v48[24]; // [rsp+90h] [rbp-70h] BYREF
  int v49; // [rsp+A8h] [rbp-58h]
  PVOID v50; // [rsp+B0h] [rbp-50h] BYREF
  char v51; // [rsp+B8h] [rbp-48h] BYREF
  int v52; // [rsp+E4h] [rbp-1Ch]
  PVOID v53; // [rsp+F0h] [rbp-10h]
  _BYTE v54[312]; // [rsp+F8h] [rbp-8h] BYREF
  int v55; // [rsp+230h] [rbp+130h]

  v8 = 0LL;
  v9 = a1;
  v10 = a8;
  v11 = (struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 **)a2;
  v43 = a6;
  v12 = (unsigned int)a4;
  v42 = a3;
  v38 = v9;
  *a7 = 0;
  a8->Value = 0;
  v44 = a7;
  v45 = (struct DXGK_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO::$3235B0AF7BF3D9B607A1C4FD103E9694::$7E5D53739D5A0755634D9029F4E2827E *)a8;
  v47 = 0LL;
  v49 = 0;
  if ( (unsigned int)v9 > 3 )
  {
    a2 = 0xFFFFFFFFFFFFFFFFuLL % v9;
    v14 = v9;
    if ( 0xFFFFFFFFFFFFFFFFuLL / v9 < 8 )
      goto LABEL_34;
    Pool2 = (_BYTE *)ExAllocatePool2(256LL, 8 * v9, 1265072196LL, a4);
    v47 = Pool2;
  }
  else
  {
    Pool2 = v48;
    v47 = v48;
    if ( (_DWORD)v9 )
    {
      memset(v48, 0, 8LL * (unsigned int)v9);
      Pool2 = v47;
    }
  }
  v49 = v9;
  v14 = v9;
  if ( !Pool2 )
  {
LABEL_34:
    CurrentProcess = PsGetCurrentProcess(v10, a2, a3, a4);
    v23 = -1073741801;
    WdLogSingleEntry3(3LL, v14, -1073741801LL, CurrentProcess);
    goto LABEL_30;
  }
  v53 = 0LL;
  v55 = 0;
  if ( (unsigned int)v9 > 3 )
  {
    a2 = 0xFFFFFFFFFFFFFFFFuLL % v9;
    if ( 0xFFFFFFFFFFFFFFFFuLL / v9 < 0x68 )
      goto LABEL_37;
    v15 = (struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 *)ExAllocatePool2(256LL, 104 * v9, 1265072196LL, a4);
    v53 = v15;
  }
  else
  {
    v15 = (struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 *)v54;
    v53 = v54;
    if ( (_DWORD)v9 )
    {
      memset(v54, 0, 104 * v9);
      v15 = (struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 *)v53;
    }
  }
  v55 = v9;
  if ( v15 )
  {
    P = 0LL;
    v16 = 0LL;
    v41 = 0;
    v50 = 0LL;
    v52 = 0;
    if ( !(_DWORD)v12
      || (v8 = PagedPoolZeroedArray<_DXGK_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE,1>::AllocateElements(
                 &v50,
                 (unsigned int)v12),
          v27 = PagedPoolZeroedArray<_DXGK_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE *,1>::AllocateElements(
                  &P,
                  (unsigned int)v12),
          v16 = (DXGK_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE **)v27,
          v8)
      && v27 )
    {
      if ( (_DWORD)v9 )
      {
        p_HighPart = &v15->CompSurfaceLuid.HighPart;
        v18 = Pool2 - (_BYTE *)v11;
        v19 = (char *)v42 - (char *)v11;
        do
        {
          *(struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 **)((char *)v11 + v18) = v15;
          v20 = *v11;
          *(_QWORD *)(p_HighPart - 3) = *(struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 **)((char *)v11 + v19);
          *(p_HighPart - 1) = v20->VidPnSourceId;
          *p_HighPart = v20->LayerIndex;
          *(RECT *)(p_HighPart + 2) = v20->pPlaneAttributes->SrcRect;
          *(RECT *)(p_HighPart + 6) = v20->pPlaneAttributes->DstRect;
          *(RECT *)(p_HighPart + 10) = v20->pPlaneAttributes->ClipRect;
          p_HighPart[14] = v20->pPlaneAttributes->Rotation;
          p_HighPart[16] = v20->pPlaneAttributes->ColorSpace;
          p_HighPart[1] ^= (p_HighPart[1] ^ v20->pPlaneAttributes->Flags) & 1;
          v21 = p_HighPart[1] ^ ((unsigned __int8)p_HighPart[1] ^ (unsigned __int8)v20->pPlaneAttributes->Flags) & 2;
          p_HighPart[1] = v21;
          p_HighPart[1] = v21 ^ ((unsigned __int8)v21 ^ (unsigned __int8)v20->pPlaneAttributes->Flags) & 4;
          p_HighPart[15] ^= (p_HighPart[15] ^ v20->pPlaneAttributes->Blend) & 1;
          if ( v20->pPlaneAttributes->StretchQuality == DXGKMT_MULTIPLANE_OVERLAY_STRETCH_QUALITY_BILINEAR )
          {
            p_HighPart[17] = 1;
          }
          else if ( v20->pPlaneAttributes->StretchQuality == DXGKMT_MULTIPLANE_OVERLAY_STRETCH_QUALITY_HIGH )
          {
            p_HighPart[17] = 2;
          }
          v15 = (struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 *)((char *)v15 + 104);
          ++v11;
          p_HighPart[18] = v20->pPlaneAttributes->SDRWhiteLevel;
          p_HighPart += 26;
          --v14;
        }
        while ( v14 );
        LODWORD(v9) = v38;
      }
      if ( (_DWORD)v12 )
      {
        v33 = a5;
        v34 = v8 + 4;
        v35 = v12;
        do
        {
          *(struct _D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE **)((char *)v33 + (char *)v16 - (char *)a5) = (struct _D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE *)v8;
          v8 += 44LL;
          v36 = (__int64)*v33++;
          v37 = *(_DWORD *)v34;
          *(_DWORD *)(v34 - 4) = *(_DWORD *)v36;
          *(_OWORD *)(v34 + 4) = *(_OWORD *)(v36 + 8);
          *(_OWORD *)(v34 + 20) = *(_OWORD *)(v36 + 24);
          *(_DWORD *)(v34 + 36) = *(_DWORD *)(v36 + 40);
          *(_DWORD *)v34 ^= (*(_DWORD *)(v36 + 4) ^ v37) & 1;
          *(_DWORD *)v34 ^= (*(_DWORD *)(v36 + 4) ^ *(_DWORD *)v34) & 2;
          v34 += 44LL;
          --v35;
        }
        while ( v35 );
      }
      v46.PlaneCount = v9;
      *(&v46.PlaneCount + 1) = 0;
      *(&v46.PostCompositionCount + 1) = 0;
      *(_QWORD *)&v46.Supported = 0LL;
      v46.ppPlanes = (DXGK_MULTIPLANE_OVERLAY_PLANE_WITH_SOURCE2 **)Pool2;
      v46.PostCompositionCount = v12;
      v46.ppPostComposition = v16;
      v22 = ADAPTER_DISPLAY::DdiCheckMultiPlaneOverlaySupport3(v43, &v46);
      if ( v22 >= 0 )
      {
        *v44 = v46.Supported;
        *v45 = v46.ReturnInfo.0;
      }
      v23 = v22;
    }
    else
    {
      v32 = PsGetCurrentProcess(v29, v28, v30, v31);
      v23 = -1073741801;
      WdLogSingleEntry3(3LL, v12, -1073741801LL, v32);
    }
    if ( P != &v40 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v41 = 0;
    if ( v50 != &v51 && v50 )
      ExFreePoolWithTag(v50, 0);
    v50 = 0LL;
    v52 = 0;
    goto LABEL_28;
  }
LABEL_37:
  v26 = PsGetCurrentProcess(v10, a2, a3, a4);
  v23 = -1073741801;
  WdLogSingleEntry3(3LL, v14, -1073741801LL, v26);
LABEL_28:
  if ( v53 != v54 && v53 )
    ExFreePoolWithTag(v53, 0);
  v53 = 0LL;
  v55 = 0;
LABEL_30:
  if ( v47 != v48 && v47 )
    ExFreePoolWithTag(v47, 0);
  return v23;
}
