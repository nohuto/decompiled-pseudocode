/*
 * XREFs of ?Initialize@CCrossProcessServerOutputEndpoint@@UEAAJPEAUtWAVEFORMATEX@@IIIPEBGPEAXI_J3W4__MIDL___MIDL_itf_audioengineendpointp_0000_0001_0001@@PEAUICrossProcessMemoryManager@@PEAUICrossProcessEventManager@@PEAPEAUICrossProcessMemory@@PEAPEAUICrossProcessEvent@@@Z @ 0x1400988B0
 * Callers:
 *     <none>
 * Callees:
 *     ?Initialize@CCrossProcessBaseServerEndpoint@@UEAAJPEAUtWAVEFORMATEX@@IIIPEBGPEAXI_J3W4__MIDL___MIDL_itf_audioengineendpointp_0000_0001_0001@@PEAUICrossProcessMemoryManager@@PEAUICrossProcessEventManager@@PEAPEAUICrossProcessMemory@@PEAPEAUICrossProcessEvent@@@Z @ 0x1400171E0 (-Initialize@CCrossProcessBaseServerEndpoint@@UEAAJPEAUtWAVEFORMATEX@@IIIPEBGPEAXI_J3W4__MIDL___M.c)
 */

__int64 __fastcall CCrossProcessServerOutputEndpoint::Initialize(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5,
        unsigned __int16 *a6,
        __int64 a7,
        unsigned int a8,
        __int64 a9,
        __int64 a10,
        int a11,
        __int64 a12,
        __int64 a13,
        _QWORD *a14,
        _QWORD *a15)
{
  __int64 v16; // [rsp+50h] [rbp-38h]

  LODWORD(v16) = a11;
  return CCrossProcessBaseServerEndpoint::Initialize(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, v16, a12, a13, a14, a15);
}
