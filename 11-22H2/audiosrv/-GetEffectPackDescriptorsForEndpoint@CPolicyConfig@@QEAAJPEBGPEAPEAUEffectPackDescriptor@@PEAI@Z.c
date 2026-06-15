/*
 * XREFs of ?GetEffectPackDescriptorsForEndpoint@CPolicyConfig@@QEAAJPEBGPEAPEAUEffectPackDescriptor@@PEAI@Z @ 0x180115CA8
 * Callers:
 *     s_epmGetEffectPackDescriptorsForEndpoint @ 0x180119010 (s_epmGetEffectPackDescriptorsForEndpoint.c)
 * Callees:
 *     ??1?$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180005738 (--1-$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     MIDL_user_allocate @ 0x18003EE80 (MIDL_user_allocate.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180047134 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$shared_ptr@VEffectPack@@@std@@@std@@@std@@YAXPEAV?$shared_ptr@VEffectPack@@@0@QEAV10@AEAV?$allocator@V?$shared_ptr@VEffectPack@@@std@@@0@@Z @ 0x18004AA0C (--$_Destroy_range@V-$allocator@V-$shared_ptr@VEffectPack@@@std@@@std@@@std@@YAXPEAV-$shared_ptr@.c)
 *     memset_0 @ 0x180067A54 (memset_0.c)
 *     memcpy_0 @ 0x18006A809 (memcpy_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetEffectPacks@CEndpointCharacteristics@@QEAAJAEAV?$vector@V?$shared_ptr@VEffectPack@@@std@@V?$allocator@V?$shared_ptr@VEffectPack@@@std@@@2@@std@@@Z @ 0x18014C94C (-GetEffectPacks@CEndpointCharacteristics@@QEAAJAEAV-$vector@V-$shared_ptr@VEffectPack@@@std@@V-$.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CPolicyConfig::GetEffectPackDescriptorsForEndpoint(
        CPolicyConfig *this,
        const unsigned __int16 *a2,
        struct EffectPackDescriptor **a3,
        unsigned int *a4)
{
  unsigned int v6; // ebx
  int EffectPacks; // eax
  __int64 v8; // r9
  __int64 v9; // rdx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rsi
  struct EffectPackDescriptor *v13; // rax
  struct EffectPackDescriptor *v14; // rbx
  __int64 v15; // rdi
  struct EffectPackDescriptor *i; // r14
  __int128 v18; // [rsp+30h] [rbp-20h] BYREF
  __int64 v19; // [rsp+40h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]
  __int64 v21; // [rsp+80h] [rbp+30h] BYREF

  *a3 = 0LL;
  *a4 = 0;
  v21 = 0LL;
  if ( (*(int (__fastcall **)(PVOID, const unsigned __int16 *, _QWORD, _QWORD, __int64 *))(*(_QWORD *)g_pEndpointCharacteristicsCache
                                                                                         + 24LL))(
         g_pEndpointCharacteristicsCache,
         a2,
         0LL,
         0LL,
         &v21) < 0 )
  {
    v6 = -2147024809;
    goto LABEL_16;
  }
  v18 = 0LL;
  v19 = 0LL;
  EffectPacks = CEndpointCharacteristics::GetEffectPacks(v21, &v18);
  v6 = EffectPacks;
  if ( EffectPacks < 0 )
  {
    v8 = (unsigned int)EffectPacks;
    v9 = 1962LL;
    goto LABEL_5;
  }
  v10 = *((_QWORD *)&v18 + 1);
  v11 = v18;
  v12 = (__int64)(*((_QWORD *)&v18 + 1) - v18) >> 4;
  if ( v12 )
  {
    v13 = (struct EffectPackDescriptor *)MIDL_user_allocate(1312 * v12);
    v14 = v13;
    if ( !v13 )
    {
      v6 = -2147024882;
      v8 = 2147942414LL;
      v9 = 1971LL;
LABEL_5:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v9,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
        (const char *)v8);
      if ( (_QWORD)v18 )
      {
        std::_Destroy_range<std::allocator<std::shared_ptr<EffectPack>>>(v18, *((__int64 *)&v18 + 1));
        std::_Deallocate<16,0>((void *)v18, (v19 - v18) & 0xFFFFFFFFFFFFFFF0uLL);
        v18 = 0LL;
        v19 = 0LL;
      }
      goto LABEL_16;
    }
    memset_0(v13, 0, 1312 * v12);
    v15 = v18;
    for ( i = v14; ; i = (struct EffectPackDescriptor *)((char *)i + 1312) )
    {
      v10 = *((_QWORD *)&v18 + 1);
      if ( v15 == *((_QWORD *)&v18 + 1) )
        break;
      memcpy_0(i, *(const void **)(*(_QWORD *)v15 + 1272LL), 0x520uLL);
      v15 += 16LL;
    }
    *a3 = v14;
    *a4 = v12;
    v11 = v18;
  }
  if ( v11 )
  {
    std::_Destroy_range<std::allocator<std::shared_ptr<EffectPack>>>(v11, v10);
    std::_Deallocate<16,0>((void *)v18, (v19 - v18) & 0xFFFFFFFFFFFFFFF0uLL);
    v18 = 0LL;
    v19 = 0LL;
  }
  v6 = 0;
LABEL_16:
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v21);
  return v6;
}
