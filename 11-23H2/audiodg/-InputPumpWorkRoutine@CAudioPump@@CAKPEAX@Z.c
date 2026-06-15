/*
 * XREFs of ?InputPumpWorkRoutine@CAudioPump@@CAKPEAX@Z @ 0x140038AD0
 * Callers:
 *     <none>
 * Callees:
 *     ?CancelDeadline@CAudioPump@@AEAAXXZ @ 0x140008D70 (-CancelDeadline@CAudioPump@@AEAAXXZ.c)
 *     ?Yield@CAudioPump@@AEAA?AW4TEventType@1@PEA_K@Z @ 0x14000C070 (-Yield@CAudioPump@@AEAA-AW4TEventType@1@PEA_K@Z.c)
 *     ?AttachToMMCSS@CAudioPump@@AEAAXXZ @ 0x140023474 (-AttachToMMCSS@CAudioPump@@AEAAXXZ.c)
 *     ?SetEvent@details@wil@@YAXPEAX@Z @ 0x1400260A0 (-SetEvent@details@wil@@YAXPEAX@Z.c)
 *     ?AERTLockCurrentThread@@YAJXZ @ 0x140026164 (-AERTLockCurrentThread@@YAJXZ.c)
 *     __security_check_cookie @ 0x140027DF0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F1D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?CheckForPause@CAudioPump@@AEAAXXZ @ 0x1400388E2 (-CheckForPause@CAudioPump@@AEAAXXZ.c)
 *     ?TrackCPUUsage@CAudioPump@@AEAAXPEA_K@Z @ 0x140038EF6 (-TrackCPUUsage@CAudioPump@@AEAAXPEA_K@Z.c)
 *     McTemplateU0p_EtwEventWriteTransfer @ 0x140039010 (McTemplateU0p_EtwEventWriteTransfer.c)
 *     McTemplateU0pq_EtwEventWriteTransfer @ 0x14003917C (McTemplateU0pq_EtwEventWriteTransfer.c)
 *     ?RemoveFromMMCSS@CAudioPump@@AEAAXXZ @ 0x140073D30 (-RemoveFromMMCSS@CAudioPump@@AEAAXXZ.c)
 *     McTemplateU0pi_EtwEventWriteTransfer @ 0x140074120 (McTemplateU0pi_EtwEventWriteTransfer.c)
 *     ?AERTUnlockCurrentThread@@YAJXZ @ 0x14007AE54 (-AERTUnlockCurrentThread@@YAJXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAudioPump::InputPumpWorkRoutine(CAudioPump *this)
{
  __int64 v2; // rcx
  void *v3; // rdx
  __int64 v4; // rsi
  void (__fastcall *v5)(__int64, HANDLE, char *); // rbx
  HANDLE CurrentThread; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  BOOL v9; // r15d
  __int64 v10; // rcx
  bool v11; // si
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 *v15; // rbx
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rcx
  volatile __int32 *v19; // rbx
  bool v20; // cl
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v27; // [rsp+20h] [rbp-39h] BYREF
  unsigned __int64 v28; // [rsp+28h] [rbp-31h] BYREF
  BOOL v29; // [rsp+30h] [rbp-29h]
  __int64 v30; // [rsp+38h] [rbp-21h] BYREF
  char v31[8]; // [rsp+40h] [rbp-19h] BYREF
  __int64 v32; // [rsp+48h] [rbp-11h]
  __int64 v33; // [rsp+50h] [rbp-9h]
  __int128 v34; // [rsp+68h] [rbp+Fh]
  __int128 v35; // [rsp+78h] [rbp+1Fh] BYREF

  v34 = *(_OWORD *)((char *)this + 4680);
  v35 = v34;
  EtwEventActivityIdControl(4LL, &v35);
  if ( (byte_1400CF981 & 8) != 0 )
    McTemplateU0pq_EtwEventWriteTransfer(v2, &AudioCore_Pump_Process_Start, this, 0LL);
  CAudioPump::AttachToMMCSS(this);
  v4 = *((_QWORD *)this + 583);
  if ( v4 )
  {
    v5 = *(void (__fastcall **)(__int64, HANDLE, char *))(*(_QWORD *)v4 + 40LL);
    CurrentThread = GetCurrentThread();
    v5(v4, CurrentThread, (char *)this + 4672);
  }
  wil::details::SetEvent(*((wil::details **)this + 30), v3);
  v9 = (int)AERTLockCurrentThread() >= 0;
  v29 = v9;
  v28 = *((_QWORD *)this + 581);
  if ( (byte_1400CF981 & 8) != 0 )
    McTemplateU0p_EtwEventWriteTransfer(v8, v7, this);
  CAudioPump::Yield((__int64)this, (__int64)&v28);
  if ( (byte_1400CF981 & 8) != 0 )
    McTemplateU0pq_EtwEventWriteTransfer(v10, &AudioCore_Pump_Process_Start, this, 1LL);
  if ( !*((_BYTE *)this + 76) )
  {
    do
    {
      v11 = *((_BYTE *)this + 4656) == 0;
      CAudioPump::CheckForPause(this);
      (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 10) + 24LL))(*((_QWORD *)this + 10));
      if ( _InterlockedCompareExchange((volatile signed __int32 *)this + 78, 0, 0) )
      {
        (*(void (__fastcall **)(_QWORD, __int64 *, char *))(**((_QWORD **)this + 25) + 24LL))(
          *((_QWORD *)this + 25),
          &v27,
          v31);
        v14 = v27;
        if ( v27 > 0 )
          goto LABEL_15;
        if ( (byte_1400CF981 & 4) != 0 )
        {
          McTemplateU0pi_EtwEventWriteTransfer(v13, v12, this, v27);
          v14 = v27;
        }
        if ( v14 > 0 )
        {
LABEL_15:
          v15 = (__int64 *)((char *)this + 96);
          do
          {
            if ( *((_BYTE *)this + 76) )
              break;
            v11 = 1;
            v16 = v27;
            while ( v16 > 0 )
            {
              v15 = (__int64 *)((char *)this + 96);
              if ( *((_BYTE *)this + 76) )
              {
                v16 = v27;
                break;
              }
              v15 = (__int64 *)((char *)this + 96);
              v17 = v27;
              if ( v27 > *((_QWORD *)this + 12) )
                v17 = *v15;
              v30 = v17;
              (*(void (__fastcall **)(_QWORD, __int64 *, char *))(**((_QWORD **)this + 10) + 32LL))(
                *((_QWORD *)this + 10),
                &v30,
                v31);
              v18 = (unsigned int)(int)(*((float *)this + 26) * (double)(int)v30 / 10000000.0 + 0.5);
              v32 += v18;
              v33 -= v18;
              v16 = v27 - v30;
              v27 = v16;
              if ( v16 < *v15 / 2 )
              {
                v16 = 0LL;
                v27 = 0LL;
                break;
              }
            }
            if ( *((_QWORD *)this + 36) )
            {
              v15 = (__int64 *)((char *)this + 96);
            }
            else
            {
              (*(void (__fastcall **)(_QWORD, __int64 *, char *))(**((_QWORD **)this + 25) + 24LL))(
                *((_QWORD *)this + 25),
                &v27,
                v31);
              v16 = v27;
              if ( v27 < *v15 / 2 )
              {
                v16 = 0LL;
                v27 = 0LL;
              }
            }
          }
          while ( v16 > 0 );
        }
      }
      CAudioPump::TrackCPUUsage(this, &v28);
      if ( *((_BYTE *)this + 4656) )
      {
        v19 = (volatile __int32 *)((char *)this + 4732);
        if ( *((_BYTE *)this + 4736) )
        {
          _InterlockedExchange(v19, 2);
          WakeByAddressAll((char *)this + 4732);
          *((_BYTE *)this + 4736) = 0;
        }
        v20 = 0;
        if ( *v19 == 1 )
          v20 = v11;
        *((_BYTE *)this + 4657) = v20;
      }
      (*(void (__fastcall **)(_QWORD, bool))(**((_QWORD **)this + 10) + 48LL))(*((_QWORD *)this + 10), v11);
      if ( (byte_1400CF981 & 8) != 0 )
        McTemplateU0p_EtwEventWriteTransfer(v22, v21, this);
      CAudioPump::Yield((__int64)this, (__int64)&v28);
      v28 = *((_QWORD *)this + 581);
      if ( (byte_1400CF981 & 8) != 0 )
        McTemplateU0pq_EtwEventWriteTransfer(v23, &AudioCore_Pump_Process_Start, this, 2LL);
    }
    while ( !*((_BYTE *)this + 76) );
    LOBYTE(v9) = v29;
  }
  CAudioPump::CancelDeadline(this);
  CAudioPump::RemoveFromMMCSS(this);
  if ( v9 )
    AERTUnlockCurrentThread();
  if ( (byte_1400CF981 & 8) != 0 )
    McTemplateU0p_EtwEventWriteTransfer(v25, v24, this);
  EtwEventActivityIdControl(4LL, &v35);
  return 0LL;
}
