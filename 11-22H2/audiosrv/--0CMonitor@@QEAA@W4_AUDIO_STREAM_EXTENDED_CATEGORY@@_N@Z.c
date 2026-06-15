/*
 * XREFs of ??0CMonitor@@QEAA@W4_AUDIO_STREAM_EXTENDED_CATEGORY@@_N@Z @ 0x18012B7BC
 * Callers:
 *     ?Initialize@CaptureMonitor@CMonitorManager@@QEAAJXZ @ 0x18012D45C (-Initialize@CaptureMonitor@CMonitorManager@@QEAAJXZ.c)
 * Callees:
 *     ??0CCriticalSection@ATL@@QEAA@XZ @ 0x18005A544 (--0CCriticalSection@ATL@@QEAA@XZ.c)
 */

__int64 __fastcall CMonitor::CMonitor(__int64 a1, int a2, char a3)
{
  __int64 result; // rax

  *(_DWORD *)(a1 + 8) = 1;
  *(_QWORD *)a1 = &CMonitor::`vftable';
  ATL::CCriticalSection::CCriticalSection((struct _RTL_CRITICAL_SECTION *)(a1 + 16));
  *(_DWORD *)(a1 + 64) = a2;
  *(_DWORD *)(a1 + 56) = 0;
  *(_WORD *)(a1 + 60) = 0;
  *(_DWORD *)(a1 + 72) = 0;
  *(_BYTE *)(a1 + 68) = a3;
  *(_QWORD *)(a1 + 80) = 0LL;
  *(_QWORD *)(a1 + 88) = 0LL;
  *(_QWORD *)(a1 + 96) = 0LL;
  *(_QWORD *)(a1 + 104) = 0LL;
  *(_QWORD *)(a1 + 128) = 0LL;
  *(_QWORD *)(a1 + 136) = 0LL;
  *(_QWORD *)(a1 + 144) = 0LL;
  *(_QWORD *)(a1 + 152) = 0LL;
  *(_QWORD *)(a1 + 160) = 0LL;
  *(_QWORD *)(a1 + 168) = 0LL;
  *(_QWORD *)(a1 + 176) = 0LL;
  result = a1;
  *(_BYTE *)(a1 + 184) = -1;
  return result;
}
