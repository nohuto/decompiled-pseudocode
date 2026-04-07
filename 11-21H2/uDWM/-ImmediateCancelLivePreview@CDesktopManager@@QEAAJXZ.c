/*
 * XREFs of ?ImmediateCancelLivePreview@CDesktopManager@@QEAAJXZ @ 0x1800B0C30
 * Callers:
 *     ?ScheduleStartAnimation@CStoryboard@@QEAAJXZ @ 0x1800D87EC (-ScheduleStartAnimation@CStoryboard@@QEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CDesktopManager::ImmediateCancelLivePreview(CDesktopManager *this)
{
  signed int v2; // ebx
  __int64 v3; // rax
  WPARAM v4; // rdi
  signed int LastError; // eax

  v2 = 0;
  v3 = (*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
         WPF::g_pProcessHeap,
         32LL);
  v4 = v3;
  if ( v3 )
  {
    *(_DWORD *)v3 = 0;
    *(_DWORD *)(v3 + 4) = 0;
    *(_QWORD *)(v3 + 8) = 0LL;
    *(_DWORD *)(v3 + 28) = 0;
    *(_DWORD *)(v3 + 16) = 1;
    *(_DWORD *)(v3 + 24) = 1;
    SetLastError(0);
    if ( PostThreadMessageW(*((_DWORD *)this + 146), 0x405u, v4, 0LL) )
    {
      v4 = 0LL;
    }
    else
    {
      LastError = GetLastError();
      v2 = LastError;
      if ( LastError > 0 )
        v2 = (unsigned __int16)LastError | 0x80070000;
      if ( v2 >= 0 )
        v2 = -2003304445;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v2, 0xB7Bu);
    }
  }
  else
  {
    v2 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, 0xB6Du);
  }
  (*(void (__fastcall **)(WPF::HeapBase *, WPARAM))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(WPF::g_pProcessHeap, v4);
  return (unsigned int)v2;
}
