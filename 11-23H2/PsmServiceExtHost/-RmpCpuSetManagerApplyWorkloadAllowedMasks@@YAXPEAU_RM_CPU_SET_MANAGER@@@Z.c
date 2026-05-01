/*
 * XREFs of ?RmpCpuSetManagerApplyWorkloadAllowedMasks@@YAXPEAU_RM_CPU_SET_MANAGER@@@Z @ 0x180046728
 * Callers:
 *     ?RmpCpuSetManagerApplyAllPolicyChanges@@YAXPEAU_RM_CPU_SET_MANAGER@@@Z @ 0x18004626C (-RmpCpuSetManagerApplyAllPolicyChanges@@YAXPEAU_RM_CPU_SET_MANAGER@@@Z.c)
 * Callees:
 *     _tlgKeywordOn @ 0x180028870 (_tlgKeywordOn.c)
 *     ?RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x180032500 (-RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     ?RmpObjectTableEnumerationGetNext@@YAPEAU_RM_OBJECT_HEADER@@PEAU_RM_OBJECT_TABLE_ENUMERATION_CONTEXT@@@Z @ 0x180046818 (-RmpObjectTableEnumerationGetNext@@YAPEAU_RM_OBJECT_HEADER@@PEAU_RM_OBJECT_TABLE_ENUMERATION_CON.c)
 *     ?RmpSystemSetWorkloadAllowedCpuSets@@YAJPEA_KW4_THREAD_WORKLOAD_CLASS@@@Z @ 0x18004688C (-RmpSystemSetWorkloadAllowedCpuSets@@YAJPEA_KW4_THREAD_WORKLOAD_CLASS@@@Z.c)
 *     ?RmpObjectTableEnumerationBegin@@YAXPEAU_RM_OBJECT_TABLE@@PEAU_RM_OBJECT_TABLE_ENUMERATION_CONTEXT@@@Z @ 0x18004690C (-RmpObjectTableEnumerationBegin@@YAXPEAU_RM_OBJECT_TABLE@@PEAU_RM_OBJECT_TABLE_ENUMERATION_CONTE.c)
 *     IsNotifyGameModeExtensionRecipientsPresentPresent @ 0x180049EB4 (IsNotifyGameModeExtensionRecipientsPresentPresent.c)
 *     memset_0 @ 0x1800534BA (memset_0.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3@Z @ 0x180054F26 (--$Write@U-$_tlgWrapperByVal@$03@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUI.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U?$_tlgWrapperArray@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3AEBU?$_tlgWrapperArray@$07@@@Z @ 0x180085BE0 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U-$_tlgWrapperArray@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 */

void __fastcall RmpCpuSetManagerApplyWorkloadAllowedMasks(struct _RM_CPU_SET_MANAGER *a1)
{
  int v2; // r15d
  struct _RM_OBJECT_HEADER *i; // rax
  struct _RM_OBJECT_HEADER *v4; // rdx
  unsigned int v5; // eax
  unsigned int v6; // ecx
  unsigned int v7; // ebx
  unsigned int v8; // edx
  int v9; // edi
  int v10; // ecx
  int v11; // r8d
  int v12; // r9d
  unsigned int v13; // r8d
  unsigned int v14; // ecx
  __int64 v15; // r11
  unsigned __int64 v16; // rax
  _QWORD *v17; // r9
  char *v18; // rsi
  int v19; // ecx
  int v20; // r8d
  int v21; // r9d
  int v22; // ecx
  int v23; // r8d
  int v24; // r9d
  char *v25; // [rsp+40h] [rbp-20h] BYREF
  __int16 v26; // [rsp+48h] [rbp-18h]
  int v27; // [rsp+A8h] [rbp+48h] BYREF
  int v28; // [rsp+B0h] [rbp+50h] BYREF

  if ( !(unsigned __int8)IsNotifyGameModeExtensionRecipientsPresentPresent(a1) )
  {
    memset_0((char *)a1 + 856, 0, 0x200uLL);
    v2 = 0;
    RmpObjectTableEnumerationBegin(
      (struct _RM_CPU_SET_MANAGER *)((char *)a1 + 24),
      (struct _RM_OBJECT_TABLE_ENUMERATION_CONTEXT *)&v25);
    for ( i = RmpObjectTableEnumerationGetNext((struct _RM_OBJECT_TABLE_ENUMERATION_CONTEXT *)&v25);
          ;
          i = RmpObjectTableEnumerationGetNext((struct _RM_OBJECT_TABLE_ENUMERATION_CONTEXT *)&v25) )
    {
      v4 = i;
      if ( !i )
        break;
      v13 = *((_DWORD *)i + 91);
      if ( v13 )
      {
        v27 = v13 | v2;
        do
        {
          _BitScanForward(&v14, v13);
          v15 = 32LL;
          v16 = (unsigned __int64)v14 << 8;
          v17 = (_QWORD *)((char *)a1 + v16 + 856);
          do
          {
            *v17 |= *(_QWORD *)((char *)v17 + (struct _RM_OBJECT_HEADER *)((char *)v4 - v16) - a1 - 752);
            ++v17;
            --v15;
          }
          while ( v15 );
          v13 &= ~(1 << v14);
        }
        while ( v13 );
        v2 = v27;
      }
      RmpObjectRelease(v4);
    }
    RtlReleaseSRWLockShared(v25 + 16);
    v5 = 0;
    v6 = 0;
    v7 = 0;
    v8 = 0;
    do
    {
      if ( v5 )
      {
        if ( _bittest(&v2, v6) )
        {
          v18 = (char *)a1 + 256 * (unsigned __int64)v8 + 856;
          v9 = RmpSystemSetWorkloadAllowedCpuSets(v18, v7);
          if ( (unsigned int)dword_1800DB1E0 > 4 && tlgKeywordOn((__int64)&dword_1800DB1E0, 1LL) )
          {
            v25 = v18;
            v26 = 32;
            v27 = v7;
            v28 = v9;
            _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperArray<8>>(
              v19,
              (unsigned int)&unk_1800C4977,
              v20,
              v21,
              (__int64)&v28,
              (__int64)&v27,
              (__int64)&v25);
          }
        }
        else
        {
          v9 = RmpSystemSetWorkloadAllowedCpuSets(0LL, v7);
          if ( (unsigned int)dword_1800DB1E0 > 4 && tlgKeywordOn((__int64)&dword_1800DB1E0, 1LL) )
          {
            v27 = v7;
            v28 = v9;
            _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
              v10,
              (unsigned int)&unk_1800C49C2,
              v11,
              v12,
              (__int64)&v28,
              (__int64)&v27);
          }
        }
        if ( v9 < 0 && (unsigned int)dword_1800DB1E0 > 4 && tlgKeywordOn((__int64)&dword_1800DB1E0, 1LL) )
        {
          v27 = v7;
          v28 = v9;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
            v22,
            (unsigned int)&unk_1800C4A09,
            v23,
            v24,
            (__int64)&v28,
            (__int64)&v27);
        }
      }
      v5 = ++v7;
      v6 = v7;
      v8 = v7;
    }
    while ( v7 < 2 );
  }
}
