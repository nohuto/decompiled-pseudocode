/*
 * XREFs of ?QueueInitialEnhancementsEnabledNotification@@YAJAEAUAUDIO_ENDPOINT_PROPERTY_CHANGE_APO_NOTIFICATION_DESCRIPTOR@@PEAVCAPOProcessingHostObject@@@Z @ 0x14006D810
 * Callers:
 *     ?RegisterAPONotifications@CAPOProcessingHost@@UEAAJPEAUIAudioProcessingObjectNotifications@@@Z @ 0x1400227E0 (-RegisterAPONotifications@CAPOProcessingHost@@UEAAJPEAUIAudioProcessingObjectNotifications@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VCPrivateAPO@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x140002804 (--1-$com_ptr_t@VCPrivateAPO@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??2@YAPEAX_K@Z @ 0x1400280E4 (--2@YAPEAX_K@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1400284DC (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x140029234 (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F1D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x1400382FE (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14004DED4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$shared_any_t@V?$shared_storage@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x140064C6C (--1-$shared_any_t@V-$shared_storage@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6A.c)
 *     ??$com_copy_to_nothrow@UIMMDevice@@AEAPEAU1@@wil@@YAJAEAPEAUIMMDevice@@PEAPEAU1@@Z @ 0x14006AC28 (--$com_copy_to_nothrow@UIMMDevice@@AEAPEAU1@@wil@@YAJAEAPEAUIMMDevice@@PEAPEAU1@@Z.c)
 *     ?QueueNotification@CAPOProcessingHostObject@@QEAAXAEAV?$shared_ptr@UAPO_NOTIFICATION@@@std@@@Z @ 0x140070030 (-QueueNotification@CAPOProcessingHostObject@@QEAAXAEAV-$shared_ptr@UAPO_NOTIFICATION@@@std@@@Z.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall QueueInitialEnhancementsEnabledNotification(
        struct AUDIO_ENDPOINT_PROPERTY_CHANGE_APO_NOTIFICATION_DESCRIPTOR *a1,
        struct CAPOProcessingHostObject *a2)
{
  _DWORD *v4; // rdi
  _DWORD *v5; // rsi
  unsigned int v6; // ebx
  __int64 v7; // r9
  __int64 v8; // rdx
  int v9; // eax
  int v10; // eax
  __int64 v11; // rdx
  _QWORD v13[2]; // [rsp+20h] [rbp-20h] BYREF
  char v14; // [rsp+30h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+28h]
  __int64 v16; // [rsp+88h] [rbp+48h] BYREF

  v4 = operator new(0x48uLL, (const struct std::nothrow_t *)&std::nothrow);
  v14 = 1;
  v5 = operator new(0x18uLL);
  *(_OWORD *)v5 = 0LL;
  v5[2] = 1;
  v5[3] = 1;
  *(_QWORD *)v5 = off_1400A8000;
  *((_QWORD *)v5 + 2) = v4;
  v13[0] = v4;
  v13[1] = v5;
  if ( !v4 )
  {
    v6 = -2147024882;
    v7 = 2147942414LL;
    v8 = 376LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\apoprocessinghost.cpp",
      (const char *)v7);
LABEL_11:
    wil::shared_any_t<wil::details::shared_storage<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>>>::~shared_any_t<wil::details::shared_storage<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>>>((__int64)v13);
    return v6;
  }
  memset_0(v4, 0, 0x48uLL);
  *v4 = 2;
  v9 = wil::com_copy_to_nothrow<IMMDevice,IMMDevice * &>((__int64 *)a1, (_QWORD *)v4 + 1);
  v6 = v9;
  if ( v9 < 0 )
  {
    v7 = (unsigned int)v9;
    v8 = 381LL;
    goto LABEL_5;
  }
  *(PROPERTYKEY *)(v4 + 6) = PKEY_AudioEndpoint_Disable_SysFx;
  v16 = 0LL;
  v10 = (***(__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))a1)(
          *(_QWORD *)a1,
          &GUID_67c5fc9c_29e1_4154_8307_84ed8edb5a21,
          &v16);
  v6 = v10;
  if ( v10 < 0 )
  {
    v11 = 384LL;
LABEL_10:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\apoprocessinghost.cpp",
      (const char *)(unsigned int)v10);
    wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>(&v16);
    goto LABEL_11;
  }
  v10 = (*(__int64 (__fastcall **)(__int64, _QWORD, _DWORD *))(*(_QWORD *)v16 + 40LL))(v16, 0LL, v4 + 4);
  v6 = v10;
  if ( v10 < 0 )
  {
    v11 = 385LL;
    goto LABEL_10;
  }
  CAPOProcessingHostObject::QueueNotification(a2, v13);
  wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>(&v16);
  std::_Ref_count_base::_Decref((std::_Ref_count_base *)v5);
  return 0LL;
}
