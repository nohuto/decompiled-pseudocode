/*
 * XREFs of ?AddTokenInformation@CAtlasSurfacePool@DirectComposition@@QEAAJAEBUtagRECT@@PEAV?$DynArrayIANoCtor@PEAUIUnknown@@$0BA@$0A@@@PEAV?$DynArrayIANoCtor@UDCOMPOSITION_TOKEN_SURFACE_UPDATE_INFO@@$0BA@$0A@@@@Z @ 0x1800E95C0
 * Callers:
 *     ?AddTokenInformation@CAtlasSurface@DirectComposition@@QEAAJPEAV?$DynArrayIANoCtor@PEAUIUnknown@@$0BA@$0A@@@PEAV?$DynArrayIANoCtor@UDCOMPOSITION_TOKEN_SURFACE_UPDATE_INFO@@$0BA@$0A@@@@Z @ 0x1800E91D4 (-AddTokenInformation@CAtlasSurface@DirectComposition@@QEAAJPEAV-$DynArrayIANoCtor@PEAUIUnknown@@.c)
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180073310 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     __security_check_cookie @ 0x180095B40 (__security_check_cookie.c)
 */

__int64 __fastcall DirectComposition::CAtlasSurfacePool::AddTokenInformation(
        __int64 a1,
        __int128 *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v8; // r8
  int v9; // ebp
  unsigned int v10; // eax
  _QWORD *v11; // r9
  int v12; // eax
  unsigned int v13; // ebx
  __int128 v14; // xmm0
  __int64 v15; // rax
  unsigned int v16; // edx
  __int64 v17; // rcx
  __int64 v18; // rax
  unsigned int v19; // edx
  int v20; // ecx
  _BYTE v22[24]; // [rsp+20h] [rbp-48h] BYREF

  v8 = *(_QWORD *)(*(_QWORD *)(a1 + 144) + 128LL);
  v9 = *(_DWORD *)(*(_QWORD *)(v8 + 24) + 416LL);
  if ( v9 != *(_DWORD *)(a1 + 192) )
  {
    v10 = *(_DWORD *)(a3 + 24);
    v11 = (_QWORD *)(a1 + 16);
    v8 = v10 + 1;
    if ( (unsigned int)v8 < v10 )
    {
LABEL_10:
      v13 = -2147024362;
      v19 = 181;
      v20 = -2147024362;
LABEL_13:
      DoStackCaptureDirect(v20, v19);
      return v13;
    }
    if ( (unsigned int)v8 > *(_DWORD *)(a3 + 20) )
    {
      v12 = DynArrayImpl<0>::AddMultipleAndSet(a3, 8u, v8, v11);
      v13 = v12;
      if ( v12 < 0 )
      {
LABEL_12:
        v19 = 192;
        v20 = v12;
        goto LABEL_13;
      }
    }
    else
    {
      *(_QWORD *)(*(_QWORD *)a3 + 8LL * v10) = *v11;
      *(_DWORD *)(a3 + 24) = v8;
    }
    *(_DWORD *)(a1 + 192) = v9;
  }
  v14 = *a2;
  *(_QWORD *)v22 = *(_QWORD *)(a1 + 24);
  v15 = *(unsigned int *)(a4 + 24);
  *(_OWORD *)&v22[8] = v14;
  v16 = v15 + 1;
  if ( (int)v15 + 1 < (unsigned int)v15 )
    goto LABEL_10;
  v13 = 0;
  if ( v16 > *(_DWORD *)(a4 + 20) )
  {
    v12 = DynArrayImpl<0>::AddMultipleAndSet(a4, 0x18u, v8, v22);
    v13 = v12;
    if ( v12 >= 0 )
      return v13;
    goto LABEL_12;
  }
  v17 = 3 * v15;
  v18 = *(_QWORD *)a4;
  *(_OWORD *)(v18 + 8 * v17) = *(_OWORD *)v22;
  *(_QWORD *)(v18 + 8 * v17 + 16) = *(_QWORD *)&v22[16];
  *(_DWORD *)(a4 + 24) = v16;
  return v13;
}
