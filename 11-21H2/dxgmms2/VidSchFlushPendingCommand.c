/*
 * XREFs of VidSchFlushPendingCommand @ 0x1C00F44F0
 * Callers:
 *     <none>
 * Callees:
 *     VidSchiSubmitCommandPacketToQueue @ 0x1C0006900 (VidSchiSubmitCommandPacketToQueue.c)
 *     DxgkLogInternalTriageEvent @ 0x1C001CE40 (DxgkLogInternalTriageEvent.c)
 *     VidSchiDiscardQueuePacket @ 0x1C00F2F7C (VidSchiDiscardQueuePacket.c)
 */

__int64 __fastcall VidSchFlushPendingCommand(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // ebp
  __int64 v6; // rcx
  __int64 v8; // rsi
  __int64 **v9; // rdi
  __int64 *v10; // rcx
  __int64 *v11; // rax
  struct _VIDSCH_QUEUE_PACKET *v12; // rcx
  int v13; // eax

  v4 = a2;
  if ( a1 )
  {
    v8 = *(_QWORD *)(a1 + 104);
    if ( *(_DWORD *)(a1 + 432) )
    {
      v9 = (__int64 **)(a1 + 680);
      do
      {
        v10 = *v9;
        if ( (__int64 **)(*v9)[1] != v9 || (v11 = (__int64 *)*v10, *(__int64 **)(*v10 + 8) != v10) )
          __fastfail(3u);
        *v9 = v11;
        v12 = (struct _VIDSCH_QUEUE_PACKET *)(v10 - 4);
        v11[1] = (__int64)v9;
        v13 = *(_DWORD *)(a1 + 432) - 1;
        *(_DWORD *)(a1 + 432) = v13;
        if ( v4 || (a2 = *((unsigned int *)v12 + 18), (a2 & 0x40) == 0) )
        {
          VidSchiDiscardQueuePacket(v12, a2, a3, a4);
        }
        else
        {
          if ( !v13 )
            *((_DWORD *)v12 + 18) = a2 & 0xFFFFFF7F | *((_DWORD *)v12 + 68) & 0x80 | 0x4000;
          VidSchiSubmitCommandPacketToQueue((__int64)v12);
        }
      }
      while ( *(_DWORD *)(a1 + 432) );
    }
    *(_DWORD *)(v8 + 504) = -1;
    return 0LL;
  }
  else
  {
    WdLogSingleEntry1(1LL, -1073741811LL);
    DxgkLogInternalTriageEvent(v6, 0x40000LL);
    return 3221225485LL;
  }
}
