/*
 * XREFs of sub_14026446C @ 0x14026446C
 * Callers:
 *     sub_140265D40 @ 0x140265D40 (sub_140265D40.c)
 *     sub_1405C0D40 @ 0x1405C0D40 (sub_1405C0D40.c)
 *     sub_140982F64 @ 0x140982F64 (sub_140982F64.c)
 * Callees:
 *     sub_140217454 @ 0x140217454 (sub_140217454.c)
 *     StartRoutine @ 0x14026C240 (StartRoutine.c)
 *     KeSetPriorityThread @ 0x140344340 (KeSetPriorityThread.c)
 *     PsCreateSystemThread @ 0x1406F0310 (PsCreateSystemThread.c)
 *     ObCloseHandle @ 0x14074F6A0 (ObCloseHandle.c)
 */

void __fastcall sub_14026446C(char *StartContext)
{
  _DWORD *v1; // r8
  struct _KTHREAD *CurrentThread; // r15
  int v4; // r10d
  unsigned __int64 v5; // r9
  __int64 v6; // rax
  _QWORD *v7; // rax
  int v8; // ebp
  __int128 v9; // xmm1
  unsigned int v10; // esi
  unsigned int v11; // ecx
  unsigned int v12; // edi
  unsigned __int64 v13; // r11
  _DWORD *v14; // rdx
  __int64 v15; // r9
  unsigned __int8 v16; // r10
  unsigned __int64 v17; // rax
  unsigned int v18; // esi
  unsigned int v19; // eax
  KPRIORITY v20; // ebp
  int v21; // edi
  __int128 v22; // [rsp+40h] [rbp-48h]
  __int128 v23; // [rsp+50h] [rbp-38h]
  HANDLE ThreadHandle; // [rsp+98h] [rbp+10h] BYREF

  ThreadHandle = 0LL;
  v1 = StartContext + 88;
  CurrentThread = KeGetCurrentThread();
  v4 = *((_DWORD *)StartContext + 2);
  v5 = 512LL;
  v6 = *(_QWORD *)(120LL * *((unsigned int *)StartContext + 6) + qword_140C506E0 + 112);
  if ( *(_DWORD *)(v6 + 68) )
  {
    v7 = *(_QWORD **)(v6 + 40);
    if ( v7 )
    {
      if ( *v7 )
        v5 = 0x271000uLL / *v7;
    }
  }
  v8 = *((_DWORD *)StartContext + 2);
  v9 = *((_OWORD *)StartContext + 2);
  v10 = dword_140C50728;
  if ( *((_QWORD *)StartContext + 2) <= v5 )
    v8 = 1;
  v11 = 0;
  v12 = 0;
  v23 = *((_OWORD *)StartContext + 2);
  if ( v4 )
  {
    v13 = *((_QWORD *)StartContext + 4);
    v14 = v1 + 2;
    do
    {
      if ( *((_DWORD **)v14 + 3) == v14 + 6 )
      {
        *v1 = 1;
      }
      else
      {
        *v1 = 0;
        ++v11;
        if ( v13 )
        {
          v15 = 0LL;
          *((_QWORD *)&v22 + 1) = *((_QWORD *)&v9 + 1);
          v16 = 0;
          *(_QWORD *)&v22 = 0LL;
          if ( v10 )
          {
            do
            {
              _BitScanForward64(&v17, v13);
              v15 |= 1LL << v17;
              v13 &= ~v15;
              if ( !v13 )
                break;
              ++v16;
            }
            while ( v16 < v10 );
            *((_QWORD *)&v9 + 1) = *((_QWORD *)&v23 + 1);
            *(_QWORD *)&v22 = v15;
          }
          *(_OWORD *)v14 = v22;
        }
        else
        {
          *(_QWORD *)v14 = 0LL;
        }
      }
      ++v12;
      v1 += 12;
      v14 += 12;
    }
    while ( v12 < *((_DWORD *)StartContext + 2) );
  }
  v18 = v11;
  if ( v8 == 1
    || v11 == 1
    || (*(_DWORD *)StartContext & 4) != 0
    || (*((_DWORD *)CurrentThread + 29) & 0x400) != 0
    || KeGetCurrentIrql() == 2
    || (KeGetPcr()[36].Unused0[2] & 0x10001) != 0
    || (dword_140D06880 & 0x30) == 0 )
  {
    v18 = 1;
    v19 = 1;
  }
  else
  {
    v19 = v11;
  }
  _InterlockedExchangeAdd((volatile signed __int32 *)StartContext + 14, v19);
  *((_DWORD *)StartContext + 17) = 0;
  *((_DWORD *)StartContext + 13) = v11;
  *((_WORD *)StartContext + 32) = 263;
  StartContext[66] = 6;
  *((_QWORD *)StartContext + 10) = StartContext + 72;
  *((_QWORD *)StartContext + 9) = StartContext + 72;
  if ( v18 == 1 )
    v20 = -1;
  else
    v20 = KeSetPriorityThread(CurrentThread, 15);
  *((_DWORD *)StartContext + 12) = v20;
  v21 = 1;
  if ( v18 > 1 )
  {
    while ( PsCreateSystemThread(&ThreadHandle, 0x1FFFFFu, 0LL, 0LL, 0LL, StartRoutine, StartContext) >= 0 )
    {
      ObCloseHandle(ThreadHandle, 0);
      if ( ++v21 >= v18 )
        goto LABEL_22;
    }
    _InterlockedExchangeAdd((volatile signed __int32 *)StartContext + 14, v21 - v18);
  }
LABEL_22:
  if ( v20 != -1 )
    KeSetPriorityThread(CurrentThread, v20);
  StartRoutine(StartContext);
  if ( v18 != 1 )
    sub_140217454((__int64)(StartContext + 64), 0);
}
