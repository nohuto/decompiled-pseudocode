/*
 * XREFs of PopPlPublishInitialPowerDraw @ 0x1405A14A0
 * Callers:
 *     <none>
 * Callees:
 *     KxReleaseSpinLock @ 0x1402504E0 (KxReleaseSpinLock.c)
 *     _tlgWriteEx_EtwWriteEx @ 0x140367920 (_tlgWriteEx_EtwWriteEx.c)
 *     __security_check_cookie @ 0x1403D7680 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DF54 (KiRemoveSystemWorkPriorityKick.c)
 *     PopPlPublishSystemPowerChange @ 0x1405A1678 (PopPlPublishSystemPowerChange.c)
 */

void __fastcall PopPlPublishInitialPowerDraw(__int64 a1, int *a2)
{
  __int64 v2; // rbx
  unsigned __int64 v3; // rdi
  unsigned int i; // esi
  unsigned __int16 *v5; // rdx
  __int64 v6; // r8
  int v7; // ecx
  __int64 v8; // rax
  int v9; // ecx
  unsigned __int64 v10; // rdi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v14; // eax
  bool v15; // zf
  int v16; // [rsp+20h] [rbp-99h]
  int v17; // [rsp+28h] [rbp-91h]
  __int16 v18; // [rsp+40h] [rbp-79h] BYREF
  int v19; // [rsp+44h] [rbp-75h] BYREF
  int v20; // [rsp+48h] [rbp-71h] BYREF
  int v21; // [rsp+4Ch] [rbp-6Dh] BYREF
  int v22; // [rsp+50h] [rbp-69h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v23; // [rsp+60h] [rbp-59h] BYREF
  __int16 *v24; // [rsp+80h] [rbp-39h]
  int v25; // [rsp+88h] [rbp-31h]
  int v26; // [rsp+8Ch] [rbp-2Dh]
  _DWORD *v27; // [rsp+90h] [rbp-29h]
  int v28; // [rsp+98h] [rbp-21h]
  int v29; // [rsp+9Ch] [rbp-1Dh]
  __int64 v30; // [rsp+A0h] [rbp-19h]
  _DWORD v31[2]; // [rsp+A8h] [rbp-11h] BYREF
  int *v32; // [rsp+B0h] [rbp-9h]
  int v33; // [rsp+B8h] [rbp-1h]
  int v34; // [rsp+BCh] [rbp+3h]
  int *v35; // [rsp+C0h] [rbp+7h]
  int v36; // [rsp+C8h] [rbp+Fh]
  int v37; // [rsp+CCh] [rbp+13h]
  int *v38; // [rsp+D0h] [rbp+17h]
  int v39; // [rsp+D8h] [rbp+1Fh]
  int v40; // [rsp+DCh] [rbp+23h]
  int *v41; // [rsp+E0h] [rbp+27h]
  int v42; // [rsp+E8h] [rbp+2Fh]
  int v43; // [rsp+ECh] [rbp+33h]

  v2 = *((_QWORD *)a2 + 1);
  v3 = 0LL;
  for ( i = *a2; v3 < *(_QWORD *)(v2 + 48); ++v3 )
  {
    v5 = *(unsigned __int16 **)(*(_QWORD *)(v2 + 56) + 8 * v3);
    if ( !*((_QWORD *)v5 + 3) )
    {
      v6 = *((unsigned int *)v5 + 10);
      i += v6;
      *((_DWORD *)v5 + 8) = v6;
      if ( (unsigned int)dword_140C03950 > 5 )
      {
        v7 = *v5;
        v26 = 0;
        v29 = 0;
        v31[1] = 0;
        v19 = 0;
        v34 = 0;
        v37 = 0;
        v21 = 0;
        v40 = 0;
        v24 = &v18;
        v30 = *((_QWORD *)v5 + 1);
        v32 = &v19;
        v35 = &v20;
        v38 = &v21;
        v8 = *((_QWORD *)v5 + 2);
        v27 = v31;
        v31[0] = v7;
        v18 = 1;
        v25 = 2;
        v28 = 2;
        v33 = 4;
        v20 = v6;
        v36 = 4;
        v39 = 4;
        v9 = *(_DWORD *)(v8 + 28);
        v43 = 0;
        v41 = &v22;
        v22 = v9;
        v42 = 4;
        tlgWriteEx_EtwWriteEx(
          (__int64)&dword_140C03950,
          (unsigned __int8 *)&dword_14003224C,
          v6,
          1u,
          v16,
          v17,
          9u,
          &v23);
      }
    }
  }
  PopPlPublishSystemPowerChange(v2, i);
  v10 = *(unsigned __int8 *)(v2 + 24);
  KxReleaseSpinLock((volatile signed __int64 *)(v2 + 16));
  if ( (_DWORD)KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( ((unsigned __int8)KiIrqlFlags & 1) != 0
      && CurrentIrql <= 0xFu
      && (unsigned __int8)v10 <= 0xFu
      && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v14 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v10 + 1));
      v15 = (v14 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v14;
      if ( v15 )
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
  }
  __writecr8(v10);
}
