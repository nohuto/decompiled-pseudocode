/*
 * XREFs of ndisWdfOpenConfiguration @ 0x1C012B794
 * Callers:
 *     NdisOpenConfigurationEx @ 0x1C001D060 (NdisOpenConfigurationEx.c)
 * Callees:
 *     NdisConvertNtStatusToNdisStatus @ 0x1C001C190 (NdisConvertNtStatusToNdisStatus.c)
 *     memset @ 0x1C0038700 (memset.c)
 *     ??1?$unique_ptr@VKnobCollection@@U?$KFreePool@VKnobCollection@@@@@wistd@@QEAA@XZ @ 0x1C005D038 (--1-$unique_ptr@VKnobCollection@@U-$KFreePool@VKnobCollection@@@@@wistd@@QEAA@XZ.c)
 *     ndisWdfOpenConfigurationKey @ 0x1C012B910 (ndisWdfOpenConfigurationKey.c)
 */

__int64 __fastcall ndisWdfOpenConfiguration(__int64 a1, _QWORD *a2)
{
  _OWORD *Pool2; // rax
  _OWORD *v5; // rdi
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int64 v13; // rax
  int v14; // ebx
  _OWORD v15[9]; // [rsp+50h] [rbp-A8h] BYREF
  void *v16; // [rsp+110h] [rbp+18h] BYREF

  Pool2 = (_OWORD *)ExAllocatePool2(64LL, 176LL, 1751336014);
  v5 = Pool2;
  if ( Pool2 )
  {
    v16 = Pool2;
    *Pool2 = 0LL;
    Pool2[1] = 0LL;
    *((_QWORD *)Pool2 + 4) = 0LL;
    memset(v15, 0, 0x88uLL);
    v7 = v15[1];
    *(_OWORD *)((char *)v5 + 40) = v15[0];
    v8 = v15[2];
    *(_OWORD *)((char *)v5 + 56) = v7;
    v9 = v15[3];
    *(_OWORD *)((char *)v5 + 72) = v8;
    v10 = v15[4];
    *(_OWORD *)((char *)v5 + 88) = v9;
    v11 = v15[5];
    *(_OWORD *)((char *)v5 + 104) = v10;
    v12 = v15[6];
    *(_OWORD *)((char *)v5 + 120) = v11;
    *(_OWORD *)((char *)v5 + 136) = v12;
    v13 = *(_QWORD *)&v15[8];
    *(_OWORD *)((char *)v5 + 152) = v15[7];
    *((_QWORD *)v5 + 21) = v13;
    *((_DWORD *)v5 + 24) = 0;
    *((_QWORD *)v5 + 15) = 0LL;
    *((_DWORD *)v5 + 32) = 0;
    *((_QWORD *)v5 + 17) = 0LL;
    *((_QWORD *)v5 + 8) = ndisSaveParameters;
    *((_DWORD *)v5 + 10) = 8913162;
    *((_QWORD *)v5 + 6) = a1;
    *((_DWORD *)v5 + 18) = 20;
    *v5 = 0LL;
    v5[1] = 0LL;
    *((_QWORD *)v5 + 4) = 0LL;
    *(_DWORD *)v5 = 2621707;
    *((_QWORD *)v5 + 2) = (char *)v5 + 40;
    v14 = ndisWdfOpenConfigurationKey(a1);
    if ( v14 )
    {
      wistd::unique_ptr<KnobCollection,KFreePool<KnobCollection>>::~unique_ptr<KnobCollection,KFreePool<KnobCollection>>(&v16);
      return NdisConvertNtStatusToNdisStatus(v14);
    }
    else
    {
      *a2 = v5;
      return 0LL;
    }
  }
  else
  {
    v16 = 0LL;
    wistd::unique_ptr<KnobCollection,KFreePool<KnobCollection>>::~unique_ptr<KnobCollection,KFreePool<KnobCollection>>(&v16);
    return 3221225626LL;
  }
}
