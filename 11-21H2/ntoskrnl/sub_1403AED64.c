/*
 * XREFs of sub_1403AED64 @ 0x1403AED64
 * Callers:
 *     sub_140398554 @ 0x140398554 (sub_140398554.c)
 *     sub_1403AEB58 @ 0x1403AEB58 (sub_1403AEB58.c)
 * Callees:
 *     KeRemoveQueueDpcEx @ 0x14024E1A0 (KeRemoveQueueDpcEx.c)
 *     KeSetTargetProcessorDpcEx @ 0x14025ACA0 (KeSetTargetProcessorDpcEx.c)
 *     KeGetProcessorNumberFromIndex @ 0x1402949F0 (KeGetProcessorNumberFromIndex.c)
 *     sub_140345190 @ 0x140345190 (sub_140345190.c)
 *     KeRevertToUserGroupAffinityThread @ 0x14035BE00 (KeRevertToUserGroupAffinityThread.c)
 *     sub_1403AF9E8 @ 0x1403AF9E8 (sub_1403AF9E8.c)
 *     sub_1403AFE68 @ 0x1403AFE68 (sub_1403AFE68.c)
 *     sub_1403B0F50 @ 0x1403B0F50 (sub_1403B0F50.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_14056F190 @ 0x14056F190 (sub_14056F190.c)
 */

__int64 __fastcall sub_1403AED64(__int64 *a1, unsigned __int8 a2, __int64 a3, struct _KDPC *a4)
{
  char v8; // al
  NTSTATUS ProcessorNumberFromIndex; // ebx
  __int64 v10; // r8
  __int64 v11; // rdx
  __int64 v12; // r14
  unsigned __int8 CurrentIrql; // si
  int LockArray_high; // edx
  unsigned __int8 v15; // cl
  __int64 v16; // r8
  char v17; // r15
  __int64 v19; // r9
  unsigned __int8 v20; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v22; // r9
  int v23; // eax
  bool v24; // zf
  __int64 v25; // rsi
  unsigned __int8 v26; // al
  unsigned __int8 v27; // di
  struct _KPRCB *v28; // r9
  __int64 v29; // r8
  int v30; // eax
  unsigned __int8 v31[4]; // [rsp+30h] [rbp-20h] BYREF
  _PROCESSOR_NUMBER ProcNumber; // [rsp+34h] [rbp-1Ch] BYREF
  _GROUP_AFFINITY PreviousAffinity; // [rsp+38h] [rbp-18h] BYREF

  PreviousAffinity = 0LL;
  v31[0] = 0;
  ProcNumber = 0;
  v8 = sub_1403AFE68(a3);
  ProcessorNumberFromIndex = 0;
  LOBYTE(v10) = 0;
  if ( a2 )
  {
    while ( 1 )
    {
      v11 = a1[(unsigned __int8)v10];
      _m_prefetchw((const void *)(v11 + 104));
      if ( (_InterlockedOr((volatile signed __int32 *)(v11 + 104), 1u) & 1) != 0 )
        break;
      LOBYTE(v10) = v10 + 1;
      if ( (unsigned __int8)v10 >= a2 )
        goto LABEL_4;
    }
    return (unsigned int)-2147483611;
  }
LABEL_4:
  if ( !*(_DWORD *)(a3 + 8) )
  {
    v12 = *(unsigned int *)(a3 + 64);
    if ( v8 != 0 )
    {
      ProcessorNumberFromIndex = sub_14056F190(*(unsigned int *)(*a1 + 88), (unsigned int)v12, v10);
    }
    else
    {
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(0xFuLL);
      if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
      {
        v19 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
        *(_DWORD *)(v19 + 20) |= (-1 << (CurrentIrql + 1)) & 0xFFFC;
      }
      LockArray_high = HIDWORD(KeGetPcr()[1].LockArray);
      v15 = 0;
      v31[0] = CurrentIrql;
      if ( a2 )
      {
        do
        {
          v16 = a1[v15];
          if ( *(_DWORD *)(v16 + 96) == LockArray_high )
          {
            ProcessorNumberFromIndex = sub_1403B0F50(*(unsigned int *)(v16 + 88), (unsigned int)v12);
            v17 = 1;
            goto LABEL_10;
          }
          ++v15;
        }
        while ( v15 < a2 );
        v17 = 0;
      }
      else
      {
        v17 = 0;
      }
LABEL_10:
      if ( dword_140D06B08 )
      {
        if ( (dword_140D06B08 & 1) != 0 )
        {
          v20 = KeGetCurrentIrql();
          if ( v20 <= 0xFu && CurrentIrql <= 0xFu && v20 >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            v22 = *((_QWORD *)CurrentPrcb + 4375);
            v23 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
            v24 = (v23 & *(_DWORD *)(v22 + 20)) == 0;
            *(_DWORD *)(v22 + 20) &= v23;
            if ( v24 )
              sub_140418E4C(CurrentPrcb);
          }
        }
      }
      __writecr8(CurrentIrql);
      if ( !v17 )
      {
        v25 = *a1;
        if ( KeGetCurrentIrql() >= 2u )
        {
          if ( !a4 )
            return (unsigned int)-1073741811;
          ProcessorNumberFromIndex = KeGetProcessorNumberFromIndex(*(_DWORD *)(v25 + 96), &ProcNumber);
          if ( ProcessorNumberFromIndex >= 0 )
          {
            KeRemoveQueueDpcEx((__int64)a4, 0);
            a4->TargetInfoAsUlong = 275;
            a4->DeferredRoutine = (PKDEFERRED_ROUTINE)sub_140570AF0;
            a4->DeferredContext = 0LL;
            a4->DpcData = 0LL;
            a4->ProcessorHistory = 0LL;
            ProcessorNumberFromIndex = KeSetTargetProcessorDpcEx(a4, &ProcNumber);
            if ( ProcessorNumberFromIndex >= 0 )
              sub_140345190((ULONG_PTR)a4, *(unsigned int *)(v25 + 88), v12, 0LL, 0);
          }
        }
        else
        {
          sub_1403AF9E8(*(unsigned int *)(v25 + 96), v31, &PreviousAffinity);
          ProcessorNumberFromIndex = sub_1403B0F50(*(unsigned int *)(v25 + 88), (unsigned int)v12);
          if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && (v26 = KeGetCurrentIrql(), v26 <= 0xFu) )
          {
            v27 = v31[0];
            if ( v31[0] <= 0xFu && v26 >= 2u )
            {
              v28 = KeGetCurrentPrcb();
              v29 = *((_QWORD *)v28 + 4375);
              v27 = v31[0];
              v30 = ~(unsigned __int16)(-1LL << (v31[0] + 1));
              v24 = (v30 & *(_DWORD *)(v29 + 20)) == 0;
              *(_DWORD *)(v29 + 20) &= v30;
              if ( v24 )
                sub_140418E4C(v28);
            }
          }
          else
          {
            v27 = v31[0];
          }
          __writecr8(v27);
          KeRevertToUserGroupAffinityThread(&PreviousAffinity);
        }
      }
    }
    if ( ProcessorNumberFromIndex == 296 )
      return 0;
    return (unsigned int)ProcessorNumberFromIndex;
  }
  return 0LL;
}
