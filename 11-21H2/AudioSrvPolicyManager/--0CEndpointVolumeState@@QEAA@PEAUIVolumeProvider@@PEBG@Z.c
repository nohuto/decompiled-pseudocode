/*
 * XREFs of ??0CEndpointVolumeState@@QEAA@PEAUIVolumeProvider@@PEBG@Z @ 0x180038498
 * Callers:
 *     ?AddEndpointVolumeReference@CEndpointVolumeStateManager@@UEAAJPEBGAEA_N1AEAM11@Z @ 0x180038940 (-AddEndpointVolumeReference@CEndpointVolumeStateManager@@UEAAJPEBGAEA_N1AEAM11@Z.c)
 * Callees:
 *     pow @ 0x180003494 (pow.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000E27C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180044490 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
CEndpointVolumeState *__fastcall CEndpointVolumeState::CEndpointVolumeState(
        CEndpointVolumeState *this,
        struct IVolumeProvider *a2,
        const unsigned __int16 *a3)
{
  char v6; // di
  _QWORD *v7; // rsi
  __int64 (__fastcall *v8)(struct IVolumeProvider *, const unsigned __int16 *, _QWORD *); // r15
  __int64 v9; // rcx
  int v10; // eax
  int v11; // eax
  float v12; // xmm1_4
  int v13; // eax
  int v14; // eax
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  int v17; // [rsp+78h] [rbp+20h] BYREF

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
  *((_QWORD *)this + 5) = &CEndpointVolumeState::_CEndpointVolumeNotificationDelegator::`vftable';
  *((_QWORD *)this + 6) = this;
  v8 = *(__int64 (__fastcall **)(struct IVolumeProvider *, const unsigned __int16 *, _QWORD *))(*(_QWORD *)a2 + 40LL);
  v9 = *((_QWORD *)this + 3);
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
        (void *)0x36,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\endpointvolumestate\\endpointvolumestate.cpp",
        (const char *)(unsigned int)v11);
      *(_DWORD *)this = 0;
    }
    if ( *(_DWORD *)this == -8388608 )
      v12 = 0.0;
    else
      v12 = pow(10.0, *(float *)this / 20.0);
    *((float *)this + 1) = v12;
    v13 = (*(__int64 (__fastcall **)(_QWORD, int *))(*(_QWORD *)*v7 + 152LL))(*v7, &v17);
    if ( v13 >= 0 )
      *((_BYTE *)this + 8) = v17 != 0;
    else
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x3D,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\endpointvolumestate\\endpointvolumestate.cpp",
        (const char *)(unsigned int)v13);
    v14 = (*(__int64 (__fastcall **)(_QWORD, char *))(*(_QWORD *)*v7 + 232LL))(*v7, (char *)this + 40);
    if ( v14 >= 0 )
      v6 = 1;
    else
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x44,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\endpointvolumestate\\endpointvolumestate.cpp",
        (const char *)(unsigned int)v14);
    *((_BYTE *)this + 32) = v6;
  }
  else
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x31,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\endpointvolumestate\\endpointvolumestate.cpp",
      (const char *)(unsigned int)v10);
  }
  return this;
}
