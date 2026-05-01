/*
 * XREFs of ?RmpGameModeTryApplyCpuSetAllocation@@YAJPEAU_RM_GAME_MODE_CONTEXT@@PEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z @ 0x18008BE20
 * Callers:
 *     <none>
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@33@Z @ 0x180006418 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180010950 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x1800109D0 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     _tlgKeywordOn @ 0x18002D67C (_tlgKeywordOn.c)
 *     ?RmpSystemSetProcessDefaultCpuSets@@YAJPEAXPEA_K@Z @ 0x18004B4D8 (-RmpSystemSetProcessDefaultCpuSets@@YAJPEAXPEA_K@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3@Z @ 0x180051542 (--$Write@U-$_tlgWrapperByVal@$03@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUI.c)
 *     ?RmpCpuSetManagerRegisterProcessWithAllocation@@YAJPEAU_RM_CPU_SET_CLIENT_CONTEXT@@PEAXPEAU_RM_CPU_SET_ALLOCATION@@PEAPEAU_RM_CPU_SET_PROCESS_REGISTRATION@@@Z @ 0x180089C00 (-RmpCpuSetManagerRegisterProcessWithAllocation@@YAJPEAU_RM_CPU_SET_CLIENT_CONTEXT@@PEAXPEAU_RM_C.c)
 *     ?RmpCpuSetManagerReleaseProcessRegistrationEx@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_PROCESS_REGISTRATION@@K@Z @ 0x180089F60 (-RmpCpuSetManagerReleaseProcessRegistrationEx@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_PROCE.c)
 *     ?RmpCpuSetManagerSetProcessDefaultMaskForGameMode@@YAJPEAU_RM_CPU_SET_PROCESS_REGISTRATION@@K@Z @ 0x18008A03C (-RmpCpuSetManagerSetProcessDefaultMaskForGameMode@@YAJPEAU_RM_CPU_SET_PROCESS_REGISTRATION@@K@Z.c)
 *     ?RmpSystemSetProcessConstrainedCpuSets@@YAJPEAXE@Z @ 0x180093900 (-RmpSystemSetProcessConstrainedCpuSets@@YAJPEAXE@Z.c)
 */

__int64 __fastcall RmpGameModeTryApplyCpuSetAllocation(
        struct _RM_GAME_MODE_CONTEXT *a1,
        struct _RM_GAME_MODE_RECIPIENT_PROCESS *a2)
{
  int v2; // ebx
  int v5; // esi
  char v6; // r12
  __int64 v7; // r8
  __int64 v8; // r9
  struct _RM_CPU_SET_PROCESS_REGISTRATION *v9; // r15
  unsigned int v10; // r14d
  int v11; // r14d
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 *v14; // rcx
  __int64 v15; // rdx
  _OWORD *v16; // rax
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  __int128 v22; // xmm0
  __int128 v23; // xmm1
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v29; // [rsp+40h] [rbp-C0h] BYREF
  int v30; // [rsp+188h] [rbp+88h] BYREF
  int v31; // [rsp+190h] [rbp+90h] BYREF
  PVOID P; // [rsp+198h] [rbp+98h] BYREF

  P = 0LL;
  v2 = 0;
  if ( *((_DWORD *)a2 + 26) && (*((_BYTE *)a2 + 144) & 2) == 0 )
  {
    v5 = 255;
    goto LABEL_34;
  }
  v6 = 1;
  RmpAcquireGlobalLock();
  v5 = RmpCpuSetManagerRegisterProcessWithAllocation(
         *((struct _RM_CPU_SET_MANAGER ***)a1 + 5),
         *((void **)a2 + 5),
         *((struct _RM_CPU_SET_ALLOCATION **)a1 + 15),
         &P);
  if ( (unsigned int)dword_1800DC1E0 > 4 && tlgKeywordOn((__int64)&dword_1800DC1E0, 1LL) )
  {
    v30 = *((_DWORD *)a2 + 27);
    v31 = v5;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (__int64)&dword_1800DC1E0,
      byte_1800C4328,
      v7,
      v8,
      (__int64)&v31,
      (__int64)&v30);
  }
  v9 = (struct _RM_CPU_SET_PROCESS_REGISTRATION *)P;
  if ( v5 >= 0 )
  {
    v10 = *((_DWORD *)a2 + 35);
    if ( (v10 & 2) == 0 && ((v10 & 1) == 0 || (*((_BYTE *)a2 + 171) & 2) != 0) )
      goto LABEL_16;
    v11 = (v10 >> 3) & 1;
    v5 = RmpCpuSetManagerSetProcessDefaultMaskForGameMode((struct _RM_CPU_SET_PROCESS_REGISTRATION *)P, v11);
    if ( (unsigned int)dword_1800DC1E0 > 4 && tlgKeywordOn((__int64)&dword_1800DC1E0, 1LL) )
    {
      v31 = *((_DWORD *)a2 + 27);
      v30 = v11;
      LODWORD(P) = v5;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        (int)&dword_1800DC1E0,
        (int)&unk_1800C416C,
        v12,
        v13,
        (__int64)&P,
        (__int64)&v31,
        (__int64)&v30);
    }
    if ( v5 >= 0 )
    {
      v2 = 1;
LABEL_16:
      v14 = &v29;
      v15 = 2LL;
      v16 = (_OWORD *)(*((_QWORD *)a1 + 15) + 104LL);
      do
      {
        v17 = v16[1];
        *(_OWORD *)v14 = *v16;
        v18 = v16[2];
        *((_OWORD *)v14 + 1) = v17;
        v19 = v16[3];
        *((_OWORD *)v14 + 2) = v18;
        v20 = v16[4];
        *((_OWORD *)v14 + 3) = v19;
        v21 = v16[5];
        *((_OWORD *)v14 + 4) = v20;
        v22 = v16[6];
        *((_OWORD *)v14 + 5) = v21;
        v23 = v16[7];
        v16 += 8;
        *((_OWORD *)v14 + 6) = v22;
        v14 += 16;
        *((_OWORD *)v14 - 1) = v23;
        --v15;
      }
      while ( v15 );
      RmpReleaseGlobalLock();
      v6 = 0;
      if ( (*((_BYTE *)a2 + 140) & 0x10) == 0 )
        goto LABEL_23;
      v5 = RmpSystemSetProcessConstrainedCpuSets(*((HANDLE *)a2 + 5), 1u);
      if ( (unsigned int)dword_1800DC1E0 > 4 && tlgKeywordOn((__int64)&dword_1800DC1E0, 1LL) )
      {
        v30 = *((_DWORD *)a2 + 27);
        v31 = v5;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
          (__int64)&dword_1800DC1E0,
          byte_1800C412B,
          v24,
          v25,
          (__int64)&v31,
          (__int64)&v30);
      }
      if ( v5 >= 0 )
      {
LABEL_23:
        if ( *((_DWORD *)a2 + 26) != 1 )
          *((_QWORD *)a2 + 15) = v29;
        *((_BYTE *)a2 + 171) |= 2u;
        v2 = 0;
        *((_QWORD *)a2 + 19) = v9;
        v9 = 0LL;
        v5 = 0;
      }
    }
  }
  if ( v9 )
  {
    if ( !v6 )
      RmpAcquireGlobalLock();
    RmpCpuSetManagerReleaseProcessRegistrationEx((struct _RM_CPU_SET_MANAGER *)(*(_QWORD *)a1 + 680LL), v9, 1);
  }
  else if ( !v6 )
  {
    goto LABEL_32;
  }
  RmpReleaseGlobalLock();
LABEL_32:
  if ( v2 )
    v5 = RmpSystemSetProcessDefaultCpuSets(*((HANDLE *)a2 + 5), 0LL);
LABEL_34:
  if ( (unsigned int)dword_1800DC1E0 > 4 && tlgKeywordOn((__int64)&dword_1800DC1E0, 1LL) )
  {
    v30 = *((_DWORD *)a2 + 27);
    v31 = v5;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (__int64)&dword_1800DC1E0,
      byte_1800C41B3,
      v26,
      v27,
      (__int64)&v31,
      (__int64)&v30);
  }
  return (unsigned int)v5;
}
