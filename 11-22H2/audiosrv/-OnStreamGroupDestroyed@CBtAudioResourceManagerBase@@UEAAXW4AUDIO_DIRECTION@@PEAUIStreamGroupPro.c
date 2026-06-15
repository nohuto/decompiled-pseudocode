/*
 * XREFs of ?OnStreamGroupDestroyed@CBtAudioResourceManagerBase@@UEAAXW4AUDIO_DIRECTION@@PEAUIStreamGroupProxy@@@Z @ 0x1800F9A70
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180009588 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?QueueRecurringItem@CSerialWorkQueue@@QEAAJKKV?$function@$$A6AXXZ@std@@AEAV?$unique_ptr@U_RecurringTask@@U?$default_delete@U_RecurringTask@@@std@@@3@@Z @ 0x180021FA0 (-QueueRecurringItem@CSerialWorkQueue@@QEAAJKKV-$function@$$A6AXXZ@std@@AEAV-$unique_ptr@U_Recurr.c)
 *     __security_check_cookie @ 0x1800669A0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CBtAudioResourceManagerBase::OnStreamGroupDestroyed(__int64 a1, int a2, __int64 a3)
{
  unsigned __int8 (__fastcall *v4)(__int64, __int128 *); // rbx
  __int64 v5; // rax
  __int64 v6; // r8
  int v7; // eax
  __int128 v8; // [rsp+30h] [rbp-78h] BYREF
  _QWORD v9[8]; // [rsp+40h] [rbp-68h] BYREF
  __int64 v10; // [rsp+80h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+0h]

  if ( !a2 )
  {
    v4 = *(unsigned __int8 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)a1 + 144LL);
    v8 = *(_OWORD *)(*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)a3 + 152LL))(a3, &v10);
    if ( v4(a1, &v8) )
    {
      EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 96));
      v5 = (*(__int64 (__fastcall **)(struct IAudioService *))(*(_QWORD *)g_AudioService + 128LL))(g_AudioService);
      v9[1] = a1;
      v9[0] = off_18017BBA8;
      v9[7] = v9;
      v7 = CSerialWorkQueue::QueueRecurringItem(v5, 0x1388u, v6, (__int64)v9, (PTP_TIMER **)(a1 + 136));
      if ( v7 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x276,
          (int)"avcore\\audiocore\\server\\audiosrv\\dll\\btaudioresourcemanagerbase.cpp",
          (const char *)(unsigned int)v7);
      if ( a1 != -96 )
        LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 96));
    }
  }
}
