/*
 * XREFs of ?QueueWorkItem@CSerialWorkQueue@@QEAAJV?$function@$$A6AXXZ@std@@@Z @ 0x180011F1C
 * Callers:
 *     ?OnRenderCommunicationsStreamStateChanged@CDuckingManager@@QEAAJPEAUIAudioSessionInfo@@W4_AudioStreamState@@1PEAUIAudioStreamInfo@@@Z @ 0x1800118C0 (-OnRenderCommunicationsStreamStateChanged@CDuckingManager@@QEAAJPEAUIAudioSessionInfo@@W4_AudioS.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180002AC8 (--3@YAXPEAX_K@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180002B0C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??1?$shared_ptr@UIDuckingDescriptor@@@std@@QEAA@XZ @ 0x180008AC0 (--1-$shared_ptr@UIDuckingDescriptor@@@std@@QEAA@XZ.c)
 *     ??$make_shared@V?$function@$$A6AXXZ@std@@AEAV12@@std@@YA?AV?$shared_ptr@V?$function@$$A6AXXZ@std@@@0@AEAV?$function@$$A6AXXZ@0@@Z @ 0x18000F224 (--$make_shared@V-$function@$$A6AXXZ@std@@AEAV12@@std@@YA-AV-$shared_ptr@V-$function@$$A6AXXZ@std.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180044490 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CSerialWorkQueue::QueueWorkItem(__int64 a1, __int64 *a2)
{
  signed int v4; // edi
  PTP_POOL Threadpool; // rax
  signed int v6; // eax
  signed int v7; // eax
  _QWORD *v8; // rax
  _QWORD *v9; // rbx
  __int64 (__fastcall ***v10)(_QWORD, _BYTE *); // rcx
  __int64 *v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // r15
  _BYTE *v15; // rdx
  struct _TP_WORK *ThreadpoolWork; // rsi
  signed int LastError; // eax
  __int64 *v18; // rcx
  __int64 v19; // rdx
  _QWORD v21[2]; // [rsp+20h] [rbp-60h] BYREF
  _QWORD v22[2]; // [rsp+30h] [rbp-50h] BYREF
  _BYTE v23[56]; // [rsp+40h] [rbp-40h] BYREF
  _BYTE *v24; // [rsp+78h] [rbp-8h]

  v4 = 0;
  if ( *(_BYTE *)(a1 + 80) )
    goto LABEL_31;
  if ( *(_QWORD *)a1 )
  {
LABEL_12:
    v8 = operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
    v9 = v8;
    if ( v8 )
    {
      *v8 = 0LL;
      v8[1] = 0LL;
      v8[2] = 0LL;
    }
    else
    {
      v9 = 0LL;
    }
    if ( v9 )
    {
      v24 = 0LL;
      v10 = (__int64 (__fastcall ***)(_QWORD, _BYTE *))a2[7];
      if ( v10 )
        v24 = (_BYTE *)(**v10)(v10, v23);
      v9[2] = a1;
      v11 = std::make_shared<std::function<void (void)>,std::function<void (void)> &>(v22, (__int64)v23);
      v12 = *v11;
      v13 = v11[1];
      *v11 = 0LL;
      v11[1] = 0LL;
      v21[0] = *v9;
      *v9 = v12;
      v21[1] = v9[1];
      v9[1] = v13;
      std::shared_ptr<IDuckingDescriptor>::~shared_ptr<IDuckingDescriptor>((__int64)v21);
      std::shared_ptr<IDuckingDescriptor>::~shared_ptr<IDuckingDescriptor>((__int64)v22);
      v14 = *v9;
      v4 = *v9 == 0LL ? 0x8007000E : 0;
      if ( v24 )
      {
        v15 = v23;
        LOBYTE(v15) = v24 != v23;
        (*(void (__fastcall **)(_BYTE *, _BYTE *))(*(_QWORD *)v24 + 32LL))(v24, v15);
      }
      if ( !v14 )
        goto LABEL_29;
      ThreadpoolWork = CreateThreadpoolWork(CSerialWorkQueue::WorkCallback, v9, (PTP_CALLBACK_ENVIRON)(a1 + 8));
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
          goto LABEL_29;
      }
      v9 = 0LL;
      SubmitThreadpoolWork(ThreadpoolWork);
    }
    else
    {
      v4 = -2147024882;
    }
LABEL_29:
    if ( v9 )
    {
      std::shared_ptr<IDuckingDescriptor>::~shared_ptr<IDuckingDescriptor>((__int64)v9);
      operator delete(v9);
    }
    goto LABEL_31;
  }
  Threadpool = CreateThreadpool(0LL);
  *(_QWORD *)a1 = Threadpool;
  if ( Threadpool )
    goto LABEL_10;
  v6 = GetLastError();
  v4 = v6;
  if ( v6 > 0 )
    v4 = (unsigned __int16)v6 | 0x80070000;
  if ( v4 >= 0 )
  {
LABEL_10:
    if ( SetThreadpoolThreadMinimum(*(PTP_POOL *)a1, 1u) )
      goto LABEL_11;
    v7 = GetLastError();
    v4 = v7;
    if ( v7 > 0 )
      v4 = (unsigned __int16)v7 | 0x80070000;
    if ( v4 >= 0 )
    {
LABEL_11:
      SetThreadpoolThreadMaximum(*(PTP_POOL *)a1, 1u);
      *(_QWORD *)(a1 + 16) = *(_QWORD *)a1;
      goto LABEL_12;
    }
  }
LABEL_31:
  v18 = (__int64 *)a2[7];
  if ( v18 )
  {
    v19 = *v18;
    LOBYTE(v19) = v18 != a2;
    (*(void (__fastcall **)(__int64 *, __int64))(*v18 + 32))(v18, v19);
    a2[7] = 0LL;
  }
  return (unsigned int)v4;
}
