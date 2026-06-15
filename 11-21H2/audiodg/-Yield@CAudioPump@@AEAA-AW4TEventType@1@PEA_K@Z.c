/*
 * XREFs of ?Yield@CAudioPump@@AEAA?AW4TEventType@1@PEA_K@Z @ 0x140019D50
 * Callers:
 *     ?OutputPumpWorkRoutine@CAudioPump@@CAKPEAX@Z @ 0x14001A570 (-OutputPumpWorkRoutine@CAudioPump@@CAKPEAX@Z.c)
 *     ?InputPumpWorkRoutine@CAudioPump@@CAKPEAX@Z @ 0x14006B550 (-InputPumpWorkRoutine@CAudioPump@@CAKPEAX@Z.c)
 * Callees:
 *     McGenEventWrite_EtwEventWriteTransfer @ 0x14001B5B8 (McGenEventWrite_EtwEventWriteTransfer.c)
 *     __security_check_cookie @ 0x14002F570 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x140032230 (_guard_xfg_dispatch_icall_nop.c)
 *     McTemplateU0pqq_EtwEventWriteTransfer @ 0x14006BCD0 (McTemplateU0pqq_EtwEventWriteTransfer.c)
 */

__int64 __fastcall CAudioPump::Yield(__int64 a1, __int64 a2)
{
  void (__fastcall *v3)(CAudioPump *, unsigned __int64 *); // r8
  unsigned int v5; // r15d
  void (__fastcall *v6)(CAudioPump *__hidden, unsigned __int64 *); // rcx
  DWORD v7; // esi
  void *v8; // rax
  int v9; // r14d
  __int64 v10; // rax
  void *v11; // rax
  void *v12; // rax
  __int128 v13; // xmm0
  __int64 v14; // rax
  char *v15; // rdx
  __int64 v16; // rax
  __int128 v17; // xmm0
  DWORD v18; // eax
  int v19; // edx
  int v20; // ecx
  __int64 v21; // r14
  int v22; // r8d
  __int64 v23; // rcx
  double v24; // xmm0_8
  int v25; // ecx
  double v26; // xmm0_8
  double v27; // xmm1_8
  __int64 v29; // rax
  char v30; // al
  __int64 v31; // rax
  __int64 v32; // rax
  __int128 v33; // xmm0
  __int64 v34; // rax
  void *v35; // rax
  __int128 v36; // xmm0
  __int64 v37; // rax
  char LastError; // al
  int v39; // edx
  int v40; // ecx
  int v41; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v42; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v43; // [rsp+40h] [rbp-C0h] BYREF
  __int128 v44; // [rsp+48h] [rbp-B8h]
  __int128 v45; // [rsp+58h] [rbp-A8h]
  __int128 v46; // [rsp+68h] [rbp-98h]
  __int128 v47; // [rsp+78h] [rbp-88h]
  __int128 v48; // [rsp+88h] [rbp-78h]
  __int128 v49; // [rsp+98h] [rbp-68h]
  __int128 v50; // [rsp+A8h] [rbp-58h]
  __int128 v51; // [rsp+B8h] [rbp-48h]
  __int128 v52; // [rsp+D0h] [rbp-30h]
  __int128 v53; // [rsp+E0h] [rbp-20h]
  int v54; // [rsp+130h] [rbp+30h]
  int v55; // [rsp+134h] [rbp+34h]
  _BYTE v56[16]; // [rsp+150h] [rbp+50h] BYREF
  __int64 *v57; // [rsp+160h] [rbp+60h]
  __int64 v58; // [rsp+168h] [rbp+68h]
  int *v59; // [rsp+170h] [rbp+70h]
  __int64 v60; // [rsp+178h] [rbp+78h]
  __int64 *v61; // [rsp+180h] [rbp+80h]
  __int64 v62; // [rsp+188h] [rbp+88h]
  HANDLE Handles; // [rsp+190h] [rbp+90h] BYREF
  __int64 v64; // [rsp+198h] [rbp+98h]

  *(_BYTE *)(a1 + 248) = 1;
  v3 = CAudioPump::EventHandlerBufferComplete;
  v5 = 0;
  v6 = CAudioPump::EventHandlerPausePump;
  do
  {
    v7 = 1;
    v8 = *(void **)(a1 + 256);
    v9 = 1;
    *(_QWORD *)&v44 = CAudioPump::EventHandlerPausePump;
    DWORD2(v44) = 0;
    Handles = v8;
    v54 = 1;
    v52 = v44;
    if ( CAudioPump::InputPumpWorkRoutine == *(unsigned int (__fastcall **)(CAudioPump *))(a1 + 208) )
    {
      v30 = *(_BYTE *)(a1 + 4649);
      if ( v30 )
      {
        if ( v30 == 1 )
        {
          v6 = *(void (__fastcall **)(CAudioPump *__hidden, unsigned __int64 *))(a1 + 384);
          if ( v6 )
          {
            v32 = (*(__int64 (__fastcall **)(void (__fastcall *)(CAudioPump *__hidden, unsigned __int64 *), unsigned int (__fastcall *)(CAudioPump *), void (__fastcall *)(CAudioPump *, unsigned __int64 *), void (__fastcall *)(CAudioPump *, unsigned __int64 *)))(*(_QWORD *)v6 + 24LL))(
                    v6,
                    CAudioPump::InputPumpWorkRoutine,
                    CAudioPump::EventHandlerBufferComplete,
                    CAudioPump::EventHandlerTimer);
            *(_QWORD *)&v46 = CAudioPump::EventHandlerBufferRelease;
            v7 = 2;
            DWORD2(v46) = 0;
            v64 = v32;
            v9 = 5;
            v55 = 4;
            v53 = v46;
          }
        }
      }
      else
      {
        v31 = *(_QWORD *)(a1 + 288);
        if ( v31 )
        {
          *(_QWORD *)&v45 = CAudioPump::EventHandlerBufferComplete;
          v7 = 2;
          DWORD2(v45) = 0;
          v64 = v31;
          v9 = 3;
          v55 = 2;
          v53 = v45;
        }
      }
    }
    else
    {
      v10 = *(_QWORD *)(a1 + 264);
      if ( v10 )
      {
        *(_QWORD *)&v47 = CAudioPump::EventHandlerPausePump;
        v7 = 2;
        DWORD2(v47) = 0;
        v64 = v10;
        v9 = 33;
        v55 = 32;
        v53 = v47;
      }
      v11 = *(void **)(a1 + 392);
      if ( v11 )
      {
        v9 |= 0x10u;
        *(_QWORD *)&v48 = CAudioPump::EventHandlerPausePump;
        DWORD2(v48) = 0;
        v33 = v48;
        *(&Handles + v7) = v11;
        v34 = 2LL * v7;
        *(&v54 + v7++) = 16;
        *(__int128 *)((char *)&v52 + 8 * v34) = v33;
      }
      if ( !*(_BYTE *)(a1 + 4649) )
      {
        v12 = *(void **)(a1 + 288);
        if ( v12 )
        {
          v9 |= 2u;
          *(_QWORD *)&v49 = CAudioPump::EventHandlerBufferComplete;
          DWORD2(v49) = 0;
          v13 = v49;
          *(&Handles + v7) = v12;
          v14 = 2LL * v7;
          *(&v54 + v7++) = 2;
          *(__int128 *)((char *)&v52 + 8 * v14) = v13;
        }
      }
      v6 = *(void (__fastcall **)(CAudioPump *__hidden, unsigned __int64 *))(a1 + 384);
      if ( v6 )
      {
        v35 = (void *)(*(__int64 (__fastcall **)(void (__fastcall *)(CAudioPump *__hidden, unsigned __int64 *), unsigned int (__fastcall *)(CAudioPump *), void (__fastcall *)(CAudioPump *, unsigned __int64 *), void (__fastcall *)(CAudioPump *, unsigned __int64 *)))(*(_QWORD *)v6 + 24LL))(
                        v6,
                        CAudioPump::InputPumpWorkRoutine,
                        CAudioPump::EventHandlerBufferComplete,
                        CAudioPump::EventHandlerTimer);
        DWORD2(v50) = 0;
        v9 |= 4u;
        *(&Handles + v7) = v35;
        *(_QWORD *)&v50 = CAudioPump::EventHandlerBufferRelease;
        v36 = v50;
        v37 = 2LL * v7;
        *(&v54 + v7++) = 4;
        *(__int128 *)((char *)&v52 + 8 * v37) = v36;
      }
    }
    v15 = *(char **)(a1 + 272);
    if ( (unsigned __int64)(v15 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    {
      v6 = (void (__fastcall *)(CAudioPump *__hidden, unsigned __int64 *))v7;
      v9 |= 8u;
      v16 = 2LL * v7;
      *(_QWORD *)&v51 = CAudioPump::EventHandlerTimer;
      DWORD2(v51) = 0;
      ++v7;
      v17 = v51;
      *(&Handles + (_QWORD)v6) = v15;
      *(&v54 + (_QWORD)v6) = 8;
      *(__int128 *)((char *)&v52 + 8 * v16) = v17;
    }
    if ( (byte_1400C1841 & 8) != 0 )
    {
      v41 = v9;
      v57 = &v42;
      v42 = a1;
      v59 = &v41;
      v58 = 8LL;
      v60 = 4LL;
      McGenEventWrite_EtwEventWriteTransfer(
        (_DWORD)v6,
        (unsigned int)&AudioCore_Pump_YieldStart,
        (_DWORD)v3,
        3,
        (__int64)v56);
    }
    v18 = WaitForMultipleObjectsEx(v7, &Handles, 0, 0xFFFFFFFF, 0);
    v21 = v18;
    if ( v18 == -1 )
    {
      LastError = GetLastError();
      if ( (byte_1400C1841 & 8) != 0 )
        McTemplateU0pqq_EtwEventWriteTransfer(v40, v39, a1, -1, LastError);
    }
    else if ( v7 <= v18 )
    {
      if ( (byte_1400C1841 & 8) != 0 )
        McTemplateU0pqq_EtwEventWriteTransfer(v20, v19, a1, -2, v18);
    }
    else
    {
      QueryPerformanceCounter((LARGE_INTEGER *)(a1 + 4640));
      v23 = *(_QWORD *)(a1 + 4640);
      if ( v23 < 0 )
      {
        v29 = *(_QWORD *)(a1 + 4640) & 1LL | (*(_QWORD *)(a1 + 4640) >> 1);
        v24 = (double)(int)v29 + (double)(int)v29;
      }
      else
      {
        v24 = (double)(int)v23;
      }
      v25 = g_u64QPCFrequency;
      v26 = v24 * 10000000.0;
      if ( (g_u64QPCFrequency & 0x8000000000000000uLL) != 0LL )
      {
        v25 = g_u64QPCFrequency & 1;
        v27 = (double)(int)(v25 | (g_u64QPCFrequency >> 1)) + (double)(int)(v25 | (g_u64QPCFrequency >> 1));
      }
      else
      {
        v27 = (double)(int)g_u64QPCFrequency;
      }
      v5 = *(&v54 + v21);
      *(_QWORD *)(a1 + 4632) = (unsigned int)(int)(v26 / v27);
      if ( (byte_1400C1841 & 8) != 0 )
      {
        LODWORD(v42) = v5;
        v57 = &v43;
        v41 = 0;
        v59 = &v41;
        v43 = a1;
        v61 = &v42;
        v58 = 8LL;
        v60 = 4LL;
        v62 = 4LL;
        McGenEventWrite_EtwEventWriteTransfer(v25, (unsigned int)&AudioCore_Pump_YieldStop, v22, 4, (__int64)v56);
      }
      (*((void (__fastcall **)(__int64, __int64))&v52 + 2 * v21))(a1 + *((int *)&v52 + 4 * v21 + 2), a2);
    }
    v6 = CAudioPump::EventHandlerPausePump;
    v3 = CAudioPump::EventHandlerBufferComplete;
  }
  while ( *(_BYTE *)(a1 + 248) );
  return v5;
}
