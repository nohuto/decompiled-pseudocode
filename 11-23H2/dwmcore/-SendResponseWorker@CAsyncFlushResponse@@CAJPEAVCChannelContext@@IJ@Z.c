/*
 * XREFs of ?SendResponseWorker@CAsyncFlushResponse@@CAJPEAVCChannelContext@@IJ@Z @ 0x1800F333C
 * Callers:
 *     ?Channel_AsyncFlush@CGlobalComposition@@UEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMILCMD_CHANNEL_ASYNCFLUSH@@@Z @ 0x180023F70 (-Channel_AsyncFlush@CGlobalComposition@@UEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMIL.c)
 *     ?SendResponse@CAsyncFlushResponse@@UEAAJJ@Z @ 0x1800F3300 (-SendResponse@CAsyncFlushResponse@@UEAAJJ@Z.c)
 * Callees:
 *     ?PostMessageToChannel@CChannelContext@@QEAAJPEBUMIL_MESSAGE@@@Z @ 0x180029D90 (-PostMessageToChannel@CChannelContext@@QEAAJPEBUMIL_MESSAGE@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18009DA0C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CAsyncFlushResponse::SendResponseWorker(struct CChannelContext *a1, unsigned int a2, __int64 a3)
{
  int v3; // eax
  __int64 v4; // rcx
  unsigned int v5; // ebx
  int v7; // [rsp+30h] [rbp-28h] BYREF
  __int128 v8; // [rsp+34h] [rbp-24h]
  __int64 v9; // [rsp+44h] [rbp-14h]

  v7 = 13;
  v8 = 0LL;
  *(_QWORD *)((char *)&v8 + 4) = __PAIR64__(a3, a2);
  v9 = 0LL;
  v3 = CChannelContext::PostMessageToChannel(a1, (const struct MIL_MESSAGE *)&v7, a3);
  v5 = v3;
  if ( v3 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0, v3, 0x74u, 0LL);
  return v5;
}
