/*
 * XREFs of ?AddRenderConnection@CConnectionInstance@@IEAAJPEAUIAudioProcessor@@_K@Z @ 0x1400121A8
 * Callers:
 *     ?AddConnectionsAndActivateAPOs@CPipeInstance@@QEAAJPEAUIAudioDeviceModulesManager@Devices@Media@Windows@@@Z @ 0x140011338 (-AddConnectionsAndActivateAPOs@CPipeInstance@@QEAAJPEAUIAudioDeviceModulesManager@Devices@Media@.c)
 * Callees:
 *     ??1?$com_ptr_t@VCPrivateAPO@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x140002804 (--1-$com_ptr_t@VCPrivateAPO@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ @ 0x14000DD0C (--1-$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ.c)
 *     ?CopyTo@?$CComPtrBase@UIAudioProcessingObject@@@ATL@@QEAAJPEAPEAUIAudioProcessingObject@@@Z @ 0x140015AC4 (-CopyTo@-$CComPtrBase@UIAudioProcessingObject@@@ATL@@QEAAJPEAPEAUIAudioProcessingObject@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F1D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14004DED4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CConnectionInstance::AddRenderConnection(
        CConnectionInstance *this,
        struct IAudioProcessor *a2,
        __int64 a3)
{
  __int64 v6; // rcx
  int v7; // eax
  __int64 v8; // rcx
  int v9; // eax
  unsigned int v10; // ebx
  __int64 v11; // rax
  unsigned int v12; // ecx
  __int64 v13; // rcx
  int v15; // edx
  _QWORD *v16; // rax
  int v17; // eax
  _QWORD *v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rdx
  __int64 v21; // rdx
  int v22; // [rsp+20h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  __int64 v24; // [rsp+50h] [rbp+20h] BYREF

  v6 = *((_QWORD *)this + 4);
  if ( v6 )
  {
    v7 = *(_DWORD *)(v6 + 40);
    if ( v7 != 2 )
    {
      if ( ((v7 - 1) & 0xFFFFFFFD) != 0 )
      {
        v19 = 360LL;
        goto LABEL_24;
      }
      v18 = *(_QWORD **)(v6 + 32);
      v24 = 0LL;
      v17 = (**(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))*v18)(
              *v18,
              &GUID_30a99515_1527_4451_af9f_00c5f0234daf,
              &v24);
      v10 = v17;
      if ( v17 < 0 )
      {
        v20 = 355LL;
      }
      else
      {
        v17 = (*(__int64 (__fastcall **)(struct IAudioProcessor *, __int64, _QWORD, __int64))(*(_QWORD *)a2 + 112LL))(
                a2,
                a3,
                *((_QWORD *)this + 1),
                v24);
        v10 = v17;
        if ( v17 >= 0 )
        {
          ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(&v24);
          goto LABEL_6;
        }
        v20 = 356LL;
      }
LABEL_26:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v20,
        (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\connectioninstance.cpp",
        (const char *)(unsigned int)v17,
        v22);
      ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(&v24);
      return v10;
    }
    v8 = *(_QWORD *)(v6 + 32);
    v24 = 0LL;
    v9 = ATL::CComPtrBase<IAudioProcessingObject>::CopyTo(v8 + 40, &v24);
    v10 = v9;
    if ( v9 < 0 )
    {
      v21 = 343LL;
    }
    else
    {
      v9 = (*(__int64 (__fastcall **)(struct IAudioProcessor *, __int64, __int64, _QWORD))(*(_QWORD *)a2 + 72LL))(
             a2,
             a3,
             v24,
             *((_QWORD *)this + 1));
      v10 = v9;
      if ( v9 >= 0 )
      {
        wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>(&v24);
        goto LABEL_6;
      }
      v21 = 344LL;
    }
LABEL_31:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v21,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\connectioninstance.cpp",
      (const char *)(unsigned int)v9,
      v22);
    wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>(&v24);
    return v10;
  }
  if ( !*((_QWORD *)this + 3) )
  {
    v19 = 332LL;
    goto LABEL_24;
  }
LABEL_6:
  v11 = *((_QWORD *)this + 3);
  if ( !v11 )
    return 0LL;
  v12 = *(_DWORD *)(v11 + 40);
  if ( v12 == 2 )
  {
    v13 = *(_QWORD *)(v11 + 32);
    v24 = 0LL;
    v9 = ATL::CComPtrBase<IAudioProcessingObject>::CopyTo(v13 + 40, &v24);
    v10 = v9;
    if ( v9 < 0 )
    {
      v21 = 373LL;
    }
    else
    {
      v9 = (*(__int64 (__fastcall **)(struct IAudioProcessor *, __int64, __int64, _QWORD))(*(_QWORD *)a2 + 88LL))(
             a2,
             a3,
             v24,
             *((_QWORD *)this + 1));
      v10 = v9;
      if ( v9 >= 0 )
      {
        wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>(&v24);
        return 0LL;
      }
      v21 = 374LL;
    }
    goto LABEL_31;
  }
  if ( v12 <= 6 )
  {
    v15 = 74;
    if ( _bittest(&v15, v12) )
    {
      v16 = *(_QWORD **)(v11 + 32);
      v24 = 0LL;
      v17 = (**(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))*v16)(
              *v16,
              &GUID_30a99515_1527_4451_af9f_00c5f0234daf,
              &v24);
      v10 = v17;
      if ( v17 < 0 )
      {
        v20 = 386LL;
      }
      else
      {
        v17 = (*(__int64 (__fastcall **)(struct IAudioProcessor *, __int64, _QWORD, __int64))(*(_QWORD *)a2 + 104LL))(
                a2,
                a3,
                *((_QWORD *)this + 1),
                v24);
        v10 = v17;
        if ( v17 >= 0 )
        {
          ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(&v24);
          return 0LL;
        }
        v20 = 387LL;
      }
      goto LABEL_26;
    }
  }
  v19 = 391LL;
LABEL_24:
  v10 = -2005139396;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v19,
    (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\connectioninstance.cpp",
    (const char *)0x887C003CLL,
    v22);
  return v10;
}
