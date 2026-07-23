/*
 * XREFs of EtwpCovSampSampleBufferProcess @ 0x1409F2DD4
 * Callers:
 *     EtwpCovSampCaptureWorkerThread @ 0x1408A8A90 (EtwpCovSampCaptureWorkerThread.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140231550 (KeLeaveCriticalRegion.c)
 *     ExReleaseRundownProtection_0 @ 0x14028B620 (ExReleaseRundownProtection_0.c)
 *     EtwpCovSampAcquireSamplerRundown @ 0x1408A86BC (EtwpCovSampAcquireSamplerRundown.c)
 *     EtwpCovSampContextAddAddresses @ 0x1408A8CC6 (EtwpCovSampContextAddAddresses.c)
 *     EtwpCovSampContextAddSamples @ 0x1408A8DC0 (EtwpCovSampContextAddSamples.c)
 *     EtwpCovSampStackHashCheck @ 0x1408A9FAC (EtwpCovSampStackHashCheck.c)
 */

void __fastcall EtwpCovSampSampleBufferProcess(__int64 a1, _DWORD *a2)
{
  int v4; // ebp
  unsigned int *v5; // rsi
  int v6; // r15d
  ULONG_PTR v7; // rbx
  int v8; // ecx
  __int64 v9; // rdx
  __int64 v10; // r9
  unsigned int v11; // ecx
  ULONG_PTR BugCheckParameter2; // [rsp+60h] [rbp+18h] BYREF

  BugCheckParameter2 = 0LL;
  if ( (int)EtwpCovSampAcquireSamplerRundown(&BugCheckParameter2) < 0
    || (v4 = 0, v5 = a2 + 18, v6 = 0, (int)a2[14] <= 0) )
  {
    v7 = BugCheckParameter2;
  }
  else
  {
    v7 = BugCheckParameter2;
    do
    {
      if ( v4 + 16 > a2[16] )
        break;
      v8 = v5[1];
      v9 = *v5;
      if ( (_DWORD)v9 != v4 )
        break;
      v10 = HIWORD(v8) & 0x7FFF;
      if ( (unsigned __int16)v8 < (unsigned int)(8 * v10) || (unsigned __int16)v8 + (unsigned int)v9 > a2[15] )
        break;
      if ( v8 >= 0 )
      {
        if ( !(unsigned int)EtwpCovSampStackHashCheck(a1, v9, (unsigned __int8 *)v5 + 8, v10) )
        {
          v7 = BugCheckParameter2;
          EtwpCovSampContextAddAddresses(
            BugCheckParameter2,
            (__int64)KeGetCurrentThread()->ApcState.Process,
            (_QWORD *)v5 + 1,
            *((_WORD *)v5 + 3) & 0x7FFF);
        }
      }
      else
      {
        EtwpCovSampContextAddSamples(v7, (__int64)(v5 + 2), v10);
      }
      v11 = v5[1];
      ++v6;
      v4 += (unsigned __int16)v11;
      v5 = (unsigned int *)((char *)v5 + (unsigned __int16)v11);
    }
    while ( v6 < a2[14] );
  }
  if ( v7 )
  {
    ExReleaseRundownProtection_0(&stru_140C31C60);
    KeLeaveCriticalRegion();
  }
}
