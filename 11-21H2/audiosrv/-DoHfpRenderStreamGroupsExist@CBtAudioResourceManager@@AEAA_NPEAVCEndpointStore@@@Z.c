/*
 * XREFs of ?DoHfpRenderStreamGroupsExist@CBtAudioResourceManager@@AEAA_NPEAVCEndpointStore@@@Z @ 0x180114FA4
 * Callers:
 *     ?RestoreDisplacedA2dpStreamGroupsIfAppropriate@CBtAudioResourceManager@@AEAAJXZ @ 0x180117558 (-RestoreDisplacedA2dpStreamGroupsIfAppropriate@CBtAudioResourceManager@@AEAAJXZ.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001063C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     __security_check_cookie @ 0x18005E920 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800C5F8C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@YAXPEAV?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@QEAV123@AEAV?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@0@@Z @ 0x1800DE2DC (--$_Destroy_range@V-$allocator@V-$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@YAXPEAV.c)
 *     ??$_Destroy_range@V?$allocator@V?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@@std@@@std@@YAXPEAV?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@QEAV123@AEAV?$allocator@V?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@@0@@Z @ 0x1800ED4E0 (--$_Destroy_range@V-$allocator@V-$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@@std@@@std@@YAXPEAV-$C.c)
 */

// Hidden C++ exception states: #wind=2
char __fastcall CBtAudioResourceManager::DoHfpRenderStreamGroupsExist(
        CBtAudioResourceManager *this,
        struct CEndpointStore *a2)
{
  int v3; // eax
  char v4; // bl
  _QWORD *i; // rdi
  _QWORD *v7; // r14
  int v8; // eax
  __int64 *v9; // rbx
  __int64 *v10; // rsi
  _QWORD *v11; // rax
  __int64 v12; // rcx
  __int128 v13; // [rsp+20h] [rbp-50h] BYREF
  __int64 v14; // [rsp+30h] [rbp-40h]
  __int128 v15; // [rsp+38h] [rbp-38h] BYREF
  __int64 v16; // [rsp+48h] [rbp-28h]
  _BYTE v17[16]; // [rsp+50h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+18h]

  v15 = 0LL;
  v16 = 0LL;
  v3 = (*(__int64 (__fastcall **)(_QWORD, __int128 *))(**((_QWORD **)a2 + 13) + 104LL))(*((_QWORD *)a2 + 13), &v15);
  if ( v3 >= 0 )
  {
    v7 = (_QWORD *)*((_QWORD *)&v15 + 1);
    for ( i = (_QWORD *)v15; i != v7; ++i )
    {
      v13 = 0LL;
      v14 = 0LL;
      v8 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int128 *))(**((_QWORD **)a2 + 13) + 112LL))(
             *((_QWORD *)a2 + 13),
             *i,
             &v13);
      if ( v8 >= 0 )
      {
        v10 = (__int64 *)*((_QWORD *)&v13 + 1);
        v9 = (__int64 *)v13;
        if ( (_QWORD)v13 != *((_QWORD *)&v13 + 1) )
        {
          while ( 1 )
          {
            v11 = (_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)*v9 + 112LL))(*v9, v17);
            v12 = *v11 - 0x48B1B9CD98951333LL;
            if ( *v11 == 0x48B1B9CD98951333LL )
              v12 = v11[1] + 0x88CD297BF005C60LL;
            if ( !v12 )
              break;
            if ( ++v9 == v10 )
              goto LABEL_15;
          }
          if ( (_QWORD)v13 )
          {
            std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<IStreamGroupProxy>>>(
              (__int64 *)v13,
              *((__int64 **)&v13 + 1));
            std::_Deallocate<16,0>((void *)v13, (v14 - v13) & 0xFFFFFFFFFFFFFFF8uLL);
          }
          v4 = 1;
          goto LABEL_4;
        }
      }
      else
      {
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x30E,
          (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\btaudioresourcemanager.cpp",
          (const char *)(unsigned int)v8);
LABEL_15:
        v9 = (__int64 *)v13;
      }
      if ( v9 )
      {
        std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<IStreamGroupProxy>>>(v9, *((__int64 **)&v13 + 1));
        std::_Deallocate<16,0>((void *)v13, (v14 - v13) & 0xFFFFFFFFFFFFFFF8uLL);
      }
    }
  }
  else
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x309,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\btaudioresourcemanager.cpp",
      (const char *)(unsigned int)v3);
  }
  v4 = 0;
LABEL_4:
  if ( (_QWORD)v15 )
  {
    std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<ISaDeviceProxy>>>((__int64 *)v15, *((__int64 **)&v15 + 1));
    std::_Deallocate<16,0>((void *)v15, (v16 - v15) & 0xFFFFFFFFFFFFFFF8uLL);
  }
  return v4;
}
