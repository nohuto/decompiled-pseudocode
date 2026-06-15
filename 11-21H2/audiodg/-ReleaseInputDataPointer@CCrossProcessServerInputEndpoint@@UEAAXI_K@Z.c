/*
 * XREFs of ?ReleaseInputDataPointer@CCrossProcessServerInputEndpoint@@UEAAXI_K@Z @ 0x140022A10
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateU0p_EventWriteTransfer @ 0x14008946C (McTemplateU0p_EventWriteTransfer.c)
 *     ?AudCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140089C70 (-AudCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     McTemplateU0pqxxx_EventWriteTransfer @ 0x14008A380 (McTemplateU0pqxxx_EventWriteTransfer.c)
 */

void __fastcall CCrossProcessServerInputEndpoint::ReleaseInputDataPointer(
        CCrossProcessServerInputEndpoint *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  int v4; // edi
  __int64 v6; // rcx
  __int64 v7; // r8
  signed __int64 v8; // rax
  signed __int64 v9; // r8
  signed __int64 v10; // rax
  signed __int64 v11; // rtt

  v4 = a2;
  if ( (byte_1400C1841 & 4) != 0 )
    McTemplateU0pqxxx_EventWriteTransfer((_DWORD)this, a2, (_DWORD)this - 464, 7, a2, 0, 0);
  LODWORD(v6) = *(_DWORD *)(*((_QWORD *)this - 49) + 164LL);
  if ( v4 && ((v6 & 1) != 0 || (*((_BYTE *)this - 288) & 1) != 0) )
  {
    v6 = *((_QWORD *)this - 49);
    v7 = _InterlockedCompareExchange64((volatile signed __int64 *)(v6 + 24), 0LL, 0LL);
    if ( v7 < 0 )
    {
      if ( (byte_1400C1841 & 4) != 0 )
        McTemplateU0p_EventWriteTransfer(v6, a2, (char *)this - 464, a4);
      _InterlockedAnd((volatile signed __int32 *)(*((_QWORD *)this - 49) + 164LL), 0xFFFFFFFE);
      AudCPTraceLoggingErrorHelper("CCrossProcessBaseEndpoint::IsValidOffset", 0x6B8u, -2147467259);
    }
    else
    {
      LODWORD(a2) = v4 * *((_DWORD *)this - 94) - *((_DWORD *)this + 20);
      if ( *((_DWORD *)this + 4) <= 1u )
      {
        v8 = _InterlockedCompareExchange64((volatile signed __int64 *)(*((_QWORD *)this - 49) + 16LL), 0LL, 0LL);
        v9 = (unsigned int)a2 + v7;
        if ( v9 > v8 )
          v9 = v8;
        v6 = *((_QWORD *)this - 49);
        v10 = *(_QWORD *)(v6 + 24);
        do
        {
          v11 = v10;
          v10 = _InterlockedCompareExchange64((volatile signed __int64 *)(v6 + 24), v9, v10);
        }
        while ( v11 != v10 );
      }
    }
  }
  if ( (byte_1400C1841 & 4) != 0 )
    McTemplateU0pqxxx_EventWriteTransfer(v6, a2, (_DWORD)this - 464, 8, v4, *((_DWORD *)this + 4), 0);
  *((_DWORD *)this + 4) = 3;
}
