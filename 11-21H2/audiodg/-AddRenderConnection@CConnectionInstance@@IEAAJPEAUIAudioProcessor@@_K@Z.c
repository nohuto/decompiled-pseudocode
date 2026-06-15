/*
 * XREFs of ?AddRenderConnection@CConnectionInstance@@IEAAJPEAUIAudioProcessor@@_K@Z @ 0x140018CF0
 * Callers:
 *     ?AddConnectionsAndActivateAPOs@CPipeInstance@@QEAAJPEAUIAudioDeviceModulesManager@Devices@Media@Windows@@@Z @ 0x140018B80 (-AddConnectionsAndActivateAPOs@CPipeInstance@@QEAAJPEAUIAudioDeviceModulesManager@Devices@Media@.c)
 * Callees:
 *     ??1?$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ @ 0x140004138 (--1-$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ.c)
 *     ??1?$CComPtrBase@UIAudioProcessingObject@@@ATL@@QEAA@XZ @ 0x14000A41C (--1-$CComPtrBase@UIAudioProcessingObject@@@ATL@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x140026348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x140032230 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CConnectionInstance::AddRenderConnection(
        CConnectionInstance *this,
        struct IAudioProcessor *a2,
        __int64 a3)
{
  __int64 v6; // rcx
  int v7; // eax
  __int64 v8; // rbx
  int v9; // eax
  unsigned int v10; // r14d
  __int64 v11; // rcx
  int v12; // eax
  __int64 v13; // rbx
  int v14; // eax
  unsigned int v15; // edi
  _QWORD *v17; // rax
  int v18; // eax
  unsigned int v19; // ebx
  _QWORD *v20; // rax
  __int64 v21; // rdx
  int v22; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v24; // [rsp+50h] [rbp+8h] BYREF

  v6 = *((_QWORD *)this + 4);
  if ( v6 )
  {
    v7 = *(_DWORD *)(v6 + 40);
    if ( v7 == 2 )
    {
      v8 = *(_QWORD *)(*(_QWORD *)(v6 + 32) + 40LL);
      v24 = v8;
      if ( v8 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
      v9 = (*(__int64 (__fastcall **)(struct IAudioProcessor *, __int64, __int64, _QWORD))(*(_QWORD *)a2 + 72LL))(
             a2,
             a3,
             v8,
             *((_QWORD *)this + 1));
      v10 = v9;
      if ( v9 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x159,
          (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\connectioninstance.cpp",
          (const char *)(unsigned int)v9,
          v22);
        ATL::CComPtrBase<IAudioProcessingObject>::~CComPtrBase<IAudioProcessingObject>(&v24);
        return v10;
      }
      if ( v8 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    }
    else
    {
      if ( ((v7 - 1) & 0xFFFFFFFD) != 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x169,
          (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\connectioninstance.cpp",
          (const char *)0x887C003CLL,
          v22);
        return 2289827900LL;
      }
      v17 = *(_QWORD **)(v6 + 32);
      v24 = 0LL;
      v18 = (**(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))*v17)(
              *v17,
              &GUID_30a99515_1527_4451_af9f_00c5f0234daf,
              &v24);
      v19 = v18;
      if ( v18 < 0 )
      {
        v21 = 356LL;
        goto LABEL_34;
      }
      v18 = (*(__int64 (__fastcall **)(struct IAudioProcessor *, __int64, _QWORD, __int64))(*(_QWORD *)a2 + 112LL))(
              a2,
              a3,
              *((_QWORD *)this + 1),
              v24);
      v19 = v18;
      if ( v18 < 0 )
      {
        v21 = 357LL;
        goto LABEL_34;
      }
      ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(&v24);
    }
  }
  else if ( !*((_QWORD *)this + 3) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x14D,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\connectioninstance.cpp",
      (const char *)0x887C003CLL,
      v22);
    return 2289827900LL;
  }
  v11 = *((_QWORD *)this + 3);
  if ( !v11 )
    return 0LL;
  v12 = *(_DWORD *)(v11 + 40);
  if ( v12 != 2 )
  {
    if ( ((v12 - 1) & 0xFFFFFFFD) != 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x187,
        (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\connectioninstance.cpp",
        (const char *)0x887C003CLL,
        v22);
      return 2289827900LL;
    }
    v20 = *(_QWORD **)(v11 + 32);
    v24 = 0LL;
    v18 = (**(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))*v20)(
            *v20,
            &GUID_30a99515_1527_4451_af9f_00c5f0234daf,
            &v24);
    v19 = v18;
    if ( v18 < 0 )
    {
      v21 = 386LL;
    }
    else
    {
      v18 = (*(__int64 (__fastcall **)(struct IAudioProcessor *, __int64, _QWORD, __int64))(*(_QWORD *)a2 + 104LL))(
              a2,
              a3,
              *((_QWORD *)this + 1),
              v24);
      v19 = v18;
      if ( v18 >= 0 )
      {
        ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(&v24);
        return 0LL;
      }
      v21 = 387LL;
    }
LABEL_34:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v21,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\connectioninstance.cpp",
      (const char *)(unsigned int)v18,
      v22);
    ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(&v24);
    return v19;
  }
  v13 = *(_QWORD *)(*(_QWORD *)(v11 + 32) + 40LL);
  v24 = v13;
  if ( v13 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 8LL))(v13);
  v14 = (*(__int64 (__fastcall **)(struct IAudioProcessor *, __int64, __int64, _QWORD))(*(_QWORD *)a2 + 88LL))(
          a2,
          a3,
          v13,
          *((_QWORD *)this + 1));
  v15 = v14;
  if ( v14 >= 0 )
  {
    if ( v13 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
    return 0LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x177,
    (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\connectioninstance.cpp",
    (const char *)(unsigned int)v14,
    v22);
  ATL::CComPtrBase<IAudioProcessingObject>::~CComPtrBase<IAudioProcessingObject>(&v24);
  return v15;
}
