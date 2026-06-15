/*
 * XREFs of ?ApplyFxStateSettings@CSystemAudioDeviceBase@@IEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@H@Z @ 0x140021688
 * Callers:
 *     ?Initialize@CSystemAudioDeviceSharedBase@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K@Z @ 0x1400214C0 (-Initialize@CSystemAudioDeviceSharedBase@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraph.c)
 *     ?Initialize@CSystemAudioDeviceExclusive@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K@Z @ 0x140057EE0 (-Initialize@CSystemAudioDeviceExclusive@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphC.c)
 * Callees:
 *     ??1?$com_ptr_t@VCPrivateAPO@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x140002804 (--1-$com_ptr_t@VCPrivateAPO@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x140012E70 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F1D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetAggregatedGfxSettings@CSystemAudioDeviceCollection@@SAHPEAVCSystemAudioDeviceBase@@@Z @ 0x1400563DC (-GetAggregatedGfxSettings@CSystemAudioDeviceCollection@@SAHPEAVCSystemAudioDeviceBase@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CSystemAudioDeviceBase::ApplyFxStateSettings(
        CSystemAudioDeviceBase *this,
        struct AUDIO_DEVICE_PIPE_DESCRIPTOR *a2,
        int a3)
{
  unsigned int v6; // ebx
  HRESULT v7; // edi
  _QWORD *v9; // r12
  _QWORD *v10; // r15
  _QWORD *v11; // rsi
  unsigned int AggregatedGfxSettings; // eax
  LPVOID ppv; // [rsp+60h] [rbp+8h] BYREF

  v6 = 0;
  v7 = 0;
  ppv = 0LL;
  if ( *((_DWORD *)this + 60) )
  {
    *((_DWORD *)this + 61) = *((_DWORD *)a2 + 35);
    v7 = CoCreateInstance(
           &GUID_bcde0395_e52f_467c_8e3d_c4579291692e,
           0LL,
           0x17u,
           &GUID_a95664d2_9614_4f35_a746_de8db63617e6,
           &ppv);
    if ( v7 >= 0 )
    {
      v9 = (_QWORD *)((char *)this + 288);
      v7 = (*(__int64 (__fastcall **)(LPVOID, _QWORD, char *))(*(_QWORD *)ppv + 40LL))(
             ppv,
             *((_QWORD *)a2 + 7),
             (char *)this + 288);
      if ( v7 >= 0 )
      {
        v10 = (_QWORD *)((char *)this + 264);
        v7 = (*(__int64 (__fastcall **)(_QWORD, GUID *, __int64))(*(_QWORD *)*v9 + 24LL))(
               *v9,
               &GUID_eddce3e4_f3c1_453a_b461_223563cbd886,
               1LL);
        if ( v7 >= 0 )
        {
          if ( a3 || *((_DWORD *)a2 + 25) != 1 )
          {
            v11 = (_QWORD *)((char *)this + 272);
            if ( *((_QWORD *)this + 34) )
              ATL::AtlComPtrAssign((struct IUnknown **)this + 34, 0LL);
          }
          else
          {
            v11 = (_QWORD *)((char *)this + 272);
            v7 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, char *))this + 29))(
                   *((_QWORD *)this + 29),
                   &GUID_076a6922_d802_4f83_baf6_409d9ca11bfe,
                   (char *)this + 272);
            if ( v7 < 0 )
              goto LABEL_2;
          }
          if ( !*v10
            || (AggregatedGfxSettings = CSystemAudioDeviceCollection::GetAggregatedGfxSettings(this),
                v7 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)*v10 + 48LL))(
                       *v10,
                       *v9,
                       AggregatedGfxSettings),
                v7 >= 0) )
          {
            if ( !a3 && *v11 )
            {
              LOBYTE(v6) = *((_DWORD *)this + 61) == 0;
              v7 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*v11 + 24LL))(*v11, v6);
            }
          }
        }
      }
    }
  }
LABEL_2:
  wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>((__int64 *)&ppv);
  return (unsigned int)v7;
}
