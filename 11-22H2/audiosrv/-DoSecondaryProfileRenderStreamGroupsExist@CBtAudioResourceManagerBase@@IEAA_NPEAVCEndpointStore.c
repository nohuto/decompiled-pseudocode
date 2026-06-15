/*
 * XREFs of ?DoSecondaryProfileRenderStreamGroupsExist@CBtAudioResourceManagerBase@@IEAA_NPEAVCEndpointStore@@@Z @ 0x1800F7468
 * Callers:
 *     ?RestoreDisplacedPrimaryProfileStreamGroupsIfAppropriate@CBtAudioResourceManagerBase@@IEAAJXZ @ 0x1800FA80C (-RestoreDisplacedPrimaryProfileStreamGroupsIfAppropriate@CBtAudioResourceManagerBase@@IEAAJXZ.c)
 *     ?UpdateBtleStreamContextIfNecessary@CBtLeAudioResourceManager@@IEAAXW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@@Z @ 0x1800FD5C8 (-UpdateBtleStreamContextIfNecessary@CBtLeAudioResourceManager@@IEAAXW4__MIDL___MIDL_itf_mmdevice.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180009588 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180047134 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     __security_check_cookie @ 0x1800669A0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$_Destroy_range@V?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@YAXPEAV?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@QEAV123@AEAV?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@0@@Z @ 0x180081448 (--$_Destroy_range@V-$allocator@V-$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@YAXPEAV.c)
 *     ??1?$vector@V?$ComPtr@UIProcessSubmixProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIProcessSubmixProxy@@@WRL@Microsoft@@@std@@@std@@QEAA@XZ @ 0x1800D8770 (--1-$vector@V-$ComPtr@UIProcessSubmixProxy@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@UIProcessSubm.c)
 */

// Hidden C++ exception states: #wind=2
char __fastcall CBtAudioResourceManagerBase::DoSecondaryProfileRenderStreamGroupsExist(
        CBtAudioResourceManagerBase *this,
        struct CEndpointStore *a2)
{
  int v4; // eax
  __int64 *v5; // rdi
  __int64 *v7; // r15
  int v8; // eax
  __int64 *v9; // rsi
  __int64 *v10; // r14
  unsigned __int8 (__fastcall *v11)(CBtAudioResourceManagerBase *, __int128 *); // rbx
  __int128 v12; // [rsp+20h] [rbp-60h] BYREF
  __int64 v13; // [rsp+30h] [rbp-50h]
  __int128 v14; // [rsp+38h] [rbp-48h] BYREF
  __int64 v15; // [rsp+48h] [rbp-38h]
  __int128 v16; // [rsp+50h] [rbp-30h] BYREF
  _BYTE v17[16]; // [rsp+60h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+38h]

  v14 = 0LL;
  v15 = 0LL;
  v4 = (*(__int64 (__fastcall **)(_QWORD, __int128 *))(**((_QWORD **)a2 + 13) + 104LL))(*((_QWORD *)a2 + 13), &v14);
  if ( v4 < 0 )
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x2D2,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\btaudioresourcemanagerbase.cpp",
      (const char *)(unsigned int)v4);
LABEL_3:
    v5 = (__int64 *)v14;
    goto LABEL_4;
  }
  v7 = (__int64 *)*((_QWORD *)&v14 + 1);
  v5 = (__int64 *)v14;
  if ( (_QWORD)v14 == *((_QWORD *)&v14 + 1) )
  {
LABEL_4:
    if ( v5 )
    {
      std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<IStreamGroupProxy>>>(v5, *((__int64 **)&v14 + 1));
      std::_Deallocate<16,0>((void *)v14, (v15 - v14) & 0xFFFFFFFFFFFFFFF8uLL);
    }
    return 0;
  }
  while ( 1 )
  {
    v12 = 0LL;
    v13 = 0LL;
    v8 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int128 *))(**((_QWORD **)a2 + 13) + 112LL))(
           *((_QWORD *)a2 + 13),
           *v5,
           &v12);
    if ( v8 < 0 )
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x2D7,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\btaudioresourcemanagerbase.cpp",
        (const char *)(unsigned int)v8);
LABEL_13:
      v9 = (__int64 *)v12;
      goto LABEL_14;
    }
    v10 = (__int64 *)*((_QWORD *)&v12 + 1);
    v9 = (__int64 *)v12;
    if ( (_QWORD)v12 != *((_QWORD *)&v12 + 1) )
      break;
LABEL_14:
    if ( v9 )
    {
      std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<IStreamGroupProxy>>>(v9, *((__int64 **)&v12 + 1));
      std::_Deallocate<16,0>((void *)v12, (v13 - v12) & 0xFFFFFFFFFFFFFFF8uLL);
    }
    if ( ++v5 == v7 )
      goto LABEL_3;
  }
  while ( 1 )
  {
    v11 = *(unsigned __int8 (__fastcall **)(CBtAudioResourceManagerBase *, __int128 *))(*(_QWORD *)this + 144LL);
    v16 = *(_OWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)*v9 + 152LL))(*v9, v17);
    if ( v11(this, &v16) )
      break;
    if ( ++v9 == v10 )
      goto LABEL_13;
  }
  if ( (_QWORD)v12 )
  {
    std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<IStreamGroupProxy>>>(
      (__int64 *)v12,
      *((__int64 **)&v12 + 1));
    std::_Deallocate<16,0>((void *)v12, (v13 - v12) & 0xFFFFFFFFFFFFFFF8uLL);
    v12 = 0LL;
    v13 = 0LL;
  }
  std::vector<Microsoft::WRL::ComPtr<IProcessSubmixProxy>>::~vector<Microsoft::WRL::ComPtr<IProcessSubmixProxy>>((__int64)&v14);
  return 1;
}
