/*
 * XREFs of ?FreeResourcesAndLockForStreamGroupConnectionDisconnection@CAudioResourceManager@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@PEAUIDeviceGraphObjectsStore@@@Z @ 0x18006374C
 * Callers:
 *     ?LockEndpointForUse@CPolicyConfig@@UEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@PEBG@Z @ 0x1800636F0 (-LockEndpointForUse@CPolicyConfig@@UEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PE.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180009588 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180024B78 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ?InternalRelease@?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x180046188 (-InternalRelease@-$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180047134 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$07@@U2@U?$_tlgWrapperByVal@$00@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$07@@4AEBU?$_tlgWrapperByVal@$00@@@Z @ 0x180063A18 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$07@@U2@U-$_tlgWrapperByVal@$00@@@-$_tlgWriteTempl.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$_Destroy_range@V?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@YAXPEAV?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@QEAV123@AEAV?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@0@@Z @ 0x180081418 (--$_Destroy_range@V-$allocator@V-$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@YAXPEAV.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CAudioResourceManager::FreeResourcesAndLockForStreamGroupConnectionDisconnection(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  int v4; // eax
  wil::details::in1diag3 *v5; // rcx
  __int64 *v6; // r15
  __int64 *v7; // rdi
  __int64 v8; // rsi
  __int64 v9; // r13
  char v10; // r14
  int v11; // eax
  char v12; // al
  __int64 **v13; // r14
  __int64 **v14; // rbx
  __int64 *v15; // rcx
  __int64 v16; // rax
  _DWORD *v17; // rbx
  int v18; // r8d
  int v19; // r9d
  int v21; // eax
  __int128 v22; // [rsp+40h] [rbp-69h] BYREF
  __int64 v23; // [rsp+50h] [rbp-59h]
  int v24; // [rsp+58h] [rbp-51h]
  __int128 v25; // [rsp+60h] [rbp-49h] BYREF
  __int64 v26; // [rsp+70h] [rbp-39h]
  __int64 v27; // [rsp+78h] [rbp-31h] BYREF
  _QWORD v28[16]; // [rsp+80h] [rbp-29h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+108h] [rbp+5Fh]
  __int64 v30; // [rsp+110h] [rbp+67h] BYREF
  __int64 v31; // [rsp+118h] [rbp+6Fh]
  __int64 v32; // [rsp+120h] [rbp+77h] BYREF
  __int64 v33; // [rsp+128h] [rbp+7Fh] BYREF

  v31 = a2;
  v30 = a1;
  v24 = 0;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)a3 + 120LL))(a3);
  v24 = 1;
  v25 = 0LL;
  v26 = 0LL;
  v4 = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)a3 + 104LL))(a3, &v25);
  v5 = retaddr;
  if ( v4 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xC87,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
      (const char *)(unsigned int)v4);
  v6 = (__int64 *)*((_QWORD *)&v25 + 1);
  v7 = (__int64 *)v25;
  v8 = (__int64)(*((_QWORD *)&v25 + 1) - v25) >> 3;
  v9 = 0LL;
  v10 = 0;
  LOBYTE(v30) = 0;
  if ( (_QWORD)v25 != *((_QWORD *)&v25 + 1) )
  {
    while ( 1 )
    {
      v22 = 0LL;
      v23 = 0LL;
      v11 = (*(__int64 (__fastcall **)(__int64, __int64, __int128 *))(*(_QWORD *)a3 + 112LL))(a3, *v7, &v22);
      if ( v11 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0xC90,
          (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
          (const char *)(unsigned int)v11);
      v9 += (__int64)(*((_QWORD *)&v22 + 1) - v22) >> 3;
      v12 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)*v7 + 88LL))(*v7);
      v13 = (__int64 **)*((_QWORD *)&v22 + 1);
      v14 = (__int64 **)v22;
      if ( !v12 )
        break;
      LOBYTE(v30) = 1;
      if ( (_QWORD)v22 != *((_QWORD *)&v22 + 1) )
      {
        do
        {
          v15 = *v14;
          v16 = **v14;
          v28[0] = off_18017B1A8;
          v28[7] = v28;
          (*(void (__fastcall **)(__int64 *, _QWORD *))(v16 + 384))(v15, v28);
          ++v14;
        }
        while ( v14 != v13 );
LABEL_9:
        v14 = (__int64 **)v22;
      }
      if ( v14 )
      {
        std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<IStreamGroupProxy>>>(v14, *((_QWORD *)&v22 + 1));
        std::_Deallocate<16,0>((void *)v22, (v23 - v22) & 0xFFFFFFFFFFFFFFF8uLL);
      }
      if ( ++v7 == v6 )
      {
        v10 = v30;
        goto LABEL_14;
      }
    }
    while ( v14 != v13 )
    {
      v21 = (*(__int64 (__fastcall **)(struct IDeviceGraphManager *, __int64 *, __int64))(*(_QWORD *)g_DeviceGraphManager
                                                                                        + 40LL))(
              g_DeviceGraphManager,
              *v14,
              *v7);
      if ( v21 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0xC99,
          (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
          (const char *)(unsigned int)v21);
      ++v14;
    }
    Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease(v7);
    goto LABEL_9;
  }
LABEL_14:
  v17 = (_DWORD *)wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                    (__int64)v5,
                    _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_)[1];
  if ( *v17 > 4u )
  {
    LOBYTE(v30) = v10;
    v32 = v9;
    v33 = v8;
    v27 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a3 + 24LL))(a3);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<1>>(
      (_DWORD)v17,
      (unsigned int)&unk_180190140,
      v18,
      v19,
      (__int64)&v27,
      (__int64)&v33,
      (__int64)&v32,
      (__int64)&v30);
  }
  if ( (_QWORD)v25 )
  {
    std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<IStreamGroupProxy>>>(v25, *((_QWORD *)&v25 + 1));
    std::_Deallocate<16,0>((void *)v25, (v26 - v25) & 0xFFFFFFFFFFFFFFF8uLL);
  }
  return v31;
}
