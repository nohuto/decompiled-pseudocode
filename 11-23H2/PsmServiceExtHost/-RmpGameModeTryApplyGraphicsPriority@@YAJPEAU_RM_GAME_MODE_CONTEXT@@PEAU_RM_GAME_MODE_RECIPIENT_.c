/*
 * XREFs of ?RmpGameModeTryApplyGraphicsPriority@@YAJPEAU_RM_GAME_MODE_CONTEXT@@PEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z @ 0x180089A90
 * Callers:
 *     <none>
 * Callees:
 *     _tlgKeywordOn @ 0x180028870 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1800494C0 (__security_check_cookie.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@333@Z @ 0x180054FA2 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPE.c)
 */

__int64 __fastcall RmpGameModeTryApplyGraphicsPriority(
        struct _RM_GAME_MODE_CONTEXT *a1,
        struct _RM_GAME_MODE_RECIPIENT_PROCESS *a2)
{
  int v2; // ebx
  _DWORD *v3; // rsi
  int v6; // edi
  int v7; // eax
  _DWORD *v8; // rax
  int v9; // eax
  int v10; // eax
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  int v15; // [rsp+40h] [rbp-30h] BYREF
  int v16; // [rsp+44h] [rbp-2Ch] BYREF
  int v17; // [rsp+48h] [rbp-28h] BYREF
  int v18; // [rsp+4Ch] [rbp-24h] BYREF
  int v19; // [rsp+50h] [rbp-20h] BYREF
  int v20; // [rsp+54h] [rbp-1Ch]
  int v21; // [rsp+58h] [rbp-18h]
  int v22; // [rsp+5Ch] [rbp-14h]

  v2 = 0;
  v3 = (_DWORD *)((char *)a2 + 128);
  if ( (*((_BYTE *)a1 + 149) & 1) != 0 )
  {
    v6 = -1073741637;
  }
  else
  {
    v7 = *v3;
    v20 = 0;
    v21 = 0;
    v22 = v7;
    v19 = 16;
    v6 = D3DKMTSetYieldPercentage(&v19);
    v8 = v3;
    if ( v6 < 0 )
      goto LABEL_6;
    v9 = *((_DWORD *)a2 + 33);
    v20 = 0;
    v2 = 1;
    v21 = v9;
    v22 = *((_DWORD *)a2 + 34);
    v19 = 16;
    v6 = D3DKMTSetMemoryBudgetTarget(&v19);
    v8 = v3;
    if ( v6 < 0 )
    {
LABEL_6:
      v3 = v8;
      if ( v2 )
      {
        v10 = *((_DWORD *)a1 + 12);
        v20 = 0;
        v22 = v10;
        v21 = *((_DWORD *)a1 + 15);
        v19 = 16;
        D3DKMTSetYieldPercentage(&v19);
      }
    }
    else
    {
      v6 = 0;
    }
  }
  if ( (unsigned int)dword_1800DB1E0 > 4 && tlgKeywordOn((__int64)&dword_1800DB1E0, 1LL) )
  {
    v15 = *((_DWORD *)a2 + 34);
    v16 = *((_DWORD *)a2 + 33);
    v17 = *v3;
    v18 = v6;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v11,
      byte_1800C4D4F,
      v12,
      v13,
      (__int64)&v18,
      (__int64)&v17,
      (__int64)&v16,
      (__int64)&v15);
  }
  return (unsigned int)v6;
}
