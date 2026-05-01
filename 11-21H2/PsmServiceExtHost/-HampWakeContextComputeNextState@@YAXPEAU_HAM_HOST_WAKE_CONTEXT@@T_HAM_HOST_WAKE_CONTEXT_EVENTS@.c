/*
 * XREFs of ?HampWakeContextComputeNextState@@YAXPEAU_HAM_HOST_WAKE_CONTEXT@@T_HAM_HOST_WAKE_CONTEXT_EVENTS@@PEAU_HAM_HOST_WAKE_CONTEXT_WORKER_STATE@@@Z @ 0x1800346F4
 * Callers:
 *     ?HampWakeContextWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180033FF0 (-HampWakeContextWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800095C0 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     _tlgKeywordOn @ 0x18002D67C (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x18004E310 (__security_check_cookie.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3@Z @ 0x18006F0D4 (--$Write@U-$_tlgWrapperByVal@$07@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUI.c)
 */

unsigned __int64 __fastcall HampWakeContextComputeNextState(__int64 a1, char a2, __int64 a3)
{
  unsigned __int8 v6; // al
  unsigned __int64 result; // rax
  __int64 v8; // r9
  __int64 v9; // rcx
  __int64 v10; // rax
  int v12; // r10d
  __int64 v13; // rax
  int v14; // r8d
  __int64 v15; // r9
  unsigned __int64 v16; // [rsp+30h] [rbp-59h] BYREF
  __int64 v17; // [rsp+38h] [rbp-51h] BYREF
  __int64 v18; // [rsp+40h] [rbp-49h] BYREF
  _BYTE JobInformation[24]; // [rsp+50h] [rbp-39h] BYREF
  __int64 v20; // [rsp+68h] [rbp-21h]
  struct _EVENT_DATA_DESCRIPTOR v21; // [rsp+90h] [rbp+7h] BYREF
  __int64 *v22; // [rsp+B0h] [rbp+27h]
  int v23; // [rsp+B8h] [rbp+2Fh]
  int v24; // [rsp+BCh] [rbp+33h]

  RtlQueryUnbiasedInterruptTime(&v16);
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
    v8 = v20;
    if ( (a2 & 8) != 0 )
    {
      v9 = 0LL;
    }
    else
    {
      v9 = *(_QWORD *)(a1 + 128);
      if ( v20 && !v9 && (*(_BYTE *)(a1 + 184) & 0x70) == 0x10 )
      {
        if ( (unsigned int)dword_1800DC218 > 5 )
        {
          v10 = *(_QWORD *)(a1 + 168);
          v24 = 0;
          v17 = v10;
          v23 = 8;
          v22 = &v17;
          tlgWriteTransfer_EventWriteTransfer(
            (__int64)&dword_1800DC218,
            (unsigned __int8 *)dword_1800C181C,
            0LL,
            0LL,
            3u,
            &v21);
        }
        goto LABEL_3;
      }
    }
    *(_QWORD *)a3 = v20;
    if ( v8 )
    {
      if ( v9 )
      {
        if ( (a2 & 1) != 0 )
        {
          *(_BYTE *)(a3 + 32) |= 2u;
          *(_QWORD *)(a3 + 24) = v16 + 10000LL * *(unsigned int *)(*(_QWORD *)(a1 + 56) + 100LL);
        }
        else if ( v16 >= *(_QWORD *)(a1 + 152) )
        {
          if ( (*(_BYTE *)(a1 + 160) & 2) != 0
            && (unsigned int)dword_1800DC218 > 4
            && tlgKeywordOn((__int64)&dword_1800DC218, 64LL) )
          {
            v18 = *(_QWORD *)(a1 + 168);
            v17 = v15;
            _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
              (unsigned int)&dword_1800DC218,
              (unsigned int)&unk_1800C184A,
              v14,
              v15,
              (__int64)&v18,
              (__int64)&v17);
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
        *(_QWORD *)(a3 + 24) = v16 + 10000LL * *(unsigned int *)(*(_QWORD *)(a1 + 56) + 100LL);
        if ( (*(_BYTE *)(a1 + 160) & 2) == 0 )
          *(_QWORD *)(a3 + 16) = v16 + 10000LL * *(unsigned int *)(*(_QWORD *)(a1 + 56) + 96LL);
      }
    }
    else
    {
      if ( v16 < *(_QWORD *)(a1 + 144) )
      {
        *(_BYTE *)(a3 + 32) |= 2u;
      }
      else
      {
        if ( (*(_BYTE *)(a1 + 160) & 2) != 0 && (unsigned int)dword_1800DC218 > 4 )
        {
          if ( tlgKeywordOn((__int64)&dword_1800DC218, 64LL) )
          {
            v13 = *(_QWORD *)(a1 + 168);
            v24 = 0;
            v17 = v13;
            v23 = v12;
            v22 = &v17;
            tlgWriteTransfer_EventWriteTransfer(
              (__int64)&dword_1800DC218,
              (unsigned __int8 *)dword_1800C1885,
              0LL,
              0LL,
              3u,
              &v21);
          }
        }
        *(_BYTE *)(a3 + 32) &= ~2u;
      }
      *(_QWORD *)(a3 + 24) = 0LL;
    }
  }
LABEL_3:
  result = v16;
  *(_QWORD *)(a3 + 8) = v16;
  return result;
}
