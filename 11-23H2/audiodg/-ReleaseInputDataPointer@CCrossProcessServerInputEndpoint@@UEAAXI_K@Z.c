/*
 * XREFs of ?ReleaseInputDataPointer@CCrossProcessServerInputEndpoint@@UEAAXI_K@Z @ 0x14001E820
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateU0pqxxx_EventWriteTransfer @ 0x14003A302 (McTemplateU0pqxxx_EventWriteTransfer.c)
 *     McTemplateU0p_EventWriteTransfer @ 0x14009633C (McTemplateU0p_EventWriteTransfer.c)
 *     ?AudCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140096940 (-AudCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

void __fastcall CCrossProcessServerInputEndpoint::ReleaseInputDataPointer(
        CCrossProcessServerInputEndpoint *this,
        __int64 a2)
{
  int v2; // edi
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // r8
  signed __int64 v7; // rax
  signed __int64 v8; // r8
  signed __int64 v9; // rax
  signed __int64 v10; // rtt

  v2 = a2;
  if ( (byte_1400CF981 & 4) != 0 )
    McTemplateU0pqxxx_EventWriteTransfer((_DWORD)this, a2, (_DWORD)this - 464, 7, a2, 0, 0);
  LODWORD(v4) = *(_DWORD *)(*((_QWORD *)this - 49) + 164LL);
  if ( v2 && ((v4 & 1) != 0 || (*((_BYTE *)this - 288) & 1) != 0) )
  {
    v5 = *((_QWORD *)this - 49);
    v6 = _InterlockedCompareExchange64((volatile signed __int64 *)(v5 + 24), 0LL, 0LL);
    if ( v6 < 0 )
    {
      if ( (byte_1400CF981 & 4) != 0 )
        McTemplateU0p_EventWriteTransfer(v5, a2, (char *)this - 464);
      _InterlockedAnd((volatile signed __int32 *)(*((_QWORD *)this - 49) + 164LL), 0xFFFFFFFE);
      AudCPTraceLoggingErrorHelper("CCrossProcessBaseEndpoint::IsValidOffset", 0x6B9u, -2147467259);
    }
    else
    {
      LODWORD(v4) = *((_DWORD *)this + 4);
      LODWORD(a2) = *((_DWORD *)this - 94) * v2 - *((_DWORD *)this + 20);
      if ( !(_DWORD)v4 || (_DWORD)v4 == 1 )
      {
        v7 = _InterlockedCompareExchange64((volatile signed __int64 *)(*((_QWORD *)this - 49) + 16LL), 0LL, 0LL);
        v8 = (unsigned int)a2 + v6;
        if ( v8 > v7 )
          v8 = v7;
        v4 = *((_QWORD *)this - 49);
        v9 = *(_QWORD *)(v4 + 24);
        do
        {
          v10 = v9;
          v9 = _InterlockedCompareExchange64((volatile signed __int64 *)(v4 + 24), v8, v9);
        }
        while ( v10 != v9 );
      }
    }
  }
  if ( (byte_1400CF981 & 4) != 0 )
    McTemplateU0pqxxx_EventWriteTransfer(v4, a2, (_DWORD)this - 464, 8, v2, *((_DWORD *)this + 4), 0);
  *((_DWORD *)this + 4) = 3;
}
