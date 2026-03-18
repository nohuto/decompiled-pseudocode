/*
 * XREFs of KiIpiProcessRequests @ 0x140222E70
 * Callers:
 *     KiIpiInterruptSubDispatch @ 0x140428980 (KiIpiInterruptSubDispatch.c)
 * Callees:
 *     EtwGetKernelTraceTimestamp @ 0x140223A20 (EtwGetKernelTraceTimestamp.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     KiSetUserTbFlushPending @ 0x140420AD0 (KiSetUserTbFlushPending.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     PerfInfoLogIpiReceive @ 0x1406301D0 (PerfInfoLogIpiReceive.c)
 */

char __fastcall KiIpiProcessRequests(__int64 a1, __int64 a2, __int64 a3)
{
  struct _KPRCB *CurrentPrcb; // rsi
  char result; // al
  char *v5; // rdi
  __int64 v6; // rax
  char *v7; // rbp
  __int64 v8; // r9
  __int64 v9; // r10
  __int64 v10; // rdx
  unsigned int v11; // r13d
  __int64 v12; // rdx
  void **v13; // r12
  int v14; // r14d
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // rbx
  __int64 v17; // r15
  unsigned __int64 v18; // rbp
  volatile signed __int32 *SchedulerAssist; // rcx
  _KPROCESS *Process; // rcx
  _KPROCESS *v22; // rcx
  unsigned __int64 v24; // rax
  unsigned __int64 v25; // rax
  _KPROCESS *v26; // rcx
  __int64 v27; // rdx
  void *v28; // rbx
  _KPROCESS *v29; // rcx
  unsigned __int64 v31; // rcx
  unsigned __int8 v32; // [rsp+30h] [rbp-A8h]
  __int64 v33; // [rsp+38h] [rbp-A0h]
  unsigned __int64 v34; // [rsp+48h] [rbp-90h]
  char *v35; // [rsp+50h] [rbp-88h]
  __int128 v36; // [rsp+58h] [rbp-80h]
  __int128 v37; // [rsp+68h] [rbp-70h]
  __int128 v38; // [rsp+78h] [rbp-60h]
  _OWORD v39[2]; // [rsp+88h] [rbp-50h] BYREF

  CurrentPrcb = KeGetCurrentPrcb();
  result = 0;
  _m_prefetchw(&CurrentPrcb->Mailbox);
  if ( CurrentPrcb->Mailbox )
  {
    v5 = (char *)_InterlockedExchange64((volatile __int64 *)&CurrentPrcb->Mailbox, 0LL);
    if ( v5 )
    {
      while ( 1 )
      {
        v35 = v5;
        v6 = (v5 - (char *)CurrentPrcb - 48832) >> 6;
        v7 = v5;
        v8 = 0LL;
        v5 = *(char **)v5;
        memset(v39, 0, sizeof(v39));
        v9 = KiProcessorBlock[(unsigned int)v6];
        v33 = v9;
        if ( (DWORD2(PerfGlobalGroupMask) & 0x400000) != 0 )
        {
          v32 = 1;
          EtwGetKernelTraceTimestamp(v39, 1077936128LL, a3, 0LL);
          v9 = v33;
          LOBYTE(a3) = 1;
          v8 = 0LL;
        }
        else
        {
          LOBYTE(a3) = 0;
          v32 = 0;
        }
        v10 = *((_QWORD *)v7 + 1);
        v11 = v10 & 0xF;
        if ( v11 == 4 )
        {
          v12 = v10 >> 7;
          v13 = *(void ***)v12;
          v14 = (1 << *(_DWORD *)(v12 + 12)) & 0xA;
          v15 = *(_QWORD *)v12 + 8LL * *(unsigned int *)(v12 + 8);
          v34 = v15;
          do
          {
            v16 = (unsigned __int64)*v13;
            if ( v14 )
            {
              if ( KiFlushPcid )
              {
                Process = KeGetCurrentThread()->ApcState.Process;
                if ( !Process->AddressPolicy )
                {
                  if ( (KiFlushPcid & 2) != 0 )
                  {
                    *(_QWORD *)&v37 = 1LL;
                    *((_QWORD *)&v37 + 1) = *v13;
                    _EAX = 0;
                    __asm { invpcid eax, [rsp+0D8h+var_70] }
                  }
                  else
                  {
                    KiSetUserTbFlushPending(Process, v15, a3, v8);
                    v15 = v34;
                  }
                }
              }
            }
            __invlpg((void *)v16);
            v17 = 4096LL << (9 * ((unsigned __int8)(v16 >> 10) & 3u));
            v18 = v16 & 0x3FF;
            if ( (v16 & 0x3FF) != 0 )
            {
              do
              {
                v16 += v17;
                if ( v14 )
                {
                  if ( KiFlushPcid )
                  {
                    v22 = KeGetCurrentThread()->ApcState.Process;
                    if ( !v22->AddressPolicy )
                    {
                      if ( (KiFlushPcid & 2) != 0 )
                      {
                        *(_QWORD *)&v38 = 1LL;
                        *((_QWORD *)&v38 + 1) = v16;
                        _EAX = 0;
                        __asm { invpcid eax, [rsp+0D8h+var_60] }
                      }
                      else
                      {
                        KiSetUserTbFlushPending(v22, v15, a3, v8);
                      }
                    }
                  }
                }
                __invlpg((void *)v16);
                --v18;
              }
              while ( v18 );
              v15 = v34;
            }
            ++v13;
          }
          while ( (unsigned __int64)v13 < v15 );
          v9 = v33;
          v7 = v35;
          a3 = v32;
        }
        else
        {
          switch ( v10 & 0xF )
          {
            case 1LL:
              goto LABEL_33;
            case 2LL:
              v27 = v10 >> 7;
              v28 = *(void **)v27;
              if ( ((1 << *(_DWORD *)(v27 + 8)) & 0xA) == 0 )
                goto LABEL_38;
              if ( !KiFlushPcid )
                goto LABEL_38;
              v29 = KeGetCurrentThread()->ApcState.Process;
              if ( v29->AddressPolicy )
                goto LABEL_38;
              if ( (KiFlushPcid & 2) != 0 )
              {
                *(_QWORD *)&v36 = 1LL;
                *((_QWORD *)&v36 + 1) = *(_QWORD *)v27;
                _EAX = 0;
                __asm { invpcid eax, [rsp+0D8h+var_80] }
                __invlpg(v28);
              }
              else
              {
                KiSetUserTbFlushPending(v29, v27, a3, 0LL);
                v9 = v33;
                a3 = v32;
LABEL_38:
                __invlpg(v28);
              }
              break;
            case 3LL:
              if ( KiFlushPcid )
              {
                v25 = __readcr3();
                __writecr3(v25);
                v26 = KeGetCurrentThread()->ApcState.Process;
                if ( !v26->AddressPolicy )
                {
                  KiSetUserTbFlushPending(v26, v10, a3, 0LL);
                  v9 = v33;
                  a3 = v32;
                }
              }
              else
              {
                v31 = __readcr4();
                if ( (v31 & 0x20080) != 0 )
                {
                  __writecr4(v31 ^ 0x80);
                  __writecr4(v31);
                }
                else
                {
LABEL_33:
                  v24 = __readcr3();
                  __writecr3(v24);
                }
              }
              break;
            default:
              __fastfail(0x25u);
          }
        }
        if ( _InterlockedExchangeAdd(*((volatile signed __int32 **)v7 + 6), 0xFFFFFFFF) == 1
          && _InterlockedExchangeAdd((volatile signed __int32 *)(v9 + 11652), 0xFFFFFFFF) == 1 )
        {
          *(_DWORD *)(v9 + 11648) = 0;
        }
        if ( (_BYTE)a3 )
          PerfInfoLogIpiReceive(v39, v11, 0LL);
        SchedulerAssist = (volatile signed __int32 *)CurrentPrcb->SchedulerAssist;
        result = 1;
        if ( SchedulerAssist )
          _InterlockedDecrement(SchedulerAssist + 8);
        if ( !v5 )
        {
          v5 = (char *)_InterlockedExchange64((volatile __int64 *)&CurrentPrcb->Mailbox, 0LL);
          if ( !v5 )
            break;
        }
      }
    }
  }
  return result;
}
