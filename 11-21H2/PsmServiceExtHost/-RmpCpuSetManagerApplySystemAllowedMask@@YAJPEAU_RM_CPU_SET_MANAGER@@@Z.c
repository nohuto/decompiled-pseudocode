/*
 * XREFs of ?RmpCpuSetManagerApplySystemAllowedMask@@YAJPEAU_RM_CPU_SET_MANAGER@@@Z @ 0x18004B398
 * Callers:
 *     ?RmpCpuSetManagerApplyAllPolicyChanges@@YAXPEAU_RM_CPU_SET_MANAGER@@@Z @ 0x18004B0E4 (-RmpCpuSetManagerApplyAllPolicyChanges@@YAXPEAU_RM_CPU_SET_MANAGER@@@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800095C0 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     _tlgKeywordOn @ 0x18002D67C (_tlgKeywordOn.c)
 *     ?RmpSystemSetSystemAllowedCpuSets@@YAJPEA_K@Z @ 0x18004B438 (-RmpSystemSetSystemAllowedCpuSets@@YAJPEA_K@Z.c)
 *     __security_check_cookie @ 0x18004E310 (__security_check_cookie.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperArray@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperArray@$07@@@Z @ 0x180088360 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperArray@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgPr.c)
 */

__int64 __fastcall RmpCpuSetManagerApplySystemAllowedMask(struct _RM_CPU_SET_MANAGER *a1)
{
  unsigned int v1; // ebx
  __int64 v3; // r8
  _OWORD *v4; // rax
  _OWORD *v5; // rdx
  __int128 v6; // xmm1
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  int v13; // eax
  __int16 v14; // dx
  int v15; // ecx
  int v16; // r8d
  int v17; // r9d
  unsigned int v18; // [rsp+30h] [rbp-D0h] BYREF
  _QWORD *v19; // [rsp+38h] [rbp-C8h] BYREF
  __int16 v20; // [rsp+40h] [rbp-C0h]
  struct _EVENT_DATA_DESCRIPTOR v21; // [rsp+48h] [rbp-B8h] BYREF
  int *v22; // [rsp+68h] [rbp-98h]
  int v23; // [rsp+70h] [rbp-90h]
  int v24; // [rsp+74h] [rbp-8Ch]
  _QWORD SystemInformation[32]; // [rsp+80h] [rbp-80h] BYREF

  if ( *((_DWORD *)a1 + 350) >= *((_DWORD *)a1 + 349) && *((_DWORD *)a1 + 348) == -1 )
  {
    v1 = RmpSystemSetSystemAllowedCpuSets(0LL);
    if ( (unsigned int)dword_1800DC1E0 > 4 && tlgKeywordOn((__int64)&dword_1800DC1E0, 1LL) )
    {
      v24 = 0;
      v22 = (int *)&v18;
      v18 = v1;
      v23 = 4;
      tlgWriteTransfer_EventWriteTransfer(
        (__int64)&dword_1800DC1E0,
        (unsigned __int8 *)dword_1800C3FEA,
        0LL,
        0LL,
        3u,
        &v21);
    }
  }
  else
  {
    v3 = 2LL;
    v4 = (_OWORD *)((char *)a1 + 344);
    v5 = SystemInformation;
    do
    {
      v6 = v4[1];
      *v5 = *v4;
      v7 = v4[2];
      v5[1] = v6;
      v8 = v4[3];
      v5[2] = v7;
      v9 = v4[4];
      v5[3] = v8;
      v10 = v4[5];
      v5[4] = v9;
      v11 = v4[6];
      v5[5] = v10;
      v12 = v4[7];
      v4 += 8;
      v5[6] = v11;
      v5 += 8;
      *(v5 - 1) = v12;
      --v3;
    }
    while ( v3 );
    v13 = *((_DWORD *)a1 + 348);
    if ( v13 != -1 )
      SystemInformation[(unsigned __int64)(unsigned int)(v13 - 256) >> 16] &= ~(1LL << v13);
    v1 = RmpSystemSetSystemAllowedCpuSets(SystemInformation);
    if ( (unsigned int)dword_1800DC1E0 > 4 && tlgKeywordOn((__int64)&dword_1800DC1E0, 1LL) )
    {
      v18 = v1;
      v19 = SystemInformation;
      v20 = v14 + 31;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperArray<8>>(
        v15,
        (unsigned int)&unk_1800C3DB9,
        v16,
        v17,
        (__int64)&v18,
        (__int64)&v19);
    }
  }
  return v1;
}
