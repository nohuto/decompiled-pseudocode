/*
 * XREFs of ?OnEndpointUnavailableForUse@CSharedStreamGroupProxy@@UEAAXPEBG@Z @ 0x1800F9C40
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x180002C20 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x180002C58 (-InternalRelease@-$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x180008710 (--2@YAPEAX_K@Z.c)
 *     ?QueueWorkItem@CSerialWorkQueue@@QEAAJV?$function@$$A6AXXZ@std@@@Z @ 0x180009110 (-QueueWorkItem@CSerialWorkQueue@@QEAAJV-$function@$$A6AXXZ@std@@@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18000ABEC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180015934 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ??$AsWeak@UIStreamGroupProxy@@@WRL@Microsoft@@YAJPEAUIStreamGroupProxy@@PEAVWeakRef@01@@Z @ 0x180016650 (--$AsWeak@UIStreamGroupProxy@@@WRL@Microsoft@@YAJPEAUIStreamGroupProxy@@PEAVWeakRef@01@@Z.c)
 *     ??B?$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ @ 0x18003FC74 (--B-$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x18004135C (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ??0?$shared_ptr@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@QEAA@AEBV01@@Z @ 0x1800483C0 (--0-$shared_ptr@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@std@@QEAA@AEBV01@.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800C5FBC (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$?0VCSharedStreamGroupProxy@@@?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@QEAA@PEAVCSharedStreamGroupProxy@@@Z @ 0x1800F635C (--$-0VCSharedStreamGroupProxy@@@-$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@QEAA@PEAVCSharedStr.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapSz@D@@@Z @ 0x1800F6720 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapSz@D@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPE.c)
 */

// Hidden C++ exception states: #wind=6
void __fastcall CSharedStreamGroupProxy::OnEndpointUnavailableForUse(
        CSharedStreamGroupProxy *this,
        unsigned __int16 *a2)
{
  __int64 *v3; // rax
  __int64 *v4; // rbx
  __int64 *v5; // rax
  __int64 v6; // rsi
  int v7; // eax
  _DWORD *v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  const char *v11; // r9
  int v12; // [rsp+20h] [rbp-98h]
  void *v13[2]; // [rsp+30h] [rbp-88h] BYREF
  __int64 v14; // [rsp+40h] [rbp-78h] BYREF
  __int128 v15; // [rsp+48h] [rbp-70h] BYREF
  _QWORD v16[2]; // [rsp+58h] [rbp-60h] BYREF
  __int128 v17; // [rsp+68h] [rbp-50h]
  _QWORD *v18; // [rsp+90h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+0h]
  __int64 v20; // [rsp+C0h] [rbp+8h] BYREF
  __int64 (__fastcall ***v21)(_QWORD, GUID *, __int64 *); // [rsp+D0h] [rbp+18h] BYREF
  __int64 *v22; // [rsp+D8h] [rbp+20h] BYREF

  Microsoft::WRL::ComPtr<IStreamGroupProxy>::ComPtr<IStreamGroupProxy>((__int64 *)&v21, (__int64)this - 8);
  v20 = 0LL;
  v3 = (__int64 *)operator new(0x30uLL);
  try
  {
    v4 = v3;
    v22 = v3;
    if ( v3 )
    {
      *(_OWORD *)v3 = 0LL;
      *((_DWORD *)v3 + 2) = 1;
      *((_DWORD *)v3 + 3) = 1;
      *v3 = (__int64)&std::_Ref_count_obj2<std::wstring>::`vftable';
      std::wstring::wstring(v3 + 2, a2);
    }
    else
    {
      v4 = 0LL;
    }
    v13[0] = v4 + 2;
    v13[1] = v4;
    v22 = &v20;
    v5 = Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::WeakRef>::operator Microsoft::WRL::WeakRef *(&v22);
    if ( (int)Microsoft::WRL::AsWeak<IStreamGroupProxy>(v21, v5) >= 0 )
    {
      v6 = (*(__int64 (__fastcall **)(struct IAudioService *))(*(_QWORD *)g_AudioService + 120LL))(g_AudioService);
      v14 = v20;
      if ( v20 )
        (*(void (**)(void))(*(_QWORD *)v20 + 8LL))();
      std::shared_ptr<std::wstring>::shared_ptr<std::wstring>(&v15, v13);
      v16[0] = off_18016BCB0;
      v16[1] = v14;
      v14 = 0LL;
      v17 = v15;
      v15 = 0LL;
      v18 = v16;
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v14);
      v7 = CSerialWorkQueue::QueueWorkItem(v6, v16);
      if ( v7 < 0 )
        wil::details::in1diag3::_Throw_Hr(
          retaddr,
          1152LL,
          (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
          (const char *)(unsigned int)v7,
          v12);
      v8 = (_DWORD *)wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                       (__int64)retaddr,
                       _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_)[1];
      if ( *v8 > 4u )
      {
        v22 = (__int64 *)"OnEndpointUnavailableForUse";
        v13[0] = a2;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapSz<char>>(
          (__int64)v8,
          byte_180189C17,
          v9,
          v10,
          v13,
          (const CHAR **)&v22);
      }
    }
    if ( v4 )
      std::_Ref_count_base::_Decref((std::_Ref_count_base *)v4);
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v20);
    Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease((__int64 *)&v21);
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0x489,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
      v11);
  }
}
