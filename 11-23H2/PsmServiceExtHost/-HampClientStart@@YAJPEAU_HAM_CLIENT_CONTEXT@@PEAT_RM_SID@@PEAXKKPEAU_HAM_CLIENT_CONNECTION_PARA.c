/*
 * XREFs of ?HampClientStart@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAT_RM_SID@@PEAXKKPEAU_HAM_CLIENT_CONNECTION_PARAMETERS@@@Z @ 0x18004E6A0
 * Callers:
 *     ?HampClientCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@KPEAT_RM_SID@@PEAXKW4_HAM_CLIENT_TYPE@@KPEAU_HAM_LOCAL_CALLBACKS@@2PEAU_HAM_CLIENT_CONNECTION_PARAMETERS@@PEAPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x18004DCE8 (-HampClientCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@KPEAT_RM_SID@@PEAXKW4_HAM_CLIENT_TYPE@@KPEAU_H.c)
 * Callees:
 *     RmpWnfCreateStateNameForClient @ 0x180005AA8 (RmpWnfCreateStateNameForClient.c)
 *     CemRcObjectDereference @ 0x18000BFF0 (CemRcObjectDereference.c)
 *     RmpWnfAllocateAndInitializePendingCallbackList @ 0x180012604 (RmpWnfAllocateAndInitializePendingCallbackList.c)
 *     ?HampClientTypeReceivesCallbacks@@YAKW4_HAM_CLIENT_TYPE@@@Z @ 0x180013CBC (-HampClientTypeReceivesCallbacks@@YAKW4_HAM_CLIENT_TYPE@@@Z.c)
 *     ?HampClientReleaseLockExclusive@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x1800173FC (-HampClientReleaseLockExclusive@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z.c)
 *     ?HampClientAcquireLockExclusive@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x180017438 (-HampClientAcquireLockExclusive@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z.c)
 *     _tlgKeywordOn @ 0x180028870 (_tlgKeywordOn.c)
 *     ?RmpSystemOpenProcess@@YAJPEAPEAXKK@Z @ 0x18002B254 (-RmpSystemOpenProcess@@YAJPEAPEAXKK@Z.c)
 *     ?RmpSystemDuplicateHandle@@YAJPEAXKPEAPEAX@Z @ 0x180041C14 (-RmpSystemDuplicateHandle@@YAJPEAXKPEAPEAX@Z.c)
 *     ?HampClientSerializeActivities@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAU_HAM_CLIENT_CONNECTION_PARAMETERS@@@Z @ 0x18004E4E4 (-HampClientSerializeActivities@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAU_HAM_CLIENT_CONNECTION_PARAMETER.c)
 *     ?HampClientValidateTokens@@YAJPEAX0@Z @ 0x18004E9E4 (-HampClientValidateTokens@@YAJPEAX0@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3@Z @ 0x180054F26 (--$Write@U-$_tlgWrapperByVal@$03@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUI.c)
 */

__int64 __fastcall HampClientStart(
        struct _HAM_CLIENT_CONTEXT *a1,
        PSID a2,
        void *a3,
        unsigned int a4,
        unsigned int a5,
        struct _HAM_CLIENT_CONNECTION_PARAMETERS *a6)
{
  int v10; // r13d
  __int64 v11; // rdx
  int StateNameForClient; // ebx
  int v13; // esi
  HANDLE *v14; // r14
  void *v15; // rdx
  int v16; // ecx
  int v17; // ecx
  int v18; // ecx
  int v19; // ecx
  unsigned int v20; // esi
  unsigned int v21; // r8d
  void *v22; // rcx
  struct _HAM_CLIENT_CONNECTION_PARAMETERS *v23; // rbp
  int v24; // ecx
  int v25; // r8d
  int v26; // r9d
  bool v27; // cf
  int v28; // eax
  __int64 v29; // rcx
  int v31; // [rsp+30h] [rbp-38h] BYREF
  int v32[3]; // [rsp+34h] [rbp-34h] BYREF
  int v33; // [rsp+70h] [rbp+8h] BYREF

  v10 = 0;
  HampClientAcquireLockExclusive(a1);
  if ( *((_DWORD *)a1 + 50) )
  {
    if ( WaitForSingleObject(*((HANDLE *)a1 + 24), 0) )
    {
      StateNameForClient = -1073741504;
      v13 = 256;
LABEL_42:
      HampClientReleaseLockExclusive(a1, v11);
      if ( (unsigned int)dword_1800DB218 > 4 && tlgKeywordOn((__int64)&dword_1800DB218, 8LL) )
      {
        v31 = v13;
        v32[0] = StateNameForClient;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
          v24,
          (unsigned int)&unk_1800C2BB8,
          v25,
          v26,
          (__int64)v32,
          (__int64)&v31);
      }
      return (unsigned int)StateNameForClient;
    }
    v33 = *((_DWORD *)a1 + 54);
    do
    {
      HampClientReleaseLockExclusive(a1, v11);
      RtlWaitOnAddress((char *)a1 + 216, &v33, 4LL);
      HampClientAcquireLockExclusive(a1);
    }
    while ( *((_DWORD *)a1 + 54) == v33 );
    if ( *((_DWORD *)a1 + 50) )
    {
      StateNameForClient = -1073741504;
      v13 = 512;
      goto LABEL_42;
    }
  }
  if ( *((_DWORD *)a1 + 40) != a5 )
  {
    StateNameForClient = -1073741504;
    v13 = 768;
    goto LABEL_42;
  }
  v14 = (HANDLE *)((char *)a1 + 184);
  v15 = (void *)*((_QWORD *)a1 + 23);
  if ( v15 )
  {
    StateNameForClient = HampClientValidateTokens(a3, v15);
    if ( StateNameForClient < 0 )
    {
      v13 = 1024;
      goto LABEL_42;
    }
  }
  if ( !HampClientTypeReceivesCallbacks(*((_BYTE *)a1 + 164)) || (*((_BYTE *)a1 + 144) & 1) != 0 )
    goto LABEL_28;
  if ( !v16 || (v17 = v16 - 1) == 0 )
  {
LABEL_22:
    v20 = 64;
    goto LABEL_23;
  }
  v18 = v17 - 1;
  if ( v18 )
  {
    v19 = v18 - 1;
    if ( v19 )
    {
      if ( v19 == 3 )
      {
        v20 = 544;
LABEL_23:
        v21 = 0;
        goto LABEL_24;
      }
LABEL_28:
      v20 = 0;
      goto LABEL_29;
    }
    goto LABEL_22;
  }
  v20 = 64;
  v21 = 1;
LABEL_24:
  StateNameForClient = RmpWnfCreateStateNameForClient(a2, v20, v21, (struct _WNF_STATE_NAME *)a1 + 15);
  if ( StateNameForClient < 0 )
  {
    v13 = 1280;
    goto LABEL_42;
  }
  StateNameForClient = RmpWnfAllocateAndInitializePendingCallbackList((_QWORD *)a1 + 16);
  if ( StateNameForClient < 0 )
  {
    v13 = 1536;
    goto LABEL_42;
  }
LABEL_29:
  if ( *v14 )
    NtClose(*v14);
  if ( a3 )
  {
    StateNameForClient = RmpSystemDuplicateHandle(a3, 8u, (PHANDLE)a1 + 23);
    if ( StateNameForClient < 0 )
    {
      v13 = 1792;
      goto LABEL_42;
    }
  }
  v22 = (void *)*((_QWORD *)a1 + 24);
  if ( v22 )
    NtClose(v22);
  if ( a4 )
  {
    StateNameForClient = RmpSystemOpenProcess((void **)a1 + 24, 0x101000u, a4);
    if ( StateNameForClient < 0 )
    {
      v13 = 2048;
      goto LABEL_42;
    }
  }
  v23 = a6;
  if ( !*((_BYTE *)a1 + 164) )
  {
    StateNameForClient = HampClientSerializeActivities(a1, a6);
    if ( StateNameForClient < 0 )
    {
      v13 = 2304;
      goto LABEL_42;
    }
  }
  v27 = *((_WORD *)a1 + 110) != 0;
  *((_DWORD *)a1 + 44) = a4;
  *((_DWORD *)a1 + 50) = 2 - v27;
  v28 = *((_DWORD *)a1 + 36);
  if ( (v28 & 2) != 0 )
  {
    v10 = 1;
    *((_DWORD *)a1 + 36) = v28 & 0xFFFFFFFD;
  }
  if ( _InterlockedIncrement64((volatile signed __int64 *)a1 + 3) <= 1 )
    __fastfail(0xEu);
  if ( v23 && v20 )
    *((_QWORD *)v23 + 3) = *((_QWORD *)a1 + 15);
  HampClientReleaseLockExclusive(a1, v11);
  v29 = *((_QWORD *)a1 + 26);
  if ( v29 )
    TpWaitForTimer(v29, 1LL);
  StateNameForClient = 0;
  if ( v10 )
    CemRcObjectDereference(a1);
  return (unsigned int)StateNameForClient;
}
