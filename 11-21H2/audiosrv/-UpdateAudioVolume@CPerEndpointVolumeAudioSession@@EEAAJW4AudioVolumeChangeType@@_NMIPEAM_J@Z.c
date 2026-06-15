/*
 * XREFs of ?UpdateAudioVolume@CPerEndpointVolumeAudioSession@@EEAAJW4AudioVolumeChangeType@@_NMIPEAM_J@Z @ 0x1800DB090
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180010930 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?SetVolumeAllStreams@CAudioSession@@IEAAXW4AudioVolumeChangeType@@_NMIPEAM_J@Z @ 0x180012470 (-SetVolumeAllStreams@CAudioSession@@IEAAXW4AudioVolumeChangeType@@_NMIPEAM_J@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BFD20 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800C5F8C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     WPP_SF_dg @ 0x1800CF1E0 (WPP_SF_dg.c)
 *     ?GetVolumeStrip@CPerEndpointVolumeAudioSession@@AEAAJPEAPEAUIVolumeStrip@@@Z @ 0x1800D8808 (-GetVolumeStrip@CPerEndpointVolumeAudioSession@@AEAAJPEAPEAUIVolumeStrip@@@Z.c)
 */

__int64 __fastcall CPerEndpointVolumeAudioSession::UpdateAudioVolume(
        CPerEndpointVolumeAudioSession *a1,
        int a2,
        unsigned __int8 a3,
        __int64 a4,
        unsigned int a5,
        __int64 a6)
{
  unsigned int v6; // esi
  int VolumeStrip; // eax
  unsigned int v10; // ebx
  __int64 v11; // rdx
  _QWORD **v12; // rbp
  __int64 v13; // r8
  unsigned int v15; // ebx
  unsigned int v16; // esi
  __int64 v17; // rdi
  CEndpointStoreCache *v18; // rcx
  int v19; // eax
  struct IVolumeStrip *v20[2]; // [rsp+40h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  unsigned int v22; // [rsp+78h] [rbp+10h] BYREF

  v6 = a3;
  CAudioSession::SetVolumeAllStreams((__int64)a1, a2, 0, 1.0, 0, 0LL);
  if ( (unsigned int)(a2 - 2) > 1 )
  {
    v20[0] = 0LL;
    VolumeStrip = CPerEndpointVolumeAudioSession::GetVolumeStrip(a1, v20);
    v10 = VolumeStrip;
    if ( VolumeStrip < 0 )
    {
      v11 = 4351LL;
LABEL_8:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v11,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
        (const char *)(unsigned int)VolumeStrip);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)v20);
      return v10;
    }
    v12 = (_QWORD **)((char *)a1 + 264);
    VolumeStrip = (*(__int64 (__fastcall **)(struct IVolumeStrip *, _QWORD, _QWORD **, _QWORD))(*(_QWORD *)v20[0] + 144LL))(
                    v20[0],
                    v6,
                    (_QWORD **)a1 + 33,
                    0LL);
    v10 = VolumeStrip;
    if ( VolumeStrip < 0 )
    {
      v11 = 4358LL;
      goto LABEL_8;
    }
    v22 = 0;
    VolumeStrip = (*(__int64 (__fastcall **)(_QWORD *, unsigned int *))(**((_QWORD **)a1 + 121) + 48LL))(
                    *((_QWORD **)a1 + 121),
                    &v22);
    v10 = VolumeStrip;
    if ( VolumeStrip < 0 )
    {
      v11 = 4361LL;
      goto LABEL_8;
    }
    v15 = 0;
    v16 = a5;
    if ( a5 )
    {
      v17 = a6;
      v18 = WPP_GLOBAL_Control;
      do
      {
        if ( v18 != (CEndpointStoreCache *)&WPP_GLOBAL_Control
          && (*((_DWORD *)v18 + 7) & 0x200000) != 0
          && *((_BYTE *)v18 + 25) >= 4u )
        {
          WPP_SF_dg(*((_QWORD *)v18 + 2), 0x46u, (__int64)&WPP_d4601149da203bf03f1316021d4590fb_Traceguids, v15);
          v18 = WPP_GLOBAL_Control;
        }
        if ( v15 < v22 )
        {
          v19 = (*(__int64 (__fastcall **)(struct IVolumeStrip *, _QWORD, __int64, _QWORD **, _QWORD))(*(_QWORD *)v20[0] + 96LL))(
                  v20[0],
                  v15,
                  v13,
                  v12,
                  0LL);
          if ( v19 < 0 )
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              (void *)0x1112,
              (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
              (const char *)(unsigned int)v19);
          v18 = WPP_GLOBAL_Control;
        }
        ++v15;
        v17 += 4LL;
      }
      while ( v15 < v16 );
    }
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)v20);
  }
  return 0LL;
}
