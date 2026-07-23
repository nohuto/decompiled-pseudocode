/*
 * XREFs of KiAttachProcess @ 0x14022DBC0
 * Callers:
 *     KiStackAttachProcess @ 0x14022D710 (KiStackAttachProcess.c)
 *     KeAttachProcess @ 0x140364510 (KeAttachProcess.c)
 * Callees:
 *     KiSetAddressPolicy @ 0x14022E230 (KiSetAddressPolicy.c)
 *     KeYieldProcessorEx @ 0x140242F10 (KeYieldProcessorEx.c)
 *     KiInSwapSingleProcess @ 0x14034DD54 (KiInSwapSingleProcess.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 *     HvlSwitchVirtualAddressSpace @ 0x140549F50 (HvlSwitchVirtualAddressSpace.c)
 */

unsigned __int64 __fastcall KiAttachProcess(__int64 a1, __int64 a2, unsigned __int8 a3, char a4, __int64 a5)
{
  __int64 v5; // rdi
  _QWORD *v6; // r10
  unsigned __int64 v9; // r13
  _QWORD *v11; // rcx
  _QWORD *v12; // rdx
  _QWORD *v13; // rax
  int v14; // ebp
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 v16; // r12
  unsigned __int64 GroupIndex; // r15
  __int64 v18; // r14
  unsigned __int64 v19; // rdi
  unsigned __int64 v20; // rax
  unsigned __int64 result; // rax
  _QWORD *v22; // rcx
  __int64 *v23; // rax
  unsigned __int8 CurrentIrql; // cl
  _DWORD *SchedulerAssist; // r9
  __int64 v26; // rdx
  unsigned __int64 v27; // rcx
  unsigned __int8 v28; // cl
  struct _KPRCB *v29; // r10
  _DWORD *v30; // r8
  bool v31; // zf
  int v32; // [rsp+68h] [rbp+20h] BYREF

  v5 = a5;
  v6 = (_QWORD *)(a1 + 152);
  v9 = a3;
  *(_QWORD *)(a5 + 32) = *(_QWORD *)(a1 + 184);
  *(_BYTE *)(v5 + 40) = *(_BYTE *)(a1 + 192);
  *(_BYTE *)(v5 + 41) = *(_BYTE *)(a1 + 193);
  *(_BYTE *)(v5 + 42) = *(_BYTE *)(a1 + 194);
  v11 = *(_QWORD **)(a1 + 152);
  if ( v11 == v6 )
  {
    *(_QWORD *)(v5 + 8) = v5;
    *(_QWORD *)v5 = v5;
    *(_BYTE *)(v5 + 41) = 0;
  }
  else
  {
    v23 = (__int64 *)v6[1];
    *(_QWORD *)v5 = v11;
    *(_QWORD *)(v5 + 8) = v23;
    v11[1] = v5;
    *v23 = v5;
  }
  v12 = (_QWORD *)v6[2];
  v13 = (_QWORD *)(v5 + 16);
  if ( v12 == v6 + 2 )
  {
    *(_QWORD *)(v5 + 24) = v5 + 16;
    *v13 = v13;
    *(_BYTE *)(v5 + 42) = 0;
  }
  else
  {
    v22 = (_QWORD *)v6[3];
    *v13 = v12;
    *(_QWORD *)(v5 + 24) = v22;
    v12[1] = v13;
    *v22 = v13;
  }
  v6[1] = v6;
  *(_QWORD *)(a1 + 176) = a1 + 168;
  *(_QWORD *)(a1 + 168) = a1 + 168;
  *v6 = v6;
  *(_WORD *)(a1 + 192) = 0;
  *(_BYTE *)(a1 + 194) = 0;
  if ( v5 == a1 + 600 )
    *(_BYTE *)(a1 + 586) = 1;
  if ( (a4 & 1) == 0 && (_InterlockedExchangeAdd((volatile signed __int32 *)(a2 + 840), 8u) & 7) != 0 )
  {
    *(_QWORD *)(a1 + 64) = 0LL;
    KiInSwapSingleProcess(a1, a2, a3);
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( (_DWORD)KiIrqlFlags && ((unsigned __int8)KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      if ( CurrentIrql == 2 )
        LODWORD(v26) = 4;
      else
        v26 = (-1LL << (CurrentIrql + 1)) & 4;
      SchedulerAssist[5] |= v26;
    }
    v32 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
    {
      do
        KeYieldProcessorEx(&v32);
      while ( *(_QWORD *)(a1 + 64) );
    }
  }
  *(_DWORD *)(a1 + 116) |= 0x800u;
  *(_QWORD *)(a1 + 184) = a2;
  v14 = a4 & 2;
  if ( !v14 )
    *(_QWORD *)(a1 + 64) = 0LL;
  CurrentPrcb = KeGetCurrentPrcb();
  v16 = *(_QWORD *)(v5 + 32);
  GroupIndex = CurrentPrcb->GroupIndex;
  v18 = 8LL * CurrentPrcb->Group + 376;
  _interlockedbittestandset64((volatile signed __int32 *)(v18 + a2), GroupIndex);
  v19 = *(_QWORD *)(a2 + 40);
  if ( KiKvaShadow )
  {
    v20 = *(_QWORD *)(a2 + 40);
    if ( (v19 & 2) != 0 )
      v20 = v19 | 0x8000000000000000uLL;
    __writegsqword(0xA000u, v20);
    KiSetAddressPolicy(*(unsigned __int8 *)(a2 + 912));
  }
  result = (unsigned int)HvlEnlightenments;
  if ( (HvlEnlightenments & 1) != 0 )
    result = HvlSwitchVirtualAddressSpace(v19);
  else
    __writecr3(v19);
  if ( !KiFlushPcid && KiKvaShadow )
  {
    v27 = __readcr4();
    if ( (v27 & 0x20080) != 0 )
    {
      result = v27 ^ 0x80;
      __writecr4(v27 ^ 0x80);
      __writecr4(v27);
    }
    else
    {
      result = __readcr3();
      __writecr3(result);
    }
  }
  _interlockedbittestandreset64((volatile signed __int32 *)(v18 + v16), GroupIndex);
  *(_DWORD *)(a1 + 116) &= ~0x800u;
  if ( !v14 )
  {
    result = (unsigned int)KiIrqlFlags;
    if ( (_DWORD)KiIrqlFlags )
    {
      v28 = KeGetCurrentIrql();
      if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v28 <= 0xFu && (unsigned __int8)v9 <= 0xFu && v28 >= 2u )
      {
        v29 = KeGetCurrentPrcb();
        result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v9 + 1));
        v30 = v29->SchedulerAssist;
        v31 = ((unsigned int)result & v30[5]) == 0;
        v30[5] &= result;
        if ( v31 )
          result = KiRemoveSystemWorkPriorityKick(v29);
      }
    }
    __writecr8(v9);
  }
  return result;
}
