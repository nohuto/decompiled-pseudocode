/*
 * XREFs of ndisCreateReceiveWorkerThreadPool @ 0x1C0032F20
 * Callers:
 *     ?ndisConfigurePeriodicReceives@@YAXPEAU_NDIS_SET_RECEIVE_RATE@@@Z @ 0x1C000310C (-ndisConfigurePeriodicReceives@@YAXPEAU_NDIS_SET_RECEIVE_RATE@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0006690 (WPP_RECORDER_SF_.c)
 *     ndisCreateThread @ 0x1C0033004 (ndisCreateThread.c)
 *     ndisKillReceiveWorkerThreadPool @ 0x1C00AAB00 (ndisKillReceiveWorkerThreadPool.c)
 */

__int64 ndisCreateReceiveWorkerThreadPool()
{
  int Thread; // ebx
  __int64 v1; // rdi
  __int64 v2; // rcx
  ULONG ActiveProcessorCount; // esi

  Thread = 0;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xCu,
      0xDu,
      (struct _GUID *)&WPP_40b3d572a35736b75ceff139a227553e_Traceguids);
  v1 = 0LL;
  ActiveProcessorCount = KeQueryActiveProcessorCountEx(0xFFFFu);
  if ( ActiveProcessorCount )
  {
    while ( 1 )
    {
      Thread = ndisCreateThread(v2, (unsigned int)v1, (unsigned int)dword_1C00F5208, (char *)qword_1C00F5248 + 8 * v1);
      if ( Thread < 0 )
        break;
      v1 = (unsigned int)(v1 + 1);
      if ( (unsigned int)v1 >= ActiveProcessorCount )
        goto LABEL_6;
    }
    ndisKillReceiveWorkerThreadPool();
  }
  else
  {
LABEL_6:
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        0xCu,
        0xEu,
        (struct _GUID *)&WPP_40b3d572a35736b75ceff139a227553e_Traceguids);
  }
  return (unsigned int)Thread;
}
