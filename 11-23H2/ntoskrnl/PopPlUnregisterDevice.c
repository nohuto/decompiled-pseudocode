/*
 * XREFs of PopPlUnregisterDevice @ 0x1405A2320
 * Callers:
 *     PopFxUnregisterDevice @ 0x140985FC4 (PopFxUnregisterDevice.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x1402505D0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140250F40 (KeAcquireSpinLockRaiseToDpc.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1402F6DB4 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 *     PopPlCalculateDevicePowerDraw @ 0x1405A1694 (PopPlCalculateDevicePowerDraw.c)
 *     PopPlPublishSystemPowerChange @ 0x1405A1AD8 (PopPlPublishSystemPowerChange.c)
 *     PopPlUnregisterComponent @ 0x1405A2274 (PopPlUnregisterComponent.c)
 */

void __fastcall PopPlUnregisterDevice(__int64 a1)
{
  __int64 v1; // rsi
  __int64 v3; // r14
  int v4; // ebx
  int v5; // eax
  __int64 v6; // r8
  int v7; // r15d
  int v8; // edx
  int v9; // ecx
  __int64 v10; // rax
  int v11; // ecx
  unsigned __int64 i; // rbx
  unsigned __int64 v13; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v17; // eax
  bool v18; // zf
  __int16 v19; // [rsp+30h] [rbp-89h] BYREF
  unsigned int v20; // [rsp+34h] [rbp-85h] BYREF
  int v21; // [rsp+38h] [rbp-81h] BYREF
  int v22; // [rsp+3Ch] [rbp-7Dh] BYREF
  int v23; // [rsp+40h] [rbp-79h] BYREF
  int v24; // [rsp+44h] [rbp-75h] BYREF
  int v25; // [rsp+48h] [rbp-71h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v26; // [rsp+50h] [rbp-69h] BYREF
  __int16 *v27; // [rsp+70h] [rbp-49h]
  int v28; // [rsp+78h] [rbp-41h]
  int v29; // [rsp+7Ch] [rbp-3Dh]
  _DWORD *v30; // [rsp+80h] [rbp-39h]
  int v31; // [rsp+88h] [rbp-31h]
  int v32; // [rsp+8Ch] [rbp-2Dh]
  __int64 v33; // [rsp+90h] [rbp-29h]
  _DWORD v34[2]; // [rsp+98h] [rbp-21h] BYREF
  int *v35; // [rsp+A0h] [rbp-19h]
  int v36; // [rsp+A8h] [rbp-11h]
  int v37; // [rsp+ACh] [rbp-Dh]
  int *v38; // [rsp+B0h] [rbp-9h]
  int v39; // [rsp+B8h] [rbp-1h]
  int v40; // [rsp+BCh] [rbp+3h]
  int *v41; // [rsp+C0h] [rbp+7h]
  int v42; // [rsp+C8h] [rbp+Fh]
  int v43; // [rsp+CCh] [rbp+13h]
  int *v44; // [rsp+D0h] [rbp+17h]
  int v45; // [rsp+D8h] [rbp+1Fh]
  int v46; // [rsp+DCh] [rbp+23h]

  v1 = *(_QWORD *)(a1 + 1184);
  if ( v1 )
  {
    v3 = *(_QWORD *)(v1 + 16);
    v20 = 0;
    *(_BYTE *)(v3 + 24) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v3 + 16));
    v4 = *(_DWORD *)(v1 + 32);
    v21 = 1;
    v5 = PopPlCalculateDevicePowerDraw(a1, &v21, &v20, 0LL);
    *(_DWORD *)(v1 + 32) = v5;
    v7 = v5 - v4;
    v8 = v5;
    if ( (unsigned int)dword_140C03950 > 5 )
    {
      v9 = *(unsigned __int16 *)(a1 + 216);
      v29 = 0;
      v32 = 0;
      v34[1] = 0;
      v37 = 0;
      v40 = 0;
      v43 = 0;
      v19 = 1;
      v27 = &v19;
      v33 = *(_QWORD *)(a1 + 224);
      v35 = &v22;
      v38 = &v23;
      v41 = &v24;
      v10 = *(_QWORD *)(v1 + 16);
      v30 = v34;
      v34[0] = v9;
      v28 = 2;
      v31 = 2;
      v36 = 4;
      v23 = v8;
      v39 = 4;
      v42 = 4;
      v22 = v7;
      v24 = v7;
      v11 = *(_DWORD *)(v10 + 28);
      v46 = 0;
      v44 = &v25;
      v25 = v7 + v11;
      v45 = 4;
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_140C03950,
        (unsigned __int8 *)byte_140032531,
        0LL,
        0LL,
        9u,
        &v26);
    }
    PopPlPublishSystemPowerChange((unsigned __int16 *)v3, v7, v6);
    for ( i = 0LL; i < *(unsigned int *)(a1 + 828); PopPlUnregisterComponent(*(_QWORD *)(*(_QWORD *)(a1 + 832) + 8 * i++)) )
      ;
    *(_QWORD *)(v1 + 24) = 0LL;
    *(_QWORD *)(a1 + 1184) = 0LL;
    v13 = *(unsigned __int8 *)(v3 + 24);
    KxReleaseSpinLock((volatile signed __int64 *)(v3 + 16));
    if ( (_DWORD)KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( ((unsigned __int8)KiIrqlFlags & 1) != 0
        && CurrentIrql <= 0xFu
        && (unsigned __int8)v13 <= 0xFu
        && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v17 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v13 + 1));
        v18 = (v17 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v17;
        if ( v18 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
    __writecr8(v13);
  }
}
