/*
 * XREFs of ?UnregisterForApplicationPolicyChanges@CSpatialAudioResourceManager@Sarm@@AEAAXPEAVCStreamResource@2@@Z @ 0x180129318
 * Callers:
 *     ?RemoveStream@CSpatialAudioResourceManager@Sarm@@AEAAXPEAVCStreamResource@2@@Z @ 0x1801288F0 (-RemoveStream@CSpatialAudioResourceManager@Sarm@@AEAAXPEAVCStreamResource@2@@Z.c)
 * Callees:
 *     ?reset@?$com_ptr_t@UIVolumeStrip@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18000F4A4 (-reset@-$com_ptr_t@UIVolumeStrip@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180010930 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z @ 0x1800181E0 (-InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z.c)
 *     memmove_0 @ 0x18006A67B (memmove_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800C5F8C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@33@Z @ 0x180129AEC (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_.c)
 *     ?GetProcess@CStreamResource@Sarm@@QEAAJPEAPEAUIAudioProcess@@@Z @ 0x18012B580 (-GetProcess@CStreamResource@Sarm@@QEAAJPEAPEAUIAudioProcess@@@Z.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall Sarm::CSpatialAudioResourceManager::UnregisterForApplicationPolicyChanges(
        Sarm::CSpatialAudioResourceManager *this,
        struct Sarm::CStreamResource *a2,
        __int64 a3,
        int a4)
{
  int v6; // r8d
  _DWORD *i; // rbx
  int v8; // eax
  int v9; // ecx
  Sarm::CSpatialAudioResourceManager *v11; // rbx
  const struct _GUID *v12; // rcx
  const struct _GUID *v13; // rcx
  __int64 v14; // r9
  int v15; // eax
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  struct IAudioProcess *v17; // [rsp+60h] [rbp+20h] BYREF
  Sarm::CSpatialAudioResourceManager *v18; // [rsp+68h] [rbp+28h] BYREF
  int v19; // [rsp+70h] [rbp+30h] BYREF

  v6 = *((_DWORD *)a2 + 13);
  for ( i = (_DWORD *)*((_QWORD *)this + 39); ; i += 2 )
  {
    if ( i == *((_DWORD **)this + 40) )
    {
      v8 = 0;
      v9 = 0;
      goto LABEL_6;
    }
    if ( *i == v6 )
      break;
  }
  v8 = 1;
  v9 = i[1];
LABEL_6:
  if ( (unsigned int)dword_1801C0178 > 5 )
  {
    LODWORD(v17) = v9;
    LODWORD(v18) = v8;
    v19 = v6;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (unsigned int)&dword_1801C0178,
      (unsigned int)&unk_18018B98E,
      v6,
      a4,
      (__int64)&v19,
      (__int64)&v18,
      (__int64)&v17);
  }
  if ( i != *((_DWORD **)this + 40) && i[1]-- == 1 )
  {
    memmove_0(i, i + 2, *((_QWORD *)this + 40) - (_QWORD)(i + 2));
    *((_QWORD *)this + 40) -= 8LL;
    v11 = 0LL;
    v18 = 0LL;
    if ( InlineIsEqualGUID(&GUID_e60ae324_1652_4fcc_a7f2_36aab2a4f68b, &GUID_00000000_0000_0000_c000_000000000046) )
    {
      v11 = this;
      v18 = this;
      (*(void (__fastcall **)(Sarm::CSpatialAudioResourceManager *))(*(_QWORD *)this + 8LL))(this);
    }
    else
    {
      if ( InlineIsEqualGUID(v12, &GUID_2c794bb5_12d9_433a_b0a1_e3e5c6f54b6b) )
      {
        v11 = this;
      }
      else
      {
        if ( !InlineIsEqualGUID(v13, v13) )
        {
          v14 = 2147500034LL;
LABEL_20:
          if ( (int)v14 >= 0 )
          {
            v17 = 0LL;
            wil::com_ptr_t<IVolumeStrip,wil::err_returncode_policy>::reset((__int64 *)&v17);
            if ( Sarm::CStreamResource::GetProcess(a2, &v17) >= 0 )
            {
              v15 = (*(__int64 (__fastcall **)(struct IAudioProcess *, Sarm::CSpatialAudioResourceManager *))(*(_QWORD *)v17 + 552LL))(
                      v17,
                      v11);
              if ( v15 < 0 )
                wil::details::in1diag3::_Log_Hr(
                  retaddr,
                  (void *)0x300,
                  (__int64)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\spatialaudioresourcemanager.cpp",
                  (const char *)(unsigned int)v15);
            }
            wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v17);
          }
          else
          {
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              (void *)0x2FB,
              (__int64)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\spatialaudioresourcemanager.cpp",
              (const char *)v14);
          }
          wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v18);
          return;
        }
        v11 = (Sarm::CSpatialAudioResourceManager *)((char *)this + 8);
      }
      v18 = v11;
      (*(void (__fastcall **)(Sarm::CSpatialAudioResourceManager *))(*(_QWORD *)v11 + 8LL))(v11);
    }
    v14 = 0LL;
    goto LABEL_20;
  }
}
