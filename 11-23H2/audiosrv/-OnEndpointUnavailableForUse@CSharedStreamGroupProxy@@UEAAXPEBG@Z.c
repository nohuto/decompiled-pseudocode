/*
 * XREFs of ?OnEndpointUnavailableForUse@CSharedStreamGroupProxy@@UEAAXPEBG@Z @ 0x1801091D0
 * Callers:
 *     <none>
 * Callees:
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180024B78 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapSz@D@@@Z @ 0x18010399C (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapSz@D@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPE.c)
 *     ?DeleteAuxiliaryInputForStreamGroupInternal@CSharedStreamGroupProxy@@IEAAXPEBG@Z @ 0x18010685C (-DeleteAuxiliaryInputForStreamGroupInternal@CSharedStreamGroupProxy@@IEAAXPEBG@Z.c)
 */

void __fastcall CSharedStreamGroupProxy::OnEndpointUnavailableForUse(
        CSharedStreamGroupProxy *this,
        unsigned __int16 *a2)
{
  CSharedStreamGroupProxy *v3; // rcx
  __int64 v4; // rcx
  _DWORD *v5; // rcx
  __int64 v6; // r8
  const char *v7; // r9
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  const CHAR *v9; // [rsp+40h] [rbp+8h] BYREF
  const WCHAR *v10; // [rsp+50h] [rbp+18h] BYREF

  v3 = (CSharedStreamGroupProxy *)((char *)this - 8);
  try
  {
    CSharedStreamGroupProxy::DeleteAuxiliaryInputForStreamGroupInternal(v3, a2);
    v5 = (_DWORD *)wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                     v4,
                     _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_)[1];
    if ( *v5 > 4u )
    {
      v9 = "OnEndpointUnavailableForUse";
      v10 = a2;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapSz<char>>(
        (__int64)v5,
        byte_180193484,
        v6,
        (__int64)v7,
        &v10,
        &v9);
    }
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0x5B5,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
      v7);
  }
}
