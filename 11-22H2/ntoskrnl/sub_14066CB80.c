/*
 * XREFs of sub_14066CB80 @ 0x14066CB80
 * Callers:
 *     <none>
 * Callees:
 *     KeWaitForSingleObject @ 0x140243CC0 (KeWaitForSingleObject.c)
 *     KeDelayExecutionThread @ 0x1402467F0 (KeDelayExecutionThread.c)
 *     KeResetEvent @ 0x1402AFB70 (KeResetEvent.c)
 *     ExGenRandom @ 0x1403173F0 (ExGenRandom.c)
 *     KeExitRetpoline @ 0x14034BADC (KeExitRetpoline.c)
 *     _guard_dispatch_icall @ 0x140429560 (_guard_dispatch_icall.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DF54 (KiRemoveSystemWorkPriorityKick.c)
 *     PsQueryThreadTerminationPort @ 0x14067E368 (PsQueryThreadTerminationPort.c)
 *     KeRundownApcQueues @ 0x14076E950 (KeRundownApcQueues.c)
 */

void __fastcall __noreturn sub_14066CB80(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v4; // r15
  struct _KTHREAD *CurrentThread; // rax
  struct _KEVENT *p_Object; // r12
  __int64 v7; // rdi
  __int64 v8; // rbx
  unsigned int v9; // eax
  __int64 v10; // rsi
  __int64 v11; // r14
  __int64 v12; // rdi
  unsigned __int8 CurrentIrql; // bl
  _DWORD *SchedulerAssist; // r9
  __int64 v15; // rdx
  unsigned int v16; // r11d
  unsigned __int64 v17; // r10
  __int64 v18; // r14
  unsigned int v19; // r13d
  unsigned __int64 v20; // r9
  __int64 v21; // r8
  __int64 *v22; // r15
  __int64 v23; // rdx
  unsigned __int8 v24; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v26; // r8
  int v27; // eax
  bool v28; // zf
  __int64 v29; // rdi
  __int64 v30; // rdi
  __int64 v31; // rax
  __int64 v32; // [rsp+30h] [rbp-38h]
  _QWORD v33[2]; // [rsp+38h] [rbp-30h] BYREF
  __int16 Object; // [rsp+48h] [rbp-20h] BYREF
  char v35; // [rsp+4Ah] [rbp-1Eh]
  int v36; // [rsp+4Ch] [rbp-1Ch]
  _QWORD v37[3]; // [rsp+50h] [rbp-18h] BYREF
  LARGE_INTEGER Interval; // [rsp+C0h] [rbp+58h] BYREF
  __int64 ThreadTerminationPort; // [rsp+C8h] [rbp+60h]

  KeExitRetpoline(a1, a2, a3);
  ThreadTerminationPort = PsQueryThreadTerminationPort();
  v4 = (_QWORD *)ThreadTerminationPort;
  Interval.QuadPart = -1200000000LL - (unsigned int)ExGenRandom(1) % 0x5F5E100uLL;
  if ( *(_QWORD *)(a1 + 8) == 1LL )
    KeRundownApcQueues(KeGetCurrentThread());
  if ( (unsigned int)ExGenRandom(1) % 0xA < 3 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->SpecialApcDisable;
  }
  p_Object = *(struct _KEVENT **)a1;
  KeWaitForSingleObject(*(PVOID *)a1, Executive, 0, 0, 0LL);
  if ( (unsigned int)ExGenRandom(1) % 0xA >= 5 )
  {
    KeResetEvent(p_Object);
  }
  else
  {
    Object = 0;
    v37[1] = v37;
    p_Object = (struct _KEVENT *)&Object;
    v35 = 6;
    v37[0] = v37;
    v36 = 0;
  }
  v7 = *(_QWORD *)(a1 + 16);
  *(_QWORD *)(a1 + 16) = 0LL;
  v8 = *(_QWORD *)(v7 + 32);
  v9 = ExGenRandom(1);
  v10 = v9 ^ 0x6A15A217BC2A27DBLL;
  *v4 = 0LL;
  v11 = v7 ^ v10;
  v32 = ((unsigned __int8)v9 ^ 0xDB) & 1;
  v12 = v8 ^ v10;
  while ( 1 )
  {
    if ( (v12 ^ v10) >> 47 == -1 || (v12 ^ v10) >> 47 == 0 )
    {
      (*(void (__fastcall **)(__int64, __int64, _QWORD, _QWORD))((v11 ^ v10) + 0x18))(
        v11 ^ v10,
        v12 ^ v10,
        *(_QWORD *)((v11 ^ v10) + 0x28),
        *(_QWORD *)((v11 ^ v10) + 0x30));
      v12 = *(_QWORD *)((v11 ^ v10) + 0x20) ^ v10;
    }
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( (_DWORD)KiIrqlFlags && ((unsigned __int8)KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      if ( CurrentIrql == 2 )
        LODWORD(v15) = 4;
      else
        v15 = (-1LL << (CurrentIrql + 1)) & 4;
      SchedulerAssist[5] |= v15;
    }
    v16 = 25;
    v17 = v12 ^ *(_QWORD *)((v11 ^ v10) + 0x40) ^ v10 | 0xFFFF800000000000uLL;
    v18 = __ROR8__(v17, (v12 ^ *(_BYTE *)((v11 ^ v10) + 0x40) ^ v10) & 0x3F);
    v19 = 0;
    v20 = v17 - 8;
    do
    {
      v21 = *(_QWORD *)(v20 + 8);
      v20 += 8LL;
      *(_QWORD *)v20 = v17 + (KiWaitAlways ^ _byteswap_uint64(v18 ^ __ROL8__(KiWaitNever ^ v21, KiWaitNever))) + v19;
      v18 = (v17 + __ROL8__(
                     __ROR8__(v19 ^ (unsigned __int64)(200 - v19), ~(_BYTE)v21 & 0x3F) ^ v18,
                     (v21 ^ 0xE9) & 0x3F)) ^ 0xB0C06A48;
      if ( ++v19 == 25 && *(_QWORD *)v17 != 0x85131481131482ELL )
      {
        *(_QWORD *)v20 ^= *(_QWORD *)v17 ^ 0x85131481131482ELL;
        v16 += *(_DWORD *)(v20 + 4);
        *(_QWORD *)v20 ^= *(_QWORD *)v17 ^ 0x85131481131482ELL;
      }
    }
    while ( v19 < v16 );
    v22 = (__int64 *)ThreadTerminationPort;
    v23 = *(_QWORD *)v17 ^ 0x85131481131482ELL;
    *(_BYTE *)(v17 + 3) = 17;
    *(_BYTE *)(v17 + 2) = 49;
    *(_BYTE *)(v17 + 1) = 72;
    *(_BYTE *)v17 = 46;
    ((void (__fastcall *)(unsigned __int64, __int64, _QWORD, _QWORD))v17)(v17, v23, 0LL, 0LL);
    if ( (_DWORD)KiIrqlFlags )
    {
      v24 = KeGetCurrentIrql();
      if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v24 <= 0xFu && CurrentIrql <= 0xFu && v24 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v26 = CurrentPrcb->SchedulerAssist;
        v27 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v28 = (v27 & v26[5]) == 0;
        v26[5] &= v27;
        if ( v28 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
    __writecr8(CurrentIrql);
    v29 = *v22;
    if ( *v22 > 0 )
    {
      *v22 = 0LL;
      v30 = -v29;
      v33[0] = v30;
      (*(void (__fastcall **)(_QWORD))(v30 + 16))(*(_QWORD *)(v30 + 24));
      memset((void *)v30, 0, 0x20uLL);
      memset(v33, 0, 8uLL);
    }
    while ( 1 )
    {
      v31 = *v22;
      if ( *v22 )
        break;
      if ( v32 )
        KeDelayExecutionThread(0, 0, &Interval);
      else
        KeWaitForSingleObject(p_Object, Executive, 0, 0, &Interval);
    }
    v12 = *(_QWORD *)(v31 + 32) ^ v10;
    v11 = v10 ^ v31;
    *v22 = 0LL;
    if ( v32 )
      KeDelayExecutionThread(0, 0, &Interval);
    else
      KeWaitForSingleObject(p_Object, Executive, 0, 0, &Interval);
  }
}
