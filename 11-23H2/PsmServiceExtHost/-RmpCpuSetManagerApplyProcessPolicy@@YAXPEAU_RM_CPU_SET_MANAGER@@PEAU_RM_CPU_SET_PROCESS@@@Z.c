/*
 * XREFs of ?RmpCpuSetManagerApplyProcessPolicy@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_PROCESS@@@Z @ 0x180085FD8
 * Callers:
 *     ?RmpCpuSetManagerApplyAllPolicyChanges@@YAXPEAU_RM_CPU_SET_MANAGER@@@Z @ 0x18004626C (-RmpCpuSetManagerApplyAllPolicyChanges@@YAXPEAU_RM_CPU_SET_MANAGER@@@Z.c)
 *     ?RmpCpuSetManagerRegisterProcessWithAllocation@@YAJPEAU_RM_CPU_SET_CLIENT_CONTEXT@@PEAXPEAU_RM_CPU_SET_ALLOCATION@@PEAPEAU_RM_CPU_SET_PROCESS_REGISTRATION@@@Z @ 0x180087540 (-RmpCpuSetManagerRegisterProcessWithAllocation@@YAJPEAU_RM_CPU_SET_CLIENT_CONTEXT@@PEAXPEAU_RM_C.c)
 * Callees:
 *     _tlgKeywordOn @ 0x180028870 (_tlgKeywordOn.c)
 *     ?RmpSystemSetProcessAllowedCpuSets@@YAJPEAXPEA_K@Z @ 0x1800452BC (-RmpSystemSetProcessAllowedCpuSets@@YAJPEAXPEA_K@Z.c)
 *     __security_check_cookie @ 0x1800494C0 (__security_check_cookie.c)
 *     memset_0 @ 0x1800534BA (memset_0.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3@Z @ 0x180054F26 (--$Write@U-$_tlgWrapperByVal@$03@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUI.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U?$_tlgWrapperArray@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3AEBU?$_tlgWrapperArray@$07@@@Z @ 0x180085BE0 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U-$_tlgWrapperArray@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 *     ?RmpCpuSetManagerDestroyProcess@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_PROCESS@@@Z @ 0x180086424 (-RmpCpuSetManagerDestroyProcess@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_PROCESS@@@Z.c)
 */

void __fastcall RmpCpuSetManagerApplyProcessPolicy(struct _RM_CPU_SET_MANAGER *a1, struct _RM_CPU_SET_PROCESS *a2)
{
  char *v2; // rax
  __int64 v4; // rdx
  char **v6; // rcx
  _BYTE *v7; // rdi
  struct _RM_CPU_SET_PROCESS *i; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // r8
  _QWORD *v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // r8
  __int64 v17; // r9
  int v18; // [rsp+40h] [rbp-C0h] BYREF
  int v19; // [rsp+44h] [rbp-BCh] BYREF
  _BYTE *v20; // [rsp+48h] [rbp-B8h] BYREF
  __int16 v21; // [rsp+50h] [rbp-B0h]
  _BYTE v22[256]; // [rsp+60h] [rbp-A0h] BYREF

  v2 = (char *)a2 + 40;
  v4 = *((_QWORD *)a2 + 5);
  if ( *(char **)(v4 + 8) != v2 || (v6 = (char **)*((_QWORD *)v2 + 1), *v6 != v2) )
    __fastfail(3u);
  *v6 = (char *)v4;
  *(_QWORD *)(v4 + 8) = v6;
  *(_OWORD *)v2 = 0LL;
  memset_0(v22, 0, sizeof(v22));
  v7 = 0LL;
  for ( i = (struct _RM_CPU_SET_PROCESS *)*((_QWORD *)a2 + 3);
        i != (struct _RM_CPU_SET_PROCESS *)((char *)a2 + 24);
        i = *(struct _RM_CPU_SET_PROCESS **)i )
  {
    v9 = *((_QWORD *)i - 3);
    if ( *(_DWORD *)(v9 + 360) )
    {
      v10 = 32LL;
      v11 = v9 - (_QWORD)v22;
      v12 = v22;
      do
      {
        *v12 |= *(_QWORD *)((char *)v12 + v11 + 104);
        ++v12;
        --v10;
      }
      while ( v10 );
      v7 = v22;
    }
  }
  RmpSystemSetProcessAllowedCpuSets(*((HANDLE *)a2 + 2), v7);
  if ( v7 )
  {
    if ( (unsigned int)dword_1800DB1E0 > 4 && tlgKeywordOn((__int64)&dword_1800DB1E0, 1LL) )
    {
      v18 = *((_DWORD *)a2 + 14);
      v20 = v7;
      v21 = 32;
      v19 = v14;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperArray<8>>(
        v13,
        byte_1800C48D9,
        v14,
        v15,
        (__int64)&v19,
        (__int64)&v18,
        (__int64 *)&v20);
    }
  }
  else if ( (unsigned int)dword_1800DB1E0 > 4 && tlgKeywordOn((__int64)&dword_1800DB1E0, 1LL) )
  {
    v19 = *((_DWORD *)a2 + 14);
    v18 = v16;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (__int64)&dword_1800DB1E0,
      byte_1800C4B3C,
      v16,
      v17,
      (__int64)&v18,
      (__int64)&v19);
  }
  if ( !*((_DWORD *)a2 + 15) )
    RmpCpuSetManagerDestroyProcess(a1, a2);
}
