/*
 * XREFs of ?QueueWorkItem@CSerialWorkQueue@@QEAAJV?$function@$$A6AXXZ@std@@@Z @ 0x1800226E0
 * Callers:
 *     ?OnRenderCommunicationsStreamStateChanged@CDuckingManager@@QEAAJPEAUIAudioSessionInfo@@W4_AudioStreamState@@1PEAUIAudioStreamInfo@@@Z @ 0x1800221B8 (-OnRenderCommunicationsStreamStateChanged@CDuckingManager@@QEAAJPEAUIAudioSessionInfo@@W4_AudioS.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180002550 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?_Tidy@?$_Func_class@X$$V@std@@IEAAXXZ @ 0x18000D9D0 (-_Tidy@-$_Func_class@X$$V@std@@IEAAXXZ.c)
 *     ??$make_shared@V?$function@$$A6AXXZ@std@@AEAV12@@std@@YA?AV?$shared_ptr@V?$function@$$A6AXXZ@std@@@0@AEAV?$function@$$A6AXXZ@0@@Z @ 0x18000E240 (--$make_shared@V-$function@$$A6AXXZ@std@@AEAV12@@std@@YA-AV-$shared_ptr@V-$function@$$A6AXXZ@std.c)
 *     ??0?$function@$$A6AXXZ@std@@QEAA@AEBV01@@Z @ 0x1800141E0 (--0-$function@$$A6AXXZ@std@@QEAA@AEBV01@@Z.c)
 *     ??4?$shared_ptr@V?$function@$$A6AXXZ@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800154F4 (--4-$shared_ptr@V-$function@$$A6AXXZ@std@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180016C6C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??1?$unique_ptr@U_WorkTask@@U?$default_delete@U_WorkTask@@@std@@@std@@QEAA@XZ @ 0x1800201A4 (--1-$unique_ptr@U_WorkTask@@U-$default_delete@U_WorkTask@@@std@@@std@@QEAA@XZ.c)
 *     ?Initialize@CSerialWorkQueue@@AEAAJXZ @ 0x1800217B4 (-Initialize@CSerialWorkQueue@@AEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CSerialWorkQueue::QueueWorkItem(__int64 a1, __int64 a2)
{
  signed int v4; // edi
  _WorkTask *v5; // rax
  unsigned int v6; // edx
  _WorkTask *v7; // rsi
  __int64 v8; // rdi
  __int64 *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rbx
  struct _TP_WORK *ThreadpoolWork; // rbx
  signed int LastError; // eax
  __int64 v15; // [rsp+20h] [rbp-78h] BYREF
  std::_Ref_count_base *v16; // [rsp+28h] [rbp-70h]
  char v17[104]; // [rsp+30h] [rbp-68h] BYREF
  _WorkTask *v18; // [rsp+B0h] [rbp+18h] BYREF

  v4 = 0;
  if ( !*(_BYTE *)(a1 + 80) )
  {
    v4 = CSerialWorkQueue::Initialize((PTP_POOL *)a1);
    if ( v4 >= 0 )
    {
      v5 = (_WorkTask *)operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
      v7 = v5;
      if ( v5 )
      {
        *(_QWORD *)v5 = 0LL;
        *((_QWORD *)v5 + 1) = 0LL;
        *((_QWORD *)v5 + 2) = 0LL;
      }
      else
      {
        v7 = 0LL;
      }
      v18 = v7;
      if ( v7 )
      {
        v8 = std::function<void (void)>::function<void (void)>((__int64)v17, a2);
        *((_QWORD *)v7 + 2) = a1;
        v9 = std::make_shared<std::function<void (void)>,std::function<void (void)> &>(&v15, v8);
        std::shared_ptr<std::function<void (void)>>::operator=(v7, v9);
        if ( v16 )
          std::_Ref_count_base::_Decref(v16);
        v11 = *(_QWORD *)v7;
        std::_Func_class<void,>::_Tidy(v8, v10);
        v4 = v11 == 0 ? 0x8007000E : 0;
        if ( !v11 )
          goto LABEL_18;
        ThreadpoolWork = CreateThreadpoolWork(CSerialWorkQueue::WorkCallback, v7, (PTP_CALLBACK_ENVIRON)(a1 + 8));
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
            goto LABEL_18;
        }
        v18 = 0LL;
        SubmitThreadpoolWork(ThreadpoolWork);
      }
      else
      {
        v4 = -2147024882;
      }
LABEL_18:
      std::unique_ptr<_WorkTask>::~unique_ptr<_WorkTask>(&v18, v6);
    }
  }
  std::_Func_class<void,>::_Tidy(a2, a2);
  return (unsigned int)v4;
}
