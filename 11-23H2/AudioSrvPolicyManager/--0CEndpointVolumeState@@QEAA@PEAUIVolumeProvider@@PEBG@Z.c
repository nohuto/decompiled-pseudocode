/*
 * XREFs of ??0CEndpointVolumeState@@QEAA@PEAUIVolumeProvider@@PEBG@Z @ 0x18003F5D0
 * Callers:
 *     ??$make_unique@VCEndpointVolumeState@@PEAUIVolumeProvider@@AEAPEBG$0A@@std@@YA?AV?$unique_ptr@VCEndpointVolumeState@@U?$default_delete@VCEndpointVolumeState@@@std@@@0@$$QEAPEAUIVolumeProvider@@AEAPEBG@Z @ 0x18003F564 (--$make_unique@VCEndpointVolumeState@@PEAUIVolumeProvider@@AEAPEBG$0A@@std@@YA-AV-$unique_ptr@VC.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800233A4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ConvertDbToEngineVolume@@YAMM@Z @ 0x18002C8E4 (-ConvertDbToEngineVolume@@YAMM@Z.c)
 *     ??0_CEndpointVolumeNotificationDelegator@CEndpointVolumeState@@QEAA@PEAV1@@Z @ 0x18003F868 (--0_CEndpointVolumeNotificationDelegator@CEndpointVolumeState@@QEAA@PEAV1@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800476D0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
CEndpointVolumeState *__fastcall CEndpointVolumeState::CEndpointVolumeState(
        CEndpointVolumeState *this,
        struct IVolumeProvider *a2,
        const unsigned __int16 *a3)
{
  char v6; // bl
  _QWORD *v7; // rsi
  __int64 (__fastcall *v8)(struct IVolumeProvider *, const unsigned __int16 *, _QWORD *); // r15
  __int64 v9; // rcx
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // eax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  int v16; // [rsp+58h] [rbp+10h] BYREF

  v6 = 0;
  *(_DWORD *)this = 0;
  *((_DWORD *)this + 1) = 1065353216;
  *((_BYTE *)this + 8) = 0;
  *((_DWORD *)this + 3) = 0;
  *((_DWORD *)this + 4) = 0;
  v7 = (_QWORD *)((char *)this + 24);
  *((_QWORD *)this + 3) = 0LL;
  *((_BYTE *)this + 32) = 0;
  *((_DWORD *)this + 9) = 0;
  CEndpointVolumeState::_CEndpointVolumeNotificationDelegator::_CEndpointVolumeNotificationDelegator(
    (CEndpointVolumeState *)((char *)this + 40),
    this);
  v8 = *(__int64 (__fastcall **)(struct IVolumeProvider *, const unsigned __int16 *, _QWORD *))(*(_QWORD *)a2 + 40LL);
  v9 = *v7;
  *v7 = 0LL;
  if ( v9 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  v10 = v8(a2, a3, v7);
  if ( v10 >= 0 )
  {
    v11 = (*(__int64 (__fastcall **)(_QWORD, CEndpointVolumeState *))(*(_QWORD *)*v7 + 72LL))(*v7, this);
    if ( v11 < 0 )
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        54LL,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\endpointvolumestate\\endpointvolumestate.cpp",
        (const char *)(unsigned int)v11);
      *(_DWORD *)this = 0;
    }
    *((float *)this + 1) = ConvertDbToEngineVolume(*(float *)this);
    v12 = (*(__int64 (__fastcall **)(_QWORD, int *))(*(_QWORD *)*v7 + 152LL))(*v7, &v16);
    if ( v12 >= 0 )
      *((_BYTE *)this + 8) = v16 != 0;
    else
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        61LL,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\endpointvolumestate\\endpointvolumestate.cpp",
        (const char *)(unsigned int)v12);
    v13 = (*(__int64 (__fastcall **)(_QWORD, char *))(*(_QWORD *)*v7 + 232LL))(*v7, (char *)this + 40);
    if ( v13 >= 0 )
      v6 = 1;
    else
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        68LL,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\endpointvolumestate\\endpointvolumestate.cpp",
        (const char *)(unsigned int)v13);
    *((_BYTE *)this + 32) = v6;
  }
  else
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      49LL,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\endpointvolumestate\\endpointvolumestate.cpp",
      (const char *)(unsigned int)v10);
  }
  return this;
}
