/*
 * XREFs of ?AddAuxiliaryInputStream@CSharedStreamGroupProxy@@UEAAJU_GUID@@_JPEAUIBridgeStreamInstanceProxy@@PEAUSystemAudioStream@@PEBG@Z @ 0x1801054E0
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateAuxiliaryStreamState@CSharedStreamGroupProxy@@IEAAXXZ @ 0x180014510 (-UpdateAuxiliaryStreamState@CSharedStreamGroupProxy@@IEAAXXZ.c)
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180024B78 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x18002AA60 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ??$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z @ 0x18002D1B8 (--$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3@Z @ 0x1800457A0 (--$Write@U-$_tlgWrapperByVal@$07@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUI.c)
 *     ??4?$com_ptr_t@UIBridgeStreamInstanceProxy@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUIBridgeStreamInstanceProxy@@@Z @ 0x180104AD4 (--4-$com_ptr_t@UIBridgeStreamInstanceProxy@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUIBr.c)
 *     ??4SystemAudioStream@@QEAAAEAU0@$$QEAU0@@Z @ 0x180104B3C (--4SystemAudioStream@@QEAAAEAU0@$$QEAU0@@Z.c)
 */

__int64 __fastcall CSharedStreamGroupProxy::AddAuxiliaryInputStream(
        __int64 this,
        struct _GUID *a2,
        __int64 a3,
        struct IBridgeStreamInstanceProxy *a4,
        struct SystemAudioStream *a5,
        const unsigned __int16 *a6)
{
  __int64 v10; // rdx
  unsigned __int64 v12; // r9
  int v13; // edi
  __int64 v14; // rcx
  __int128 v15; // xmm0
  _DWORD *v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // [rsp+20h] [rbp-48h]
  __int64 v20; // [rsp+30h] [rbp-38h] BYREF
  void **v21; // [rsp+38h] [rbp-30h]
  unsigned __int16 *v22; // [rsp+40h] [rbp-28h] BYREF
  char v23; // [rsp+48h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  unsigned __int64 v25; // [rsp+70h] [rbp+8h] BYREF

  if ( *(_QWORD *)(this + 440) )
  {
    v10 = 1323LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
      (const char *)0x8000FFFFLL);
    return 2147549183LL;
  }
  if ( *(_QWORD *)(this + 1720) )
  {
    v10 = 1324LL;
    goto LABEL_3;
  }
  v12 = -1LL;
  v21 = (void **)(this + 1720);
  v22 = 0LL;
  v23 = 1;
  do
    ++v12;
  while ( a6[v12] );
  v13 = _AllocStringWorker<CTCoAllocPolicy>(this, (__int64)a2, a6, v12, v19, &v22);
  if ( v23 )
    wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
      v21,
      v22);
  if ( v13 >= 0 )
  {
    if ( g_UseNewStreamManagementCodePath )
    {
      EnterCriticalSection((LPCRITICAL_SECTION)(this + 1736));
      wil::com_ptr_t<IBridgeStreamInstanceProxy,wil::err_returncode_policy>::operator=(
        (__int64 *)(this + 1728),
        (__int64)a4);
      if ( this != -1736 )
        LeaveCriticalSection((LPCRITICAL_SECTION)(this + 1736));
    }
    else
    {
      SystemAudioStream::operator=(this + 408, (__int64)a5);
    }
    v15 = (__int128)*a2;
    *(_QWORD *)(this + 1696) = a3;
    *(_OWORD *)(this + 1704) = v15;
    v16 = (_DWORD *)wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                      v14,
                      _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_)[1];
    if ( *v16 > 4u )
    {
      v20 = *(_QWORD *)(this + 1696);
      v25 = this & -(__int64)(this != 8);
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
        (__int64)v16,
        byte_180193520,
        v17,
        v18,
        (__int64)&v20,
        (__int64)&v25);
    }
    CSharedStreamGroupProxy::UpdateAuxiliaryStreamState((CSharedStreamGroupProxy *)(this - 8));
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x52E,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
      (const char *)(unsigned int)v13);
    return (unsigned int)v13;
  }
}
