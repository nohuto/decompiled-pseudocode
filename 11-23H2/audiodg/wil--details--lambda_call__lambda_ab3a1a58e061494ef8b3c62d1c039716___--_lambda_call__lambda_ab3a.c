/*
 * XREFs of wil::details::lambda_call__lambda_ab3a1a58e061494ef8b3c62d1c039716___::_lambda_call__lambda_ab3a1a58e061494ef8b3c62d1c039716___ @ 0x140095104
 * Callers:
 *     ?Initialize@CCrossProcessBaseServerEndpoint@@UEAAJPEAUtWAVEFORMATEX@@IIIPEBGPEAXI_J3W4__MIDL___MIDL_itf_audioengineendpointp_0000_0001_0001@@PEAUICrossProcessMemoryManager@@PEAUICrossProcessEventManager@@PEAPEAUICrossProcessMemory@@PEAPEAUICrossProcessEvent@@@Z @ 0x1400171E0 (-Initialize@CCrossProcessBaseServerEndpoint@@UEAAJPEAUtWAVEFORMATEX@@IIIPEBGPEAXI_J3W4__MIDL___M.c)
 *     ?Initialize@CCrossProcessBaseClientEndpoint@@UEAAJPEAUICrossProcessMemory@@_KPEAUICrossProcessEvent@@2I@Z @ 0x1400959B0 (-Initialize@CCrossProcessBaseClientEndpoint@@UEAAJPEAUICrossProcessMemory@@_KPEAUICrossProcessEv.c)
 * Callees:
 *     ?AERTDestroyZoneHeap@@YAXPEAX@Z @ 0x140002BF4 (-AERTDestroyZoneHeap@@YAXPEAX@Z.c)
 */

__int64 __fastcall wil::details::lambda_call__lambda_ab3a1a58e061494ef8b3c62d1c039716___::_lambda_call__lambda_ab3a1a58e061494ef8b3c62d1c039716___(
        _BYTE *a1,
        int a2,
        int a3)
{
  __int64 result; // rax
  void *v5; // rcx

  if ( a1[8] )
  {
    a1[8] = 0;
    result = *(_QWORD *)a1;
    v5 = *(void **)(*(_QWORD *)a1 + 144LL);
    if ( v5 )
    {
      AERTDestroyZoneHeap(v5, a2, a3);
      result = *(_QWORD *)a1;
      *(_QWORD *)(*(_QWORD *)a1 + 144LL) = 0LL;
    }
  }
  return result;
}
