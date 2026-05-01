/*
 * XREFs of ?RmpCpuSetManagerApplyWorkloadAllowedMasks@@YAXPEAU_RM_CPU_SET_MANAGER@@@Z @ 0x18004B170
 * Callers:
 *     ?RmpCpuSetManagerApplyAllPolicyChanges@@YAXPEAU_RM_CPU_SET_MANAGER@@@Z @ 0x18004B0E4 (-RmpCpuSetManagerApplyAllPolicyChanges@@YAXPEAU_RM_CPU_SET_MANAGER@@@Z.c)
 * Callees:
 *     ?RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x1800248A0 (-RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     _tlgKeywordOn @ 0x18002D67C (_tlgKeywordOn.c)
 *     ?RmpSystemSetWorkloadAllowedCpuSets@@YAJPEA_KW4_THREAD_WORKLOAD_CLASS@@@Z @ 0x18004B258 (-RmpSystemSetWorkloadAllowedCpuSets@@YAJPEA_KW4_THREAD_WORKLOAD_CLASS@@@Z.c)
 *     ?RmpObjectTableEnumerationGetNext@@YAPEAU_RM_OBJECT_HEADER@@PEAU_RM_OBJECT_TABLE_ENUMERATION_CONTEXT@@@Z @ 0x18004B2D8 (-RmpObjectTableEnumerationGetNext@@YAPEAU_RM_OBJECT_HEADER@@PEAU_RM_OBJECT_TABLE_ENUMERATION_CON.c)
 *     ?RmpObjectTableEnumerationBegin@@YAXPEAU_RM_OBJECT_TABLE@@PEAU_RM_OBJECT_TABLE_ENUMERATION_CONTEXT@@@Z @ 0x18004B348 (-RmpObjectTableEnumerationBegin@@YAXPEAU_RM_OBJECT_TABLE@@PEAU_RM_OBJECT_TABLE_ENUMERATION_CONTE.c)
 *     IsNotifyGameModeExtensionRecipientsPresentPresent @ 0x18004ECE4 (IsNotifyGameModeExtensionRecipientsPresentPresent.c)
 *     memset_0 @ 0x18005023A (memset_0.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3@Z @ 0x180051542 (--$Write@U-$_tlgWrapperByVal@$03@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUI.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U?$_tlgWrapperArray@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3AEBU?$_tlgWrapperArray@$07@@@Z @ 0x1800882BC (--$Write@U-$_tlgWrapperByVal@$03@@U1@U-$_tlgWrapperArray@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 */

void __fastcall RmpCpuSetManagerApplyWorkloadAllowedMasks(
        struct _RM_CPU_SET_MANAGER *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  int v5; // r12d
  struct _RM_OBJECT_HEADER *Next; // rax
  char *v7; // r9
  unsigned int v8; // ebx
  unsigned int v9; // edi
  int v10; // esi
  int v11; // ecx
  int v12; // r8d
  int v13; // r9d
  unsigned int v14; // edx
  unsigned int v15; // ecx
  __int64 v16; // r11
  unsigned __int64 v17; // rax
  _QWORD *v18; // r8
  __int16 v19; // dx
  int v20; // ecx
  int v21; // r8d
  int v22; // r9d
  int v23; // ecx
  int v24; // r8d
  int v25; // r9d
  char *v26; // [rsp+40h] [rbp-20h] BYREF
  __int16 v27; // [rsp+48h] [rbp-18h]
  int v28; // [rsp+A8h] [rbp+48h] BYREF
  int v29; // [rsp+B0h] [rbp+50h] BYREF

  if ( !(unsigned __int8)IsNotifyGameModeExtensionRecipientsPresentPresent(a1, a2, a3, a4) )
  {
    memset_0((char *)a1 + 856, 0, 0x200uLL);
    v5 = 0;
    RmpObjectTableEnumerationBegin(
      (struct _RM_CPU_SET_MANAGER *)((char *)a1 + 24),
      (struct _RM_OBJECT_TABLE_ENUMERATION_CONTEXT *)&v26);
    while ( 1 )
    {
      Next = RmpObjectTableEnumerationGetNext((struct _RM_OBJECT_TABLE_ENUMERATION_CONTEXT *)&v26);
      v7 = (char *)Next;
      if ( !Next )
        break;
      v14 = *((_DWORD *)Next + 91);
      if ( v14 )
      {
        v28 = v14 | v5;
        do
        {
          _BitScanForward(&v15, v14);
          v16 = 32LL;
          v17 = (unsigned __int64)v15 << 8;
          v18 = (_QWORD *)((char *)a1 + v17 + 856);
          do
          {
            *v18 |= *(_QWORD *)((char *)v18 + &v7[-v17] - (char *)a1 - 752);
            ++v18;
            --v16;
          }
          while ( v16 );
          v14 &= ~(1 << v15);
        }
        while ( v14 );
        v5 = v28;
      }
      RmpObjectRelease(v7);
    }
    RtlReleaseSRWLockShared(v26 + 16);
    v8 = 0;
    v9 = 0;
    do
    {
      if ( v9 )
      {
        if ( _bittest(&v5, v9) )
        {
          v10 = RmpSystemSetWorkloadAllowedCpuSets((char *)a1 + 256 * (unsigned __int64)v9 + 856, v8);
          if ( (unsigned int)dword_1800DC1E0 > 4 && tlgKeywordOn((__int64)&dword_1800DC1E0, 1LL) )
          {
            v26 = (char *)a1 + 256 * (unsigned __int64)v9 + 856;
            v27 = v19 + 31;
            v28 = v8;
            v29 = v10;
            _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperArray<8>>(
              v20,
              (unsigned int)&unk_1800C3ED0,
              v21,
              v22,
              (__int64)&v29,
              (__int64)&v28,
              (__int64)&v26);
          }
        }
        else
        {
          v10 = RmpSystemSetWorkloadAllowedCpuSets(0LL, v8);
          if ( (unsigned int)dword_1800DC1E0 > 4 && tlgKeywordOn((__int64)&dword_1800DC1E0, 1LL) )
          {
            v28 = v8;
            v29 = v10;
            _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
              v11,
              (unsigned int)&unk_1800C3F1B,
              v12,
              v13,
              (__int64)&v29,
              (__int64)&v28);
          }
        }
        if ( v10 < 0 && (unsigned int)dword_1800DC1E0 > 4 )
        {
          if ( tlgKeywordOn((__int64)&dword_1800DC1E0, 1LL) )
          {
            v28 = v8;
            v29 = v10;
            _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
              v23,
              (unsigned int)&unk_1800C3F62,
              v24,
              v25,
              (__int64)&v29,
              (__int64)&v28);
          }
        }
      }
      v8 = v9 + 1;
      v9 = v8;
    }
    while ( v8 < 2 );
  }
}
