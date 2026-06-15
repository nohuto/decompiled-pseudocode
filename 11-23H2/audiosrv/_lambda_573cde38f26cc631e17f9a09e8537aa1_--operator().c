/*
 * XREFs of _lambda_573cde38f26cc631e17f9a09e8537aa1_::operator() @ 0x18015A3C0
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_573cde38f26cc631e17f9a09e8537aa1___::Run @ 0x18015D590 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_573cde38f26cc631e17f9a09e8537aa1___--Run.c)
 * Callees:
 *     ?AddArrayToLicenseMap@AtmosCheck@@AEAAJPEBG@Z @ 0x18005DC50 (-AddArrayToLicenseMap@AtmosCheck@@AEAAJPEBG@Z.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1801597DC (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU__ea_1801597DC.c)
 *     ?PerformLicenseCheckForEndpoint@AtmosCheck@@AEAAJPEBGPEA_N@Z @ 0x18015C5EC (-PerformLicenseCheckForEndpoint@AtmosCheck@@AEAAJPEBGPEA_N@Z.c)
 */

ULONG __fastcall lambda_573cde38f26cc631e17f9a09e8537aa1_::operator()(__int64 a1)
{
  const unsigned __int16 **v1; // rax
  const WCHAR *v2; // rbx
  const unsigned __int16 *v4; // rdx
  const unsigned __int16 **v5; // rdx
  const unsigned __int16 *v6; // rdx
  ULONG result; // eax
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  const WCHAR **v11; // rax
  ULONG v12; // [rsp+40h] [rbp+8h] BYREF
  const WCHAR *v13; // [rsp+48h] [rbp+10h] BYREF

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
  if ( (unsigned int)dword_1801CD2B8 > 5 )
  {
    v12 = result;
    v11 = *(const WCHAR ***)(a1 + 8);
    if ( v11 )
      v2 = *v11;
    v13 = v2;
    return _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>>(
             v8,
             byte_180199010,
             v9,
             v10,
             &v13,
             (__int64)&v12);
  }
  return result;
}
