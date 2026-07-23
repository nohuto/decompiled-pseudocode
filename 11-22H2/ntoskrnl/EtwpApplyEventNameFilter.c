/*
 * XREFs of EtwpApplyEventNameFilter @ 0x14046A156
 * Callers:
 *     EtwpEventWriteFull @ 0x140258450 (EtwpEventWriteFull.c)
 *     EtwpWriteUserEvent @ 0x1406F41F0 (EtwpWriteUserEvent.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D7680 (__security_check_cookie.c)
 *     _alloca_probe @ 0x140429450 (_alloca_probe.c)
 *     memmove @ 0x140435100 (memmove.c)
 *     EtwpEventNameFilterSearch @ 0x14046A6CE (EtwpEventNameFilterSearch.c)
 *     EtwpGetEventNameFromEventMetadata @ 0x14046A996 (EtwpGetEventNameFromEventMetadata.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DF54 (KiRemoveSystemWorkPriorityKick.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A00C10 (ExRaiseDatatypeMisalignment.c)
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAF6B0 (ExAllocatePool2.c)
 */

char __fastcall EtwpApplyEventNameFilter(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        unsigned __int64 a4,
        char a5,
        unsigned __int8 a6,
        unsigned __int8 a7,
        __int64 a8,
        char a9)
{
  __int64 v9; // r12
  void **v11; // rdi
  unsigned __int8 CurrentIrql; // r15
  __int64 v13; // rax
  unsigned int v14; // ecx
  unsigned int v15; // ecx
  char *v16; // r8
  unsigned __int64 v17; // rdx
  unsigned __int64 v18; // rdx
  void *v19; // rsp
  void *v20; // rsp
  _DWORD *SchedulerAssist; // r9
  __int64 v22; // rax
  __int64 v23; // r14
  __int64 v24; // rdx
  _BYTE *v25; // r14
  __int64 v26; // rcx
  __int64 v27; // rax
  __int64 v28; // rdx
  unsigned __int8 v29; // al
  __int64 EventNameFromEventMetadata; // rax
  unsigned __int8 v31; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v33; // r8
  int v34; // eax
  bool v35; // zf
  unsigned __int8 v36; // al
  struct _KPRCB *v37; // r9
  _DWORD *v38; // r8
  int v39; // eax
  char v41; // [rsp+20h] [rbp+0h] BYREF
  char v42; // [rsp+21h] [rbp+1h]
  unsigned __int16 v43; // [rsp+24h] [rbp+4h] BYREF
  PVOID P; // [rsp+28h] [rbp+8h]
  int v45; // [rsp+30h] [rbp+10h]
  void **v46; // [rsp+38h] [rbp+18h]
  void *Src[2]; // [rsp+40h] [rbp+20h] BYREF

  v9 = a2;
  v43 = 0;
  P = 0LL;
  *(_OWORD *)Src = 0LL;
  v11 = 0LL;
  v46 = 0LL;
  CurrentIrql = 0;
  v42 = 0;
  v41 = 1;
  if ( a5 )
  {
    v13 = 16LL * a3;
    if ( v13 )
    {
      if ( (a4 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( v13 + a4 > 0x7FFFFFFF0000LL || v13 + a4 < a4 )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
  }
  v14 = 0;
  v45 = 0;
  while ( v14 < a3 )
  {
    if ( *(_BYTE *)(a4 + 16LL * v14 + 12) == 1 )
    {
      v11 = (void **)(a4 + 16LL * v14);
      if ( a6 >= 2u )
      {
        v46 = (void **)(a4 + 16LL * v14);
        P = *v11;
      }
      else
      {
        *(_OWORD *)Src = *(_OWORD *)v11;
        v11 = Src;
        v46 = Src;
        v15 = _mm_cvtsi128_si32(_mm_srli_si128(*(__m128i *)Src, 8));
        if ( v15 >= 0xFFFF )
        {
          v41 = 0;
          goto LABEL_80;
        }
        if ( a5 )
        {
          if ( v15 )
          {
            v16 = (char *)Src[0] + v15;
            if ( (unsigned __int64)v16 > 0x7FFFFFFF0000LL || v16 < Src[0] )
            {
              MEMORY[0x7FFFFFFF0000] = 0;
              v15 = (unsigned int)Src[1];
            }
          }
        }
        if ( v15 <= 0x100 )
        {
          v17 = v15 + 15LL;
          if ( v17 <= v15 )
            v17 = 0xFFFFFFFFFFFFFF0LL;
          v18 = v17 & 0xFFFFFFFFFFFFFFF0uLL;
          v19 = alloca(v18);
          v20 = alloca(v18);
          P = &v41;
        }
        else
        {
          P = (PVOID)ExAllocatePool2(66LL, v15, 1953985605LL);
          if ( !P )
          {
            v41 = 1;
            goto LABEL_80;
          }
          v42 = 1;
          v15 = (unsigned int)Src[1];
        }
        memmove(P, Src[0], v15);
      }
      break;
    }
    v45 = ++v14;
  }
  if ( !v11 || !P )
    goto LABEL_66;
  if ( a6 < 2u )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( (_DWORD)KiIrqlFlags )
    {
      if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
      {
        SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
        LODWORD(v22) = 4;
        if ( CurrentIrql != 2 )
          v22 = (-1LL << (CurrentIrql + 1)) & 4;
        SchedulerAssist[5] |= v22;
      }
    }
  }
  v23 = *(_QWORD *)(a1 + 384);
  if ( v23 )
  {
    v24 = 104 * v9;
    v25 = a9 ? *(_BYTE **)(v24 + v23 + 56) : *(_BYTE **)(v24 + v23 + 96);
    if ( v25 )
    {
      v26 = 0LL;
      v27 = *(_QWORD *)(a1 + 384);
      if ( v27 )
      {
        v28 = v27 + v24;
        if ( a9 )
        {
          if ( (*(_DWORD *)v28 & 0x80002000) == 0x80002000 )
            v26 = *(_QWORD *)(v28 + 56);
        }
        else if ( (*(_DWORD *)v28 & 0x80000400) == 0x80000400 )
        {
          v26 = *(_QWORD *)(v28 + 96);
        }
        if ( v26 )
        {
          v29 = *(_BYTE *)(v26 + 1);
          if ( (a7 <= v29 || !v29)
            && (!a8 || (a8 & *(_QWORD *)(v26 + 8)) != 0 && (a8 & *(_QWORD *)(v26 + 16)) == *(_QWORD *)(v26 + 16)) )
          {
            EventNameFromEventMetadata = EtwpGetEventNameFromEventMetadata(P, *((unsigned int *)v46 + 2), &v43);
            if ( !EventNameFromEventMetadata )
            {
              if ( a6 < 2u )
              {
                if ( (_DWORD)KiIrqlFlags )
                {
                  v31 = KeGetCurrentIrql();
                  if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v31 <= 0xFu && CurrentIrql <= 0xFu && v31 >= 2u )
                  {
                    CurrentPrcb = KeGetCurrentPrcb();
                    v33 = CurrentPrcb->SchedulerAssist;
                    v34 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
                    v35 = (v34 & v33[5]) == 0;
                    v33[5] &= v34;
                    if ( v35 )
                      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
                  }
                }
                __writecr8(CurrentIrql);
              }
LABEL_66:
              v41 = 1;
              goto LABEL_80;
            }
            if ( v43 )
              v35 = *v25 == (unsigned __int8)EtwpEventNameFilterSearch(EventNameFromEventMetadata, v43, v25);
            else
              v35 = *v25 == 0;
            v41 = v35;
          }
        }
      }
    }
  }
  if ( a6 < 2u )
  {
    if ( (_DWORD)KiIrqlFlags )
    {
      v36 = KeGetCurrentIrql();
      if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v36 <= 0xFu && CurrentIrql <= 0xFu && v36 >= 2u )
      {
        v37 = KeGetCurrentPrcb();
        v38 = v37->SchedulerAssist;
        v39 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v35 = (v39 & v38[5]) == 0;
        v38[5] &= v39;
        if ( v35 )
          KiRemoveSystemWorkPriorityKick(v37);
      }
    }
    __writecr8(CurrentIrql);
  }
LABEL_80:
  if ( v42 )
    ExFreePoolWithTag(P, 0);
  return v41;
}
