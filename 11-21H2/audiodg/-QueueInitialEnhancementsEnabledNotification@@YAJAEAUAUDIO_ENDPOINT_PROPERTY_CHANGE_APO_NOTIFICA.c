/*
 * XREFs of ?QueueInitialEnhancementsEnabledNotification@@YAJAEAUAUDIO_ENDPOINT_PROPERTY_CHANGE_APO_NOTIFICATION_DESCRIPTOR@@PEAVCAPOProcessingHostObject@@@Z @ 0x14006601C
 * Callers:
 *     ?RegisterAPONotifications@CAPOProcessingHost@@UEAAJPEAUIAudioProcessingObjectNotifications@@@Z @ 0x140029210 (-RegisterAPONotifications@CAPOProcessingHost@@UEAAJPEAUIAudioProcessingObjectNotifications@@@Z.c)
 * Callees:
 *     ??1?$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ @ 0x140004138 (--1-$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x140026348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x14002DA28 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x14002F864 (--2@YAPEAX_K@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x14002FC5C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x1400309B4 (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x140032230 (_guard_xfg_dispatch_icall_nop.c)
 *     ?QueueNotification@CAPOProcessingHostObject@@QEAAXAEAV?$shared_ptr@UAPO_NOTIFICATION@@@std@@@Z @ 0x1400681A0 (-QueueNotification@CAPOProcessingHostObject@@QEAAXAEAV-$shared_ptr@UAPO_NOTIFICATION@@@std@@@Z.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall QueueInitialEnhancementsEnabledNotification(
        struct AUDIO_ENDPOINT_PROPERTY_CHANGE_APO_NOTIFICATION_DESCRIPTOR *a1,
        struct CAPOProcessingHostObject *a2)
{
  _DWORD *v4; // rdi
  _DWORD *v5; // rsi
  unsigned int v6; // ebx
  __int64 (__fastcall ***v7)(_QWORD, GUID *, __int64 *); // rcx
  int v8; // eax
  unsigned __int64 v9; // r9
  __int64 v10; // rdx
  int v11; // eax
  _QWORD v13[2]; // [rsp+20h] [rbp-20h] BYREF
  char v14; // [rsp+30h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  __int64 v16; // [rsp+78h] [rbp+38h] BYREF

  v4 = operator new(0x48uLL, (const struct std::nothrow_t *)&std::nothrow);
  v14 = 1;
  v5 = operator new(0x18uLL);
  *(_OWORD *)v5 = 0LL;
  v5[2] = 1;
  v5[3] = 1;
  *(_QWORD *)v5 = off_14009CBE0;
  *((_QWORD *)v5 + 2) = v4;
  v13[0] = v4;
  v13[1] = v5;
  if ( v4 )
  {
    memset_0(v4, 0, 0x48uLL);
    *v4 = 2;
    v7 = *(__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))a1;
    if ( *(_QWORD *)a1 )
    {
      *((_QWORD *)v4 + 1) = v7;
      ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v7)[1])(v7);
    }
    *(PROPERTYKEY *)(v4 + 6) = PKEY_AudioEndpoint_Disable_SysFx;
    v16 = 0LL;
    v8 = (***(__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))a1)(
           *(_QWORD *)a1,
           &GUID_67c5fc9c_29e1_4154_8307_84ed8edb5a21,
           &v16);
    v6 = v8;
    if ( v8 >= 0 )
    {
      v11 = (*(__int64 (__fastcall **)(__int64, _QWORD, _DWORD *))(*(_QWORD *)v16 + 40LL))(v16, 0LL, v4 + 4);
      v6 = v11;
      if ( v11 >= 0 )
      {
        CAPOProcessingHostObject::QueueNotification(a2, v13);
        v6 = 0;
        goto LABEL_11;
      }
      v9 = (unsigned int)v11;
      v10 = 270LL;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x4E8,
        (int)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\com.h",
        (const char *)(unsigned int)v8);
      v9 = v6;
      v10 = 269LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (int)"avcore\\audiocore\\server\\audiodg\\exe\\apoprocessinghost.cpp",
      (const char *)v9);
LABEL_11:
    ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(&v16);
    goto LABEL_12;
  }
  v6 = -2147024882;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x105,
    (int)"avcore\\audiocore\\server\\audiodg\\exe\\apoprocessinghost.cpp",
    (const char *)0x8007000ELL);
LABEL_12:
  std::_Ref_count_base::_Decref((std::_Ref_count_base *)v5);
  return v6;
}
