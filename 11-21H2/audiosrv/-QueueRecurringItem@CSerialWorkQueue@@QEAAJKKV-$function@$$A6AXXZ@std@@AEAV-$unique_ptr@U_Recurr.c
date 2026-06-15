/*
 * XREFs of ?QueueRecurringItem@CSerialWorkQueue@@QEAAJKKV?$function@$$A6AXXZ@std@@AEAV?$unique_ptr@U_RecurringTask@@U?$default_delete@U_RecurringTask@@@std@@@3@@Z @ 0x1800CACE0
 * Callers:
 *     ?StartSessionPersistanceTimer@CPerStreamVolumeAudioSession@@AEAAJXZ @ 0x180011770 (-StartSessionPersistanceTimer@CPerStreamVolumeAudioSession@@AEAAJXZ.c)
 *     ?DestroyStream@CAudioResourceManager@@UEAAJPEAUISubmixProxy@@PEAUIAudioStreamInfo@@@Z @ 0x180039270 (-DestroyStream@CAudioResourceManager@@UEAAJPEAUISubmixProxy@@PEAUIAudioStreamInfo@@@Z.c)
 *     _lambda_a5ecd82779a8f654c07843c2a2062ee4_::operator() @ 0x18006697C (_lambda_a5ecd82779a8f654c07843c2a2062ee4_--operator().c)
 *     ?SetMuteValue@CMuteSoftware@@UEAAJH@Z @ 0x1800CB0C0 (-SetMuteValue@CMuteSoftware@@UEAAJH@Z.c)
 *     ?UpdateMasterVolumeLevel@CVolumeSoftware@@MEAAJXZ @ 0x1800CEBC0 (-UpdateMasterVolumeLevel@CVolumeSoftware@@MEAAJXZ.c)
 *     ?OnStreamGroupDestroyed@CBtAudioResourceManager@@UEAAXPEAVCEndpointCharacteristics@@PEAUIStreamGroupProxy@@@Z @ 0x180116C10 (-OnStreamGroupDestroyed@CBtAudioResourceManager@@UEAAXPEAVCEndpointCharacteristics@@PEAUIStreamG.c)
 * Callees:
 *     ??0?$function@$$A6AXXZ@std@@QEAA@AEBV01@@Z @ 0x180051A98 (--0-$function@$$A6AXXZ@std@@QEAA@AEBV01@@Z.c)
 *     ?_Tidy@?$_Func_class@X$$V@std@@IEAAXXZ @ 0x18005BAA8 (-_Tidy@-$_Func_class@X$$V@std@@IEAAXXZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x18005EFB8 (--3@YAXPEAX_K@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18005EFFC (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?Initialize@CSerialWorkQueue@@AEAAJXZ @ 0x1800C7220 (-Initialize@CSerialWorkQueue@@AEAAJXZ.c)
 *     ??1_RecurringTask@@QEAA@XZ @ 0x1800C9FF0 (--1_RecurringTask@@QEAA@XZ.c)
 *     ?Initialize@_RecurringTask@@QEAAJV?$function@$$A6AXXZ@std@@PEAVCSerialWorkQueue@@@Z @ 0x1800CA180 (-Initialize@_RecurringTask@@QEAAJV-$function@$$A6AXXZ@std@@PEAVCSerialWorkQueue@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CSerialWorkQueue::QueueRecurringItem(__int64 a1, __int64 a2, __int64 a3, __int64 a4, PTP_TIMER **a5)
{
  __int64 v6; // r15
  int v8; // edi
  PTP_TIMER *v9; // rax
  PTP_TIMER *v10; // rsi
  PTP_TIMER *v11; // rbx
  __int64 v12; // rax
  PTP_TIMER ThreadpoolTimer; // rax
  struct _TP_TIMER *v14; // rbp
  signed int LastError; // eax
  PTP_TIMER *v16; // rbp
  PTP_TIMER *v18; // [rsp+20h] [rbp-78h] BYREF
  char v19[64]; // [rsp+30h] [rbp-68h] BYREF
  struct _FILETIME pftDueTime; // [rsp+A0h] [rbp+8h] BYREF
  __int64 v21; // [rsp+B8h] [rbp+20h]

  v21 = a4;
  v6 = (unsigned int)a2;
  v8 = 0;
  if ( *(_BYTE *)(a1 + 80) )
    goto LABEL_20;
  v8 = CSerialWorkQueue::Initialize((PTP_POOL *)a1);
  if ( v8 < 0 )
    goto LABEL_20;
  v9 = (PTP_TIMER *)operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
  v10 = v9;
  v18 = v9;
  if ( v9 )
  {
    *v9 = 0LL;
    v9[1] = 0LL;
    v9[2] = 0LL;
  }
  else
  {
    v10 = 0LL;
  }
  v11 = v10;
  v18 = v10;
  if ( v10 )
  {
    v12 = std::function<void (void)>::function<void (void)>((__int64)v19, a4);
    v8 = _RecurringTask::Initialize((__int64)v10, v12, a1);
    if ( v8 >= 0 )
    {
      ThreadpoolTimer = CreateThreadpoolTimer(
                          (PTP_TIMER_CALLBACK)CSerialWorkQueue::TimerCallback,
                          v10,
                          (PTP_CALLBACK_ENVIRON)(a1 + 8));
      v14 = ThreadpoolTimer;
      if ( ThreadpoolTimer )
      {
        v8 = 0;
        *v10 = ThreadpoolTimer;
      }
      else
      {
        LastError = GetLastError();
        v8 = LastError;
        if ( LastError > 0 )
          v8 = (unsigned __int16)LastError | 0x80070000;
        *v10 = 0LL;
        if ( v8 < 0 )
          goto LABEL_18;
      }
      pftDueTime = (struct _FILETIME)(-10000 * v6);
      SetThreadpoolTimer(v14, &pftDueTime, 0, 0);
      if ( a5 != &v18 )
      {
        v11 = 0LL;
        v16 = *a5;
        *a5 = v10;
        if ( v16 )
        {
          _RecurringTask::~_RecurringTask(v16);
          operator delete(v16);
        }
      }
    }
  }
  else
  {
    v8 = -2147024882;
  }
LABEL_18:
  if ( v11 )
  {
    _RecurringTask::~_RecurringTask(v11);
    operator delete(v11);
  }
LABEL_20:
  std::_Func_class<void,>::_Tidy(a4, a2);
  return (unsigned int)v8;
}
