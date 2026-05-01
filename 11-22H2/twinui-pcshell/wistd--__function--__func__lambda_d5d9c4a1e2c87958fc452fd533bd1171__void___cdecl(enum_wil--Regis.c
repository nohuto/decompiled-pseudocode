/*
 * XREFs of wistd::__function::__func__lambda_d5d9c4a1e2c87958fc452fd533bd1171__void___cdecl(enum_wil::RegistryChangeKind)_::operator() @ 0x1801E4720
 * Callers:
 *     <none>
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1800AE21C (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t.c)
 *     ?Provider@SingleViewExperienceLogging@@SAQEBU_tlgProvider_t@@XZ @ 0x1800EA020 (-Provider@SingleViewExperienceLogging@@SAQEBU_tlgProvider_t@@XZ.c)
 */

__int64 __fastcall wistd::__function::__func__lambda_d5d9c4a1e2c87958fc452fd533bd1171__void___cdecl_enum_wil::RegistryChangeKind__::operator()(
        __int64 a1,
        int *a2)
{
  int v2; // edi
  const struct _tlgProvider_t *v4; // rax
  __int64 v5; // r8
  __int64 v6; // r9
  int v8; // [rsp+40h] [rbp+8h] BYREF
  const WCHAR *v9; // [rsp+48h] [rbp+10h] BYREF

  v2 = *a2;
  v4 = SingleViewExperienceLogging::Provider(a1);
  if ( *(_DWORD *)v4 > 5u )
  {
    v8 = v2;
    v9 = L"PrintScreenKeyForSnippingEnabled";
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>>(
      (__int64)v4,
      byte_180851162,
      v5,
      v6,
      &v9,
      (__int64)&v8);
  }
  return CreationThreadDispatcher::RunAsync__lambda_bcebae3c85cfd9e005edaacce9819866___(
           *(_QWORD *)(*(_QWORD *)(a1 + 8) + 304LL),
           *(volatile int **)(a1 + 8));
}
