/*
 * XREFs of ?RmpGameModeTryApplyGraphicsPriority@@YAJPEAU_RM_GAME_MODE_CONTEXT@@PEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z @ 0x18008C160
 * Callers:
 *     <none>
 * Callees:
 *     _tlgKeywordOn @ 0x18002D67C (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x18004E310 (__security_check_cookie.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@333@Z @ 0x18006C9CC (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPE.c)
 */

__int64 __fastcall RmpGameModeTryApplyGraphicsPriority(
        struct _RM_GAME_MODE_CONTEXT *a1,
        struct _RM_GAME_MODE_RECIPIENT_PROCESS *a2)
{
  int v4; // ebx
  int v5; // eax
  int v6; // eax
  int v7; // eax
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  int v12; // [rsp+40h] [rbp-30h] BYREF
  int v13; // [rsp+44h] [rbp-2Ch] BYREF
  int v14; // [rsp+48h] [rbp-28h] BYREF
  int v15; // [rsp+4Ch] [rbp-24h] BYREF
  int v16; // [rsp+50h] [rbp-20h] BYREF
  int v17; // [rsp+54h] [rbp-1Ch]
  int v18; // [rsp+58h] [rbp-18h]
  int v19; // [rsp+5Ch] [rbp-14h]

  if ( (*((_BYTE *)a1 + 149) & 1) != 0 )
  {
    v4 = -1073741637;
  }
  else
  {
    v5 = *((_DWORD *)a2 + 32);
    v17 = 0;
    v18 = 0;
    v19 = v5;
    v16 = 16;
    v4 = D3DKMTSetYieldPercentage(&v16);
    if ( v4 >= 0 )
    {
      v6 = *((_DWORD *)a2 + 33);
      v17 = 0;
      v18 = v6;
      v19 = *((_DWORD *)a2 + 34);
      v16 = 16;
      v4 = D3DKMTSetMemoryBudgetTarget(&v16);
      if ( v4 < 0 )
      {
        v7 = *((_DWORD *)a1 + 12);
        v17 = 0;
        v19 = v7;
        v18 = *((_DWORD *)a1 + 15);
        v16 = 16;
        D3DKMTSetYieldPercentage(&v16);
      }
      else
      {
        v4 = 0;
      }
    }
  }
  if ( (unsigned int)dword_1800DC1E0 > 4 && tlgKeywordOn((__int64)&dword_1800DC1E0, 1LL) )
  {
    v12 = *((_DWORD *)a2 + 34);
    v13 = *((_DWORD *)a2 + 33);
    v14 = *((_DWORD *)a2 + 32);
    v15 = v4;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v8,
      byte_1800C42A8,
      v9,
      v10,
      (__int64)&v15,
      (__int64)&v14,
      (__int64)&v13,
      (__int64)&v12);
  }
  return (unsigned int)v4;
}
