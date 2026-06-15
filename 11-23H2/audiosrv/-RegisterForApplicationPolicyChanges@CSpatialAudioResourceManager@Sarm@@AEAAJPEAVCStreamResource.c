/*
 * XREFs of ?RegisterForApplicationPolicyChanges@CSpatialAudioResourceManager@Sarm@@AEAAJPEAVCStreamResource@2@@Z @ 0x180135998
 * Callers:
 *     ?AddStream@CSpatialAudioResourceManager@Sarm@@AEAAJPEAUIAudioStreamInfo@@KPEBU_GUID@@PEBUSPATIAL_STREAM_PROPERTIES@@PEAVCEndpointResourcePool@2@@Z @ 0x180133DE4 (-AddStream@CSpatialAudioResourceManager@Sarm@@AEAAJPEAUIAudioStreamInfo@@KPEBU_GUID@@PEBUSPATIAL.c)
 * Callees:
 *     ??1?$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180005738 (--1-$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z @ 0x18002DDCC (-InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$com_ptr_t@UIVolumeStrip@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180048A20 (-reset@-$com_ptr_t@UIVolumeStrip@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$_Emplace_reallocate@UAppPolicyChangeSubscription@CSpatialAudioResourceManager@Sarm@@@?$vector@UAppPolicyChangeSubscription@CSpatialAudioResourceManager@Sarm@@V?$allocator@UAppPolicyChangeSubscription@CSpatialAudioResourceManager@Sarm@@@std@@@std@@QEAAPEAUAppPolicyChangeSubscription@CSpatialAudioResourceManager@Sarm@@QEAU234@$$QEAU234@@Z @ 0x180133258 (--$_Emplace_reallocate@UAppPolicyChangeSubscription@CSpatialAudioResourceManager@Sarm@@@-$vector.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@33@Z @ 0x1801373EC (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_.c)
 *     ?GetProcess@CStreamResource@Sarm@@QEAAJPEAPEAUIAudioProcess@@@Z @ 0x180138E14 (-GetProcess@CStreamResource@Sarm@@QEAAJPEAPEAUIAudioProcess@@@Z.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall Sarm::CSpatialAudioResourceManager::RegisterForApplicationPolicyChanges(
        Sarm::CSpatialAudioResourceManager *this,
        struct Sarm::CStreamResource *a2,
        int a3,
        const char *a4)
{
  Sarm::CSpatialAudioResourceManager *v5; // rbx
  unsigned int v6; // r15d
  char *v7; // rsi
  _DWORD *v8; // rdi
  int v9; // eax
  int v10; // ecx
  const struct _GUID *v11; // rcx
  const struct _GUID *v12; // rcx
  int v13; // edi
  __int64 result; // rax
  int Process; // eax
  unsigned int v16; // ebx
  int v17; // eax
  unsigned int v18; // ebx
  char *v19; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]
  Sarm::CSpatialAudioResourceManager *v21; // [rsp+90h] [rbp+8h] BYREF
  struct IAudioProcess *v22; // [rsp+98h] [rbp+10h] BYREF
  __int64 v23; // [rsp+A0h] [rbp+18h] BYREF

  v5 = this;
  v6 = *((_DWORD *)a2 + 13);
  v7 = (char *)this + 312;
  v8 = (_DWORD *)*((_QWORD *)this + 39);
  try
  {
    while ( 1 )
    {
      if ( v8 == *((_DWORD **)this + 40) )
      {
        v9 = 0;
        v10 = 0;
        goto LABEL_6;
      }
      if ( *v8 == v6 )
        break;
      v8 += 2;
    }
    v9 = 1;
    v10 = v8[1];
LABEL_6:
    if ( (unsigned int)dword_1801CD178 > 5 )
    {
      LODWORD(v21) = v10;
      LODWORD(v22) = v9;
      LODWORD(v23) = v6;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        (unsigned int)&dword_1801CD178,
        (unsigned int)&unk_1801949B0,
        a3,
        (_DWORD)a4,
        (__int64)&v23,
        (__int64)&v22,
        (__int64)&v21);
    }
    if ( *((_DWORD **)v5 + 40) == v8 )
    {
      v21 = 0LL;
      if ( InlineIsEqualGUID(&GUID_e60ae324_1652_4fcc_a7f2_36aab2a4f68b, &GUID_00000000_0000_0000_c000_000000000046) )
      {
        v21 = v5;
        (*(void (__fastcall **)(Sarm::CSpatialAudioResourceManager *))(*(_QWORD *)v5 + 8LL))(v5);
        v13 = 0;
      }
      else if ( InlineIsEqualGUID(v11, &GUID_2c794bb5_12d9_433a_b0a1_e3e5c6f54b6b)
             || (v5 = (Sarm::CSpatialAudioResourceManager *)((char *)v5 + 8), InlineIsEqualGUID(v12, v12)) )
      {
        v13 = 0;
        v21 = v5;
        (*(void (__fastcall **)(Sarm::CSpatialAudioResourceManager *))(*(_QWORD *)v5 + 8LL))(v5);
      }
      else
      {
        v13 = -2147467262;
      }
      if ( v13 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x2D2,
          (int)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\spatialaudioresourcemanager.cpp",
          (const char *)(unsigned int)v13);
        wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v21);
        return (unsigned int)v13;
      }
      v22 = 0LL;
      wil::com_ptr_t<IVolumeStrip,wil::err_returncode_policy>::reset((__int64 *)&v22);
      Process = Sarm::CStreamResource::GetProcess(a2, &v22);
      v16 = Process;
      if ( Process < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x2D5,
          (int)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\spatialaudioresourcemanager.cpp",
          (const char *)(unsigned int)Process);
        wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v22);
        wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v21);
        return v16;
      }
      v17 = (*(__int64 (__fastcall **)(struct IAudioProcess *, Sarm::CSpatialAudioResourceManager *))(*(_QWORD *)v22 + 544LL))(
              v22,
              v21);
      v18 = v17;
      if ( v17 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x2D7,
          (int)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\spatialaudioresourcemanager.cpp",
          (const char *)(unsigned int)v17);
        wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v22);
        wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v21);
        return v18;
      }
      v23 = v6 | 0x100000000LL;
      v19 = (char *)*((_QWORD *)v7 + 1);
      if ( v19 == *((char **)v7 + 2) )
      {
        std::vector<Sarm::CSpatialAudioResourceManager::AppPolicyChangeSubscription>::_Emplace_reallocate<Sarm::CSpatialAudioResourceManager::AppPolicyChangeSubscription>(
          (char **)v7,
          v19,
          &v23);
      }
      else
      {
        *(_QWORD *)v19 = v23;
        *((_QWORD *)v7 + 1) += 8LL;
      }
      wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v22);
      wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v21);
    }
    else
    {
      ++v8[1];
    }
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x2E4,
                           (int)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\spatialaudioresourcemanager.cpp",
                           a4);
  }
  return result;
}
