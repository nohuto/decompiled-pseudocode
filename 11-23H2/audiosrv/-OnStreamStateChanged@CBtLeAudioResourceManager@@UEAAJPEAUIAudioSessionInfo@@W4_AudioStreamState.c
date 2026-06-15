/*
 * XREFs of ?OnStreamStateChanged@CBtLeAudioResourceManager@@UEAAJPEAUIAudioSessionInfo@@W4_AudioStreamState@@1PEAUIAudioStreamInfo@@@Z @ 0x1800FBA70
 * Callers:
 *     <none>
 * Callees:
 *     ?QueueRecurringItem@CSerialWorkQueue@@QEAAJKKV?$function@$$A6AXXZ@std@@AEAV?$unique_ptr@U_RecurringTask@@U?$default_delete@U_RecurringTask@@@std@@@3@@Z @ 0x180021FA0 (-QueueRecurringItem@CSerialWorkQueue@@QEAAJKKV-$function@$$A6AXXZ@std@@AEAV-$unique_ptr@U_Recurr.c)
 *     ?QueueWorkItem@CSerialWorkQueue@@QEAAJV?$function@$$A6AXXZ@std@@@Z @ 0x180022880 (-QueueWorkItem@CSerialWorkQueue@@QEAAJV-$function@$$A6AXXZ@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CBtLeAudioResourceManager::OnStreamStateChanged(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        __int64 a5)
{
  int v5; // r15d
  int v8; // r14d
  __int64 v9; // rax
  int v10; // r13d
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // r8
  __int64 v14; // rax
  __int128 v16; // [rsp+38h] [rbp-A1h]
  _QWORD v17[8]; // [rsp+48h] [rbp-91h] BYREF
  _QWORD v18[8]; // [rsp+88h] [rbp-51h] BYREF
  __int64 (__fastcall **v19)(); // [rsp+C8h] [rbp-11h] BYREF
  __int128 v20; // [rsp+D0h] [rbp-9h]
  __int64 (__fastcall ***v21)(); // [rsp+100h] [rbp+27h]
  BOOL v22; // [rsp+150h] [rbp+77h]

  v5 = 1;
  if ( a4 != 1 )
    v5 = -1;
  v8 = 0;
  v22 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a5 + 56LL))(a5) == 1;
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 32));
  v9 = (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)a5 + 48LL))(a5) + 24LL * v22;
  *(_DWORD *)(a1 + 4 * v9 + 72) += v5;
  v10 = *(_DWORD *)(a1 + 4 * v9 + 72);
  if ( v22 )
    *(_DWORD *)(a1 + 264) += v5;
  if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)a5 + 192LL))(a5)
    || (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)a5 + 48LL))(a5) - 6 <= 1 )
  {
    *(_DWORD *)(a1 + 268) += v5;
    v8 = *(_DWORD *)(a1 + 268);
  }
  if ( a1 != -32 )
    LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 32));
  if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)a5 + 192LL))(a5)
    || (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)a5 + 48LL))(a5) - 6 <= 1 )
  {
    if ( v8 == 1 )
    {
      if ( a4 == 1 )
      {
        v11 = (*(__int64 (__fastcall **)(struct IAudioService *))(*(_QWORD *)g_AudioService + 128LL))(g_AudioService);
        v17[1] = a1 - 216;
        v17[0] = off_18017C228;
        v17[7] = v17;
        CSerialWorkQueue::QueueWorkItem(v11, (__int64)v17);
      }
    }
    else if ( !v8 && a4 != 1 )
    {
      v12 = (*(__int64 (__fastcall **)(struct IAudioService *))(*(_QWORD *)g_AudioService + 128LL))(g_AudioService);
      v18[0] = off_18017C1F8;
      v18[1] = a1 - 216;
      v18[7] = v18;
      CSerialWorkQueue::QueueRecurringItem(v12, 0x1388u, v13, (__int64)v18, (PTP_TIMER **)(a1 + 24));
    }
  }
  if ( v10 == 1 && a4 == 1 || !v10 && a4 != 1 )
  {
    v14 = (*(__int64 (__fastcall **)(struct IAudioService *))(*(_QWORD *)g_AudioService + 128LL))(g_AudioService);
    *(_QWORD *)&v16 = a1 - 216;
    DWORD2(v16) = v22;
    v19 = off_18017C1C8;
    v21 = &v19;
    v20 = v16;
    CSerialWorkQueue::QueueWorkItem(v14, (__int64)&v19);
  }
  return 0LL;
}
