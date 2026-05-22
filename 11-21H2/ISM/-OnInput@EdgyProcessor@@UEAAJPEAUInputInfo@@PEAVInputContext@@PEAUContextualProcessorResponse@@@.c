/*
 * XREFs of ?OnInput@EdgyProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x18014A270
 * Callers:
 *     <none>
 * Callees:
 *     ?OnInputDrag@EdgyProcessor@@AEAAXPEAUInputInfo@@AEAUtagPOINTER_INFO@@PEAUContextualProcessorResponse@@@Z @ 0x18014A30C (-OnInputDrag@EdgyProcessor@@AEAAXPEAUInputInfo@@AEAUtagPOINTER_INFO@@PEAUContextualProcessorResp.c)
 *     ?OnInputNotification@EdgyProcessor@@AEAAXPEAUInputInfo@@AEAUtagPOINTER_INFO@@PEAUContextualProcessorResponse@@@Z @ 0x18014AD38 (-OnInputNotification@EdgyProcessor@@AEAAXPEAUInputInfo@@AEAUtagPOINTER_INFO@@PEAUContextualProce.c)
 */

__int64 __fastcall EdgyProcessor::OnInput(
        EdgyProcessor *this,
        struct InputInfo *a2,
        struct InputContext *a3,
        struct ContextualProcessorResponse *a4)
{
  __int64 v4; // rsi

  v4 = 0LL;
  for ( *((_DWORD *)a4 + 2) = 4; (unsigned int)v4 < *((_DWORD *)a2 + 79); v4 = (unsigned int)(v4 + 1) )
  {
    EdgyProcessor::OnInputDrag(this, a2, (struct InputInfo *)((char *)a2 + 144 * v4 + 320), a4);
    EdgyProcessor::OnInputNotification(this, a2, (struct InputInfo *)((char *)a2 + 144 * v4 + 320), a4);
  }
  return 0LL;
}
