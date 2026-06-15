/*
 * XREFs of ?QueueRecurringItem@CSerialWorkQueue@@QEAAJKKV?$function@$$A6AXXZ@std@@AEAV?$unique_ptr@U_RecurringTask@@U?$default_delete@U_RecurringTask@@@std@@@3@@Z @ 0x180021FA0
 * Callers:
 *     ?DestroyStream@CAudioResourceManager@@UEAAJPEAUISubmixProxy@@PEAUIAudioStreamInfo@@@Z @ 0x180015040 (-DestroyStream@CAudioResourceManager@@UEAAJPEAUISubmixProxy@@PEAUIAudioStreamInfo@@@Z.c)
 *     ?StartInactiveTimer@CAudioSession@@QEAAXXZ @ 0x180021CBC (-StartInactiveTimer@CAudioSession@@QEAAXXZ.c)
 *     _lambda_887eec80cbd262f34f149ad6d6f79b4e_::operator() @ 0x180071280 (_lambda_887eec80cbd262f34f149ad6d6f79b4e_--operator().c)
 *     ?StartSessionPersistanceTimer@CPerStreamVolumeAudioSession@@AEAAJXZ @ 0x1800E3604 (-StartSessionPersistanceTimer@CPerStreamVolumeAudioSession@@AEAAJXZ.c)
 *     ?OnStreamGroupDestroyed@CBtAudioResourceManagerBase@@UEAAXW4AUDIO_DIRECTION@@PEAUIStreamGroupProxy@@@Z @ 0x1800F9A70 (-OnStreamGroupDestroyed@CBtAudioResourceManagerBase@@UEAAXW4AUDIO_DIRECTION@@PEAUIStreamGroupPro.c)
 *     ?OnStreamStateChanged@CBtLeAudioResourceManager@@UEAAJPEAUIAudioSessionInfo@@W4_AudioStreamState@@1PEAUIAudioStreamInfo@@@Z @ 0x1800FBAC0 (-OnStreamStateChanged@CBtLeAudioResourceManager@@UEAAJPEAUIAudioSessionInfo@@W4_AudioStreamState.c)
 *     ?SetMuteValue@CMuteSoftware@@UEAAJH@Z @ 0x180111730 (-SetMuteValue@CMuteSoftware@@UEAAJH@Z.c)
 *     ?UpdateMasterVolumeLevel@CVolumeSoftware@@MEAAJXZ @ 0x180129A90 (-UpdateMasterVolumeLevel@CVolumeSoftware@@MEAAJXZ.c)
 * Callees:
 *     ??1_RecurringTask@@QEAA@XZ @ 0x180018FE8 (--1_RecurringTask@@QEAA@XZ.c)
 *     ?Initialize@_RecurringTask@@QEAAJV?$function@$$A6AXXZ@std@@PEAVCSerialWorkQueue@@@Z @ 0x180022110 (-Initialize@_RecurringTask@@QEAAJV-$function@$$A6AXXZ@std@@PEAVCSerialWorkQueue@@@Z.c)
 *     ??0?$function@$$A6AXPEAUIAudioStreamInfo@@@Z@std@@QEAA@AEBV01@@Z @ 0x180022838 (--0-$function@$$A6AXPEAUIAudioStreamInfo@@@Z@std@@QEAA@AEBV01@@Z.c)
 *     ?Initialize@CSerialWorkQueue@@AEAAJXZ @ 0x180022B34 (-Initialize@CSerialWorkQueue@@AEAAJXZ.c)
 *     ?_Tidy@?$_Func_class@X$$V@std@@IEAAXXZ @ 0x18003F560 (-_Tidy@-$_Func_class@X$$V@std@@IEAAXXZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x180067028 (--3@YAXPEAX_K@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180067078 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CSerialWorkQueue::QueueRecurringItem(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        PTP_TIMER **a5)
{
  __int64 v6; // r15
  signed int v8; // edi
  PTP_TIMER *v9; // rax
  PTP_TIMER *v10; // rsi
  PTP_TIMER *v11; // rbx
  __int64 v12; // rax
  PTP_TIMER ThreadpoolTimer; // rax
  struct _TP_TIMER *v14; // rbp
  PTP_TIMER *v15; // rbp
  signed int LastError; // eax
  PTP_TIMER *v18; // [rsp+20h] [rbp-88h] BYREF
  char v19[120]; // [rsp+30h] [rbp-78h] BYREF
  struct _FILETIME pftDueTime; // [rsp+B0h] [rbp+8h] BYREF
  __int64 v21; // [rsp+C8h] [rbp+20h]

  v21 = a4;
  v6 = a2;
  v8 = 0;
  if ( *(_BYTE *)(a1 + 80) )
    goto LABEL_14;
  v8 = CSerialWorkQueue::Initialize((CSerialWorkQueue *)a1);
  if ( v8 < 0 )
    goto LABEL_14;
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
    v12 = std::function<void (IAudioStreamInfo *)>::function<void (IAudioStreamInfo *)>(v19, a4);
    v8 = _RecurringTask::Initialize(v10, v12, a1);
    if ( v8 >= 0 )
    {
      ThreadpoolTimer = CreateThreadpoolTimer(CSerialWorkQueue::TimerCallback, v10, (PTP_CALLBACK_ENVIRON)(a1 + 8));
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
          goto LABEL_12;
      }
      pftDueTime = (struct _FILETIME)(-10000 * v6);
      SetThreadpoolTimer(v14, &pftDueTime, 0, 0);
      if ( a5 != &v18 )
      {
        v11 = 0LL;
        v15 = *a5;
        *a5 = v10;
        if ( v15 )
        {
          _RecurringTask::~_RecurringTask(v15);
          operator delete(v15, 0x20uLL);
        }
      }
    }
  }
  else
  {
    v8 = -2147024882;
  }
LABEL_12:
  if ( v11 )
  {
    _RecurringTask::~_RecurringTask(v11);
    operator delete(v11, 0x20uLL);
  }
LABEL_14:
  std::_Func_class<void,>::_Tidy(a4);
  return (unsigned int)v8;
}
