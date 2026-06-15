/*
 * XREFs of ?AddAuxiliaryInputStream@CSharedStreamGroupProxy@@UEAAJU_GUID@@_JPEAUSystemAudioStream@@PEBG@Z @ 0x1800F7FC0
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateAuxiliaryStreamState@CSharedStreamGroupProxy@@IEAAXXZ @ 0x18000F860 (-UpdateAuxiliaryStreamState@CSharedStreamGroupProxy@@IEAAXXZ.c)
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180015934 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x18004A9F0 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ?Alloc@CTCoAllocPolicy@@SAJPEAXK_KPEAPEAX@Z @ 0x18004AA38 (-Alloc@CTCoAllocPolicy@@SAJPEAXK_KPEAPEAX@Z.c)
 *     ?StringCchCopyNExW@@YAJPEAG_KPEBG1PEAPEAGPEA_KK@Z @ 0x18004AA90 (-StringCchCopyNExW@@YAJPEAG_KPEBG1PEAPEAGPEA_KK@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BFD20 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3@Z @ 0x1800F68E0 (--$Write@U-$_tlgWrapperByVal@$07@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUI.c)
 *     ??4SystemAudioStream@@QEAAAEAU0@$$QEAU0@@Z @ 0x1800F7600 (--4SystemAudioStream@@QEAAAEAU0@$$QEAU0@@Z.c)
 */

__int64 __fastcall CSharedStreamGroupProxy::AddAuxiliaryInputStream(
        signed __int64 this,
        struct _GUID *a2,
        __int64 a3,
        struct SystemAudioStream *a4,
        unsigned __int16 *a5)
{
  __int64 v8; // rdx
  _QWORD *v10; // rcx
  const unsigned __int16 *v11; // r15
  unsigned __int64 v12; // rsi
  unsigned __int64 v13; // r14
  unsigned __int16 *v14; // rbp
  int v15; // eax
  int v16; // edi
  struct _GUID *v17; // rax
  __int64 v18; // rcx
  _DWORD *v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // [rsp+40h] [rbp-58h] BYREF
  _QWORD *v23; // [rsp+48h] [rbp-50h]
  unsigned __int16 *v24; // [rsp+50h] [rbp-48h] BYREF
  char v25; // [rsp+58h] [rbp-40h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]
  unsigned __int64 v27; // [rsp+A0h] [rbp+8h] BYREF
  struct _GUID *v28; // [rsp+A8h] [rbp+10h]

  v28 = a2;
  if ( *(_QWORD *)(this + 360) )
  {
    v8 = 1067LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
      (const char *)0x8000FFFFLL);
    return 2147549183LL;
  }
  v10 = (_QWORD *)(this + 1640);
  if ( *v10 )
  {
    v8 = 1068LL;
    goto LABEL_3;
  }
  v11 = a5;
  v12 = -1LL;
  v23 = v10;
  v25 = 1;
  do
    ++v12;
  while ( a5[v12] );
  v13 = v12 + 1;
  v24 = 0LL;
  v14 = 0LL;
  if ( v12 + 1 >= v12 && is_mul_ok(v13, 2uLL) )
  {
    v15 = CTCoAllocPolicy::Alloc(v10, (v13 * (unsigned __int128)2uLL) >> 64, 2 * v13, (void **)&v24);
    v14 = v24;
    v16 = v15;
    if ( v15 >= 0 )
      StringCchCopyNExW((char *)v24, v12 + 1, v11, v12);
    if ( !v25 )
      goto LABEL_16;
    v10 = v23;
  }
  else
  {
    v16 = -2147024362;
  }
  wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
    (void **)v10,
    v14);
LABEL_16:
  if ( v16 >= 0 )
  {
    SystemAudioStream::operator=(this + 328, (__int64)a4);
    v17 = v28;
    *(_QWORD *)(this + 1616) = a3;
    *(struct _GUID *)(this + 1624) = *v17;
    v19 = (_DWORD *)wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                      v18,
                      _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_)[1];
    if ( *v19 > 4u )
    {
      v22 = *(_QWORD *)(this + 1616);
      v27 = this & -(__int64)(this != 8);
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
        (__int64)v19,
        byte_180189CB3,
        v20,
        v21,
        (__int64)&v22,
        (__int64)&v27);
    }
    CSharedStreamGroupProxy::UpdateAuxiliaryStreamState((CSharedStreamGroupProxy *)(this - 8));
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x42E,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
      (const char *)(unsigned int)v16);
    return (unsigned int)v16;
  }
}
