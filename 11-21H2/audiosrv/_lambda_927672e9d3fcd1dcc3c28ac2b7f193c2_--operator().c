/*
 * XREFs of _lambda_927672e9d3fcd1dcc3c28ac2b7f193c2_::operator() @ 0x180153278
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_927672e9d3fcd1dcc3c28ac2b7f193c2___::Run @ 0x1801565F0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_927672e9d3fcd1dcc3c28ac2b7f193c2___--Run.c)
 * Callees:
 *     ?AddArrayToLicenseMap@AtmosCheck@@AEAAJPEBG@Z @ 0x180059164 (-AddArrayToLicenseMap@AtmosCheck@@AEAAJPEBG@Z.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x180152424 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU__ea_180152424.c)
 *     ?PerformLicenseCheckForEndpoint@AtmosCheck@@AEAAJPEBGPEA_N@Z @ 0x18015563C (-PerformLicenseCheckForEndpoint@AtmosCheck@@AEAAJPEBGPEA_N@Z.c)
 */

ULONG __fastcall lambda_927672e9d3fcd1dcc3c28ac2b7f193c2_::operator()(__int64 a1)
{
  const unsigned __int16 **v1; // rax
  void *v2; // rbx
  const unsigned __int16 *v4; // rdx
  const unsigned __int16 **v5; // rdx
  const unsigned __int16 *v6; // rdx
  ULONG result; // eax
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  void **v11; // rax
  ULONG v12; // [rsp+40h] [rbp+8h] BYREF
  void *v13; // [rsp+48h] [rbp+10h] BYREF

  v1 = *(const unsigned __int16 ***)(a1 + 8);
  v2 = 0LL;
  if ( v1 )
    v4 = *v1;
  else
    v4 = 0LL;
  AtmosCheck::AddArrayToLicenseMap(*(AtmosCheck **)a1, v4);
  v5 = *(const unsigned __int16 ***)(a1 + 8);
  LOBYTE(v12) = 0;
  if ( v5 )
    v6 = *v5;
  else
    v6 = 0LL;
  result = AtmosCheck::PerformLicenseCheckForEndpoint(*(AtmosCheck **)a1, v6, (bool *)&v12);
  if ( (unsigned int)dword_1801C02B0 > 5 )
  {
    v12 = result;
    v11 = *(void ***)(a1 + 8);
    if ( v11 )
      v2 = *v11;
    v13 = v2;
    return _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>>(
             v8,
             byte_18018F988,
             v9,
             v10,
             &v13,
             (__int64)&v12);
  }
  return result;
}
