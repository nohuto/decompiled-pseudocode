/*
 * XREFs of Endpoint_OnResetEndpointConfigureCompletion @ 0x1C0039230
 * Callers:
 *     <none>
 * Callees:
 *     CommonBuffer_ReleaseBuffer @ 0x1C000182C (CommonBuffer_ReleaseBuffer.c)
 *     WPP_RECORDER_SF_DD @ 0x1C00043B8 (WPP_RECORDER_SF_DD.c)
 *     ESM_AddEvent @ 0x1C0005174 (ESM_AddEvent.c)
 *     WPP_RECORDER_SF_ddL @ 0x1C002F238 (WPP_RECORDER_SF_ddL.c)
 *     Controller_ReportFatalError @ 0x1C0032C20 (Controller_ReportFatalError.c)
 */

void __fastcall Endpoint_OnResetEndpointConfigureCompletion(__int64 a1, int a2)
{
  __int64 *v2; // rbx
  __int64 v5; // rsi
  int v6; // edx
  int v7; // eax
  int v8; // edx

  v2 = *(__int64 **)(a1 + 48);
  v5 = *v2;
  CommonBuffer_ReleaseBuffer(*(_QWORD *)(*(_QWORD *)*v2 + 120LL), v2[1]);
  v2[1] = 0LL;
  if ( a2 == 3 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v6) = 4;
      WPP_RECORDER_SF_DD(
        *(_QWORD *)(v5 + 80),
        v6,
        13,
        54,
        (__int64)&WPP_60b6c7b69d133891580a7186b105caca_Traceguids,
        *(_BYTE *)(*(_QWORD *)(v5 + 16) + 135LL),
        *(_DWORD *)(v5 + 144));
    }
LABEL_11:
    v7 = -1073741823;
    goto LABEL_12;
  }
  if ( *(_BYTE *)(a1 + 60) != 1 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_ddL(
        *(_QWORD *)(v5 + 80),
        2u,
        0xDu,
        0x38u,
        (__int64)&WPP_60b6c7b69d133891580a7186b105caca_Traceguids,
        *(unsigned __int8 *)(*(_QWORD *)(v5 + 16) + 135LL),
        *(_DWORD *)(v5 + 144),
        *(unsigned __int8 *)(a1 + 60));
    Controller_ReportFatalError(*(_QWORD *)v5, 2, 4130 - (*(_BYTE *)(v5 + 37) != 0), 0LL, *(_QWORD *)(v5 + 16), v5, 0LL);
    goto LABEL_11;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v6) = 4;
    WPP_RECORDER_SF_DD(
      *(_QWORD *)(v5 + 80),
      v6,
      13,
      55,
      (__int64)&WPP_60b6c7b69d133891580a7186b105caca_Traceguids,
      *(_BYTE *)(*(_QWORD *)(v5 + 16) + 135LL),
      *(_DWORD *)(v5 + 144));
  }
  v7 = 0;
LABEL_12:
  *(_DWORD *)(v5 + 280) = 0;
  if ( v7 < 0 )
  {
    _m_prefetchw((const void *)(v5 + 32));
    if ( (_InterlockedOr((volatile signed __int32 *)(v5 + 32), 2u) & 2) != 0 )
      return;
    v8 = 12;
  }
  else
  {
    v8 = 16;
  }
  ESM_AddEvent((KSPIN_LOCK *)(v5 + 288), v8);
}
