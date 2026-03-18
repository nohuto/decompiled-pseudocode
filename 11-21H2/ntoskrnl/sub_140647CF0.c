/*
 * XREFs of sub_140647CF0 @ 0x140647CF0
 * Callers:
 *     <none>
 * Callees:
 *     KeExitRetpoline @ 0x14024B6F8 (KeExitRetpoline.c)
 *     KeResetEvent @ 0x1402A40D0 (KeResetEvent.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     KeDelayExecutionThread @ 0x1402B90A0 (KeDelayExecutionThread.c)
 *     ExGenRandom @ 0x140363220 (ExGenRandom.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     PsQueryThreadTerminationPort @ 0x140657370 (PsQueryThreadTerminationPort.c)
 *     KeRundownApcQueues @ 0x14079FBD4 (KeRundownApcQueues.c)
 */

void __fastcall __noreturn sub_140647CF0(__int64 a1, __int64 a2, __int64 a3)
{
  struct _KTHREAD *CurrentThread; // rax
  struct _KEVENT *p_Object; // r12
  __int64 v6; // rdi
  __int64 v7; // rbx
  unsigned int v8; // eax
  __int64 v9; // rsi
  __int64 v10; // r14
  __int64 v11; // rbx
  unsigned __int8 CurrentIrql; // r15
  _DWORD *SchedulerAssist; // r8
  _BYTE *v14; // rdx
  __int64 v15; // rdi
  unsigned __int64 v16; // r10
  _QWORD *v17; // r9
  char *v18; // rcx
  char v19; // al
  __int64 v20; // r13
  unsigned int v21; // ebx
  unsigned int v22; // r14d
  unsigned int v23; // r11d
  char v24; // di
  char v25; // r8
  __int64 v26; // rdi
  __int64 v27; // rdx
  __int64 v28; // rdx
  unsigned __int8 v29; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v31; // r8
  int v32; // eax
  __int64 v33; // rdi
  bool v34; // zf
  __int64 v35; // rdi
  __int64 v36; // rbx
  __int64 v37; // rbx
  __int64 v38; // [rsp+30h] [rbp-39h]
  __int64 *ThreadTerminationPort; // [rsp+38h] [rbp-31h]
  _QWORD v40[2]; // [rsp+40h] [rbp-29h] BYREF
  _DWORD v41[4]; // [rsp+50h] [rbp-19h] BYREF
  __int16 Object; // [rsp+60h] [rbp-9h] BYREF
  char v43; // [rsp+62h] [rbp-7h]
  int v44; // [rsp+64h] [rbp-5h]
  _QWORD v45[11]; // [rsp+68h] [rbp-1h] BYREF
  __int64 v46; // [rsp+D0h] [rbp+67h]
  LARGE_INTEGER Interval; // [rsp+E0h] [rbp+77h] BYREF
  __int64 v48; // [rsp+E8h] [rbp+7Fh]

  KeExitRetpoline(a1, a2, a3);
  ThreadTerminationPort = (__int64 *)PsQueryThreadTerminationPort();
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
    v45[1] = v45;
    p_Object = (struct _KEVENT *)&Object;
    v43 = 6;
    v45[0] = v45;
    v44 = 0;
  }
  v6 = *(_QWORD *)(a1 + 16);
  *(_QWORD *)(a1 + 16) = 0LL;
  v7 = *(_QWORD *)(v6 + 32);
  v8 = ExGenRandom(1);
  v9 = v8 ^ 0x6A15A217BC2A27DBLL;
  *ThreadTerminationPort = 0LL;
  v38 = v9;
  v10 = v6 ^ v9;
  v11 = v7 ^ v9;
  v48 = ((unsigned __int8)v8 ^ 0xDB) & 1;
  while ( 1 )
  {
    if ( (v11 ^ v9) >> 47 == -1 || (v11 ^ v9) >> 47 == 0 )
    {
      (*(void (__fastcall **)(__int64, __int64, _QWORD, _QWORD))((v10 ^ v9) + 0x18))(
        v10 ^ v9,
        v11 ^ v9,
        *(_QWORD *)((v10 ^ v9) + 0x28),
        *(_QWORD *)((v10 ^ v9) + 0x30));
      v11 = v9 ^ *(_QWORD *)((v10 ^ v9) + 0x20);
    }
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
    }
    v41[0] = 34539786;
    v41[1] = 218497804;
    v41[2] = 235143175;
    v41[3] = 134284555;
    v14 = v41;
    v15 = 16LL;
    v16 = v11 ^ v9 ^ *(_QWORD *)((v10 ^ v9) + 0x40) | 0xFFFF800000000000uLL;
    v17 = (_QWORD *)v16;
    v18 = (char *)v41;
    v46 = __ROR8__(v16, (v11 ^ v9 ^ *(_BYTE *)((v10 ^ v9) + 0x40)) & 0x3F);
    do
    {
      v19 = *v18++;
      *v14++ = v19 ^ 0xA;
      --v15;
    }
    while ( v15 );
    v20 = v46;
    v21 = 25;
    v22 = 16;
    v23 = 0;
    do
    {
      v24 = (*v17 ^ 9) & 0x3F;
      v25 = ~(unsigned __int8)*v17 & 0x3F;
      *v17 = v16 + (KiWaitAlways ^ _byteswap_uint64(v20 ^ __ROL8__(KiWaitNever ^ *v17, KiWaitNever))) + v23;
      v20 = (v16 + __ROL8__(__ROR8__(v23 ^ (unsigned __int64)(200 - v23), v25) ^ v20, v24)) ^ 0x58C06968;
      v26 = v22;
      do
      {
        v27 = __ROL8__(*v17, 4);
        *v17 = *((unsigned __int8 *)v41 + (v27 & 0xF)) | v27 & 0xFFFFFFFFFFFFFFF0uLL;
        --v26;
      }
      while ( v26 );
      ++v17;
      if ( ++v23 == 25 )
      {
        if ( *(_QWORD *)v16 != 0x85131481131482ELL )
        {
          *(v17 - 1) ^= *(_QWORD *)v16 ^ 0x85131481131482ELL;
          v21 += *((_DWORD *)v17 - 1);
          *(v17 - 1) ^= *(_QWORD *)v16 ^ 0x85131481131482ELL;
        }
        v22 = 1;
      }
    }
    while ( v23 < v21 );
    v9 = v38;
    v28 = *(_QWORD *)v16 ^ 0x85131481131482ELL;
    *(_BYTE *)(v16 + 3) = 17;
    *(_BYTE *)(v16 + 2) = 49;
    *(_BYTE *)(v16 + 1) = 72;
    *(_BYTE *)v16 = 46;
    ((void (__fastcall *)(unsigned __int64, __int64, _QWORD, _QWORD))v16)(v16, v28, 0LL, 0LL);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v29 = KeGetCurrentIrql();
        if ( v29 <= 0xFu && CurrentIrql <= 0xFu && v29 >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v31 = CurrentPrcb->SchedulerAssist;
          v32 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v34 = (v32 & v31[5]) == 0;
          v31[5] &= v32;
          if ( v34 )
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
      }
    }
    __writecr8(CurrentIrql);
    v33 = *ThreadTerminationPort;
    v34 = *ThreadTerminationPort == 0;
    if ( *ThreadTerminationPort > 0 )
    {
      v35 = -v33;
      *ThreadTerminationPort = 0LL;
      v40[0] = v35;
      (*(void (__fastcall **)(_QWORD))(v35 + 16))(*(_QWORD *)(v35 + 24));
      memset((void *)v35, 0, 0x20uLL);
      memset(v40, 0, 8uLL);
      v33 = *ThreadTerminationPort;
      v34 = *ThreadTerminationPort == 0;
    }
    if ( v34 )
    {
      v36 = v48;
      do
      {
        if ( v36 )
          KeDelayExecutionThread(0, 0, &Interval);
        else
          KeWaitForSingleObject(p_Object, Executive, 0, 0, &Interval);
        v33 = *ThreadTerminationPort;
      }
      while ( !*ThreadTerminationPort );
    }
    v37 = *(_QWORD *)(v33 + 32);
    v10 = v38 ^ v33;
    *ThreadTerminationPort = 0LL;
    v11 = v38 ^ v37;
    if ( v48 )
      KeDelayExecutionThread(0, 0, &Interval);
    else
      KeWaitForSingleObject(p_Object, Executive, 0, 0, &Interval);
  }
}
