/*
 * XREFs of ?OnEndpointAvailableForUse@CSharedStreamGroupProxy@@UEAAXPEBG@Z @ 0x180109030
 * Callers:
 *     <none>
 * Callees:
 *     ??B?$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ @ 0x1800163B8 (--B-$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ.c)
 *     ?QueueWorkItem@CSerialWorkQueue@@QEAAJV?$function@$$A6AXXZ@std@@@Z @ 0x180022880 (-QueueWorkItem@CSerialWorkQueue@@QEAAJV-$function@$$A6AXXZ@std@@@Z.c)
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180024B78 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x18003F314 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x180046188 (-InternalRelease@-$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$AsWeak@UIStreamGroupProxy@@@WRL@Microsoft@@YAJPEAUIStreamGroupProxy@@PEAVWeakRef@01@@Z @ 0x18004A0BC (--$AsWeak@UIStreamGroupProxy@@@WRL@Microsoft@@YAJPEAUIStreamGroupProxy@@PEAVWeakRef@01@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800F1010 (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$?0VCSharedStreamGroupProxy@@@?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@QEAA@PEAVCSharedStreamGroupProxy@@@Z @ 0x1801030E4 (--$-0VCSharedStreamGroupProxy@@@-$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@QEAA@PEAVCSharedStr.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapSz@D@@@Z @ 0x1801039EC (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapSz@D@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPE.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall CSharedStreamGroupProxy::OnEndpointAvailableForUse(
        CSharedStreamGroupProxy *this,
        const unsigned __int16 *a2,
        __int64 a3,
        const char *a4)
{
  __int64 *v5; // rax
  __int64 v6; // rsi
  __int64 v7; // rbx
  int v8; // eax
  _DWORD *v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  int v12; // [rsp+20h] [rbp-78h]
  const WCHAR *v13; // [rsp+30h] [rbp-68h] BYREF
  _QWORD v14[12]; // [rsp+38h] [rbp-60h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]
  __int64 v16; // [rsp+A0h] [rbp+8h] BYREF
  __int64 *v17; // [rsp+B0h] [rbp+18h] BYREF
  __int64 (__fastcall ***v18)(_QWORD, GUID *, __int64 *); // [rsp+B8h] [rbp+20h] BYREF

  try
  {
    if ( *((_QWORD *)this + 36) )
    {
      Microsoft::WRL::ComPtr<IStreamGroupProxy>::ComPtr<IStreamGroupProxy>((__int64 *)&v18, (__int64)this - 8);
      v16 = 0LL;
      v17 = &v16;
      v5 = Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::WeakRef>::operator Microsoft::WRL::WeakRef *(&v17);
      if ( (int)Microsoft::WRL::AsWeak<IStreamGroupProxy>(v18, v5) >= 0 )
      {
        v6 = (*(__int64 (__fastcall **)(struct IAudioService *))(*(_QWORD *)g_AudioService + 128LL))(g_AudioService);
        v7 = v16;
        if ( v16 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 8LL))(v16);
        v14[0] = off_1801706C8;
        v14[1] = v7;
        v17 = 0LL;
        v14[7] = v14;
        Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&v17);
        v8 = CSerialWorkQueue::QueueWorkItem(v6, (__int64)v14);
        if ( v8 < 0 )
          wil::details::in1diag3::_Throw_Hr(
            retaddr,
            1483LL,
            (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
            (const char *)(unsigned int)v8,
            v12);
        v9 = (_DWORD *)wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                         (__int64)retaddr,
                         _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_)[1];
        if ( *v9 > 4u )
        {
          v17 = (__int64 *)"OnEndpointAvailableForUse";
          v13 = a2;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapSz<char>>(
            (__int64)v9,
            byte_180193438,
            v10,
            v11,
            &v13,
            (const CHAR **)&v17);
        }
      }
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v16);
      Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease((__int64 *)&v18);
    }
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0x5D5,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
      a4);
  }
}
