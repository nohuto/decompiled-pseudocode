/*
 * XREFs of ?GetMsgPointerId@CTouchProcessor@@AEAAG_K@Z @ 0x1C00DC77C
 * Callers:
 *     ?GetPointerCursorIdFromMsgData@CTouchProcessor@@QEAAH_KPEAK@Z @ 0x1C01C9470 (-GetPointerCursorIdFromMsgData@CTouchProcessor@@QEAAH_KPEAK@Z.c)
 * Callees:
 *     ?GetMsgData@CTouchProcessor@@AEAAPEBUCPointerMsgData@@_K@Z @ 0x1C01C9164 (-GetMsgData@CTouchProcessor@@AEAAPEBUCPointerMsgData@@_K@Z.c)
 */

__int64 __fastcall CTouchProcessor::GetMsgPointerId(CTouchProcessor *this, unsigned __int64 a2)
{
  const struct CPointerMsgData *MsgData; // rax

  MsgData = CTouchProcessor::GetMsgData(this, a2);
  if ( MsgData )
    return *((unsigned __int16 *)MsgData + 8);
  else
    return 0LL;
}
