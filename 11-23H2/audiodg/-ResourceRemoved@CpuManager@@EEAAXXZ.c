/*
 * XREFs of ?ResourceRemoved@CpuManager@@EEAAXXZ @ 0x1400551E0
 * Callers:
 *     <none>
 * Callees:
 *     memset_0 @ 0x140029234 (memset_0.c)
 */

void __fastcall CpuManager::ResourceRemoved(CpuManager *this)
{
  HANDLE CurrentProcess; // rax
  __int64 v3; // rdx
  _OWORD *v4; // rcx
  _OWORD *v5; // rax
  __int128 v6; // xmm1
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int64 v13; // rax
  _BYTE v14[280]; // [rsp+30h] [rbp-118h] BYREF

  if ( _InterlockedExchangeAdd((volatile signed __int32 *)this + 68, 0xFFFFFFFF) == 1 )
  {
    CurrentProcess = GetCurrentProcess();
    NtSetInformationProcess(CurrentProcess, ProcessVmCounters|0x40, 0LL, 0);
    NtSetSystemInformation(SystemPlugPlayBusInformation|0x80, 0LL, 0);
    memset_0(v14, 0, 0x108uLL);
    v3 = 2LL;
    v4 = (_OWORD *)((char *)this + 280);
    v5 = v14;
    do
    {
      v6 = v5[1];
      *v4 = *v5;
      v7 = v5[2];
      v4[1] = v6;
      v8 = v5[3];
      v4[2] = v7;
      v9 = v5[4];
      v4[3] = v8;
      v10 = v5[5];
      v4[4] = v9;
      v11 = v5[6];
      v4[5] = v10;
      v12 = v5[7];
      v5 += 8;
      v4[6] = v11;
      v4 += 8;
      *(v4 - 1) = v12;
      --v3;
    }
    while ( v3 );
    v13 = *(_QWORD *)v5;
    *((_DWORD *)this + 140) = -1;
    *(_QWORD *)v4 = v13;
    *((_OWORD *)this + 34) = 0LL;
    RtlPublishWnfStateData(WNF_AUDC_CPUSET_ID_SYSTEM, 0LL, (char *)this + 560, 4LL, 0LL);
  }
}
