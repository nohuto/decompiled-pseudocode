/*
 * XREFs of ?UpdateCpuQuery@Cpu@@QEAAJPEAN@Z @ 0x180413690
 * Callers:
 *     ?PerfDataCollectionThread@GamingOverlayExperienceManager@@AEAAJXZ @ 0x180404644 (-PerfDataCollectionThread@GamingOverlayExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     swscanf_s @ 0x1801C7748 (swscanf_s.c)
 *     memcpy_s_1 @ 0x1802D139C (memcpy_s_1.c)
 *     ?ParseBuffer@Cpu@@QEAAJPEAXPEAKPEAPEAUPCW_INSTANCE_BUFFER@@@Z @ 0x1802D3B9A (-ParseBuffer@Cpu@@QEAAJPEAXPEAKPEAPEAUPCW_INSTANCE_BUFFER@@@Z.c)
 *     ?CalcProcessorUtilityPercentage@Cpu@@QEAAN_K0@Z @ 0x180413220 (-CalcProcessorUtilityPercentage@Cpu@@QEAAN_K0@Z.c)
 */

__int64 __fastcall Cpu::UpdateCpuQuery(Cpu *this, double *a2)
{
  void *v2; // rdx
  Cpu *v3; // rcx
  unsigned int v4; // edi
  __int64 v5; // r10
  struct PCW_INSTANCE_BUFFER *v6; // rsi
  __int64 v7; // r12
  struct PCW_INSTANCE_BUFFER *v8; // r14
  double *v9; // rdi
  int v10; // eax
  unsigned int *v11; // r15
  int v12; // ebx
  unsigned int *v13; // r13
  unsigned int *v14; // r15
  unsigned int *v15; // r13
  int v17; // [rsp+20h] [rbp-28h] BYREF
  unsigned int v18; // [rsp+24h] [rbp-24h]
  struct PCW_INSTANCE_BUFFER *v19; // [rsp+28h] [rbp-20h] BYREF
  struct PCW_INSTANCE_BUFFER *v20; // [rsp+30h] [rbp-18h] BYREF
  unsigned int Destination; // [rsp+90h] [rbp+48h] BYREF
  double *v22; // [rsp+98h] [rbp+50h]
  unsigned int v23; // [rsp+A0h] [rbp+58h] BYREF
  int v24; // [rsp+A8h] [rbp+60h] BYREF

  v22 = a2;
  v2 = (void *)*((_QWORD *)this + 2);
  v19 = 0LL;
  v20 = 0LL;
  v24 = 0;
  v17 = 0;
  v4 = Cpu::ParseBuffer(this, v2, &Destination, &v19);
  if ( !v4 )
  {
    v18 = Cpu::ParseBuffer(v3, *(void **)(v5 + 24), &v23, &v20);
    v4 = v18;
    if ( !v18 && v23 == Destination && Destination )
    {
      v6 = v19;
      v7 = Destination;
      v8 = v20;
      v9 = v22;
      do
      {
        v10 = swscanf_s((const wchar_t *const)v6 + 8, L"%u,%u", &v17, &v24);
        v11 = (unsigned int *)((char *)v6 + *((unsigned int *)v6 + 2));
        v12 = v10;
        v13 = (unsigned int *)((char *)v8 + *((unsigned int *)v8 + 2));
        memcpy_s_1(&Destination, 4uLL, v11 + 2, *((unsigned __int16 *)v11 + 3));
        v14 = (unsigned int *)((char *)v11 + *v11);
        v15 = (unsigned int *)((char *)v13 + *v13);
        if ( !v12 )
          *v9 = fmin(
                  100.0,
                  Cpu::CalcProcessorUtilityPercentage(
                    (Cpu *)*v14,
                    *((_QWORD *)v14 + 1) - *((_QWORD *)v15 + 1),
                    *(unsigned int *)((char *)v14 + *v14 + 8) - *(unsigned int *)((char *)v15 + *v15 + 8)));
        v8 = (struct PCW_INSTANCE_BUFFER *)((char *)v8 + *(unsigned int *)v8);
        v6 = (struct PCW_INSTANCE_BUFFER *)((char *)v6 + *(unsigned int *)v6);
        --v7;
      }
      while ( v7 );
      return v18;
    }
  }
  return v4;
}
