/*
 * XREFs of ?HampWakeContextComputeNextState@@YAXPEAU_HAM_HOST_WAKE_CONTEXT@@T_HAM_HOST_WAKE_CONTEXT_EVENTS@@PEAU_HAM_HOST_WAKE_CONTEXT_WORKER_STATE@@@Z @ 0x180010080
 * Callers:
 *     ?HampWakeContextWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x18000FE00 (-HampWakeContextWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3@Z @ 0x180002B50 (--$Write@U-$_tlgWrapperByVal@$07@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUI.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180028480 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     _tlgKeywordOn @ 0x180028870 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1800494C0 (__security_check_cookie.c)
 */

unsigned __int64 __fastcall HampWakeContextComputeNextState(__int64 a1, char a2, __int64 a3)
{
  unsigned __int8 v6; // al
  unsigned __int64 result; // rax
  __int64 v8; // r8
  __int64 v9; // rcx
  __int64 v10; // rax
  int v11; // r9d
  __int64 v12; // rax
  __int64 v13; // r8
  __int64 v14; // r9
  unsigned __int64 v15; // [rsp+30h] [rbp-59h] BYREF
  __int64 v16; // [rsp+38h] [rbp-51h] BYREF
  __int64 v17; // [rsp+40h] [rbp-49h] BYREF
  char JobInformation[24]; // [rsp+50h] [rbp-39h] BYREF
  __int64 v19; // [rsp+68h] [rbp-21h]
  struct _EVENT_DATA_DESCRIPTOR v20; // [rsp+90h] [rbp+7h] BYREF
  __int64 *v21; // [rsp+B0h] [rbp+27h]
  int v22; // [rsp+B8h] [rbp+2Fh]
  int v23; // [rsp+BCh] [rbp+33h]

  RtlQueryUnbiasedInterruptTime(&v15);
  if ( (a2 & 0x20) != 0 )
  {
    *(_OWORD *)a3 = 0LL;
    *(_OWORD *)(a3 + 16) = 0LL;
    *(_QWORD *)(a3 + 32) = 0LL;
    *(_BYTE *)(a3 + 32) = 1;
    goto LABEL_3;
  }
  v6 = *(_BYTE *)(a1 + 160);
  *(_OWORD *)a3 = *(_OWORD *)(a1 + 128);
  *(_OWORD *)(a3 + 16) = *(_OWORD *)(a1 + 144);
  *(_QWORD *)(a3 + 32) = *(_QWORD *)(a1 + 160);
  if ( ((unsigned __int8)~(v6 >> 1) & ((a2 & 0x19) == 0)) == 0 )
  {
    NtQueryInformationJobObject(*(HANDLE *)(a1 + 112), (JOBOBJECTINFOCLASS)20, JobInformation, 0x40u, 0LL);
    v8 = v19;
    if ( (a2 & 8) != 0 )
    {
      v9 = 0LL;
    }
    else
    {
      v9 = *(_QWORD *)(a1 + 128);
      if ( v19 && !v9 && (*(_BYTE *)(a1 + 184) & 0x70) == 0x10 )
      {
        if ( (unsigned int)dword_1800DB218 > 5 )
        {
          v10 = *(_QWORD *)(a1 + 168);
          v23 = 0;
          v16 = v10;
          v22 = 8;
          v21 = &v16;
          tlgWriteTransfer_EventWriteTransfer((int)&dword_1800DB218, (int)&dword_1800C2F4C, 0, 0, 3u, &v20);
        }
        goto LABEL_3;
      }
    }
    *(_QWORD *)a3 = v19;
    if ( v8 )
    {
      if ( v9 )
      {
        if ( (a2 & 1) != 0 )
        {
          *(_BYTE *)(a3 + 32) |= 2u;
          *(_QWORD *)(a3 + 24) = v15 + 10000LL * *(unsigned int *)(*(_QWORD *)(a1 + 56) + 100LL);
        }
        else if ( v15 >= *(_QWORD *)(a1 + 152) )
        {
          if ( (*(_BYTE *)(a1 + 160) & 2) != 0
            && (unsigned int)dword_1800DB218 > 4
            && (unsigned __int8)tlgKeywordOn(&dword_1800DB218, 64LL) )
          {
            v17 = *(_QWORD *)(a1 + 168);
            v16 = v13;
            _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
              (int)&dword_1800DB218,
              (int)&unk_1800C2F7A,
              v13,
              v14,
              (__int64)&v17,
              (__int64)&v16);
          }
          *(_BYTE *)(a3 + 32) &= ~2u;
        }
        else
        {
          *(_BYTE *)(a3 + 32) |= 2u;
        }
      }
      else
      {
        *(_BYTE *)(a3 + 32) |= 2u;
        *(_QWORD *)(a3 + 24) = v15 + 10000LL * *(unsigned int *)(*(_QWORD *)(a1 + 56) + 100LL);
        if ( (*(_BYTE *)(a1 + 160) & 2) == 0 )
          *(_QWORD *)(a3 + 16) = v15 + 10000LL * *(unsigned int *)(*(_QWORD *)(a1 + 56) + 96LL);
      }
    }
    else
    {
      if ( v15 < *(_QWORD *)(a1 + 144) )
      {
        *(_BYTE *)(a3 + 32) |= 2u;
      }
      else
      {
        if ( (*(_BYTE *)(a1 + 160) & 2) != 0
          && (unsigned int)dword_1800DB218 > 4
          && (unsigned __int8)tlgKeywordOn(&dword_1800DB218, 64LL) )
        {
          v12 = *(_QWORD *)(a1 + 168);
          v23 = 0;
          v16 = v12;
          v22 = v11;
          v21 = &v16;
          tlgWriteTransfer_EventWriteTransfer((int)&dword_1800DB218, (int)&dword_1800C2FB5, 0, 0, 3u, &v20);
        }
        *(_BYTE *)(a3 + 32) &= ~2u;
      }
      *(_QWORD *)(a3 + 24) = 0LL;
    }
  }
LABEL_3:
  result = v15;
  *(_QWORD *)(a3 + 8) = v15;
  return result;
}
