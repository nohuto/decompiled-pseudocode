/*
 * XREFs of PopDetectSimulatedHeteroProcessors @ 0x140B70A64
 * Callers:
 *     PoInitSystem @ 0x140B50BBC (PoInitSystem.c)
 * Callees:
 *     KeQueryActiveProcessorCountEx @ 0x140222050 (KeQueryActiveProcessorCountEx.c)
 *     KeIsMultiCoreClassesEnabled @ 0x140256000 (KeIsMultiCoreClassesEnabled.c)
 *     KeGetPrcb @ 0x1402573F0 (KeGetPrcb.c)
 *     PsIsCurrentThreadInServerSilo @ 0x140287700 (PsIsCurrentThreadInServerSilo.c)
 *     PpmReleaseLock @ 0x14032C510 (PpmReleaseLock.c)
 *     PpmAcquireLock @ 0x14032C560 (PpmAcquireLock.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 *     PopReadSimulateProcessorClasses @ 0x140B70B7C (PopReadSimulateProcessorClasses.c)
 */

void PopDetectSimulatedHeteroProcessors()
{
  unsigned __int8 v0; // bp
  __int64 ActiveProcessorCount; // rdi
  __int64 Pool2; // rbx
  __int64 v3; // r15
  void *v4; // r14
  void *v5; // r13
  __int64 v6; // rax
  unsigned __int8 *v7; // r12
  __int64 v8; // rcx
  unsigned __int8 *v9; // rdx
  __int64 v10; // r8
  unsigned __int8 v11; // al
  unsigned __int8 v12; // si
  __int64 v13; // rdx
  char v14; // r8
  unsigned __int8 *v15; // rax
  int v16; // eax
  bool *v17; // rcx
  unsigned int v18; // r10d
  unsigned __int8 *v19; // r9
  __int64 v20; // r11
  __int64 v21; // rbp
  unsigned int v22; // eax
  __int64 v23; // rcx
  __int64 v24; // rdx
  __int64 i; // rdi
  __int64 Prcb; // rax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rsi
  char v30; // r8

  v0 = -1;
  ActiveProcessorCount = KeQueryActiveProcessorCountEx(0xFFFFu);
  if ( !PsIsCurrentThreadInServerSilo() )
  {
    Pool2 = ExAllocatePool2(256LL, 4 * (int)ActiveProcessorCount + 24, 0x704D5050u);
    if ( Pool2 )
    {
      v3 = (unsigned int)ActiveProcessorCount;
      v4 = (void *)ExAllocatePool2(256LL, (unsigned int)ActiveProcessorCount, 0x704D5050u);
      if ( !v4 )
        goto LABEL_12;
      v5 = (void *)ExAllocatePool2(256LL, 2uLL, 0x704D5050u);
      if ( !v5 )
        goto LABEL_10;
      v6 = ExAllocatePool2(256LL, (unsigned int)ActiveProcessorCount, 0x704D5050u);
      v7 = (unsigned __int8 *)v6;
      if ( !v6 )
        goto LABEL_8;
      if ( (unsigned __int8)PopReadSimulateProcessorClasses((unsigned int)ActiveProcessorCount, v6) )
      {
        if ( (_DWORD)ActiveProcessorCount )
        {
          v9 = v7;
          v10 = ActiveProcessorCount;
          do
          {
            v8 = *v9;
            v11 = v0;
            if ( v0 >= (unsigned __int8)v8 )
              v11 = *v9;
            ++v9;
            v0 = v11;
            --v10;
          }
          while ( v10 );
        }
        v12 = 0;
        v13 = (unsigned int)ActiveProcessorCount;
        while ( 1 )
        {
          v14 = 0;
          if ( (_DWORD)ActiveProcessorCount )
          {
            v15 = v7;
            v8 = ActiveProcessorCount;
            do
            {
              if ( *v15 == v0 )
              {
                v14 = 1;
                *v15 = v12;
                v13 = (unsigned int)(v13 - 1);
              }
              ++v15;
              --v8;
            }
            while ( v8 );
          }
          if ( !(_DWORD)v13 )
            break;
          ++v0;
          v8 = (unsigned __int8)(v12 + 1);
          if ( !v14 )
            v8 = v12;
          v12 = v8;
        }
        v16 = PpmHeteroMultiCoreClassesRegValue;
        if ( PpmHeteroMultiCoreClassesRegValue == -1 )
          v16 = v12 >= 2u;
        PpmHeteroMultiCoreClassesEnabled = v16;
        if ( !KeIsMultiCoreClassesEnabled(v8, v13) )
        {
          v12 = v12 != 0;
          if ( (_DWORD)ActiveProcessorCount )
          {
            v17 = (bool *)v7;
            do
            {
              *v17 = *v17;
              ++v17;
              --v3;
            }
            while ( v3 );
          }
        }
        *(_QWORD *)(Pool2 + 8) = v4;
        v18 = 0;
        *(_QWORD *)(Pool2 + 16) = v5;
        v4 = 0LL;
        v5 = 0LL;
        *(_DWORD *)Pool2 = ActiveProcessorCount;
        *(_DWORD *)(Pool2 + 4) = 1;
        if ( (_DWORD)ActiveProcessorCount )
        {
          v19 = v7;
          v20 = 0LL;
          do
          {
            v21 = 0LL;
            *(_BYTE *)(v20 + *(_QWORD *)(Pool2 + 8)) = *v19;
            v22 = *(_DWORD *)(Pool2 + 4);
            if ( v22 )
            {
              do
              {
                v23 = *(_QWORD *)(Pool2 + 16);
                v24 = v18 * v22 + (unsigned int)v21;
                *(_BYTE *)(Pool2 + 4 * v24 + 25) = *v19;
                *(_BYTE *)(Pool2 + 4 * v24 + 24) = v12 - *v19;
                *(_BYTE *)(v23 + 2 * v21) = v12;
                *(_BYTE *)(v23 + 2 * v21 + 1) = v12;
                v21 = (unsigned int)(v21 + 1);
                v22 = *(_DWORD *)(Pool2 + 4);
              }
              while ( (unsigned int)v21 < v22 );
            }
            ++v18;
            ++v20;
            ++v19;
          }
          while ( v18 < (unsigned int)ActiveProcessorCount );
        }
        PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock);
        for ( i = 0LL; (unsigned int)i < *(_DWORD *)Pool2; i = (unsigned int)(i + 1) )
        {
          Prcb = KeGetPrcb(i);
          v28 = *(_QWORD *)(Pool2 + 8);
          v29 = Prcb;
          v30 = *(_BYTE *)(i + v28);
          *(_BYTE *)(Prcb + 34059) = v30;
          if ( v30 )
          {
            if ( !KeIsMultiCoreClassesEnabled(v28, v27) )
              *(_BYTE *)(v29 + 34059) = 1;
            if ( !PoDetectedHeteroSystem )
              PoDetectedHeteroSystem = 1;
          }
        }
        PpmReleaseLock(&PpmPerfPolicyLock);
        PpmHeteroCapabilitySimulation = Pool2;
        Pool2 = 0LL;
      }
      ExFreePoolWithTag(v7, 0x704D5050u);
      if ( v5 )
LABEL_8:
        ExFreePoolWithTag(v5, 0x704D5050u);
      if ( v4 )
LABEL_10:
        ExFreePoolWithTag(v4, 0x704D5050u);
      if ( Pool2 )
LABEL_12:
        ExFreePoolWithTag((PVOID)Pool2, 0x704D5050u);
    }
  }
}
