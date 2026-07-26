/*
 * XREFs of ndisWdfOpenConfiguration @ 0x1C011FAB0
 * Callers:
 *     NdisOpenConfigurationEx @ 0x1C001B190 (NdisOpenConfigurationEx.c)
 * Callees:
 *     NdisConvertNtStatusToNdisStatus @ 0x1C0022160 (NdisConvertNtStatusToNdisStatus.c)
 *     memset @ 0x1C0036340 (memset.c)
 *     ndisWdfOpenConfigurationKey @ 0x1C011FC18 (ndisWdfOpenConfigurationKey.c)
 */

__int64 __fastcall ndisWdfOpenConfiguration(__int64 a1, _QWORD *a2)
{
  __int64 Pool2; // rax
  _OWORD *v5; // rbx
  unsigned int v6; // edi
  __int64 v7; // rdi
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int64 v14; // rax
  int v15; // eax
  _OWORD v17[9]; // [rsp+50h] [rbp-98h] BYREF

  Pool2 = ExAllocatePool2(64LL, 176LL, 1751336014);
  v5 = (_OWORD *)Pool2;
  if ( Pool2 )
  {
    v7 = Pool2 + 40;
    memset(v17, 0, 0x88uLL);
    v8 = v17[1];
    *(_OWORD *)v7 = v17[0];
    v9 = v17[2];
    *(_OWORD *)(v7 + 16) = v8;
    v10 = v17[3];
    *(_OWORD *)(v7 + 32) = v9;
    v11 = v17[4];
    *(_OWORD *)(v7 + 48) = v10;
    v12 = v17[5];
    *(_OWORD *)(v7 + 64) = v11;
    v13 = v17[6];
    *(_OWORD *)(v7 + 80) = v12;
    *(_OWORD *)(v7 + 96) = v13;
    v14 = *(_QWORD *)&v17[8];
    *(_OWORD *)(v7 + 112) = v17[7];
    *(_QWORD *)(v7 + 128) = v14;
    *(_DWORD *)(v7 + 56) = 0;
    *(_QWORD *)(v7 + 80) = 0LL;
    *(_DWORD *)(v7 + 88) = 0;
    *(_QWORD *)(v7 + 96) = 0LL;
    *(_QWORD *)(v7 + 24) = ndisSaveParameters;
    *(_DWORD *)v7 = 8913162;
    *(_QWORD *)(v7 + 8) = a1;
    *(_DWORD *)(v7 + 32) = 20;
    *v5 = 0LL;
    v5[1] = 0LL;
    *((_QWORD *)v5 + 4) = 0LL;
    *(_DWORD *)v5 = 2621707;
    *((_QWORD *)v5 + 2) = v7;
    v15 = ndisWdfOpenConfigurationKey(a1);
    if ( !v15 )
    {
      *a2 = v5;
      return 0;
    }
    v6 = NdisConvertNtStatusToNdisStatus(v15);
  }
  else
  {
    v6 = -1073741670;
  }
  if ( v5 )
    ExFreePoolWithTag(v5, 0);
  return v6;
}
