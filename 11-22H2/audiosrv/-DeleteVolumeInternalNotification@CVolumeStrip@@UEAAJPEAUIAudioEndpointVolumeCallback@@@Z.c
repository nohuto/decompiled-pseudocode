/*
 * XREFs of ?DeleteVolumeInternalNotification@CVolumeStrip@@UEAAJPEAUIAudioEndpointVolumeCallback@@@Z @ 0x18012A7E0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180005738 (--1-$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$remove_if@V?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@ULockedListEntry@?$CLockedList@V?$CComPtr@UIAudioEndpointVolumeCallback@@@ATL@@$00$0A@@@@std@@@std@@@std@@V_lambda_5b08419a42aff7b614cac9a62eac08d2_@@@std@@YA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@ULockedListEntry@?$CLockedList@V?$CComPtr@UIAudioEndpointVolumeCallback@@@ATL@@$00$0A@@@@std@@@std@@@0@V10@V10@V_lambda_5b08419a42aff7b614cac9a62eac08d2_@@@Z @ 0x18012A45C (--$remove_if@V-$_Vector_iterator@V-$_Vector_val@U-$_Simple_types@ULockedListEntry@-_ea_18012A45C.c)
 *     ??0?$CComPtrBase@UIAudioEndpointVolumeCallback@@@ATL@@IEAA@PEAUIAudioEndpointVolumeCallback@@@Z @ 0x18012A518 (--0-$CComPtrBase@UIAudioEndpointVolumeCallback@@@ATL@@IEAA@PEAUIAudioEndpointVolumeCallback@@@Z.c)
 *     ?erase@?$vector@ULockedListEntry@?$CLockedList@V?$CComPtr@UIAudioEndpointVolumeCallback@@@ATL@@$00$0A@@@V?$allocator@ULockedListEntry@?$CLockedList@V?$CComPtr@UIAudioEndpointVolumeCallback@@@ATL@@$00$0A@@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@ULockedListEntry@?$CLockedList@V?$CComPtr@UIAudioEndpointVolumeCallback@@@ATL@@$00$0A@@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@ULockedListEntry@?$CLockedList@V?$CComPtr@UIAudioEndpointVolumeCallback@@@ATL@@$00$0A@@@@std@@@std@@@2@0@Z @ 0x18012AC98 (-erase@-$vector@ULockedListEntry@-$CLockedList@V-$CComPtr@UIAudioEndpointVolumeCallback@@@ATL@@$.c)
 */

__int64 __fastcall CVolumeStrip::DeleteVolumeInternalNotification(
        CVolumeStrip *this,
        struct IAudioEndpointVolumeCallback *a2)
{
  char *v2; // rsi
  __int64 v3; // rbx
  __int64 v4; // rdx
  _QWORD *v5; // rax
  _QWORD v7[5]; // [rsp+20h] [rbp-28h] BYREF
  char v8; // [rsp+50h] [rbp+8h] BYREF
  __int64 v9; // [rsp+60h] [rbp+18h] BYREF
  __int64 v10; // [rsp+68h] [rbp+20h] BYREF

  v2 = (char *)this + 80;
  ATL::CComPtrBase<IAudioEndpointVolumeCallback>::CComPtrBase<IAudioEndpointVolumeCallback>(&v9, (__int64)a2);
  EnterCriticalSection((LPCRITICAL_SECTION)v2);
  v3 = *((_QWORD *)v2 + 6);
  v4 = *((_QWORD *)v2 + 5);
  v7[0] = &v9;
  v8 = 0;
  v7[1] = &v8;
  v5 = std::remove_if<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<CLockedList<ATL::CComPtr<IAudioEndpointVolumeCallback>,1,0>::LockedListEntry>>>,_lambda_5b08419a42aff7b614cac9a62eac08d2_>(
         &v10,
         v4,
         v3,
         (__int64)v7);
  std::vector<CLockedList<ATL::CComPtr<IAudioEndpointVolumeCallback>,1,0>::LockedListEntry,std::allocator<CLockedList<ATL::CComPtr<IAudioEndpointVolumeCallback>,1,0>::LockedListEntry>>::erase(
    v2 + 40,
    v7,
    *v5,
    v3);
  if ( v2 )
    LeaveCriticalSection((LPCRITICAL_SECTION)v2);
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v9);
  return 0LL;
}
