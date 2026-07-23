/*
 * XREFs of sub_1403D8FF0 @ 0x1403D8FF0
 * Callers:
 *     <none>
 * Callees:
 *     KeSetActualBasePriorityThread @ 0x14028FD20 (KeSetActualBasePriorityThread.c)
 *     KeResetEvent @ 0x1402A40D0 (KeResetEvent.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     sub_14037907C @ 0x14037907C (sub_14037907C.c)
 *     sub_1403898C4 @ 0x1403898C4 (sub_1403898C4.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

void __fastcall sub_1403D8FF0(__int64 *P)
{
  __int64 v1; // rdi
  unsigned __int64 v3; // rbx
  unsigned int v4; // ecx
  unsigned __int64 v5; // rax
  unsigned __int8 v6; // al
  struct _KPRCB *v7; // r10
  __int64 v8; // r9
  int v9; // eax
  bool v10; // zf
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v13; // r9
  int v14; // eax
  unsigned __int8 v15; // al
  struct _KPRCB *v16; // r9
  int v17; // eax
  __int64 v18; // r8

  v1 = *P;
  KeSetActualBasePriorityThread((ULONG_PTR)KeGetCurrentThread(), 0x19u);
  while ( 1 )
  {
    KeWaitForSingleObject((PVOID)(v1 + 48), WrKernel, 0, 0, 0LL);
    v3 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)v1);
    KeResetEvent((PRKEVENT)(v1 + 48));
    v4 = *(_DWORD *)(v1 + 88);
    if ( !v4 )
      break;
    v5 = *(unsigned int *)(v1 + 92);
    if ( v4 <= (unsigned int)v5 || **(_QWORD **)(v1 + 16) >> 1 <= v5 )
    {
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)v1);
      if ( dword_140D06B08 )
      {
        if ( (dword_140D06B08 & 1) != 0 )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( CurrentIrql <= 0xFu && (unsigned __int8)v3 <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            v13 = *((_QWORD *)CurrentPrcb + 4375);
            v14 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v3 + 1));
            v10 = (v14 & *(_DWORD *)(v13 + 20)) == 0;
            *(_DWORD *)(v13 + 20) &= v14;
            if ( v10 )
              sub_140418E4C(CurrentPrcb);
          }
        }
      }
      __writecr8(v3);
    }
    else
    {
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)v1);
      if ( dword_140D06B08 )
      {
        if ( (dword_140D06B08 & 1) != 0 )
        {
          v6 = KeGetCurrentIrql();
          if ( v6 <= 0xFu && (unsigned __int8)v3 <= 0xFu && v6 >= 2u )
          {
            v7 = KeGetCurrentPrcb();
            v8 = *((_QWORD *)v7 + 4375);
            v9 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v3 + 1));
            v10 = (v9 & *(_DWORD *)(v8 + 20)) == 0;
            *(_DWORD *)(v8 + 20) &= v9;
            if ( v10 )
              sub_140418E4C(v7);
          }
        }
      }
      __writecr8(v3);
      sub_1403898C4(v1, P[1], 1u);
    }
  }
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)v1);
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      v15 = KeGetCurrentIrql();
      if ( v15 <= 0xFu && (unsigned __int8)v3 <= 0xFu && v15 >= 2u )
      {
        v16 = KeGetCurrentPrcb();
        v17 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v3 + 1));
        v18 = *((_QWORD *)v16 + 4375);
        v10 = (v17 & *(_DWORD *)(v18 + 20)) == 0;
        *(_DWORD *)(v18 + 20) &= v17;
        if ( v10 )
          sub_140418E4C(v16);
      }
    }
  }
  __writecr8(v3);
  sub_14037907C((struct _EX_RUNDOWN_REF **)P);
}
