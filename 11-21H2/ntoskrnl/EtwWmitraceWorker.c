/*
 * XREFs of EtwWmitraceWorker @ 0x1409E8E6C
 * Callers:
 *     ExpDebuggerWorker @ 0x140A70F90 (ExpDebuggerWorker.c)
 * Callees:
 *     RtlInitAnsiString @ 0x1402A07B0 (RtlInitAnsiString.c)
 *     DbgPrintEx @ 0x140369B90 (DbgPrintEx.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     EtwpUpdateTrace @ 0x1406ECE0C (EtwpUpdateTrace.c)
 *     EtwpStartTrace @ 0x1406EDF6C (EtwpStartTrace.c)
 *     EtwpStopTrace @ 0x1406EDFEC (EtwpStopTrace.c)
 *     EtwpQueryTrace @ 0x1406EEF3C (EtwpQueryTrace.c)
 *     RtlFreeUnicodeString @ 0x1407023F0 (RtlFreeUnicodeString.c)
 *     RtlAnsiStringToUnicodeString @ 0x14075A5D0 (RtlAnsiStringToUnicodeString.c)
 *     PsGetSiloBySessionId @ 0x14077D624 (PsGetSiloBySessionId.c)
 *     EtwEnableTrace @ 0x1408162E0 (EtwEnableTrace.c)
 *     EtwpPrepareWmitraceLoggerInfo @ 0x1409E9194 (EtwpPrepareWmitraceLoggerInfo.c)
 */

void EtwWmitraceWorker()
{
  __int64 v0; // rsi
  int SiloBySessionId; // ebx
  unsigned int v2; // r14d
  __int64 v3; // r8
  int Trace; // eax
  int v5; // eax
  __int64 v6; // r8
  __int64 v7; // r8
  __int64 v8; // r9
  int updated; // eax
  __int64 v10; // r8
  __int64 v11; // r9
  int v12; // eax
  int started; // eax
  __int64 DestinationString; // [rsp+48h] [rbp-C0h] BYREF
  STRING DestinationString_8; // [rsp+50h] [rbp-B8h] BYREF
  UNICODE_STRING v16[11]; // [rsp+68h] [rbp-A0h] BYREF

  memset(v16, 0, sizeof(v16));
  DestinationString = 0LL;
  DestinationString_8 = 0LL;
  if ( dword_140C16204 )
  {
    SiloBySessionId = PsGetSiloBySessionId(dword_140C16204, &DestinationString);
    if ( SiloBySessionId < 0 || !DestinationString )
      goto LABEL_33;
    v0 = *(_QWORD *)(*(_QWORD *)(DestinationString + 1464) + 864LL);
  }
  else
  {
    v0 = EtwpHostSiloState;
  }
  if ( EtwWmitraceWork == 1 )
  {
    EtwpPrepareWmitraceLoggerInfo(v16);
    RtlInitAnsiString(&DestinationString_8, qword_140C16208);
    RtlAnsiStringToUnicodeString(&v16[9], &DestinationString_8, 1u);
    *(_DWORD *)(&v16[3].MaximumLength + 1) = dword_140C162D0;
    v16[3].Buffer = (wchar_t *)__PAIR64__(dword_140C162CC, dword_140C162D4);
    *(_DWORD *)&v16[3].Length = dword_140C162D8;
    *(_DWORD *)&v16[4].Length = dword_140C162DC;
    *(_DWORD *)(&v16[4].MaximumLength + 1) = dword_140C162E0;
    if ( byte_140C16249 )
    {
      RtlInitAnsiString(&DestinationString_8, &byte_140C16249);
      RtlAnsiStringToUnicodeString(&v16[8], &DestinationString_8, 1u);
    }
    started = EtwpStartTrace(v0, (__int64)v16);
    SiloBySessionId = started;
    if ( started >= 0 )
      EtwpWmitraceParams = LOWORD(v16[0].Buffer);
    else
      DbgPrintEx(0x17u, 3u, "wmitrace: EtwpStartTrace failed: 0x%x\n", started);
    RtlFreeUnicodeString(&v16[9]);
    if ( byte_140C16249 )
      RtlFreeUnicodeString(&v16[8]);
  }
  else
  {
    v2 = 2;
    if ( EtwWmitraceWork == 2 )
    {
      EtwpPrepareWmitraceLoggerInfo(v16);
      Trace = EtwpQueryTrace(v0, (__int64)v16, v10);
      SiloBySessionId = Trace;
      if ( Trace < 0 )
        goto LABEL_22;
      v12 = EtwpStopTrace(v0, (__int64)v16, 0LL, v11);
      SiloBySessionId = v12;
      if ( v12 < 0 )
        DbgPrintEx(0x17u, 3u, "wmitrace: EtwpStopTrace failed: 0x%x\n", (unsigned int)v12);
    }
    else
    {
      if ( EtwWmitraceWork != 3 )
      {
        if ( (unsigned __int8)(EtwWmitraceWork - 4) > 2u )
        {
          SiloBySessionId = -1073741637;
          DbgPrintEx(0x17u, 3u, "Unknown command passed to EtwWmitraceWorker.\n");
          goto LABEL_33;
        }
        EtwpPrepareWmitraceLoggerInfo(v16);
        Trace = EtwpQueryTrace(v0, (__int64)v16, v3);
        SiloBySessionId = Trace;
        if ( Trace >= 0 )
        {
          if ( EtwWmitraceWork == 4 )
          {
            v2 = 1;
          }
          else if ( EtwWmitraceWork == 5 )
          {
            v2 = 0;
          }
          v5 = EtwEnableTrace(
                 (__int64)&unk_140C1621C,
                 0LL,
                 (unsigned int)EtwpWmitraceParams,
                 v2,
                 byte_140C1622C,
                 *(__int64 *)qword_140C16208,
                 qword_140C16210,
                 dword_140C16218);
          SiloBySessionId = v5;
          if ( v5 < 0 )
            DbgPrintEx(0x17u, 3u, "wmitrace: EtwpEnableTraceEx failed: 0x%x\n", (unsigned int)v5);
          goto LABEL_33;
        }
LABEL_22:
        DbgPrintEx(0x17u, 3u, "wmitrace: EtwpQueryTrace failed: 0x%x\n", (unsigned int)Trace);
        goto LABEL_33;
      }
      EtwpPrepareWmitraceLoggerInfo(v16);
      Trace = EtwpQueryTrace(v0, (__int64)v16, v6);
      SiloBySessionId = Trace;
      if ( Trace < 0 )
        goto LABEL_22;
      *(_DWORD *)&v16[4].Length |= 0x80000u;
      updated = EtwpUpdateTrace(v0, (__int64)v16, v7, v8);
      SiloBySessionId = updated;
      if ( updated < 0 )
        DbgPrintEx(0x17u, 3u, "wmitrace: failed to enable KD_FILTER 0x%x\n", (unsigned int)updated);
    }
  }
LABEL_33:
  dword_140C162E8 = SiloBySessionId;
  EtwWmitraceWork = 0;
}
