/*
 * XREFs of ?AddCaptureConnection@CConnectionInstance@@IEAAJPEAUIAudioProcessor@@_K@Z @ 0x14005D2D4
 * Callers:
 *     ?AddConnectionsAndActivateAPOs@CPipeInstance@@QEAAJPEAUIAudioDeviceModulesManager@Devices@Media@Windows@@@Z @ 0x140018B80 (-AddConnectionsAndActivateAPOs@CPipeInstance@@QEAAJPEAUIAudioDeviceModulesManager@Devices@Media@.c)
 * Callees:
 *     ??1?$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ @ 0x140004138 (--1-$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ.c)
 *     ??1?$CComPtrBase@UIAudioProcessingObject@@@ATL@@QEAA@XZ @ 0x14000A41C (--1-$CComPtrBase@UIAudioProcessingObject@@@ATL@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x140026348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x140032230 (_guard_xfg_dispatch_icall_nop.c)
 *     ?CopyTo@?$CComPtrBase@UIAudioProcessingObject@@@ATL@@QEAAJPEAPEAUIAudioProcessingObject@@@Z @ 0x140059358 (-CopyTo@-$CComPtrBase@UIAudioProcessingObject@@@ATL@@QEAAJPEAPEAUIAudioProcessingObject@@@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CConnectionInstance::AddCaptureConnection(
        CConnectionInstance *this,
        struct IAudioProcessor *a2,
        __int64 a3)
{
  __int64 v6; // rcx
  __int64 v7; // rdx
  unsigned int v8; // ebx
  int v10; // eax
  __int64 v11; // rcx
  int v12; // eax
  __int64 v13; // rdx
  _QWORD *v14; // rax
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  int v18; // edx
  __int64 v19; // rcx
  _QWORD *v20; // rax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  __int64 v22; // [rsp+50h] [rbp+20h] BYREF

  v6 = *((_QWORD *)this + 4);
  if ( v6 )
  {
    v10 = *(_DWORD *)(v6 + 40);
    if ( v10 == 2 )
    {
      v11 = *(_QWORD *)(v6 + 32);
      v22 = 0LL;
      v12 = ATL::CComPtrBase<IAudioProcessingObject>::CopyTo((_QWORD *)(v11 + 40), &v22);
      v8 = v12;
      if ( v12 >= 0 )
      {
        v12 = (*(__int64 (__fastcall **)(struct IAudioProcessor *, __int64, __int64, _QWORD))(*(_QWORD *)a2 + 88LL))(
                a2,
                a3,
                v22,
                *((_QWORD *)this + 1));
        v8 = v12;
        if ( v12 >= 0 )
        {
          ATL::CComPtrBase<IAudioProcessingObject>::~CComPtrBase<IAudioProcessingObject>(&v22);
          goto LABEL_21;
        }
        v13 = 442LL;
      }
      else
      {
        v13 = 441LL;
      }
LABEL_11:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v13,
        (int)"avcore\\audiocore\\server\\audiodg\\exe\\connectioninstance.cpp",
        (const char *)(unsigned int)v12);
      ATL::CComPtrBase<IAudioProcessingObject>::~CComPtrBase<IAudioProcessingObject>(&v22);
      return v8;
    }
    if ( ((v10 - 1) & 0xFFFFFFFD) != 0 )
    {
      v7 = 459LL;
      goto LABEL_4;
    }
    v14 = *(_QWORD **)(v6 + 32);
    v22 = 0LL;
    v15 = (**(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))*v14)(
            *v14,
            &GUID_30a99515_1527_4451_af9f_00c5f0234daf,
            &v22);
    v8 = v15;
    if ( v15 < 0 )
    {
      v16 = 454LL;
      goto LABEL_19;
    }
    v15 = (*(__int64 (__fastcall **)(struct IAudioProcessor *, __int64, _QWORD, __int64))(*(_QWORD *)a2 + 104LL))(
            a2,
            a3,
            *((_QWORD *)this + 1),
            v22);
    v8 = v15;
    if ( v15 < 0 )
    {
      v16 = 455LL;
      goto LABEL_19;
    }
    ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(&v22);
  }
  else if ( !*((_QWORD *)this + 3) )
  {
    v7 = 430LL;
LABEL_4:
    v8 = -2005139396;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (int)"avcore\\audiocore\\server\\audiodg\\exe\\connectioninstance.cpp",
      (const char *)0x887C003CLL);
    return v8;
  }
LABEL_21:
  v17 = *((_QWORD *)this + 3);
  if ( !v17 )
    return 0LL;
  v18 = *(_DWORD *)(v17 + 40);
  if ( v18 != 2 )
  {
    if ( ((v18 - 1) & 0xFFFFFFF9) != 0 || v18 == 7 )
    {
      v7 = 490LL;
      goto LABEL_4;
    }
    v20 = *(_QWORD **)(v17 + 32);
    v22 = 0LL;
    v15 = (**(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))*v20)(
            *v20,
            &GUID_30a99515_1527_4451_af9f_00c5f0234daf,
            &v22);
    v8 = v15;
    if ( v15 >= 0 )
    {
      v15 = (*(__int64 (__fastcall **)(struct IAudioProcessor *, __int64, _QWORD, __int64))(*(_QWORD *)a2 + 112LL))(
              a2,
              a3,
              *((_QWORD *)this + 1),
              v22);
      v8 = v15;
      if ( v15 >= 0 )
      {
        ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(&v22);
        return 0LL;
      }
      v16 = 486LL;
    }
    else
    {
      v16 = 485LL;
    }
LABEL_19:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v16,
      (int)"avcore\\audiocore\\server\\audiodg\\exe\\connectioninstance.cpp",
      (const char *)(unsigned int)v15);
    ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(&v22);
    return v8;
  }
  v19 = *(_QWORD *)(v17 + 32);
  v22 = 0LL;
  v12 = ATL::CComPtrBase<IAudioProcessingObject>::CopyTo((_QWORD *)(v19 + 40), &v22);
  v8 = v12;
  if ( v12 < 0 )
  {
    v13 = 472LL;
    goto LABEL_11;
  }
  v12 = (*(__int64 (__fastcall **)(struct IAudioProcessor *, __int64, __int64, _QWORD))(*(_QWORD *)a2 + 72LL))(
          a2,
          a3,
          v22,
          *((_QWORD *)this + 1));
  v8 = v12;
  if ( v12 < 0 )
  {
    v13 = 473LL;
    goto LABEL_11;
  }
  ATL::CComPtrBase<IAudioProcessingObject>::~CComPtrBase<IAudioProcessingObject>(&v22);
  return 0LL;
}
