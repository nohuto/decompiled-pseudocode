/*
 * XREFs of ?CallCheckMultiPlaneOverlaySupport1DDI@@YAJIPEAPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@PEAPEAXPEAVADAPTER_DISPLAY@@PEAHPEAUD3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO@@@Z @ 0x1C02E3988
 * Callers:
 *     ?CheckMultiPlaneOverlayInternal3@@YAJIPEAVADAPTER_RENDER@@PEAVADAPTER_DISPLAY@@PEAHPEAUD3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO@@@Z @ 0x1C015E960 (-CheckMultiPlaneOverlayInternal3@@YAJIPEAVADAPTER_RENDER@@PEAVADAPTER_DISPLAY@@PEAHPEAUD3DKMT_CH.c)
 * Callees:
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     memset @ 0x1C002CFC0 (memset.c)
 *     ?DdiCheckMultiPlaneOverlaySupport@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_CHECKMULTIPLANEOVERLAYSUPPORT@@@Z @ 0x1C02C608C (-DdiCheckMultiPlaneOverlaySupport@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_CHECKMULTIPLANEOVERLAYSUPPO.c)
 */

__int64 __fastcall CallCheckMultiPlaneOverlaySupport1DDI(
        __int64 a1,
        unsigned __int64 a2,
        void **p_SrcRect,
        DXGK_CHECK_MULTIPLANE_OVERLAY_SUPPORT_PLANE *Pool2,
        int *a5,
        struct D3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO *a6)
{
  ADAPTER_DISPLAY *v6; // r12
  void **v7; // rsi
  struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 **v8; // r15
  __int64 v9; // rbx
  __int64 v10; // rdi
  __int64 CurrentProcess; // rax
  unsigned int v12; // ebx
  signed __int64 v13; // r15
  __int64 v14; // r10
  _DWORD *v15; // rax
  int v16; // ecx
  int v17; // ecx
  int v18; // eax
  _DXGKARG_CHECKMULTIPLANEOVERLAYSUPPORT v20; // [rsp+20h] [rbp-E0h] BYREF
  PVOID P; // [rsp+40h] [rbp-C0h]
  _BYTE v22[312]; // [rsp+48h] [rbp-B8h] BYREF
  int v23; // [rsp+180h] [rbp+80h]

  v6 = (ADAPTER_DISPLAY *)Pool2;
  v7 = p_SrcRect;
  P = 0LL;
  v8 = (struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 **)a2;
  v23 = 0;
  *a5 = 0;
  a6->Value = 0;
  v9 = (unsigned int)a1;
  if ( (unsigned int)a1 <= 3 )
  {
    Pool2 = (DXGK_CHECK_MULTIPLANE_OVERLAY_SUPPORT_PLANE *)v22;
    P = v22;
    if ( (_DWORD)a1 )
    {
      memset(v22, 0, 104LL * (unsigned int)a1);
      Pool2 = (DXGK_CHECK_MULTIPLANE_OVERLAY_SUPPORT_PLANE *)P;
    }
  }
  else
  {
    a2 = 0xFFFFFFFFFFFFFFFFuLL % (unsigned int)a1;
    v10 = (unsigned int)a1;
    if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)a1 < 0x68 )
    {
LABEL_7:
      CurrentProcess = PsGetCurrentProcess(a1, a2, p_SrcRect, Pool2);
      v12 = -1073741801;
      WdLogSingleEntry3(3LL, v10, -1073741801LL, CurrentProcess);
      goto LABEL_24;
    }
    Pool2 = (DXGK_CHECK_MULTIPLANE_OVERLAY_SUPPORT_PLANE *)ExAllocatePool2(
                                                             256LL,
                                                             104LL * (unsigned int)a1,
                                                             1265072196LL,
                                                             Pool2);
    P = Pool2;
  }
  v23 = v9;
  v10 = v9;
  if ( !Pool2 )
    goto LABEL_7;
  if ( (_DWORD)v9 )
  {
    p_SrcRect = (void **)&Pool2->PlaneAttributes.SrcRect;
    v13 = (char *)v8 - (char *)v7;
    do
    {
      v14 = *(__int64 *)((char *)v7 + v13);
      *(p_SrcRect - 2) = *v7;
      *((_DWORD *)p_SrcRect - 2) = *(_DWORD *)(v14 + 16);
      *(_OWORD *)p_SrcRect = *(_OWORD *)(*(_QWORD *)(v14 + 24) + 4LL);
      *((_OWORD *)p_SrcRect + 1) = *(_OWORD *)(*(_QWORD *)(v14 + 24) + 20LL);
      *((_OWORD *)p_SrcRect + 2) = *(_OWORD *)(*(_QWORD *)(v14 + 24) + 36LL);
      *((_DWORD *)p_SrcRect + 12) = *(_DWORD *)(*(_QWORD *)(v14 + 24) + 52LL);
      v15 = *(_DWORD **)(v14 + 24);
      v16 = v15[18];
      if ( v16 == 6 || v16 == 8 )
      {
        *((_DWORD *)p_SrcRect + 15) |= 1u;
        v15 = *(_DWORD **)(v14 + 24);
      }
      v17 = v15[18];
      if ( v17 >= 8 && v17 <= 9 )
      {
        *((_DWORD *)p_SrcRect + 15) |= 2u;
        v15 = *(_DWORD **)(v14 + 24);
      }
      *((_DWORD *)p_SrcRect - 1) ^= ((unsigned __int8)*v15 ^ (unsigned __int8)*((_DWORD *)p_SrcRect - 1)) & 1;
      *((_DWORD *)p_SrcRect - 1) ^= ((unsigned __int8)*((_DWORD *)p_SrcRect - 1) ^ (unsigned __int8)**(_DWORD **)(v14 + 24)) & 2;
      *((_DWORD *)p_SrcRect + 13) ^= (*((_DWORD *)p_SrcRect + 13) ^ *(_DWORD *)(*(_QWORD *)(v14 + 24) + 56LL)) & 1;
      if ( *(_DWORD *)(*(_QWORD *)(v14 + 24) + 76LL) == 1 )
      {
        *((_DWORD *)p_SrcRect + 20) = 1;
      }
      else if ( *(_DWORD *)(*(_QWORD *)(v14 + 24) + 76LL) == 2 )
      {
        *((_DWORD *)p_SrcRect + 20) = 2;
      }
      ++v7;
      p_SrcRect += 13;
      --v10;
    }
    while ( v10 );
  }
  *(&v20.PlaneCount + 1) = 0;
  *(_QWORD *)&v20.Supported = 0LL;
  v20.PlaneCount = v9;
  v20.pPlanes = Pool2;
  v18 = ADAPTER_DISPLAY::DdiCheckMultiPlaneOverlaySupport(v6, &v20, (__int64)p_SrcRect);
  if ( v18 >= 0 )
    *a5 = v20.Supported;
  v12 = v18;
LABEL_24:
  if ( P != v22 && P )
    ExFreePoolWithTag(P, 0);
  return v12;
}
