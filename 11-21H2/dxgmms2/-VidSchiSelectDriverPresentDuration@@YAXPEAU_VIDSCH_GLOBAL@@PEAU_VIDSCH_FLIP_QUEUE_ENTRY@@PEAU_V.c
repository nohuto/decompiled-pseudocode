/*
 * XREFs of ?VidSchiSelectDriverPresentDuration@@YAXPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_FLIP_QUEUE_ENTRY@@PEAU_VIDSCH_PRESENT_INFO@@IIIAEAU_VIDSCH_CALL_EXECUTE_FLIP@@@Z @ 0x1C0012374
 * Callers:
 *     VidSchiSetupMmIoFlipMultiPlaneOverlay3 @ 0x1C0011E34 (VidSchiSetupMmIoFlipMultiPlaneOverlay3.c)
 * Callees:
 *     ?VidSchiGetCurrentVSyncPeriodQpc@@YA_KPEAU_VIDSCH_GLOBAL@@I_N@Z @ 0x1C0004B64 (-VidSchiGetCurrentVSyncPeriodQpc@@YA_KPEAU_VIDSCH_GLOBAL@@I_N@Z.c)
 *     ?ResetSmoother@VIDSCH_VSYNC_SMOOTHER@@QEAAXII@Z @ 0x1C001D620 (-ResetSmoother@VIDSCH_VSYNC_SMOOTHER@@QEAAXII@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D930 (_guard_dispatch_icall_nop.c)
 */

void __fastcall VidSchiSelectDriverPresentDuration(
        struct _VIDSCH_GLOBAL *a1,
        struct _VIDSCH_FLIP_QUEUE_ENTRY *a2,
        struct _VIDSCH_PRESENT_INFO *a3,
        unsigned int a4,
        unsigned int a5,
        unsigned int a6,
        struct _VIDSCH_CALL_EXECUTE_FLIP *a7)
{
  int v7; // eax
  unsigned int CurrentVSyncPeriodQpc; // r12d
  char v10; // r14
  char v11; // dl
  int v15; // r8d
  unsigned int v16; // eax
  bool v17; // zf
  int v18; // ecx
  int v19; // r9d
  int v20; // edx
  unsigned int v21; // eax
  int v22; // edx
  int v23; // ecx
  int v24; // eax
  unsigned int v25; // eax
  __int64 v26; // rcx
  int v27; // eax
  _DWORD v28[4]; // [rsp+20h] [rbp-48h] BYREF
  __int64 v29; // [rsp+30h] [rbp-38h]

  v7 = *((_DWORD *)a2 + 285);
  CurrentVSyncPeriodQpc = 0;
  v10 = 0;
  v11 = -1;
  *((_DWORD *)a7 + 10) = v7;
  if ( !*((_BYTE *)a1 + 6609) )
  {
    if ( (*((_DWORD *)a2 + 284) & 0x10) != 0 )
      v22 = ((unsigned __int16)**((_DWORD **)a2 + 147) | (unsigned __int16)(**((_DWORD **)a2 + 147) >> 10)) & 0x3FF;
    else
      v22 = (1 << *((_DWORD *)a1 + 38)) - 1;
    v23 = *((_DWORD *)a3 + 736);
    if ( !_bittest(&v22, *((_DWORD *)a3 + 737)) )
    {
      *((_DWORD *)a7 + 10) = v23;
LABEL_30:
      v11 = -1;
      goto LABEL_31;
    }
    v24 = *((_DWORD *)a2 + 285);
    if ( v23 != v24 )
    {
      v10 = 1;
      CurrentVSyncPeriodQpc = VidSchiGetCurrentVSyncPeriodQpc(a1, a6, 0);
      v24 = *((_DWORD *)a2 + 285);
    }
    *((_DWORD *)a3 + 736) = v24;
    *((_DWORD *)a7 + 10) = *((_DWORD *)a2 + 285);
LABEL_26:
    if ( v10 && *((_BYTE *)a1 + 6610) )
    {
      v25 = VidSchiGetCurrentVSyncPeriodQpc(a1, a6, 0);
      VIDSCH_VSYNC_SMOOTHER::ResetSmoother(*((VIDSCH_VSYNC_SMOOTHER **)a3 + 5519), CurrentVSyncPeriodQpc, v25);
    }
    goto LABEL_30;
  }
  v15 = *((_DWORD *)a2 + 285);
  if ( !v15 || v15 == *((_DWORD *)a3 + 20682) )
  {
    v19 = *((_DWORD *)a3 + 736);
    if ( v19 )
    {
      if ( (*((_DWORD *)a2 + 284) & 0x10) != 0 )
        v20 = ((unsigned __int16)**((_DWORD **)a2 + 147) | (unsigned __int16)(**((_DWORD **)a2 + 147) >> 10)) & 0x3FF;
      else
        v20 = (1 << *((_DWORD *)a1 + 38)) - 1;
      if ( _bittest(&v20, *((_DWORD *)a3 + 737)) )
      {
        if ( v19 != v15 )
        {
          v10 = 1;
          v21 = VidSchiGetCurrentVSyncPeriodQpc(a1, a6, 0);
          v15 = *((_DWORD *)a2 + 285);
          CurrentVSyncPeriodQpc = v21;
        }
        *((_DWORD *)a3 + 736) = v15;
      }
      else
      {
        *((_DWORD *)a7 + 10) = v19;
      }
      goto LABEL_26;
    }
  }
  else if ( a4 )
  {
    if ( *((_DWORD *)a3 + 736) != v15 )
    {
      v10 = 1;
      v16 = VidSchiGetCurrentVSyncPeriodQpc(a1, a6, 0);
      v15 = *((_DWORD *)a2 + 285);
      CurrentVSyncPeriodQpc = v16;
      v11 = -1;
    }
    v17 = !_BitScanForward((unsigned int *)&v18, a4);
    *((_DWORD *)a3 + 736) = v15;
    if ( !v17 )
      v11 = v18;
    *((_DWORD *)a3 + 737) = v11;
    goto LABEL_26;
  }
LABEL_31:
  v26 = *((_QWORD *)a1 + 2);
  if ( *(_BYTE *)(v26 + 4648) && *(_DWORD *)(v26 + 288) == 1 && a4 )
  {
    v28[0] = a6;
    v28[3] = 0;
    v28[1] = *((_DWORD *)a7 + 10);
    v17 = !_BitScanForward((unsigned int *)&v27, a4);
    if ( !v17 )
      v11 = v27;
    v28[2] = v11;
    v29 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a2 + 130) + 40LL) + 2648LL);
    ((void (__fastcall *)(__int64, __int64, _DWORD *))DxgCoreInterface[83])(v26, 2LL, v28);
  }
}
