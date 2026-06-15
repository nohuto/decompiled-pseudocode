/*
 * XREFs of ?OnSimpleVolumeChanged@CMonitor@@EEAAJMHPEBU_GUID@@@Z @ 0x1801319C0
 * Callers:
 *     <none>
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180067078 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     WPP_SF_d @ 0x1800DDE94 (WPP_SF_d.c)
 *     ??0SimpleVolumeChangedContext@@QEAA@PEAVCMonitor@@MHPEBU_GUID@@@Z @ 0x18012FD08 (--0SimpleVolumeChangedContext@@QEAA@PEAVCMonitor@@MHPEBU_GUID@@@Z.c)
 *     WPP_SF_gd @ 0x180132BBC (WPP_SF_gd.c)
 */

__int64 __fastcall CMonitor::OnSimpleVolumeChanged(CMonitor *this, float a2, int a3, const struct _GUID *a4)
{
  SimpleVolumeChangedContext *v7; // rax
  SimpleVolumeChangedContext *v8; // rax
  SimpleVolumeChangedContext *v9; // rbx
  struct _TP_WORK *ThreadpoolWork; // rax
  signed int LastError; // eax

  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_gd(*((_QWORD *)WPP_GLOBAL_Control + 2));
  }
  v7 = (SimpleVolumeChangedContext *)operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( !v7 )
    goto LABEL_15;
  v8 = SimpleVolumeChangedContext::SimpleVolumeChangedContext(v7, this, a2, a3, a4);
  v9 = v8;
  if ( !v8 )
    goto LABEL_16;
  ThreadpoolWork = CreateThreadpoolWork((PTP_WORK_CALLBACK)CMonitor::DoHandleSimpleVolumeChanged, v8, 0LL);
  *((_QWORD *)v9 + 4) = ThreadpoolWork;
  if ( ThreadpoolWork )
  {
    SubmitThreadpoolWork(ThreadpoolWork);
LABEL_15:
    v9 = 0LL;
    goto LABEL_16;
  }
  LastError = GetLastError();
  if ( LastError > 0 )
    LastError = (unsigned __int16)LastError | 0x80070000;
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x24u,
      (__int64)&WPP_bd59d04cb15c3bed485848ef4f6ee602_Traceguids,
      LastError);
  }
LABEL_16:
  free(v9);
  return 0LL;
}
