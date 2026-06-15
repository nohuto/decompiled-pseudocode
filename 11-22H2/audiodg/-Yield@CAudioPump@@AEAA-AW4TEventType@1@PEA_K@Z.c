/*
 * XREFs of ?Yield@CAudioPump@@AEAA?AW4TEventType@1@PEA_K@Z @ 0x14000C070
 * Callers:
 *     ?OutputPumpWorkRoutine@CAudioPump@@CAKPEAX@Z @ 0x14000B480 (-OutputPumpWorkRoutine@CAudioPump@@CAKPEAX@Z.c)
 *     ?InputPumpWorkRoutine@CAudioPump@@CAKPEAX@Z @ 0x140038B10 (-InputPumpWorkRoutine@CAudioPump@@CAKPEAX@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x140027DF0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F210 (_guard_xfg_dispatch_icall_nop.c)
 *     McTemplateU0pq_EtwEventWriteTransfer @ 0x1400391BC (McTemplateU0pq_EtwEventWriteTransfer.c)
 *     McTemplateU0pqq_EtwEventWriteTransfer @ 0x140039230 (McTemplateU0pqq_EtwEventWriteTransfer.c)
 */

__int64 __fastcall CAudioPump::Yield(__int64 a1, __int64 a2)
{
  unsigned int v4; // r15d
  void (__fastcall *v5)(CAudioPump *__hidden, unsigned __int64 *); // rcx
  DWORD v6; // esi
  unsigned int v7; // r14d
  void *v8; // rax
  void *v9; // rax
  __int64 v10; // rax
  char *v11; // rdx
  __int64 v12; // rax
  DWORD v13; // eax
  int v14; // edx
  int v15; // ecx
  __int64 v16; // r14
  int v17; // edx
  __int64 v18; // rcx
  double v19; // xmm0_8
  int v20; // ecx
  double v21; // xmm0_8
  double v22; // xmm1_8
  __int64 v24; // rax
  char v25; // al
  __int64 v26; // rax
  __int64 v27; // rax
  char LastError; // al
  int v29; // edx
  int v30; // ecx
  __int128 v31; // [rsp+30h] [rbp-D0h]
  __int128 v32; // [rsp+40h] [rbp-C0h]
  __int128 v33; // [rsp+50h] [rbp-B0h]
  __int128 v34; // [rsp+60h] [rbp-A0h]
  __int128 v35; // [rsp+70h] [rbp-90h]
  __int128 v36; // [rsp+80h] [rbp-80h]
  __int128 v37; // [rsp+90h] [rbp-70h]
  __int128 v38; // [rsp+A0h] [rbp-60h]
  __int128 v39; // [rsp+B0h] [rbp-50h]
  __int128 v40; // [rsp+C0h] [rbp-40h]
  int v41; // [rsp+110h] [rbp+10h]
  int v42; // [rsp+114h] [rbp+14h]
  HANDLE Handles; // [rsp+128h] [rbp+28h] BYREF
  __int64 v44; // [rsp+130h] [rbp+30h]

  *(_BYTE *)(a1 + 248) = 1;
  v4 = 0;
  v5 = CAudioPump::EventHandlerPausePump;
  do
  {
    v6 = 1;
    v7 = 1;
    *(_QWORD *)&v31 = CAudioPump::EventHandlerPausePump;
    DWORD2(v31) = 0;
    Handles = *(HANDLE *)(a1 + 256);
    v41 = 1;
    v39 = v31;
    if ( CAudioPump::InputPumpWorkRoutine == *(unsigned int (__fastcall **)(CAudioPump *))(a1 + 208) )
    {
      v25 = *(_BYTE *)(a1 + 4657);
      if ( v25 )
      {
        if ( v25 == 1 )
        {
          v5 = *(void (__fastcall **)(CAudioPump *__hidden, unsigned __int64 *))(a1 + 384);
          if ( v5 )
          {
            *(_QWORD *)&v33 = CAudioPump::EventHandlerBufferRelease;
            v6 = 2;
            DWORD2(v33) = 0;
            v44 = (*(__int64 (__fastcall **)(void (__fastcall *)(CAudioPump *__hidden, unsigned __int64 *), unsigned int (__fastcall *)(CAudioPump *), void (__fastcall *)(CAudioPump *, unsigned __int64 *), void (__fastcall *)(CAudioPump *__hidden, unsigned __int64 *)))(*(_QWORD *)v5 + 24LL))(
                    v5,
                    CAudioPump::InputPumpWorkRoutine,
                    CAudioPump::EventHandlerBufferComplete,
                    CAudioPump::EventHandlerTimer);
            v7 = 5;
            v42 = 4;
            v40 = v33;
          }
        }
      }
      else if ( *(_QWORD *)(a1 + 288) )
      {
        *(_QWORD *)&v32 = CAudioPump::EventHandlerBufferComplete;
        v6 = 2;
        DWORD2(v32) = 0;
        v44 = *(_QWORD *)(a1 + 288);
        v7 = 3;
        v42 = 2;
        v40 = v32;
      }
    }
    else
    {
      if ( *(_QWORD *)(a1 + 264) )
      {
        *(_QWORD *)&v34 = CAudioPump::EventHandlerPausePump;
        v6 = 2;
        DWORD2(v34) = 0;
        v44 = *(_QWORD *)(a1 + 264);
        v7 = 33;
        v42 = 32;
        v40 = v34;
      }
      v8 = *(void **)(a1 + 392);
      if ( v8 )
      {
        v7 |= 0x10u;
        *(_QWORD *)&v35 = CAudioPump::EventHandlerPausePump;
        DWORD2(v35) = 0;
        *(&Handles + v6) = v8;
        v26 = 2LL * v6;
        *(&v41 + v6++) = 16;
        *(__int128 *)((char *)&v39 + 8 * v26) = v35;
      }
      if ( !*(_BYTE *)(a1 + 4657) )
      {
        v9 = *(void **)(a1 + 288);
        if ( v9 )
        {
          v7 |= 2u;
          *(_QWORD *)&v36 = CAudioPump::EventHandlerBufferComplete;
          DWORD2(v36) = 0;
          *(&Handles + v6) = v9;
          v10 = 2LL * v6;
          *(&v41 + v6++) = 2;
          *(__int128 *)((char *)&v39 + 8 * v10) = v36;
        }
      }
      v5 = *(void (__fastcall **)(CAudioPump *__hidden, unsigned __int64 *))(a1 + 384);
      if ( v5 )
      {
        DWORD2(v37) = 0;
        v7 |= 4u;
        *(&Handles + v6) = (HANDLE)(*(__int64 (__fastcall **)(void (__fastcall *)(CAudioPump *__hidden, unsigned __int64 *), unsigned int (__fastcall *)(CAudioPump *), void (__fastcall *)(CAudioPump *, unsigned __int64 *), void (__fastcall *)(CAudioPump *__hidden, unsigned __int64 *)))(*(_QWORD *)v5 + 24LL))(
                                     v5,
                                     CAudioPump::InputPumpWorkRoutine,
                                     CAudioPump::EventHandlerBufferComplete,
                                     CAudioPump::EventHandlerTimer);
        *(_QWORD *)&v37 = CAudioPump::EventHandlerBufferRelease;
        v27 = 2LL * v6;
        *(&v41 + v6++) = 4;
        *(__int128 *)((char *)&v39 + 8 * v27) = v37;
      }
    }
    v11 = *(char **)(a1 + 272);
    if ( (unsigned __int64)(v11 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    {
      v5 = (void (__fastcall *)(CAudioPump *__hidden, unsigned __int64 *))v6;
      v7 |= 8u;
      v12 = 2LL * v6;
      *(_QWORD *)&v38 = CAudioPump::EventHandlerTimer;
      DWORD2(v38) = 0;
      ++v6;
      *(&Handles + (_QWORD)v5) = v11;
      *(&v41 + (_QWORD)v5) = 8;
      *(__int128 *)((char *)&v39 + 8 * v12) = v38;
    }
    if ( (byte_1400CF981 & 8) != 0 )
      McTemplateU0pq_EtwEventWriteTransfer(v5, &AudioCore_Pump_YieldStart, a1, v7);
    v13 = WaitForMultipleObjectsEx(v6, &Handles, 0, 0xFFFFFFFF, 0);
    v16 = v13;
    if ( v13 == -1 )
    {
      LastError = GetLastError();
      if ( (byte_1400CF981 & 8) != 0 )
        McTemplateU0pqq_EtwEventWriteTransfer(v30, v29, a1, -1, LastError);
    }
    else if ( v6 <= v13 )
    {
      if ( (byte_1400CF981 & 8) != 0 )
        McTemplateU0pqq_EtwEventWriteTransfer(v15, v14, a1, -2, v13);
    }
    else
    {
      QueryPerformanceCounter((LARGE_INTEGER *)(a1 + 4648));
      v18 = *(_QWORD *)(a1 + 4648);
      if ( v18 < 0 )
      {
        v24 = *(_QWORD *)(a1 + 4648) & 1LL | (*(_QWORD *)(a1 + 4648) >> 1);
        v19 = (double)(int)v24 + (double)(int)v24;
      }
      else
      {
        v19 = (double)(int)v18;
      }
      v20 = g_u64QPCFrequency;
      v21 = v19 * 10000000.0;
      if ( (g_u64QPCFrequency & 0x8000000000000000uLL) != 0LL )
      {
        v20 = g_u64QPCFrequency & 1;
        v22 = (double)(int)(v20 | (g_u64QPCFrequency >> 1)) + (double)(int)(v20 | (g_u64QPCFrequency >> 1));
      }
      else
      {
        v22 = (double)(int)g_u64QPCFrequency;
      }
      v4 = *(&v41 + v16);
      *(_QWORD *)(a1 + 4640) = (unsigned int)(int)(v21 / v22);
      if ( (byte_1400CF981 & 8) != 0 )
        McTemplateU0pqq_EtwEventWriteTransfer(v20, v17, a1, 0, v4);
      (*((void (__fastcall **)(__int64, __int64))&v39 + 2 * v16))(a1 + *((int *)&v39 + 4 * v16 + 2), a2);
    }
    v5 = CAudioPump::EventHandlerPausePump;
  }
  while ( *(_BYTE *)(a1 + 248) );
  return v4;
}
