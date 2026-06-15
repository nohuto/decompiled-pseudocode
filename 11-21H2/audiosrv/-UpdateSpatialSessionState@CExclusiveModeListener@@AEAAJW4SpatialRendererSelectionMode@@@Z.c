/*
 * XREFs of ?UpdateSpatialSessionState@CExclusiveModeListener@@AEAAJW4SpatialRendererSelectionMode@@@Z @ 0x18012E238
 * Callers:
 *     ?UpdateExclusiveViewingMode@CExclusiveModeListener@@AEAAJXZ @ 0x18012E1A0 (-UpdateExclusiveViewingMode@CExclusiveModeListener@@AEAAJXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180010930 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18003FB14 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x18005E920 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BFD20 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetDeviceRendererSelectionMode@CExclusiveModeListener@@AEAAJPEAUIMMDevice@@W4SpatialRendererSelectionMode@@@Z @ 0x18012DCE0 (-SetDeviceRendererSelectionMode@CExclusiveModeListener@@AEAAJPEAUIMMDevice@@W4SpatialRendererSel.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CExclusiveModeListener::UpdateSpatialSessionState(__int64 a1, unsigned int a2)
{
  int v4; // eax
  int v5; // eax
  unsigned int v6; // ebx
  __int64 v7; // rdx
  unsigned int v8; // edi
  int v9; // eax
  __int64 v10; // rcx
  __int64 v12; // rdx
  unsigned int v13; // [rsp+30h] [rbp-29h] BYREF
  __int64 v14; // [rsp+38h] [rbp-21h] BYREF
  __int64 *v15[2]; // [rsp+40h] [rbp-19h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v16; // [rsp+50h] [rbp-9h] BYREF
  __int64 *v17; // [rsp+70h] [rbp+17h]
  int v18; // [rsp+78h] [rbp+1Fh]
  int v19; // [rsp+7Ch] [rbp+23h]
  unsigned int *v20; // [rsp+80h] [rbp+27h]
  int v21; // [rsp+88h] [rbp+2Fh]
  int v22; // [rsp+8Ch] [rbp+33h]
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+5Fh]

  v4 = *(_DWORD *)(a1 + 152);
  if ( (unsigned int)dword_1801C0178 > 5 )
  {
    v13 = *(_DWORD *)(a1 + 152);
    LODWORD(v14) = a2;
    v20 = &v13;
    v21 = 4;
    v22 = 0;
    v17 = &v14;
    v18 = 4;
    v19 = 0;
    tlgWriteTransfer_EventWriteTransfer(
      (__int64)&dword_1801C0178,
      (unsigned __int8 *)dword_18018C05A,
      0LL,
      0LL,
      4u,
      &v16);
    v4 = *(_DWORD *)(a1 + 152);
  }
  if ( a2 == v4 )
    return 0LL;
  *(_DWORD *)(a1 + 152) = a2;
  v14 = 0LL;
  v5 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, __int64 *))(**(_QWORD **)(a1 + 56) + 24LL))(
         *(_QWORD *)(a1 + 56),
         0LL,
         1LL,
         &v14);
  v6 = v5;
  if ( v5 >= 0 )
  {
    v13 = 0;
    v5 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v14 + 24LL))(v14, &v13);
    v6 = v5;
    if ( v5 < 0 )
    {
      v7 = 395LL;
      goto LABEL_8;
    }
    v8 = 0;
    if ( v13 )
    {
      while ( 1 )
      {
        v15[0] = 0LL;
        v9 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 **))(*(_QWORD *)v14 + 32LL))(v14, v8, v15);
        v6 = v9;
        if ( v9 < 0 )
          break;
        v9 = CExclusiveModeListener::SetDeviceRendererSelectionMode(v10, v15[0], a2);
        v6 = v9;
        if ( v9 < 0 )
        {
          v12 = 401LL;
          goto LABEL_17;
        }
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)v15);
        if ( ++v8 >= v13 )
          goto LABEL_13;
      }
      v12 = 400LL;
LABEL_17:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v12,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\exclusivemodelistener.cpp",
        (const char *)(unsigned int)v9);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)v15);
      goto LABEL_18;
    }
LABEL_13:
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v14);
    return 0LL;
  }
  v7 = 392LL;
LABEL_8:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v7,
    (__int64)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\exclusivemodelistener.cpp",
    (const char *)(unsigned int)v5);
LABEL_18:
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v14);
  return v6;
}
