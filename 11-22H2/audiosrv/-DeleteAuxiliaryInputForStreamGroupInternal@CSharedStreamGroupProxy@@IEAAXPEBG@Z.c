/*
 * XREFs of ?DeleteAuxiliaryInputForStreamGroupInternal@CSharedStreamGroupProxy@@IEAAXPEBG@Z @ 0x1801068AC
 * Callers:
 *     ?OnEndpointUnavailableForUse@CSharedStreamGroupProxy@@UEAAXPEBG@Z @ 0x180109220 (-OnEndpointUnavailableForUse@CSharedStreamGroupProxy@@UEAAXPEBG@Z.c)
 * Callees:
 *     ??B?$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ @ 0x1800163B8 (--B-$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ.c)
 *     ?QueueWorkItem@CSerialWorkQueue@@QEAAJV?$function@$$A6AXXZ@std@@@Z @ 0x180022880 (-QueueWorkItem@CSerialWorkQueue@@QEAAJV-$function@$$A6AXXZ@std@@@Z.c)
 *     ??0?$shared_ptr@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@QEAA@AEBV01@@Z @ 0x180025520 (--0-$shared_ptr@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@std@@QEAA@AEBV01@.c)
 *     ??2@YAPEAX_K@Z @ 0x180026620 (--2@YAPEAX_K@Z.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x180027F80 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180030368 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x18003F314 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x180046188 (-InternalRelease@-$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$AsWeak@UIStreamGroupProxy@@@WRL@Microsoft@@YAJPEAUIStreamGroupProxy@@PEAVWeakRef@01@@Z @ 0x18004A0BC (--$AsWeak@UIStreamGroupProxy@@@WRL@Microsoft@@YAJPEAUIStreamGroupProxy@@PEAVWeakRef@01@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800F1010 (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$?0VCSharedStreamGroupProxy@@@?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@QEAA@PEAVCSharedStreamGroupProxy@@@Z @ 0x1801030E4 (--$-0VCSharedStreamGroupProxy@@@-$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@QEAA@PEAVCSharedStr.c)
 */

// Hidden C++ exception states: #wind=6
void __fastcall CSharedStreamGroupProxy::DeleteAuxiliaryInputForStreamGroupInternal(
        CSharedStreamGroupProxy *this,
        unsigned __int16 *a2)
{
  std::_Ref_count_base *v3; // rax
  std::_Ref_count_base *v4; // rbx
  __int64 *v5; // rax
  __int64 v6; // rdi
  int v7; // eax
  std::_Ref_count_base *v8; // [rsp+20h] [rbp-19h] BYREF
  _QWORD v9[2]; // [rsp+28h] [rbp-11h] BYREF
  __int64 v10; // [rsp+38h] [rbp-1h] BYREF
  __int128 v11; // [rsp+40h] [rbp+7h] BYREF
  _QWORD v12[2]; // [rsp+50h] [rbp+17h] BYREF
  __int128 v13; // [rsp+60h] [rbp+27h]
  _QWORD *v14; // [rsp+88h] [rbp+4Fh]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+5Fh]
  __int64 v16; // [rsp+B0h] [rbp+77h] BYREF
  __int64 (__fastcall ***v17)(_QWORD, GUID *, __int64 *); // [rsp+B8h] [rbp+7Fh] BYREF

  Microsoft::WRL::ComPtr<IStreamGroupProxy>::ComPtr<IStreamGroupProxy>((__int64 *)&v17, (__int64)this);
  v16 = 0LL;
  v3 = (std::_Ref_count_base *)operator new(0x30uLL);
  v4 = v3;
  v8 = v3;
  if ( v3 )
  {
    *(_OWORD *)v3 = 0LL;
    *((_DWORD *)v3 + 2) = 1;
    *((_DWORD *)v3 + 3) = 1;
    *(_QWORD *)v3 = &std::_Ref_count_obj2<std::wstring>::`vftable';
    std::wstring::wstring((_QWORD *)v3 + 2, a2);
  }
  else
  {
    v4 = 0LL;
  }
  v9[0] = (char *)v4 + 16;
  v9[1] = v4;
  v8 = (std::_Ref_count_base *)&v16;
  v5 = Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::WeakRef>::operator Microsoft::WRL::WeakRef *((__int64 **)&v8);
  if ( (int)Microsoft::WRL::AsWeak<IStreamGroupProxy>(v17, v5) >= 0 )
  {
    v6 = (*(__int64 (__fastcall **)(struct IAudioService *))(*(_QWORD *)g_AudioService + 128LL))(g_AudioService);
    v10 = v16;
    if ( v16 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 8LL))(v16);
    std::shared_ptr<std::wstring>::shared_ptr<std::wstring>(&v11, v9);
    v12[0] = off_1801706F8;
    v12[1] = v10;
    v10 = 0LL;
    v13 = v11;
    v11 = 0LL;
    v14 = v12;
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v10);
    v7 = CSerialWorkQueue::QueueWorkItem(v6, (__int64)v12);
    if ( v7 < 0 )
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        1440LL,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
        (const char *)(unsigned int)v7,
        (int)v8);
  }
  if ( v4 )
    std::_Ref_count_base::_Decref(v4);
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v16);
  Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease((__int64 *)&v17);
}
