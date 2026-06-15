/*
 * XREFs of ?QueueWorkItem@CSerialWorkQueue@@QEAAJV?$function@$$A6AXXZ@std@@@Z @ 0x140068288
 * Callers:
 *     ?QueueNotification@CAPOProcessingHostObject@@QEAAXAEAV?$shared_ptr@UAPO_NOTIFICATION@@@std@@@Z @ 0x1400681A0 (-QueueNotification@CAPOProcessingHostObject@@QEAAXAEAV-$shared_ptr@UAPO_NOTIFICATION@@@std@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x14002FC5C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x140032230 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0?$function@$$A6AXXZ@std@@QEAA@AEBV01@@Z @ 0x140067AB8 (--0-$function@$$A6AXXZ@std@@QEAA@AEBV01@@Z.c)
 *     ??_G_WorkTask@@QEAAPEAXI@Z @ 0x140067CB4 (--_G_WorkTask@@QEAAPEAXI@Z.c)
 *     ?Initialize@CSerialWorkQueue@@AEAAJXZ @ 0x140067FD0 (-Initialize@CSerialWorkQueue@@AEAAJXZ.c)
 *     ?Initialize@_WorkTask@@QEAAJV?$function@$$A6AXXZ@std@@PEAVCSerialWorkQueue@@@Z @ 0x14006808C (-Initialize@_WorkTask@@QEAAJV-$function@$$A6AXXZ@std@@PEAVCSerialWorkQueue@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CSerialWorkQueue::QueueWorkItem(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  int v4; // edi
  char **v5; // rax
  char **v6; // rbx
  __int64 v7; // rax
  struct _TP_WORK *ThreadpoolWork; // rsi
  signed int LastError; // eax
  __int64 v10; // rcx
  _BYTE v12[88]; // [rsp+20h] [rbp-58h] BYREF

  v2 = a2;
  v4 = 0;
  if ( *(_BYTE *)(a1 + 80) )
    goto LABEL_18;
  v4 = CSerialWorkQueue::Initialize((PTP_POOL *)a1);
  if ( v4 < 0 )
    goto LABEL_18;
  v5 = (char **)operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
  v6 = v5;
  if ( v5 )
  {
    *v5 = 0LL;
    v5[1] = 0LL;
    v5[2] = 0LL;
  }
  else
  {
    v6 = 0LL;
  }
  if ( v6 )
  {
    v7 = std::function<void (void)>::function<void (void)>((__int64)v12, v2);
    v4 = _WorkTask::Initialize(v6, v7, (char *)a1);
    if ( v4 >= 0 )
    {
      ThreadpoolWork = CreateThreadpoolWork(CSerialWorkQueue::WorkCallback, v6, (PTP_CALLBACK_ENVIRON)(a1 + 8));
      if ( ThreadpoolWork )
      {
        v4 = 0;
      }
      else
      {
        LastError = GetLastError();
        v4 = LastError;
        if ( LastError > 0 )
          v4 = (unsigned __int16)LastError | 0x80070000;
        if ( v4 < 0 )
          goto LABEL_16;
      }
      v6 = 0LL;
      SubmitThreadpoolWork(ThreadpoolWork);
    }
  }
  else
  {
    v4 = -2147024882;
  }
LABEL_16:
  if ( v6 )
    _WorkTask::`scalar deleting destructor'((_WorkTask *)v6);
LABEL_18:
  v10 = *(_QWORD *)(v2 + 56);
  if ( v10 )
  {
    LOBYTE(a2) = v10 != v2;
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v10 + 32LL))(v10, a2);
    *(_QWORD *)(v2 + 56) = 0LL;
  }
  return (unsigned int)v4;
}
