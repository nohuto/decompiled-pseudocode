/*
 * XREFs of ?RegisterForApplicationPolicyChanges@CSpatialAudioResourceManager@Sarm@@AEAAJPEAVCStreamResource@2@@Z @ 0x180127F48
 * Callers:
 *     ?AddStream@CSpatialAudioResourceManager@Sarm@@AEAAJPEAUIAudioStreamInfo@@KPEBU_GUID@@PEBUSPATIAL_STREAM_PROPERTIES@@PEAVCEndpointResourcePool@2@@Z @ 0x1801262A0 (-AddStream@CSpatialAudioResourceManager@Sarm@@AEAAJPEAUIAudioStreamInfo@@KPEBU_GUID@@PEBUSPATIAL.c)
 * Callees:
 *     ?reset@?$com_ptr_t@UIVolumeStrip@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18000F4A4 (-reset@-$com_ptr_t@UIVolumeStrip@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180010930 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z @ 0x1800181E0 (-InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BFD20 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_Emplace_reallocate@UAppPolicyChangeSubscription@CSpatialAudioResourceManager@Sarm@@@?$vector@UAppPolicyChangeSubscription@CSpatialAudioResourceManager@Sarm@@V?$allocator@UAppPolicyChangeSubscription@CSpatialAudioResourceManager@Sarm@@@std@@@std@@QEAAPEAUAppPolicyChangeSubscription@CSpatialAudioResourceManager@Sarm@@QEAU234@$$QEAU234@@Z @ 0x1801256FC (--$_Emplace_reallocate@UAppPolicyChangeSubscription@CSpatialAudioResourceManager@Sarm@@@-$vector.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@33@Z @ 0x180129AEC (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_.c)
 *     ?GetProcess@CStreamResource@Sarm@@QEAAJPEAPEAUIAudioProcess@@@Z @ 0x18012B580 (-GetProcess@CStreamResource@Sarm@@QEAAJPEAPEAUIAudioProcess@@@Z.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall Sarm::CSpatialAudioResourceManager::RegisterForApplicationPolicyChanges(
        Sarm::CSpatialAudioResourceManager *this,
        struct Sarm::CStreamResource *a2,
        int a3,
        const char *a4)
{
  unsigned int v6; // r15d
  char **v7; // rsi
  _DWORD *v8; // rbx
  int v9; // eax
  int v10; // ecx
  const struct _GUID *v11; // rcx
  const struct _GUID *v12; // rcx
  Sarm::CSpatialAudioResourceManager *v13; // r8
  int v14; // ebx
  __int64 result; // rax
  int Process; // eax
  unsigned int v17; // ebx
  int v18; // eax
  unsigned int v19; // ebx
  char *v20; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]
  Sarm::CSpatialAudioResourceManager *v22; // [rsp+90h] [rbp+8h] BYREF
  struct IAudioProcess *v23; // [rsp+98h] [rbp+10h] BYREF
  __int64 v24; // [rsp+A0h] [rbp+18h] BYREF

  v6 = *((_DWORD *)a2 + 13);
  v7 = (char **)((char *)this + 312);
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
    if ( (unsigned int)dword_1801C0178 > 5 )
    {
      LODWORD(v22) = v10;
      LODWORD(v23) = v9;
      LODWORD(v24) = v6;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        (unsigned int)&dword_1801C0178,
        (unsigned int)&unk_18018B95F,
        a3,
        (_DWORD)a4,
        (__int64)&v24,
        (__int64)&v23,
        (__int64)&v22);
    }
    if ( *((_DWORD **)this + 40) != v8 )
    {
      ++v8[1];
      return 0LL;
    }
    v22 = 0LL;
    if ( InlineIsEqualGUID(&GUID_e60ae324_1652_4fcc_a7f2_36aab2a4f68b, &GUID_00000000_0000_0000_c000_000000000046) )
    {
      v22 = this;
      (*(void (__fastcall **)(Sarm::CSpatialAudioResourceManager *))(*(_QWORD *)this + 8LL))(this);
    }
    else
    {
      if ( InlineIsEqualGUID(v11, &GUID_2c794bb5_12d9_433a_b0a1_e3e5c6f54b6b) )
      {
        v13 = this;
        v22 = this;
      }
      else
      {
        if ( !InlineIsEqualGUID(v12, v12) )
        {
          v14 = -2147467262;
LABEL_19:
          if ( v14 < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x2D2,
              (__int64)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\spatialaudioresourcemanager.cpp",
              (const char *)(unsigned int)v14);
            wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v22);
            return (unsigned int)v14;
          }
          v23 = 0LL;
          wil::com_ptr_t<IVolumeStrip,wil::err_returncode_policy>::reset((__int64 *)&v23);
          Process = Sarm::CStreamResource::GetProcess(a2, &v23);
          v17 = Process;
          if ( Process < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x2D5,
              (__int64)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\spatialaudioresourcemanager.cpp",
              (const char *)(unsigned int)Process);
            wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v23);
            wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v22);
            return v17;
          }
          v18 = (*(__int64 (__fastcall **)(struct IAudioProcess *, Sarm::CSpatialAudioResourceManager *))(*(_QWORD *)v23 + 544LL))(
                  v23,
                  v22);
          v19 = v18;
          if ( v18 < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x2D7,
              (__int64)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\spatialaudioresourcemanager.cpp",
              (const char *)(unsigned int)v18);
            wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v23);
            wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v22);
            return v19;
          }
          v24 = v6 | 0x100000000LL;
          v20 = (char *)*((_QWORD *)this + 40);
          if ( v20 == *((char **)this + 41) )
          {
            std::vector<Sarm::CSpatialAudioResourceManager::AppPolicyChangeSubscription>::_Emplace_reallocate<Sarm::CSpatialAudioResourceManager::AppPolicyChangeSubscription>(
              v7,
              v20,
              &v24);
          }
          else
          {
            *(_QWORD *)v20 = v24;
            v7[1] += 8;
          }
          wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v23);
          wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v22);
          return 0LL;
        }
        v22 = v13;
      }
      (*(void (__fastcall **)(Sarm::CSpatialAudioResourceManager *))(*(_QWORD *)v13 + 8LL))(v13);
    }
    v14 = 0;
    goto LABEL_19;
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
