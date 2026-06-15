/*
 * XREFs of wil::details::lambda_call__lambda_f9076b9eeb0e01e6f9fb43c9bd823371___::_lambda_call__lambda_f9076b9eeb0e01e6f9fb43c9bd823371___ @ 0x140095124
 * Callers:
 *     ?Initialize@CCrossProcessBaseServerEndpoint@@UEAAJPEAUtWAVEFORMATEX@@IIIPEBGPEAXI_J3W4__MIDL___MIDL_itf_audioengineendpointp_0000_0001_0001@@PEAUICrossProcessMemoryManager@@PEAUICrossProcessEventManager@@PEAPEAUICrossProcessMemory@@PEAPEAUICrossProcessEvent@@@Z @ 0x1400171E0 (-Initialize@CCrossProcessBaseServerEndpoint@@UEAAJPEAUtWAVEFORMATEX@@IIIPEBGPEAXI_J3W4__MIDL___M.c)
 *     ?Initialize@CCrossProcessBaseClientEndpoint@@UEAAJPEAUICrossProcessMemory@@_KPEAUICrossProcessEvent@@2I@Z @ 0x140095A00 (-Initialize@CCrossProcessBaseClientEndpoint@@UEAAJPEAUICrossProcessMemory@@_KPEAUICrossProcessEv.c)
 * Callees:
 *     <none>
 */

void __fastcall wil::details::lambda_call__lambda_f9076b9eeb0e01e6f9fb43c9bd823371___::_lambda_call__lambda_f9076b9eeb0e01e6f9fb43c9bd823371___(
        _BYTE *a1)
{
  if ( a1[8] )
  {
    a1[8] = 0;
    LeaveCriticalSection((LPCRITICAL_SECTION)(*(_QWORD *)a1 + 16LL));
  }
}
