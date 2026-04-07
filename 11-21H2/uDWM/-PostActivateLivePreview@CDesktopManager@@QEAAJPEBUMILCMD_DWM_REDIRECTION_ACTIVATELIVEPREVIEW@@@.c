/*
 * XREFs of ?PostActivateLivePreview@CDesktopManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_ACTIVATELIVEPREVIEW@@@Z @ 0x18005B6AC
 * Callers:
 *     ?ShellWindowChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYSHELLWINDOWCHANGE@@@Z @ 0x18005B5C8 (-ShellWindowChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYSHELLWINDOWCHANGE@@@Z.c)
 *     ?PostActivateLivePreview@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_ACTIVATELIVEPREVIEW@@@Z @ 0x1801051B0 (-PostActivateLivePreview@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_ACTIVATELIVEPREVIEW@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     memcpy_0 @ 0x1800636FB (memcpy_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CDesktopManager::PostActivateLivePreview(
        CDesktopManager *this,
        const struct MILCMD_DWM_REDIRECTION_ACTIVATELIVEPREVIEW *a2)
{
  signed int v2; // ebx
  _DWORD *v3; // rdi
  __int16 v6; // ax
  __int16 v7; // dx
  __int64 v8; // rax
  __int64 v9; // r14
  void *v10; // rcx
  int v11; // eax
  signed int LastError; // eax

  v2 = 0;
  v3 = 0LL;
  if ( *((_DWORD *)this + 146) )
  {
    v6 = *((_WORD *)a2 + 4);
    v7 = 8 * (v6 + 4);
    if ( *((_DWORD *)a2 + 7) )
      v7 += 16 * v6;
    v8 = (*(__int64 (__fastcall **)(WPF::HeapBase *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
           WPF::g_pProcessHeap,
           v7);
    v3 = (_DWORD *)v8;
    if ( v8 )
    {
      v9 = v8 + 32;
      *(_DWORD *)v8 = *((_DWORD *)a2 + 1);
      v10 = (void *)(v8 + 32);
      *(_DWORD *)(v8 + 4) = *((_DWORD *)a2 + 2);
      *(_QWORD *)(v8 + 8) = *(_QWORD *)((char *)a2 + 12);
      *(_DWORD *)(v8 + 16) = *((_DWORD *)a2 + 5);
      v11 = *((_DWORD *)a2 + 6);
      v3[6] = 0;
      v3[5] = v11;
      v3[7] = *((_DWORD *)a2 + 7);
      memcpy_0(v10, (char *)a2 + 32, (unsigned int)(8 * *((_DWORD *)a2 + 2)));
      if ( *((_DWORD *)a2 + 7) )
        memcpy_0(
          (void *)(v9 + 8LL * *((unsigned int *)a2 + 2)),
          (char *)a2 + 8 * *((unsigned int *)a2 + 2) + 32,
          (unsigned int)(16 * *((_DWORD *)a2 + 2)));
      SetLastError(0);
      if ( PostThreadMessageW(*((_DWORD *)this + 146), 0x405u, (WPARAM)v3, 0LL) )
      {
        v3 = 0LL;
      }
      else
      {
        LastError = GetLastError();
        v2 = LastError;
        if ( LastError > 0 )
          v2 = (unsigned __int16)LastError | 0x80070000;
        if ( v2 >= 0 )
          v2 = -2003304445;
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v2, 0xB5Bu);
      }
    }
    else
    {
      v2 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, 0xB40u);
    }
  }
  else
  {
    v2 = -2147467259;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147467259, 0xB30u);
  }
  (*(void (__fastcall **)(WPF::HeapBase *, _DWORD *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(WPF::g_pProcessHeap, v3);
  return (unsigned int)v2;
}
