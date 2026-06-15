/*
 * XREFs of ?PersistVolumeState@CVolumeSoftware@@AEAAXXZ @ 0x1801284C0
 * Callers:
 *     ?ProviderFinalRelease@CVolumeSoftware@@UEAAXXZ @ 0x180128830 (-ProviderFinalRelease@CVolumeSoftware@@UEAAXXZ.c)
 *     std::_Func_impl_no_alloc__lambda_32c63f42a8a47fd484a232b52df8772e__void_::_Do_call @ 0x180129F30 (std--_Func_impl_no_alloc__lambda_32c63f42a8a47fd484a232b52df8772e__void_--_Do_call.c)
 * Callees:
 *     ??1?$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180005738 (--1-$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180009588 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??A?$CAtlArray@VCVolumeUnit@@V?$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@QEAAAEAVCVolumeUnit@@_K@Z @ 0x18001BE9C (--A-$CAtlArray@VCVolumeUnit@@V-$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@QEAAAEAVCVolumeUnit@@_K.c)
 *     ?GetDB@CVolumeUnit@@QEAAMXZ @ 0x18001BFD8 (-GetDB@CVolumeUnit@@QEAAMXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 *     WPP_SF_S @ 0x1800DDDDC (WPP_SF_S.c)
 *     WPP_SF_Sdg @ 0x1800E3BF8 (WPP_SF_Sdg.c)
 */

// Hidden C++ exception states: #wind=5
void __fastcall CVolumeSoftware::PersistVolumeState(CVolumeSoftware *this)
{
  unsigned int v2; // ebx
  struct IMMDeviceEnumeratorVtbl *lpVtbl; // rax
  int v4; // eax
  __int64 v5; // rax
  int v6; // eax
  CVolumeUnit *v7; // rax
  CVolumeUnit *v8; // rax
  PROPVARIANT pvar[2]; // [rsp+30h] [rbp-20h] BYREF
  float *v10; // [rsp+40h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]
  __int64 v12; // [rsp+80h] [rbp+30h] BYREF
  __int64 *v13; // [rsp+88h] [rbp+38h] BYREF

  v2 = 0;
  if ( _InterlockedExchange((volatile __int32 *)this + 75, 0) )
  {
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_S(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x2Bu,
        (__int64)&WPP_ae14f8769cc9386b95eddb3bc7f1f163_Traceguids,
        *((const wchar_t **)this + 7));
    }
    v13 = 0LL;
    lpVtbl = g_DeviceEnumerator->lpVtbl;
    v13 = 0LL;
    v4 = ((__int64 (__fastcall *)(struct IMMDeviceEnumerator *, _QWORD, __int64 **))lpVtbl->GetDevice)(
           g_DeviceEnumerator,
           *((_QWORD *)this + 7),
           &v13);
    if ( v4 >= 0 )
    {
      v12 = 0LL;
      v5 = *v13;
      v12 = 0LL;
      v6 = (*(__int64 (__fastcall **)(__int64 *, __int64, __int64 *))(v5 + 32))(v13, 1LL, &v12);
      if ( v6 >= 0 )
      {
        *(_OWORD *)pvar = 0LL;
        v10 = 0LL;
        LOWORD(pvar[0]) = 65;
        LODWORD(pvar[1]) = 4 * *((_DWORD *)this + 29);
        v10 = (float *)CoTaskMemAlloc(LODWORD(pvar[1]));
        if ( v10 )
        {
          if ( *((_DWORD *)this + 29) )
          {
            do
            {
              v7 = (CVolumeUnit *)ATL::CAtlArray<CVolumeUnit,ATL::CElementTraits<CVolumeUnit>>::operator[](
                                    (_QWORD *)this + 10,
                                    v2);
              v10[v2] = CVolumeUnit::GetDB(v7);
              if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
                && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
                && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
              {
                v8 = (CVolumeUnit *)ATL::CAtlArray<CVolumeUnit,ATL::CElementTraits<CVolumeUnit>>::operator[](
                                      (_QWORD *)this + 10,
                                      v2);
                CVolumeUnit::GetDB(v8);
                WPP_SF_Sdg(
                  *((_QWORD *)WPP_GLOBAL_Control + 2),
                  0x2Cu,
                  (__int64)&WPP_ae14f8769cc9386b95eddb3bc7f1f163_Traceguids,
                  *((const wchar_t **)this + 7));
              }
              ++v2;
            }
            while ( v2 < *((_DWORD *)this + 29) );
          }
          (*(void (__fastcall **)(__int64, void *, PROPVARIANT *))(*(_QWORD *)v12 + 48LL))(
            v12,
            &PKEY_APO_MasterVolumeLevel,
            pvar);
        }
        PropVariantClear(pvar);
      }
      else
      {
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x6E8,
          (int)"avcore\\audiocore\\server\\audiosrv\\dll\\volumecontrol.cpp",
          (const char *)(unsigned int)v6);
      }
      wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v12);
    }
    else
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x6E5,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\volumecontrol.cpp",
        (const char *)(unsigned int)v4);
    }
    wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v13);
  }
}
