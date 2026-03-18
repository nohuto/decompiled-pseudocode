/*
 * XREFs of ?FrameRenderingStarted@CTelemetryFrames@@SAX_K@Z @ 0x18004820C
 * Callers:
 *     ?ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAXXZ @ 0x180047108 (-ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAXXZ.c)
 * Callees:
 *     _anonymous_namespace_::SealCurrentFrameSequence @ 0x1800B080C (_anonymous_namespace_--SealCurrentFrameSequence.c)
 *     _anonymous_namespace_::FramesReport::OffsetInMillisecondsFromStartOfReport @ 0x1800B1EA4 (_anonymous_namespace_--FramesReport--OffsetInMillisecondsFromStartOfReport.c)
 */

void __fastcall CTelemetryFrames::FrameRenderingStarted(__int64 a1)
{
  unsigned __int64 v2; // rax
  unsigned __int64 v3; // rsi
  int v4; // ecx
  __int32 v5; // ebx
  int v6; // ebx
  __int64 v7; // rcx
  __int64 v8; // rcx

  if ( byte_1803E5BF9 )
  {
    AcquireSRWLockExclusive(&SRWLock);
    GetCurrentThreadId();
    byte_1803E5BF9 = 0;
    dword_1803E9F90 = 0;
    xmmword_1803E5C18 = xmmword_1803E5C00;
    ReleaseSRWLockExclusive(&SRWLock);
    LOBYTE(v8) = 1;
    anonymous_namespace_::SealCurrentFrameSequence(v8);
  }
  v2 = a1 - qword_1803E5BE0;
  qword_1803E5BE0 = a1;
  v3 = 1000 * (v2 % g_qpcFrequency.QuadPart) / g_qpcFrequency.QuadPart + 1000 * (v2 / g_qpcFrequency.QuadPart);
  if ( v3 >= (unsigned int)CCommonRegistryData::TelemetryFramesSequenceIdleIntervalMilliseconds )
    anonymous_namespace_::SealCurrentFrameSequence(0LL);
  if ( v3 > 0x2A )
  {
    ++dword_1803E59FC;
    byte_1803E5BE9 = 1;
  }
  else
  {
    byte_1803E5BE9 = 0;
  }
  if ( !dword_1803E5A18 )
  {
    *(_QWORD *)&xmmword_1803E5B60 = a1;
    v7 = *((_QWORD *)qword_1803E5C90 + 5);
    if ( 0xEEEEEEEEEEEEEEEFuLL * ((__int64)(*(_QWORD *)(v7 + 24) - *(_QWORD *)(v7 + 16)) >> 5) )
      dword_1803E5A2C = anonymous_namespace_::FramesReport::OffsetInMillisecondsFromStartOfReport(v7, a1);
  }
  v4 = dword_1803E5BEC | dword_1803E5A10;
  dword_1803E5A10 |= dword_1803E5BEC;
  byte_1803E5BD8 = byte_1803E5BF8;
  if ( byte_1803E5BF8 )
  {
    byte_1803E5BF8 = 0;
    dword_1803E5A10 = v4 | 0x100;
  }
  dword_1803E5BEC = 0;
  v5 = _InterlockedExchange(&dword_1803E65D0, 0);
  dword_1803E5A14 |= v5;
  ++dword_1803E5A18;
  dword_1803E5BDC = v5;
  v6 = MEMORY[0x7FFE02E4];
  if ( GetTickCount() - v6 < 0x3E8 )
    dword_1803E5A10 |= 1u;
  dword_1803E65D8 = dword_1803E5A98;
  dword_1803E65E0 = dword_1803E5AA0;
  dword_1803E65DC = dword_1803E5A9C;
  dword_1803E65E4 = dword_1803E5AA4;
}
