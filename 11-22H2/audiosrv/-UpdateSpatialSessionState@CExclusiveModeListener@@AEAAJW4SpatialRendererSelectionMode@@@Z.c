/*
 * XREFs of ?UpdateSpatialSessionState@CExclusiveModeListener@@AEAAJW4SpatialRendererSelectionMode@@@Z @ 0x18013BB58
 * Callers:
 *     ?UpdateExclusiveViewingMode@CExclusiveModeListener@@AEAAJXZ @ 0x18013BAC0 (-UpdateExclusiveViewingMode@CExclusiveModeListener@@AEAAJXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180005738 (--1-$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18001C004 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1800669A0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 *     ?SetDeviceRendererSelectionMode@CExclusiveModeListener@@AEAAJPEAUIMMDevice@@W4SpatialRendererSelectionMode@@@Z @ 0x18013B5D8 (-SetDeviceRendererSelectionMode@CExclusiveModeListener@@AEAAJPEAUIMMDevice@@W4SpatialRendererSel.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CExclusiveModeListener::UpdateSpatialSessionState(__int64 a1, unsigned int a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v6; // rdx
  unsigned int v7; // ebx
  __int64 v8; // rcx
  int v9; // edi
  __int64 v11; // rdx
  unsigned int v12; // [rsp+30h] [rbp-29h] BYREF
  __int64 *v13; // [rsp+38h] [rbp-21h] BYREF
  __int64 v14[2]; // [rsp+40h] [rbp-19h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v15; // [rsp+50h] [rbp-9h] BYREF
  __int64 **v16; // [rsp+70h] [rbp+17h]
  int v17; // [rsp+78h] [rbp+1Fh]
  int v18; // [rsp+7Ch] [rbp+23h]
  unsigned int *v19; // [rsp+80h] [rbp+27h]
  int v20; // [rsp+88h] [rbp+2Fh]
  int v21; // [rsp+8Ch] [rbp+33h]
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+5Fh]

  if ( (unsigned int)dword_1801CD178 > 5 )
  {
    v12 = *(_DWORD *)(a1 + 152);
    LODWORD(v13) = a2;
    v19 = &v12;
    v20 = 4;
    v21 = 0;
    v16 = &v13;
    v17 = 4;
    v18 = 0;
    tlgWriteTransfer_EventWriteTransfer(
      (__int64)&dword_1801CD178,
      (unsigned __int8 *)dword_180195044,
      0LL,
      0LL,
      4u,
      &v15);
  }
  if ( a2 == *(_DWORD *)(a1 + 152) )
    return 0LL;
  *(_DWORD *)(a1 + 152) = a2;
  v14[0] = 0LL;
  v4 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, __int64 *))(**(_QWORD **)(a1 + 56) + 24LL))(
         *(_QWORD *)(a1 + 56),
         0LL,
         1LL,
         v14);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v12 = 0;
    v4 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v14[0] + 24LL))(v14[0], &v12);
    v5 = v4;
    if ( v4 < 0 )
    {
      v6 = 395LL;
      goto LABEL_8;
    }
    v7 = 0;
    if ( v12 )
    {
      while ( 1 )
      {
        v13 = 0LL;
        v9 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 **))(*(_QWORD *)v14[0] + 32LL))(v14[0], v7, &v13);
        if ( v9 < 0 )
          break;
        v9 = CExclusiveModeListener::SetDeviceRendererSelectionMode(v8, v13, a2);
        if ( v9 < 0 )
        {
          v11 = 401LL;
          goto LABEL_17;
        }
        wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v13);
        if ( ++v7 >= v12 )
          goto LABEL_13;
      }
      v11 = 400LL;
LABEL_17:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v11,
        (int)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\exclusivemodelistener.cpp",
        (const char *)(unsigned int)v9);
      wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v13);
      v5 = v9;
      goto LABEL_18;
    }
LABEL_13:
    wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(v14);
    return 0LL;
  }
  v6 = 392LL;
LABEL_8:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v6,
    (int)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\exclusivemodelistener.cpp",
    (const char *)(unsigned int)v4);
LABEL_18:
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(v14);
  return v5;
}
