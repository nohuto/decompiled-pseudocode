/*
 * XREFs of ?OnDeviceAdded@CExclusiveModeListener@@EEAAJPEBG@Z @ 0x18012CB10
 * Callers:
 *     ?OnDeviceStateChanged@CExclusiveModeListener@@EEAAJPEBGK@Z @ 0x18012CC50 (-OnDeviceStateChanged@CExclusiveModeListener@@EEAAJPEBGK@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180010930 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800C5F8C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetDeviceRendererSelectionMode@CExclusiveModeListener@@AEAAJPEAUIMMDevice@@W4SpatialRendererSelectionMode@@@Z @ 0x18012DCE0 (-SetDeviceRendererSelectionMode@CExclusiveModeListener@@AEAAJPEAUIMMDevice@@W4SpatialRendererSel.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CExclusiveModeListener::OnDeviceAdded(CExclusiveModeListener *this, const unsigned __int16 *a2)
{
  __int64 *v3; // rcx
  __int64 v4; // rax
  int v5; // eax
  int v6; // eax
  wil::details::in1diag3 *v7; // rcx
  __int64 v8; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+8h]
  int v11; // [rsp+30h] [rbp+10h] BYREF
  __int64 (__fastcall ***v12)(_QWORD, GUID *, __int64 *); // [rsp+40h] [rbp+20h] BYREF
  __int64 v13; // [rsp+48h] [rbp+28h] BYREF

  v12 = 0LL;
  v3 = (__int64 *)*((_QWORD *)this + 7);
  v4 = *v3;
  v12 = 0LL;
  v5 = (*(__int64 (__fastcall **)(__int64 *, const unsigned __int16 *, _QWORD))(v4 + 40))(v3, a2, &v12);
  if ( v5 >= 0 )
  {
    v13 = 0LL;
    v6 = (**v12)(v12, &GUID_1be09788_6894_4089_8586_9a2a6c265ac5, &v13);
    v7 = retaddr;
    if ( v6 >= 0 )
    {
      v6 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v13 + 24LL))(v13, &v11);
      v7 = retaddr;
      if ( v6 >= 0 )
      {
        if ( v11 )
          goto LABEL_11;
        v6 = CExclusiveModeListener::SetDeviceRendererSelectionMode(retaddr, v12, *((unsigned int *)this + 38));
        v7 = retaddr;
        if ( v6 >= 0 )
          goto LABEL_11;
        v8 = 554LL;
      }
      else
      {
        v8 = 552LL;
      }
    }
    else
    {
      v8 = 549LL;
    }
    wil::details::in1diag3::_Log_Hr(
      v7,
      (void *)v8,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\exclusivemodelistener.cpp",
      (const char *)(unsigned int)v6);
LABEL_11:
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v13);
    goto LABEL_12;
  }
  wil::details::in1diag3::_Log_Hr(
    retaddr,
    (void *)0x222,
    (__int64)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\exclusivemodelistener.cpp",
    (const char *)(unsigned int)v5);
LABEL_12:
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v12);
  return 0LL;
}
