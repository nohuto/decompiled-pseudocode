/*
 * XREFs of ?InputPumpWorkRoutine@CAudioPump@@CAKPEAX@Z @ 0x14006B550
 * Callers:
 *     <none>
 * Callees:
 *     ?SetEvent@details@wil@@YAXPEAX@Z @ 0x140001FCC (-SetEvent@details@wil@@YAXPEAX@Z.c)
 *     ?Yield@CAudioPump@@AEAA?AW4TEventType@1@PEA_K@Z @ 0x140019D50 (-Yield@CAudioPump@@AEAA-AW4TEventType@1@PEA_K@Z.c)
 *     ?AttachToMMCSS@CAudioPump@@AEAAXXZ @ 0x140028D5C (-AttachToMMCSS@CAudioPump@@AEAAXXZ.c)
 *     ?CancelDeadline@CAudioPump@@AEAAXXZ @ 0x14002C424 (-CancelDeadline@CAudioPump@@AEAAXXZ.c)
 *     ?RemoveFromMMCSS@CAudioPump@@AEAAXXZ @ 0x14002C9C8 (-RemoveFromMMCSS@CAudioPump@@AEAAXXZ.c)
 *     ?AERTLockCurrentThread@@YAJXZ @ 0x14002D3A0 (-AERTLockCurrentThread@@YAJXZ.c)
 *     ?AERTUnlockCurrentThread@@YAJXZ @ 0x14002D5E0 (-AERTUnlockCurrentThread@@YAJXZ.c)
 *     McTemplateU0pq_EtwEventWriteTransfer @ 0x14002E02C (McTemplateU0pq_EtwEventWriteTransfer.c)
 *     McTemplateU0p_EtwEventWriteTransfer @ 0x14002E134 (McTemplateU0p_EtwEventWriteTransfer.c)
 *     __security_check_cookie @ 0x14002F570 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x140032230 (_guard_xfg_dispatch_icall_nop.c)
 *     ?CheckForPause@CAudioPump@@AEAAXXZ @ 0x14006B19C (-CheckForPause@CAudioPump@@AEAAXXZ.c)
 *     ?TrackCPUUsage@CAudioPump@@AEAAXPEA_K@Z @ 0x14006BA28 (-TrackCPUUsage@CAudioPump@@AEAAXPEA_K@Z.c)
 *     McTemplateU0pi_EtwEventWriteTransfer @ 0x14006BBCC (McTemplateU0pi_EtwEventWriteTransfer.c)
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
  BOOL v9; // esi
  __int64 v10; // rcx
  bool v11; // bl
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 i; // rcx
  __int64 v16; // rax
  __int64 v17; // rcx
  bool v18; // al
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v25; // [rsp+28h] [rbp-29h] BYREF
  unsigned __int64 v26; // [rsp+30h] [rbp-21h] BYREF
  BOOL v27; // [rsp+38h] [rbp-19h]
  __int64 v28; // [rsp+40h] [rbp-11h] BYREF
  char v29[8]; // [rsp+48h] [rbp-9h] BYREF
  __int64 v30; // [rsp+50h] [rbp-1h]
  __int64 v31; // [rsp+58h] [rbp+7h]
  __int128 v32; // [rsp+70h] [rbp+1Fh]
  __int128 v33; // [rsp+80h] [rbp+2Fh] BYREF

  v32 = *((_OWORD *)this + 292);
  v33 = v32;
  EtwEventActivityIdControl(4LL, &v33);
  if ( (byte_1400C1841 & 8) != 0 )
    McTemplateU0pq_EtwEventWriteTransfer(v2, (__int64)&AudioCore_Pump_Process_Start, (__int64)this, 0);
  CAudioPump::AttachToMMCSS(this);
  v4 = *((_QWORD *)this + 582);
  if ( v4 )
  {
    v5 = *(void (__fastcall **)(__int64, HANDLE, char *))(*(_QWORD *)v4 + 40LL);
    CurrentThread = GetCurrentThread();
    v5(v4, CurrentThread, (char *)this + 4664);
  }
  wil::details::SetEvent(*((wil::details **)this + 30), v3);
  v9 = (int)AERTLockCurrentThread() >= 0;
  v27 = v9;
  v26 = *((_QWORD *)this + 580);
  if ( (byte_1400C1841 & 8) != 0 )
    McTemplateU0p_EtwEventWriteTransfer(v8, v7, (__int64)this);
  CAudioPump::Yield((__int64)this, (__int64)&v26);
  if ( (byte_1400C1841 & 8) != 0 )
    McTemplateU0pq_EtwEventWriteTransfer(v10, (__int64)&AudioCore_Pump_Process_Start, (__int64)this, 1);
  if ( !*((_BYTE *)this + 76) )
  {
    do
    {
      v11 = *((_BYTE *)this + 4648) == 0;
      CAudioPump::CheckForPause(this);
      (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 10) + 24LL))(*((_QWORD *)this + 10));
      if ( _InterlockedCompareExchange((volatile signed __int32 *)this + 78, 0, 0) )
      {
        (*(void (__fastcall **)(_QWORD, __int64 *, char *))(**((_QWORD **)this + 25) + 24LL))(
          *((_QWORD *)this + 25),
          &v25,
          v29);
        v14 = v25;
        if ( v25 > 0 )
          goto LABEL_30;
        if ( (byte_1400C1841 & 4) != 0 )
        {
          McTemplateU0pi_EtwEventWriteTransfer(v13, v12, this, v25);
          v14 = v25;
        }
        if ( v14 > 0 )
        {
LABEL_30:
          do
          {
            if ( *((_BYTE *)this + 76) )
              break;
            v11 = 1;
            for ( i = v25; i > 0; v25 = i )
            {
              if ( *((_BYTE *)this + 76) )
              {
                i = v25;
                break;
              }
              v16 = v25;
              if ( v25 > *((_QWORD *)this + 12) )
                v16 = *((_QWORD *)this + 12);
              v28 = v16;
              (*(void (__fastcall **)(_QWORD, __int64 *, char *))(**((_QWORD **)this + 10) + 32LL))(
                *((_QWORD *)this + 10),
                &v28,
                v29);
              v17 = (unsigned int)(int)(*((float *)this + 26) * (double)(int)v28 / 10000000.0 + 0.5);
              v30 += v17;
              v31 -= v17;
              i = v25 - v28;
              if ( v25 - v28 < *((_QWORD *)this + 12) / 2LL )
                i = 0LL;
            }
            if ( !*((_QWORD *)this + 36) )
            {
              (*(void (__fastcall **)(_QWORD, __int64 *, char *))(**((_QWORD **)this + 25) + 24LL))(
                *((_QWORD *)this + 25),
                &v25,
                v29);
              i = v25;
              if ( v25 < *((_QWORD *)this + 12) / 2LL )
                i = 0LL;
              v25 = i;
            }
          }
          while ( i > 0 );
        }
      }
      CAudioPump::TrackCPUUsage(this, &v26);
      if ( *((_BYTE *)this + 4648) )
      {
        if ( *((_BYTE *)this + 4728) )
        {
          _InterlockedExchange((volatile __int32 *)this + 1181, 2);
          WakeByAddressAll((char *)this + 4724);
          *((_BYTE *)this + 4728) = 0;
        }
        v18 = v11;
        if ( *((_DWORD *)this + 1181) != 1 )
          v18 = 0;
        *((_BYTE *)this + 4649) = v18;
      }
      (*(void (__fastcall **)(_QWORD, bool))(**((_QWORD **)this + 10) + 48LL))(*((_QWORD *)this + 10), v11);
      if ( (byte_1400C1841 & 8) != 0 )
        McTemplateU0p_EtwEventWriteTransfer(v20, v19, (__int64)this);
      CAudioPump::Yield((__int64)this, (__int64)&v26);
      v26 = *((_QWORD *)this + 580);
      if ( (byte_1400C1841 & 8) != 0 )
        McTemplateU0pq_EtwEventWriteTransfer(v21, (__int64)&AudioCore_Pump_Process_Start, (__int64)this, 2);
    }
    while ( !*((_BYTE *)this + 76) );
    LOBYTE(v9) = v27;
  }
  CAudioPump::CancelDeadline(this);
  CAudioPump::RemoveFromMMCSS(this);
  if ( v9 )
    AERTUnlockCurrentThread();
  if ( (byte_1400C1841 & 8) != 0 )
    McTemplateU0p_EtwEventWriteTransfer(v23, v22, (__int64)this);
  EtwEventActivityIdControl(4LL, &v33);
  return 0LL;
}
