/*
 * XREFs of ?RmpCpuSetManagerApplySystemAllowedMask@@YAJPEAU_RM_CPU_SET_MANAGER@@@Z @ 0x1800462F0
 * Callers:
 *     ?RmpCpuSetManagerApplyAllPolicyChanges@@YAXPEAU_RM_CPU_SET_MANAGER@@@Z @ 0x18004626C (-RmpCpuSetManagerApplyAllPolicyChanges@@YAXPEAU_RM_CPU_SET_MANAGER@@@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180028480 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     _tlgKeywordOn @ 0x180028870 (_tlgKeywordOn.c)
 *     ?RmpSystemSetSystemAllowedCpuSets@@YAJPEA_K@Z @ 0x180046390 (-RmpSystemSetSystemAllowedCpuSets@@YAJPEA_K@Z.c)
 *     __security_check_cookie @ 0x1800494C0 (__security_check_cookie.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperArray@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperArray@$07@@@Z @ 0x180085C84 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperArray@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgPr.c)
 */

__int64 __fastcall RmpCpuSetManagerApplySystemAllowedMask(struct _RM_CPU_SET_MANAGER *a1)
{
  _DWORD *v1; // rdx
  unsigned int v2; // ebx
  __int64 v4; // r8
  _OWORD *v5; // rax
  _OWORD *v6; // rcx
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
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

  v1 = (_DWORD *)((char *)a1 + 1392);
  if ( *((_DWORD *)a1 + 350) >= *((_DWORD *)a1 + 349) && *v1 == -1 )
  {
    v2 = RmpSystemSetSystemAllowedCpuSets(0LL);
    if ( (unsigned int)dword_1800DB1E0 > 4 && tlgKeywordOn((__int64)&dword_1800DB1E0, 1LL) )
    {
      v24 = 0;
      v22 = (int *)&v18;
      v18 = v2;
      v23 = 4;
      tlgWriteTransfer_EventWriteTransfer(
        (__int64)&dword_1800DB1E0,
        (unsigned __int8 *)dword_1800C4A91,
        0LL,
        0LL,
        3u,
        &v21);
    }
  }
  else
  {
    v4 = 2LL;
    v5 = SystemInformation;
    v6 = (_OWORD *)((char *)a1 + 344);
    do
    {
      v7 = v6[1];
      *v5 = *v6;
      v8 = v6[2];
      v5[1] = v7;
      v9 = v6[3];
      v5[2] = v8;
      v10 = v6[4];
      v5[3] = v9;
      v11 = v6[5];
      v5[4] = v10;
      v12 = v6[6];
      v5[5] = v11;
      v13 = v6[7];
      v6 += 8;
      v5[6] = v12;
      v5 += 8;
      *(v5 - 1) = v13;
      --v4;
    }
    while ( v4 );
    if ( *v1 != -1 )
      SystemInformation[(unsigned __int64)(unsigned int)(*v1 - 256) >> 16] &= ~(1LL << *v1);
    v2 = RmpSystemSetSystemAllowedCpuSets(SystemInformation);
    if ( (unsigned int)dword_1800DB1E0 > 4 && tlgKeywordOn((__int64)&dword_1800DB1E0, 1LL) )
    {
      v18 = v2;
      v19 = SystemInformation;
      v20 = v14 + 31;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperArray<8>>(
        v15,
        (unsigned int)&unk_1800C4860,
        v16,
        v17,
        (__int64)&v18,
        (__int64)&v19);
    }
  }
  return v2;
}
