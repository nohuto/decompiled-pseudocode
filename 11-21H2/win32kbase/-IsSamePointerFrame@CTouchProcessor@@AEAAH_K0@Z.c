/*
 * XREFs of ?IsSamePointerFrame@CTouchProcessor@@AEAAH_K0@Z @ 0x1C01CE72C
 * Callers:
 *     ?UpdateThreadPointerList@CTouchProcessor@@QEAAXPEAUtagTHREADINPUTPOINTERLIST@@G@Z @ 0x1C0088C10 (-UpdateThreadPointerList@CTouchProcessor@@QEAAXPEAUtagTHREADINPUTPOINTERLIST@@G@Z.c)
 * Callees:
 *     ?GetMsgData@CTouchProcessor@@AEAAPEBUCPointerMsgData@@_K@Z @ 0x1C01C9164 (-GetMsgData@CTouchProcessor@@AEAAPEBUCPointerMsgData@@_K@Z.c)
 */

__int64 __fastcall CTouchProcessor::IsSamePointerFrame(CTouchProcessor *this, __int64 a2, __int64 a3)
{
  unsigned int v3; // edi
  const struct CPointerMsgData *MsgData; // rbx
  CTouchProcessor *v6; // rcx
  __int64 v7; // r8

  v3 = 0;
  if ( !a2 || !a3 )
    return 0LL;
  MsgData = CTouchProcessor::GetMsgData(this, a2, a3);
  LOBYTE(v3) = *((_DWORD *)MsgData + 7) == *((_DWORD *)CTouchProcessor::GetMsgData(v6, a3, v7) + 7);
  return v3;
}
