/*
 * XREFs of ?QueueInitialMicBoostNotification@@YAJAEAUAUDIO_MICROPHONE_BOOST_APO_NOTIFICATION_DESCRIPTOR@@PEAVCAPOProcessingHostObject@@@Z @ 0x14002D66C
 * Callers:
 *     ?RegisterAPONotifications@CAPOProcessingHost@@UEAAJPEAUIAudioProcessingObjectNotifications@@@Z @ 0x1400227E0 (-RegisterAPONotifications@CAPOProcessingHost@@UEAAJPEAUIAudioProcessingObjectNotifications@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VCPrivateAPO@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x140002804 (--1-$com_ptr_t@VCPrivateAPO@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??2@YAPEAX_K@Z @ 0x1400280E4 (--2@YAPEAX_K@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1400284DC (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x140029234 (memset_0.c)
 *     std::_Temporary_owner_del_APO_NOTIFICATION____lambda_25192a365a0d14fa66303e23120acf2e___::__Temporary_owner_del_APO_NOTIFICATION____lambda_25192a365a0d14fa66303e23120acf2e___ @ 0x14002D4C0 (std--_Temporary_owner_del_APO_NOTIFICATION____lambda_25192a365a0d14fa66303e23120acf2e___--__Temp.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F1D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x1400382FE (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14004DED4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$com_copy_to_nothrow@UIMMDevice@@AEAPEAU1@@wil@@YAJAEAPEAUIMMDevice@@PEAPEAU1@@Z @ 0x14006AC28 (--$com_copy_to_nothrow@UIMMDevice@@AEAPEAU1@@wil@@YAJAEAPEAUIMMDevice@@PEAPEAU1@@Z.c)
 *     ?QueueNotification@CAPOProcessingHostObject@@QEAAXAEAV?$shared_ptr@UAPO_NOTIFICATION@@@std@@@Z @ 0x140070030 (-QueueNotification@CAPOProcessingHostObject@@QEAAXAEAV-$shared_ptr@UAPO_NOTIFICATION@@@std@@@Z.c)
 *     ?TryGetMicBoostPartAndInterfacesFromDevice@@YAJPEAUIMMDevice@@PEAPEAUIPart@@PEAPEAUIAudioVolumeLevel@@PEAPEAUIAudioMute@@@Z @ 0x1400787B0 (-TryGetMicBoostPartAndInterfacesFromDevice@@YAJPEAUIMMDevice@@PEAPEAUIPart@@PEAPEAUIAudioVolumeL.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall QueueInitialMicBoostNotification(struct IMMDevice **a1, struct CAPOProcessingHostObject *a2)
{
  struct IAudioVolumeLevelVtbl *v4; // rsi
  struct IAudioVolumeLevel *v5; // r14
  unsigned int v6; // edi
  __int64 v7; // r9
  __int64 v8; // rdx
  int v9; // eax
  struct IAudioVolumeLevel *v10; // rbx
  int v11; // eax
  __int64 v12; // rdx
  struct IAudioMute *v13; // rcx
  int v15; // [rsp+20h] [rbp-40h]
  _QWORD v16[2]; // [rsp+30h] [rbp-30h] BYREF
  _QWORD v17[2]; // [rsp+40h] [rbp-20h] BYREF
  char v18; // [rsp+50h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+28h]
  struct IAudioMute *v20; // [rsp+A0h] [rbp+40h] BYREF
  struct IAudioVolumeLevel *v21; // [rsp+A8h] [rbp+48h] BYREF

  v4 = (struct IAudioVolumeLevelVtbl *)operator new(0x48uLL, (const struct std::nothrow_t *)&std::nothrow);
  LOBYTE(v20) = 0;
  v17[0] = v4;
  v17[1] = &v20;
  v5 = (struct IAudioVolumeLevel *)operator new(0x18uLL);
  v21 = v5;
  *(_OWORD *)&v5->lpVtbl = 0LL;
  LODWORD(v5[1].lpVtbl) = 1;
  HIDWORD(v5[1].lpVtbl) = 1;
  v5->lpVtbl = (struct IAudioVolumeLevelVtbl *)off_1400A5880;
  v5[2].lpVtbl = v4;
  v16[0] = v4;
  v16[1] = v5;
  v18 = 0;
  std::_Temporary_owner_del_APO_NOTIFICATION____lambda_25192a365a0d14fa66303e23120acf2e___::__Temporary_owner_del_APO_NOTIFICATION____lambda_25192a365a0d14fa66303e23120acf2e___((__int64)v17);
  if ( v4 )
  {
    memset_0(v4, 0, sizeof(struct IAudioVolumeLevelVtbl));
    LODWORD(v4->QueryInterface) = 6;
    v9 = wil::com_copy_to_nothrow<IMMDevice,IMMDevice * &>(a1, &v4->AddRef);
    v6 = v9;
    if ( v9 < 0 )
    {
      v7 = (unsigned int)v9;
      v8 = 400LL;
      goto LABEL_5;
    }
    v20 = 0LL;
    v21 = 0LL;
    if ( (int)TryGetMicBoostPartAndInterfacesFromDevice(*a1, 0LL, &v21, &v20) >= 0 )
    {
      LODWORD(v4->GetLevelRange) = 1;
      v10 = v21;
      v11 = ((__int64 (__fastcall *)(struct IAudioVolumeLevel *, _QWORD, char *))v21->lpVtbl->GetLevel)(
              v21,
              0LL,
              (char *)&v4->GetLevelRange + 4);
      v6 = v11;
      if ( v11 < 0 )
      {
        v12 = 406LL;
LABEL_9:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v12,
          (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\apoprocessinghost.cpp",
          (const char *)(unsigned int)v11,
          v15);
        wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>((__int64 *)&v20);
        wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>((__int64 *)&v21);
        goto LABEL_16;
      }
      v15 = (_DWORD)v4 + 48;
      v11 = ((__int64 (__fastcall *)(struct IAudioVolumeLevel *, _QWORD, HRESULT (__stdcall **)(IAudioVolumeLevel *, UINT, float *), __int64))v10->lpVtbl->GetLevelRange)(
              v10,
              0LL,
              &v4->GetLevel,
              (__int64)&v4->GetLevel + 4);
      v6 = v11;
      if ( v11 < 0 )
      {
        v12 = 407LL;
        goto LABEL_9;
      }
      v13 = v20;
      if ( v20 )
      {
        HIDWORD(v4->SetLevel) = 1;
        v11 = ((__int64 (__fastcall *)(struct IAudioMute *, HRESULT (__stdcall **)(IAudioVolumeLevel *, float, LPCGUID)))v13->lpVtbl->GetMute)(
                v13,
                &v4->SetLevelUniform);
        v6 = v11;
        if ( v11 < 0 )
        {
          v12 = 411LL;
          goto LABEL_9;
        }
      }
    }
    CAPOProcessingHostObject::QueueNotification(a2, v16);
    wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>((__int64 *)&v20);
    wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>((__int64 *)&v21);
    v6 = 0;
    goto LABEL_16;
  }
  v6 = -2147024882;
  v7 = 2147942414LL;
  v8 = 395LL;
LABEL_5:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v8,
    (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\apoprocessinghost.cpp",
    (const char *)v7,
    v15);
LABEL_16:
  std::_Ref_count_base::_Decref((std::_Ref_count_base *)v5);
  return v6;
}
