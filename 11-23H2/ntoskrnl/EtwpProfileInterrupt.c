/*
 * XREFs of EtwpProfileInterrupt @ 0x1405FE5A0
 * Callers:
 *     <none>
 * Callees:
 *     EtwTraceSiloKernelEvent @ 0x140214950 (EtwTraceSiloKernelEvent.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 */

__int64 __fastcall EtwpProfileInterrupt(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // r9
  unsigned __int64 v2; // rdx
  int v3; // ecx
  unsigned int CurrentRunTime; // eax
  _KPROCESS *Process; // r11
  char v6; // r8
  struct _KPRCB *CurrentPrcb; // r10
  unsigned __int8 NestingLevel; // al
  char v9; // r8
  _KSCHEDULING_GROUP *volatile SchedulingGroup; // rdx
  char *v11; // rax
  unsigned __int64 v13; // [rsp+30h] [rbp-30h] BYREF
  unsigned int v14; // [rsp+38h] [rbp-28h]
  __int16 v15; // [rsp+3Ch] [rbp-24h]
  char v16; // [rsp+3Eh] [rbp-22h]
  char v17; // [rsp+3Fh] [rbp-21h]
  unsigned __int64 *v18; // [rsp+40h] [rbp-20h] BYREF
  int v19; // [rsp+48h] [rbp-18h]
  int v20; // [rsp+4Ch] [rbp-14h]

  CurrentThread = KeGetCurrentThread();
  v2 = *(_QWORD *)(a1 + 360);
  v3 = 34656770;
  CurrentRunTime = CurrentThread[1].CurrentRunTime;
  if ( v2 > 0x7FFFFFFEFFFFLL )
    v3 = 34658818;
  Process = CurrentThread->Process;
  v16 = 0;
  v14 = CurrentRunTime;
  v6 = 8 * CurrentThread->Priority;
  v16 = v6;
  v13 = v2;
  v15 = 1;
  CurrentPrcb = KeGetCurrentPrcb();
  NestingLevel = CurrentPrcb->NestingLevel;
  if ( NestingLevel != 2 )
  {
    if ( NestingLevel <= 1u )
      goto LABEL_9;
    goto LABEL_7;
  }
  if ( (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) == 0 )
  {
LABEL_7:
    v9 = v6 | 2;
    goto LABEL_8;
  }
  v9 = v6 | 1;
LABEL_8:
  v3 &= ~0x4000u;
  v16 = v9;
LABEL_9:
  SchedulingGroup = CurrentThread->SchedulingGroup;
  if ( SchedulingGroup )
  {
    v11 = (char *)SchedulingGroup + CurrentPrcb->ScbOffset;
    while ( *((_DWORD *)v11 + 29) <= 0xFFu )
    {
      LOBYTE(SchedulingGroup) = v11[116];
      if ( !(_BYTE)SchedulingGroup )
      {
        v11 = (char *)*((_QWORD *)v11 + 51);
        if ( v11 )
          continue;
      }
      goto LABEL_16;
    }
    LOBYTE(SchedulingGroup) = -1;
  }
LABEL_16:
  v20 = 0;
  v18 = &v13;
  v17 = (char)SchedulingGroup;
  v19 = 16;
  return EtwTraceSiloKernelEvent(*(_QWORD *)&Process[2].Header.Lock, (int)&v18, 1, 0x20000002u, 3886, v3);
}
