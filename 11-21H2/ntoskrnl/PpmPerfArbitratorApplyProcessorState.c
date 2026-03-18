/*
 * XREFs of PpmPerfArbitratorApplyProcessorState @ 0x14023B8E8
 * Callers:
 *     PpmPerfApplyProcessorState @ 0x14023B798 (PpmPerfApplyProcessorState.c)
 *     PpmIdleExecuteTransition @ 0x140306100 (PpmIdleExecuteTransition.c)
 *     PoSetProcessorQoS @ 0x14045E06E (PoSetProcessorQoS.c)
 * Callees:
 *     KeUpdateQosGroupingSets @ 0x14023BA30 (KeUpdateQosGroupingSets.c)
 *     PpmEventProcessorPerfStateChange @ 0x14023BABC (PpmEventProcessorPerfStateChange.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 */

char __fastcall PpmPerfArbitratorApplyProcessorState(__int64 a1, unsigned __int8 a2, char a3, __int64 a4)
{
  __int64 v4; // r10
  __int64 v6; // rbp
  char v7; // r9
  __int64 v8; // r8
  char v11; // di
  char v12; // r13
  signed int v13; // esi
  int v14; // edx
  _DWORD *v15; // rcx
  int v17; // eax
  unsigned __int16 v18; // cx
  unsigned __int16 v19; // r8
  unsigned int v20; // edx
  __int64 v21; // r10
  unsigned __int64 v22; // r11

  v4 = *(_QWORD *)(a1 + 33976);
  v6 = *(_QWORD *)(a1 + 33968);
  v7 = a3;
  v8 = 0LL;
  v11 = 1;
  v12 = 0;
  if ( PpmPerfQosEnabled )
    v13 = *(_DWORD *)(a1 + 34112);
  else
    v13 = 0;
  v14 = *(_DWORD *)(v6 + 728);
  if ( v13 == *(_DWORD *)(a1 + 34116) )
  {
    v15 = (_DWORD *)(v4 + 104);
    if ( *(_DWORD *)(v4 + 104) != v14 )
    {
      if ( !v13 )
      {
LABEL_6:
        *v15 = v14;
        goto LABEL_8;
      }
      if ( !*(_BYTE *)(v6 + 483) || (struct _KPRCB *)a1 == KeGetCurrentPrcb() )
      {
        a2 = 1;
        goto LABEL_6;
      }
      return 0;
    }
  }
  else
  {
    if ( *(_BYTE *)(v6 + 483) && (struct _KPRCB *)a1 != KeGetCurrentPrcb() )
      return 0;
    v17 = *(unsigned __int16 *)(a1 + 34120);
    v15 = (_DWORD *)(v4 + 104);
    if ( !_bittest(&v17, v13) || *v15 != v14 )
    {
      *v15 = v14;
      v7 = 1;
      a2 = 1;
    }
    *(_DWORD *)(a1 + 34116) = v13;
    v12 = 1;
  }
  if ( !v7 )
    goto LABEL_14;
LABEL_8:
  if ( a3 )
    *v15 = 0;
  LOBYTE(a4) = a3;
  *(_DWORD *)(v4 + 112) = *(_DWORD *)(v4 + 72);
  LOBYTE(v8) = a2;
  *(_DWORD *)(v4 + 108) = *(_DWORD *)(v4 + 76);
  *(_OWORD *)(v4 + 64) = *(_OWORD *)(v6 + 40LL * v13 + 736);
  *(_OWORD *)(v4 + 80) = *(_OWORD *)(v6 + 40LL * v13 + 752);
  *(_QWORD *)(v4 + 96) = *(_QWORD *)(v6 + 40LL * v13 + 768);
  (*(void (__fastcall **)(_QWORD, __int64, __int64, __int64))(v6 + 384))(*(_QWORD *)(v4 + 8), v4 + 64, v8, a4);
  if ( PopHeteroSystem )
  {
    v18 = *(_WORD *)(v6 + 2LL * v13 + 712);
    v19 = *(_WORD *)(a1 + 34120);
    if ( v18 != v19 )
    {
      *(_WORD *)(a1 + 34120) = v18;
      v20 = 0;
      v21 = *(_QWORD *)(a1 + 192);
      do
      {
        if ( (v18 & 1) != (v19 & 1) )
        {
          v22 = *(unsigned __int8 *)(a1 + 209);
          if ( (v18 & 1) != 0 )
            _interlockedbittestandset64((volatile signed __int32 *)(v21 + 8LL * v20 + 200), v22);
          else
            _interlockedbittestandreset64((volatile signed __int32 *)(v21 + 8LL * v20 + 200), v22);
        }
        v18 >>= 1;
        ++v20;
        v19 >>= 1;
      }
      while ( v20 < 6 );
    }
  }
  KeUpdateQosGroupingSets(a1, (unsigned int)v13);
  if ( a3 )
  {
LABEL_14:
    if ( !v12 )
      return v11;
  }
  PpmEventProcessorPerfStateChange(a1 + 33968, a2, *(unsigned int *)(a1 + 34116));
  return v11;
}
