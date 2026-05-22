/*
 * XREFs of ??$SpatialInteractionDLL_LoadFailure@AEAJ@RawInputProvidersTracing@@SAXAEAJ@Z @ 0x1800BD310
 * Callers:
 *     ?EnsureSpatialInteractionInitialized@SpatialRimDeviceCollection@@AEAAJXZ @ 0x1800BFA94 (-EnsureSpatialInteractionInitialized@SpatialRimDeviceCollection@@AEAAJXZ.c)
 * Callees:
 *     ?get@?$static_lazy@VRawInputProvidersTracing@@@details@wil@@QEAAPEAVRawInputProvidersTracing@@P6AXXZ@Z @ 0x1800BB8B4 (-get@-$static_lazy@VRawInputProvidersTracing@@@details@wil@@QEAAPEAVRawInputProvidersTracing@@P6.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x1800BD7CC (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgPr.c)
 */

__int64 __fastcall RawInputProvidersTracing::SpatialInteractionDLL_LoadFailure<long &>(int *a1)
{
  __int64 result; // rax
  int v3; // r8d
  int v4; // r9d
  __int64 v5; // rcx
  int v6; // [rsp+48h] [rbp+10h] BYREF
  __int64 v7; // [rsp+50h] [rbp+18h] BYREF

  result = (__int64)wil::details::static_lazy<RawInputProvidersTracing>::get(
                      (__int64)a1,
                      _lambda_260b9137d63ddd75627644ad4182c2ea_::_lambda_invoker_cdecl_);
  v5 = *(_QWORD *)(result + 8);
  if ( *(_DWORD *)v5 > 5u && (*(_QWORD *)(v5 + 16) & 0x200000000000LL) != 0 )
  {
    result = *(_QWORD *)(v5 + 24) & 0x200000000000LL;
    if ( result == *(_QWORD *)(v5 + 24) )
    {
      v6 = *a1;
      v7 = 50331648LL;
      return _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
               v5,
               (unsigned int)&unk_180201B8B,
               v3,
               v4,
               (__int64)&v6,
               (__int64)&v7);
    }
  }
  return result;
}
