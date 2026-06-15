/*
 * XREFs of ?QueueWaitItemInternal@CSerialWorkQueue@@AEAAJPEAXP6AXPEAU_TP_CALLBACK_INSTANCE@@0PEAU_TP_WAIT@@J@ZV?$function@$$A6AXXZ@std@@AEAV?$unique_ptr@U_WaitTask@@U?$default_delete@U_WaitTask@@@std@@@5@@Z @ 0x18000D5DC
 * Callers:
 *     ?QueueRecurringWaitItem@CSerialWorkQueue@@QEAAJPEAXV?$function@$$A6AXXZ@std@@AEAV?$unique_ptr@U_WaitTask@@U?$default_delete@U_WaitTask@@@std@@@3@@Z @ 0x18000D444 (-QueueRecurringWaitItem@CSerialWorkQueue@@QEAAJPEAXV-$function@$$A6AXXZ@std@@AEAV-$unique_ptr@U_.c)
 * Callees:
 *     ?Initialize@_WaitTask@@QEAAJPEAXV?$function@$$A6AXXZ@std@@PEAVCSerialWorkQueue@@@Z @ 0x18000D72C (-Initialize@_WaitTask@@QEAAJPEAXV-$function@$$A6AXXZ@std@@PEAVCSerialWorkQueue@@@Z.c)
 *     ??1_WaitTask@@QEAA@XZ @ 0x1800140DC (--1_WaitTask@@QEAA@XZ.c)
 *     ??0?$function@$$A6AXPEAUIAudioStreamInfo@@@Z@std@@QEAA@AEBV01@@Z @ 0x180022838 (--0-$function@$$A6AXPEAUIAudioStreamInfo@@@Z@std@@QEAA@AEBV01@@Z.c)
 *     ?Initialize@CSerialWorkQueue@@AEAAJXZ @ 0x180022B34 (-Initialize@CSerialWorkQueue@@AEAAJXZ.c)
 *     ?_Tidy@?$_Func_class@X$$V@std@@IEAAXXZ @ 0x18003F560 (-_Tidy@-$_Func_class@X$$V@std@@IEAAXXZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x180067038 (--3@YAXPEAX_K@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180067088 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 CSerialWorkQueue::QueueWaitItemInternal(__int64 a1, void *a2, ...)
{
  __int64 v2; // r14
  signed int v5; // esi
  PTP_WAIT *v6; // rax
  PTP_WAIT *v7; // rdi
  _WaitTask *v8; // rbx
  __int64 v9; // rax
  PTP_WAIT ThreadpoolWait; // rax
  struct _TP_WAIT *v11; // rbp
  _WaitTask *v12; // rbp
  signed int LastError; // eax
  char v15[120]; // [rsp+20h] [rbp-78h] BYREF
  PTP_WAIT *v16; // [rsp+B0h] [rbp+18h] BYREF
  va_list va; // [rsp+B0h] [rbp+18h]
  __int64 v18; // [rsp+B8h] [rbp+20h]
  _WaitTask **v19; // [rsp+C0h] [rbp+28h]
  va_list va1; // [rsp+C8h] [rbp+30h] BYREF

  va_start(va1, a2);
  va_start(va, a2);
  v16 = va_arg(va1, PTP_WAIT *);
  v18 = va_arg(va1, _QWORD);
  v19 = va_arg(va1, _WaitTask **);
  v2 = v18;
  v5 = 0;
  if ( *(_BYTE *)(a1 + 80) )
    goto LABEL_14;
  v5 = CSerialWorkQueue::Initialize((CSerialWorkQueue *)a1);
  if ( v5 < 0 )
    goto LABEL_14;
  v6 = (PTP_WAIT *)operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
  v7 = v6;
  v16 = v6;
  if ( v6 )
  {
    *v6 = 0LL;
    v6[1] = 0LL;
    v6[2] = 0LL;
    v6[3] = 0LL;
    v6[4] = 0LL;
  }
  else
  {
    v7 = 0LL;
  }
  v8 = (_WaitTask *)v7;
  v16 = v7;
  if ( v7 )
  {
    v9 = std::function<void (IAudioStreamInfo *)>::function<void (IAudioStreamInfo *)>(v15, v2);
    v5 = _WaitTask::Initialize(v7, a2, v9, a1);
    if ( v5 >= 0 )
    {
      ThreadpoolWait = CreateThreadpoolWait(CSerialWorkQueue::RecurringWaitCallback, v7, (PTP_CALLBACK_ENVIRON)(a1 + 8));
      v11 = ThreadpoolWait;
      if ( ThreadpoolWait )
      {
        v5 = 0;
        *v7 = ThreadpoolWait;
      }
      else
      {
        LastError = GetLastError();
        v5 = LastError;
        if ( LastError > 0 )
          v5 = (unsigned __int16)LastError | 0x80070000;
        *v7 = 0LL;
        if ( v5 < 0 )
          goto LABEL_12;
      }
      SetThreadpoolWait(v11, a2, 0LL);
      if ( v19 != (_WaitTask **)va )
      {
        v8 = 0LL;
        v12 = *v19;
        *v19 = (_WaitTask *)v7;
        if ( v12 )
        {
          _WaitTask::~_WaitTask(v12);
          operator delete(v12, 0x28uLL);
        }
      }
    }
  }
  else
  {
    v5 = -2147024882;
  }
LABEL_12:
  if ( v8 )
  {
    _WaitTask::~_WaitTask(v8);
    operator delete(v8, 0x28uLL);
  }
LABEL_14:
  std::_Func_class<void,>::_Tidy(v2);
  return (unsigned int)v5;
}
