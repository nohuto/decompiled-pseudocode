/*
 * XREFs of ??$SwitchingToCloudOrLocal@PEBGPEBG_NAEAW4SwitchSource@Shell@Internal@Windows@winrt@@@CloudPCTelemetry@@SAX$$QEAPEBG0$$QEA_NAEAW4SwitchSource@Shell@Internal@Windows@winrt@@@Z @ 0x18073113C
 * Callers:
 *     ?SwitchToRemoteDesktop@SwitchConnectionHandler@implementation@Shell@Internal@Windows@winrt@@UEAAXAEBUguid@6@W4SwitchSource@3456@@Z @ 0x180733060 (-SwitchToRemoteDesktop@SwitchConnectionHandler@implementation@Shell@Internal@Windows@winrt@@UEAA.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1800C3AF4 (_tlgKeywordOn.c)
 *     ?get@?$static_lazy@VCloudPCLogging@@@details@wil@@QEAAPEAVCloudPCLogging@@P6AXXZ@Z @ 0x18070819C (-get@-$static_lazy@VCloudPCLogging@@@details@wil@@QEAAPEAVCloudPCLogging@@P6AXXZ@Z.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U1@U?$_tlgWrapperByVal@$00@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@3AEBU?$_tlgWrapperByVal@$00@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x180731208 (--$Write@U-$_tlgWrapSz@G@@U1@U-$_tlgWrapperByVal@$00@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByV.c)
 */

char __fastcall CloudPCTelemetry::SwitchingToCloudOrLocal<unsigned short const *,unsigned short const *,bool,enum winrt::Windows::Internal::Shell::SwitchSource &>(
        __int64 *a1,
        __int64 *a2,
        char *a3,
        int *a4)
{
  __int64 *v8; // rax
  _DWORD *v9; // rcx
  int v10; // ecx
  char v12; // [rsp+50h] [rbp-28h] BYREF
  int v13; // [rsp+54h] [rbp-24h] BYREF
  __int64 v14; // [rsp+58h] [rbp-20h] BYREF
  __int64 v15; // [rsp+60h] [rbp-18h] BYREF
  __int64 v16; // [rsp+68h] [rbp-10h] BYREF

  v8 = wil::details::static_lazy<CloudPCLogging>::get(
         (__int64)a1,
         (void (__cdecl *)())_lambda_dfea9040a9b7ae3ffb0f12b39947d7d1_::_lambda_invoker_cdecl_);
  v9 = (_DWORD *)v8[1];
  if ( *v9 > 5u )
  {
    LOBYTE(v8) = tlgKeywordOn((__int64)v9, 0x400000000000LL);
    if ( (_BYTE)v8 )
    {
      v13 = *a4;
      v12 = *a3;
      v15 = *a2;
      v16 = *a1;
      v14 = 0x1000000LL;
      LOBYTE(v8) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
                     v10,
                     (int)&dword_18087C587,
                     (__int64)&v16,
                     (__int64)&v15,
                     (__int64)&v12,
                     (__int64)&v13,
                     (__int64)&v14);
    }
  }
  return (char)v8;
}
