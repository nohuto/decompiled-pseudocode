/*
 * XREFs of ?VidSchiSelectPresentAtFlip@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@IPEAUVIDSCH_FLIP_QUEUE@@PEAKPEAPEAU_VIDSCH_FLIP_QUEUE_ENTRY@@@Z @ 0x1C00356F4
 * Callers:
 *     ?VidSchiExecuteNextFlipQueueEntry@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@PEA_NIPEAUVIDSCH_FLIP_QUEUE@@@Z @ 0x1C0017910 (-VidSchiExecuteNextFlipQueueEntry@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@PEA_NIPEAUVIDS.c)
 * Callees:
 *     ?VidSchiGetCurrentVSyncPeriodQpc@@YA_KPEAU_VIDSCH_GLOBAL@@I_N@Z @ 0x1C0004B64 (-VidSchiGetCurrentVSyncPeriodQpc@@YA_KPEAU_VIDSCH_GLOBAL@@I_N@Z.c)
 *     ?VidSchiCheckPendingFlipsForThisEntry@@YA_NPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_PRESENT_INFO@@PEAU_VIDSCH_FLIP_QUEUE_ENTRY@@PEAUVIDSCH_FLIP_QUEUE@@@Z @ 0x1C000E394 (-VidSchiCheckPendingFlipsForThisEntry@@YA_NPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_PRESENT_INFO@@PEAU_VI.c)
 *     VidSchiCompleteFlipEntry @ 0x1C0010190 (VidSchiCompleteFlipEntry.c)
 *     ?GetSmoothenedFrameTimeQpc@VIDSCH_VSYNC_SMOOTHER@@QEAAJ_K0PEA_KI@Z @ 0x1C003408C (-GetSmoothenedFrameTimeQpc@VIDSCH_VSYNC_SMOOTHER@@QEAAJ_K0PEA_KI@Z.c)
 *     McTemplateK0qxxxx_EtwWriteTransfer @ 0x1C0038388 (McTemplateK0qxxxx_EtwWriteTransfer.c)
 */

void __fastcall VidSchiSelectPresentAtFlip(
        struct HwQueueStagingList *a1,
        struct _VIDSCH_GLOBAL *a2,
        unsigned int a3,
        struct VIDSCH_FLIP_QUEUE *a4,
        unsigned int *a5,
        struct _VIDSCH_FLIP_QUEUE_ENTRY **a6)
{
  unsigned int v6; // r13d
  struct HwQueueStagingList *v8; // rbp
  __int64 v10; // rsi
  unsigned int CurrentVSyncPeriodQpc; // eax
  struct VIDSCH_FLIP_QUEUE *v12; // r9
  unsigned int v13; // edi
  unsigned int v14; // eax
  unsigned __int64 v15; // rbx
  unsigned __int64 v16; // r8
  unsigned __int64 v17; // rcx
  __int64 v18; // rdx
  unsigned __int64 v19; // rtt
  unsigned __int64 v20; // rtt
  struct _VIDSCH_FLIP_QUEUE_ENTRY **v21; // r12
  unsigned __int64 v22; // rdi
  int v23; // eax
  unsigned int v24; // ebx
  unsigned int *v25; // r13
  __int64 v26; // rcx
  char *v27; // rbp
  int v28; // eax
  unsigned int v29; // ecx
  unsigned int v30; // eax
  unsigned __int64 v32; // [rsp+88h] [rbp+10h] BYREF
  unsigned int v33; // [rsp+90h] [rbp+18h] BYREF

  v33 = a3;
  v6 = a3;
  v8 = a1;
  v10 = *((_QWORD *)a2 + a3 + 400);
  CurrentVSyncPeriodQpc = VidSchiGetCurrentVSyncPeriodQpc(a2, a3, 1);
  v32 = 0LL;
  v13 = CurrentVSyncPeriodQpc;
  if ( *(_DWORD *)(v10 + 2944) == -1
    || !*((_BYTE *)a2 + 6610)
    || (v14 = VidSchiGetCurrentVSyncPeriodQpc(a2, v6, 0),
        (int)VIDSCH_VSYNC_SMOOTHER::GetSmoothenedFrameTimeQpc(
               *(VIDSCH_VSYNC_SMOOTHER **)(v10 + 44152),
               *(_QWORD *)(v10 + 44104),
               *(_QWORD *)(v10 + 44120),
               &v32,
               v14) < 0) )
  {
    v15 = *(_QWORD *)(v10 + 44120);
  }
  else
  {
    v15 = v32;
    v16 = *((_QWORD *)a2 + 328);
    v17 = (int)abs32(*(_DWORD *)(v10 + 44120) - v32);
    if ( is_mul_ok(v17, 0x989680uLL) )
    {
      v18 = v17 * (unsigned __int128)0x989680uLL % v16;
      v16 = v17 * (unsigned __int128)0x989680uLL / v16;
    }
    else
    {
      v19 = v17;
      v17 /= v16;
      v20 = 10000000 * (v19 % v16);
      v18 = v20 % v16;
      LODWORD(v16) = 10000000 * v17 + v20 / v16;
    }
    if ( (byte_1C006E944 & 1) != 0 )
      McTemplateK0qxxxx_EtwWriteTransfer(
        v17,
        v18,
        v16,
        v6,
        *(_QWORD *)(v10 + 44104),
        *(_QWORD *)(v10 + 44120),
        v32,
        v16);
  }
  v21 = a6;
  v22 = v15 + v13 + ((unsigned __int64)v13 >> 1);
  if ( *((_QWORD *)*a6 + 162) <= v22 )
  {
    v23 = *((_DWORD *)a4 + 16);
    v24 = ((_BYTE)v23 + 1) & 0x3F;
    if ( v24 != v23 )
    {
      v25 = a5;
      do
      {
        v26 = 1376LL * v24;
        v27 = (char *)a4 + v26 + 120;
        v28 = *((_DWORD *)v27 + 263);
        if ( v28 != 2 && v28 != 14 )
          break;
        if ( VidSchiCheckPendingFlipsForThisEntry(
               a2,
               (struct _VIDSCH_PRESENT_INFO *)v10,
               (struct VIDSCH_FLIP_QUEUE *)((char *)a4 + v26 + 120),
               v12) )
        {
          break;
        }
        if ( *((_QWORD *)v27 + 162) > v22 )
          break;
        *v25 = v24;
        v24 = ((_BYTE)v24 + 1) & 0x3F;
        *v21 = (struct _VIDSCH_FLIP_QUEUE_ENTRY *)v27;
      }
      while ( v24 != *((_DWORD *)a4 + 16) );
      v6 = v33;
      v8 = a1;
    }
    v29 = *((_DWORD *)a4 + 16);
    v30 = *a5;
    if ( *a5 != v29 )
    {
      LOBYTE(v33) = 0;
      VidSchiCompleteFlipEntry((__int64)v8, (__int64)a2, v6, (__int64)a4, v29, ((_BYTE)v30 - 1) & 0x3F, 6u, &v33);
    }
    *((_DWORD *)*v21 + 263) = 4;
  }
}
