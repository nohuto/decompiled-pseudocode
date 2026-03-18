/*
 * XREFs of _PostThreadMessage @ 0x1C00AB08C
 * Callers:
 *     ?_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@H@Z @ 0x1C0054A60 (-_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@.c)
 *     xxxProcessEventMessage @ 0x1C005C220 (xxxProcessEventMessage.c)
 *     ?DestroyDesktop@@YAHPEAUtagDESKTOP@@@Z @ 0x1C009959C (-DestroyDesktop@@YAHPEAUtagDESKTOP@@@Z.c)
 *     NtUserPostThreadMessage @ 0x1C00AAB70 (NtUserPostThreadMessage.c)
 *     zzzCancelJournalling @ 0x1C011886C (zzzCancelJournalling.c)
 *     xxxSysCommand @ 0x1C011BA1C (xxxSysCommand.c)
 *     ?EndShutdown@@YAXJ@Z @ 0x1C011BF00 (-EndShutdown@@YAXJ@Z.c)
 *     EditionPostInertiaMessage @ 0x1C0213180 (EditionPostInertiaMessage.c)
 * Callees:
 *     _PostThreadMessageEx @ 0x1C00AB0F8 (_PostThreadMessageEx.c)
 */

__int64 __fastcall PostThreadMessage(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  _QWORD v9[3]; // [rsp+30h] [rbp-18h] BYREF

  v9[0] = 0LL;
  SetUnavailableInputSource(v9);
  return PostThreadMessageEx(a1, a2, a3, a4, v9);
}
