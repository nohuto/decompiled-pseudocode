/*
 * XREFs of wil::details::lambda_call__lambda_a1295d98ccc7f8ed99ce5b050cf8ba33___::_lambda_call__lambda_a1295d98ccc7f8ed99ce5b050cf8ba33___ @ 0x1400950E8
 * Callers:
 *     ?Initialize@CCrossProcessBaseServerEndpoint@@UEAAJPEAUtWAVEFORMATEX@@IIIPEBGPEAXI_J3W4__MIDL___MIDL_itf_audioengineendpointp_0000_0001_0001@@PEAUICrossProcessMemoryManager@@PEAUICrossProcessEventManager@@PEAPEAUICrossProcessMemory@@PEAPEAUICrossProcessEvent@@@Z @ 0x1400171E0 (-Initialize@CCrossProcessBaseServerEndpoint@@UEAAJPEAUtWAVEFORMATEX@@IIIPEBGPEAXI_J3W4__MIDL___M.c)
 *     ?Initialize@CCrossProcessBaseClientEndpoint@@UEAAJPEAUICrossProcessMemory@@_KPEAUICrossProcessEvent@@2I@Z @ 0x140095A00 (-Initialize@CCrossProcessBaseClientEndpoint@@UEAAJPEAUICrossProcessMemory@@_KPEAUICrossProcessEv.c)
 * Callees:
 *     ?AERTGetDLLRTHeap@@YAPEAXXZ @ 0x14001267C (-AERTGetDLLRTHeap@@YAPEAXXZ.c)
 *     ?AERTFree@@YAXPEAX0@Z @ 0x1400129A0 (-AERTFree@@YAXPEAX0@Z.c)
 */

void __fastcall wil::details::lambda_call__lambda_a1295d98ccc7f8ed99ce5b050cf8ba33___::_lambda_call__lambda_a1295d98ccc7f8ed99ce5b050cf8ba33___(
        _BYTE *a1)
{
  void *v2; // rax
  int v3; // r8d

  if ( a1[8] )
  {
    a1[8] = 0;
    v2 = (void *)AERTGetDLLRTHeap();
    AERTFree(*(void **)(*(_QWORD *)a1 + 80LL), v2, v3);
    *(_QWORD *)(*(_QWORD *)a1 + 80LL) = 0LL;
  }
}
