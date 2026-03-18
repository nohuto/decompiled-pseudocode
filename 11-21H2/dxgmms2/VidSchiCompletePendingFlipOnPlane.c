/*
 * XREFs of VidSchiCompletePendingFlipOnPlane @ 0x1C001AE48
 * Callers:
 *     VidSchiProcessDpcVSyncCookie @ 0x1C0003BC0 (VidSchiProcessDpcVSyncCookie.c)
 *     VidSchUnwaitFlipQueue @ 0x1C000BDB0 (VidSchUnwaitFlipQueue.c)
 *     VidSchiSubmitMmIoFlipCommand @ 0x1C0015200 (VidSchiSubmitMmIoFlipCommand.c)
 *     VidSchiCompletePendingFlip @ 0x1C001ADBC (VidSchiCompletePendingFlip.c)
 *     ?VidSchiSubmitHwQueueMmIoFlipCommand@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1C0040864 (-VidSchiSubmitHwQueueMmIoFlipCommand@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 * Callees:
 *     VidSchiCompleteFlipEntry @ 0x1C0010190 (VidSchiCompleteFlipEntry.c)
 *     VidSchExitIndependentFlipInternal @ 0x1C00197B0 (VidSchExitIndependentFlipInternal.c)
 */

__int64 __fastcall VidSchiCompletePendingFlipOnPlane(
        struct HwQueueStagingList *a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        unsigned int a5)
{
  __int64 v9; // rdx
  unsigned int v10; // ecx
  int v11; // edx
  __int64 v13; // r8
  __int64 v14; // r9
  _QWORD v15[3]; // [rsp+40h] [rbp-18h] BYREF
  char v16; // [rsp+78h] [rbp+20h] BYREF

  if ( a4 )
  {
    if ( !*(_BYTE *)(a4 + 80) )
    {
      v9 = *(int *)(*(_QWORD *)(a2 + 8LL * a3 + 3200) + 280LL * *(unsigned int *)(a4 + 84) + 180);
      if ( (int)v9 > -1 )
      {
        v13 = *(_QWORD *)(a2 + 3328) + 160 * v9;
        if ( v13 )
        {
          if ( (unsigned int)(*(_DWORD *)(v13 + 112) - 1) <= 1 )
          {
            v15[0] = 0LL;
            v14 = *(_QWORD *)(v13 + 8);
            v16 = 0;
            VidSchExitIndependentFlipInternal(a1, a2, (_DWORD *)v13, v14, 0, 0, &v16, v15);
          }
        }
      }
    }
    if ( *(_BYTE *)(a2 + 59) )
    {
      v11 = *(_DWORD *)(a4 + 76);
      v10 = ((_BYTE)v11 + 1) & 0x3F;
    }
    else
    {
      v10 = 0;
      v11 = 63;
    }
    VidSchiCompleteFlipEntry((__int64)a1, a2, a3, a4, v10, v11, a5, 0LL);
  }
  return 0LL;
}
