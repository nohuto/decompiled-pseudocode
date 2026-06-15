/*
 * XREFs of ??0CaptureMonitor@CMonitorManager@@QEAA@PEAV1@PEBG1W4_AUDIO_STREAM_EXTENDED_CATEGORY@@_N@Z @ 0x18012B8C0
 * Callers:
 *     ?CreateMonitor@CMonitorManager@@AEAAJPEBG0W4_AUDIO_STREAM_EXTENDED_CATEGORY@@_NPEAPEAVCaptureMonitor@1@@Z @ 0x18012C564 (-CreateMonitor@CMonitorManager@@AEAAJPEBG0W4_AUDIO_STREAM_EXTENDED_CATEGORY@@_NPEAPEAVCaptureMon.c)
 * Callees:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x180027F80 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CMonitorManager::CaptureMonitor::CaptureMonitor(
        __int64 a1,
        __int64 a2,
        _WORD *a3,
        _WORD *a4,
        int a5,
        char a6)
{
  *(_QWORD *)a1 = &CMonitorManager::CaptureMonitor::`vftable';
  *(_DWORD *)(a1 + 8) = 1;
  *(_BYTE *)(a1 + 12) = 0;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_DWORD *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_BYTE *)(a1 + 48) = 0;
  *(_BYTE *)(a1 + 49) = a6;
  std::wstring::wstring((_QWORD *)(a1 + 56), a3);
  std::wstring::wstring((_QWORD *)(a1 + 88), a4);
  *(_DWORD *)(a1 + 120) = a5;
  *(_QWORD *)(a1 + 128) = 0LL;
  *(_QWORD *)(a1 + 144) = 0LL;
  *(_QWORD *)(a1 + 152) = 7LL;
  *(_WORD *)(a1 + 128) = 0;
  *(_QWORD *)(a1 + 160) = 0LL;
  *(_QWORD *)(a1 + 176) = 0LL;
  *(_QWORD *)(a1 + 184) = 7LL;
  *(_WORD *)(a1 + 160) = 0;
  *(_QWORD *)(a1 + 192) = a2;
  *(_QWORD *)(a1 + 200) = 0LL;
  return a1;
}
