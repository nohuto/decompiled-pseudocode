/*
 * XREFs of MiTimeSingleLargePageZeroWorker @ 0x1403D452C
 * Callers:
 *     MiTimeSingleLargePageZero @ 0x1403D4314 (MiTimeSingleLargePageZero.c)
 * Callees:
 *     MiWritePteShadow @ 0x1402294F0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140229550 (MiPteHasShadow.c)
 *     MiFreeLargePageChain @ 0x140263068 (MiFreeLargePageChain.c)
 *     MiGetLargePagesDemoteAsNeeded @ 0x1402662A0 (MiGetLargePagesDemoteAsNeeded.c)
 *     MiDeleteUltraThreadContext @ 0x140268284 (MiDeleteUltraThreadContext.c)
 *     MiCreateUltraThreadContext @ 0x14026A574 (MiCreateUltraThreadContext.c)
 *     MiMakeProtectionPfnCompatible @ 0x14026C61C (MiMakeProtectionPfnCompatible.c)
 *     MiInsertLargePageInNodeList @ 0x1402BEEA0 (MiInsertLargePageInNodeList.c)
 *     MiGetUltraMapping @ 0x1402C6260 (MiGetUltraMapping.c)
 *     MiUnlinkNodeLargePages @ 0x1402CA5E0 (MiUnlinkNodeLargePages.c)
 *     MiMakeValidPte @ 0x1402CBD10 (MiMakeValidPte.c)
 *     KeYieldProcessorEx @ 0x1402F32E0 (KeYieldProcessorEx.c)
 *     KeQueryPerformanceCounter @ 0x1403027F0 (KeQueryPerformanceCounter.c)
 *     MiPteInShadowRange @ 0x140317A80 (MiPteInShadowRange.c)
 *     MiInitializePageColorBase @ 0x140339C20 (MiInitializePageColorBase.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     KeZeroPages @ 0x140424F50 (KeZeroPages.c)
 *     memset @ 0x140435E00 (memset.c)
 */

unsigned __int64 __fastcall MiTimeSingleLargePageZeroWorker(__int64 a1, unsigned int a2)
{
  __int64 v3; // r12
  signed __int32 v4; // eax
  unsigned int v5; // ebx
  unsigned int v6; // esi
  unsigned __int8 CurrentIrql; // r15
  __int64 v8; // r14
  int ProtectionPfnCompatible; // ebx
  _QWORD *v10; // r12
  unsigned __int64 ValidPte; // rbx
  int v12; // r13d
  __int64 v13; // r9
  __int64 v14; // rdx
  __int64 v15; // r8
  LONGLONG v16; // rbx
  unsigned __int64 v17; // rbx
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rcx
  _QWORD *v20; // rdx
  __int64 v21; // rcx
  unsigned __int64 v22; // r8
  unsigned int v23; // edx
  __int64 v24; // rax
  unsigned __int64 v25; // rdx
  unsigned __int64 v26; // r8
  unsigned __int64 v27; // r9
  unsigned __int64 v28; // rdx
  _DWORD *SchedulerAssist; // r9
  unsigned __int8 v31; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *v33; // r9
  int v34; // eax
  __int64 *LargePagesDemoteAsNeeded; // rax
  bool v36; // zf
  bool v37; // zf
  unsigned __int8 v38; // al
  struct _KPRCB *v39; // r10
  _DWORD *v40; // r9
  int v41; // eax
  signed __int32 v42[8]; // [rsp+0h] [rbp-100h] BYREF
  BOOL v43; // [rsp+50h] [rbp-B0h]
  int v44; // [rsp+54h] [rbp-ACh] BYREF
  __int128 v45; // [rsp+58h] [rbp-A8h] BYREF
  __int128 v46; // [rsp+68h] [rbp-98h] BYREF
  __int128 v47; // [rsp+78h] [rbp-88h]
  unsigned __int64 UltraMapping; // [rsp+88h] [rbp-78h]
  unsigned __int64 v49; // [rsp+90h] [rbp-70h]
  __int64 v50; // [rsp+98h] [rbp-68h]
  LARGE_INTEGER PerformanceCounter; // [rsp+A0h] [rbp-60h]
  unsigned __int64 v52[16]; // [rsp+B0h] [rbp-50h] BYREF
  _QWORD v53[16]; // [rsp+130h] [rbp+30h] BYREF

  v50 = a1;
  v3 = a1;
  v46 = 0LL;
  v47 = 0LL;
  v45 = 0LL;
  MiInitializePageColorBase(0LL, a2 + 1, (__int64)&v45);
  v4 = _InterlockedExchangeAdd((volatile signed __int32 *)v45, 1u);
  v5 = DWORD2(v45) & v4 | HIDWORD(v45);
  memset(v52, 0, sizeof(v52));
  if ( !(unsigned int)MiCreateUltraThreadContext((__int64)v52, v5, 2) )
    return 0LL;
  memset(v53, 0, sizeof(v53));
  v6 = 0;
  while ( 1 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
    }
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
    _InterlockedOr(v42, 0);
    v8 = MiUnlinkNodeLargePages(v3, 0LL, 1u, 1LL, a2, 4, 1u, 2, 0LL);
    if ( v8 )
      break;
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v31 = KeGetCurrentIrql();
        if ( v31 <= 0xFu && CurrentIrql <= 0xFu && v31 >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v33 = CurrentPrcb->SchedulerAssist;
          v34 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v36 = (v34 & v33[5]) == 0;
          v33[5] &= v34;
          if ( v36 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(CurrentIrql);
    LargePagesDemoteAsNeeded = (__int64 *)MiGetLargePagesDemoteAsNeeded(v3, a2, 0x200uLL, 0x200uLL, 0LL, 0, 2, 1);
    v8 = (__int64)LargePagesDemoteAsNeeded;
    if ( !LargePagesDemoteAsNeeded )
      goto LABEL_14;
    MiFreeLargePageChain(LargePagesDemoteAsNeeded);
    --v6;
LABEL_17:
    if ( ++v6 >= 0x10 )
      goto LABEL_18;
  }
  v49 = 0xAAAAAAAAAAAAAAABuLL * ((v8 + 0x220000000000LL) >> 4);
  ProtectionPfnCompatible = MiMakeProtectionPfnCompatible(4, v8);
  UltraMapping = MiGetUltraMapping(&v52[4], 1u, 512LL, 0);
  v10 = (_QWORD *)(((UltraMapping >> 18) & 0x3FFFFFF8) - 0x904C0000000LL);
  ValidPte = MiMakeValidPte(
               (unsigned __int64)v10,
               0xAAAAAAAAAAAAAAABuLL * ((v8 + 0x220000000000LL) >> 4),
               ProtectionPfnCompatible | 0xA4000000);
  v12 = 0;
  v43 = MiPteInShadowRange((unsigned __int64)v10);
  if ( v43 )
  {
    if ( (unsigned int)MiPteHasShadow() )
    {
      v12 = 1;
      if ( HIBYTE(word_140C51864) )
        goto LABEL_6;
      v36 = (ValidPte & 1) == 0;
    }
    else
    {
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
        goto LABEL_6;
      v36 = (ValidPte & 1) == 0;
    }
    if ( !v36 )
      ValidPte |= 0x8000000000000000uLL;
  }
LABEL_6:
  *v10 = ValidPte;
  if ( v12 )
    MiWritePteShadow((__int64)v10, ValidPte);
  KeZeroPages(UltraMapping, 0x200000LL);
  v14 = ZeroPte;
  v15 = 0LL;
  if ( !v43 )
    goto LABEL_9;
  if ( (unsigned int)MiPteHasShadow() )
  {
    v15 = 1LL;
    if ( !HIBYTE(word_140C51864) )
    {
      v37 = (v14 & 1) == 0;
      goto LABEL_55;
    }
  }
  else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
  {
    v37 = (v14 & 1) == 0;
LABEL_55:
    if ( !v37 )
      v14 |= 0x8000000000000000uLL;
  }
LABEL_9:
  *v10 = v14;
  if ( (_DWORD)v15 )
    MiWritePteShadow((__int64)v10, v14);
  v44 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v8 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v44, v14, v15, v13);
    while ( *(__int64 *)(v8 + 24) < 0 );
  }
  v46 = v49;
  v47 = 0LL;
  LOBYTE(v47) = 2;
  MiInsertLargePageInNodeList((__int64)&v46);
  v3 = v50;
LABEL_14:
  _InterlockedOr(v42, 0);
  v16 = *(_QWORD *)&KeQueryPerformanceCounter(0LL) - PerformanceCounter.QuadPart;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v38 = KeGetCurrentIrql();
      if ( v38 <= 0xFu && CurrentIrql <= 0xFu && v38 >= 2u )
      {
        v39 = KeGetCurrentPrcb();
        v40 = v39->SchedulerAssist;
        v41 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v36 = (v41 & v40[5]) == 0;
        v40[5] &= v41;
        if ( v36 )
          KiRemoveSystemWorkPriorityKick(v39);
      }
    }
  }
  __writecr8(CurrentIrql);
  if ( v8 )
  {
    v53[v6] = v16;
    if ( v6 >= 2 )
    {
      v21 = v6 - 2;
      v22 = 0LL;
      v23 = v6 - 2;
      do
      {
        v24 = v23++;
        v22 += v53[v24];
      }
      while ( v23 <= v6 );
      v17 = v22 / 3;
      v25 = v22 / 3 / 0xA;
      v26 = v22 / 3 - v25;
      v27 = v17 + v25;
      while ( 1 )
      {
        v28 = v53[v21];
        if ( v28 < v26 )
          break;
        if ( v28 <= v27 )
        {
          v21 = (unsigned int)(v21 + 1);
          if ( (unsigned int)v21 <= v6 )
            continue;
        }
        if ( (unsigned int)v21 <= v6 )
          goto LABEL_17;
        if ( !v17 )
          goto LABEL_19;
        goto LABEL_28;
      }
    }
    goto LABEL_17;
  }
  memset(v53, 0, sizeof(v53));
LABEL_18:
  v17 = 0LL;
LABEL_19:
  v18 = 0LL;
  v19 = 0LL;
  v20 = v53;
  do
  {
    if ( !*v20 )
      break;
    v18 += *v20;
    v19 = (unsigned int)(v19 + 1);
    ++v20;
  }
  while ( (unsigned int)v19 < 0x10 );
  if ( (_DWORD)v19 )
    v17 = v18 / v19;
LABEL_28:
  MiDeleteUltraThreadContext((__int64)v52);
  return v17;
}
