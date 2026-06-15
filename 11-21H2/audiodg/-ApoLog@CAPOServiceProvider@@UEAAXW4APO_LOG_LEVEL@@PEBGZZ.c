/*
 * XREFs of ?ApoLog@CAPOServiceProvider@@UEAAXW4APO_LOG_LEVEL@@PEBGZZ @ 0x140067520
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x14002F570 (__security_check_cookie.c)
 *     memset_0 @ 0x1400309B4 (memset_0.c)
 *     ??$Write@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@@Z @ 0x14006736C (--$Write@U-$_tlgWrapSz@G@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_E.c)
 *     StringVPrintfWorkerW_0 @ 0x14006786C (StringVPrintfWorkerW_0.c)
 *     ?get@?$static_lazy@VAudioProcessingObjectTelemetryProvider@@@details@wil@@QEAAPEAVAudioProcessingObjectTelemetryProvider@@P6AXXZ@Z @ 0x1400678F4 (-get@-$static_lazy@VAudioProcessingObjectTelemetryProvider@@@details@wil@@QEAAPEAVAudioProcessin.c)
 */

void CAPOServiceProvider::ApoLog(__int64 a1, unsigned int a2, const wchar_t *a3, ...)
{
  size_t v4; // rdx
  __int64 v5; // rcx
  unsigned int v6; // ebx
  unsigned int v7; // ebx
  unsigned int v8; // ebx
  unsigned int v9; // ebx
  _DWORD *v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned __int8 *v13; // rdx
  size_t pcchNewDestLength; // [rsp+30h] [rbp-D0h] BYREF
  __int128 v15; // [rsp+38h] [rbp-C8h]
  __int128 v16; // [rsp+48h] [rbp-B8h] BYREF
  wchar_t pszDest[1024]; // [rsp+60h] [rbp-A0h] BYREF
  __int64 argList; // [rsp+8A8h] [rbp+7A8h] BYREF
  va_list va; // [rsp+8A8h] [rbp+7A8h]
  va_list va1; // [rsp+8B0h] [rbp+7B0h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  argList = va_arg(va1, _QWORD);
  if ( a3 && a2 <= 5 )
  {
    v15 = *(_OWORD *)(a1 + 24);
    v16 = v15;
    EtwEventActivityIdControl(4LL, &v16);
    memset_0(pszDest, 0, sizeof(pszDest));
    pcchNewDestLength = 0LL;
    StringVPrintfWorkerW_0(pszDest, v4, &pcchNewDestLength, a3, va);
    if ( a2 )
    {
      v6 = a2 - 1;
      if ( v6 )
      {
        v7 = v6 - 1;
        if ( v7 )
        {
          v8 = v7 - 1;
          if ( v8 )
          {
            v9 = v8 - 1;
            if ( v9 )
            {
              if ( v9 != 1 )
                goto LABEL_22;
              v10 = *(_DWORD **)(wil::details::static_lazy<AudioProcessingObjectTelemetryProvider>::get(
                                   v5,
                                   _lambda_913fed5b937de95f3abbbafa6f2496a6_::_lambda_invoker_cdecl_)
                               + 8);
              if ( *v10 <= 5u )
                goto LABEL_22;
              v13 = (unsigned __int8 *)&unk_1400A6DB4;
              goto LABEL_21;
            }
            v10 = *(_DWORD **)(wil::details::static_lazy<AudioProcessingObjectTelemetryProvider>::get(
                                 v5,
                                 _lambda_913fed5b937de95f3abbbafa6f2496a6_::_lambda_invoker_cdecl_)
                             + 8);
            if ( *v10 > 4u )
            {
              v13 = (unsigned __int8 *)&unk_1400A6D96;
LABEL_21:
              pcchNewDestLength = (size_t)pszDest;
              _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>>(
                (__int64)v10,
                v13,
                v11,
                v12,
                (void **)&pcchNewDestLength);
            }
          }
          else
          {
            v10 = *(_DWORD **)(wil::details::static_lazy<AudioProcessingObjectTelemetryProvider>::get(
                                 v5,
                                 _lambda_913fed5b937de95f3abbbafa6f2496a6_::_lambda_invoker_cdecl_)
                             + 8);
            if ( *v10 > 3u )
            {
              v13 = (unsigned __int8 *)&unk_1400A6D5A;
              goto LABEL_21;
            }
          }
        }
        else
        {
          v10 = *(_DWORD **)(wil::details::static_lazy<AudioProcessingObjectTelemetryProvider>::get(
                               v5,
                               _lambda_913fed5b937de95f3abbbafa6f2496a6_::_lambda_invoker_cdecl_)
                           + 8);
          if ( *v10 > 2u )
          {
            v13 = (unsigned __int8 *)&unk_1400A6D78;
            goto LABEL_21;
          }
        }
      }
      else
      {
        v10 = *(_DWORD **)(wil::details::static_lazy<AudioProcessingObjectTelemetryProvider>::get(
                             v5,
                             _lambda_913fed5b937de95f3abbbafa6f2496a6_::_lambda_invoker_cdecl_)
                         + 8);
        if ( *v10 > 1u )
        {
          v13 = (unsigned __int8 *)&unk_1400A6DD2;
          goto LABEL_21;
        }
      }
    }
    else
    {
      v10 = *(_DWORD **)(wil::details::static_lazy<AudioProcessingObjectTelemetryProvider>::get(
                           v5,
                           _lambda_913fed5b937de95f3abbbafa6f2496a6_::_lambda_invoker_cdecl_)
                       + 8);
      if ( *v10 )
      {
        v13 = (unsigned __int8 *)&unk_1400A6D3C;
        goto LABEL_21;
      }
    }
LABEL_22:
    EtwEventActivityIdControl(4LL, &v16);
  }
}
