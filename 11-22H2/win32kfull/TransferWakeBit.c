/*
 * XREFs of TransferWakeBit @ 0x1C005B0A8
 * Callers:
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C012B430 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 * Callees:
 *     UpdateRawMouseMode @ 0x1C005DFA4 (UpdateRawMouseMode.c)
 *     CalcWakeMask @ 0x1C012A4C0 (CalcWakeMask.c)
 */

__int64 __fastcall TransferWakeBit(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  unsigned int v4; // edi
  __int64 v5; // rcx
  __int64 v6; // rsi

  result = CalcWakeMask((unsigned int)a2, a2, 0LL);
  v4 = result & 0x1C07;
  if ( (v4 & *(_DWORD *)(*(_QWORD *)(a1 + 448) + 8LL)) == 0 )
  {
    v5 = *(_QWORD *)(a1 + 432);
    if ( (result & 1) != 0 )
    {
      v6 = *(_QWORD *)(v5 + 104);
      *(_QWORD *)(v5 + 104) = a1;
    }
    else
    {
      v6 = *(_QWORD *)(v5 + 96);
      *(_QWORD *)(v5 + 96) = a1;
      UpdateRawMouseMode(*(_QWORD *)(a1 + 432));
    }
    _InterlockedAnd((volatile signed __int32 *)(*(_QWORD *)(v6 + 448) + 8LL), ~v4);
    _InterlockedOr((volatile signed __int32 *)(*(_QWORD *)(a1 + 448) + 8LL), v4);
    result = *(_QWORD *)(a1 + 448);
    _InterlockedOr((volatile signed __int32 *)(result + 4), v4);
  }
  return result;
}
