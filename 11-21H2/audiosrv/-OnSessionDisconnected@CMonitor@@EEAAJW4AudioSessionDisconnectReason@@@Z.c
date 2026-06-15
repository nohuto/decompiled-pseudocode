/*
 * XREFs of ?OnSessionDisconnected@CMonitor@@EEAAJW4AudioSessionDisconnectReason@@@Z @ 0x180122440
 * Callers:
 *     <none>
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18005EFFC (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     WPP_SF_ @ 0x1800C61A0 (WPP_SF_.c)
 *     WPP_SF_d @ 0x1800C6278 (WPP_SF_d.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CMonitor::OnSessionDisconnected(CMonitor *this, enum AudioSessionDisconnectReason a2)
{
  _QWORD *v4; // rax
  _QWORD *v5; // rbx
  struct _TP_WORK *ThreadpoolWork; // rax
  signed int LastError; // eax

  if ( WPP_GLOBAL_Control != (CEndpointStoreCache *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x2Au, (__int64)&WPP_a37dfcc815523b32eaec5cff52282599_Traceguids);
  }
  v4 = operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
  v5 = v4;
  if ( !v4 )
    goto LABEL_16;
  *(_DWORD *)v4 = a2;
  v4[1] = this;
  if ( this )
    (*(void (__fastcall **)(CMonitor *))(*(_QWORD *)this + 8LL))(this);
  v5[2] = 0LL;
  ThreadpoolWork = CreateThreadpoolWork((PTP_WORK_CALLBACK)CMonitor::DoHandleSessionDisconnect, v5, 0LL);
  v5[2] = ThreadpoolWork;
  if ( ThreadpoolWork )
  {
    SubmitThreadpoolWork(ThreadpoolWork);
LABEL_16:
    v5 = 0LL;
    goto LABEL_17;
  }
  LastError = GetLastError();
  if ( LastError > 0 )
    LastError = (unsigned __int16)LastError | 0x80070000;
  if ( WPP_GLOBAL_Control != (CEndpointStoreCache *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x2Bu,
      (__int64)&WPP_a37dfcc815523b32eaec5cff52282599_Traceguids,
      LastError);
  }
LABEL_17:
  free(v5);
  return 0LL;
}
