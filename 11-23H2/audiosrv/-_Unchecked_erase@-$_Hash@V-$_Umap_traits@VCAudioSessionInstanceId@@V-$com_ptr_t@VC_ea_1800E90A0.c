/*
 * XREFs of ?_Unchecked_erase@?$_Hash@V?$_Umap_traits@VCAudioSessionInstanceId@@V?$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@V?$_Uhash_compare@VCAudioSessionInstanceId@@U?$hash@VCAudioSessionInstanceId@@@std@@U?$equal_to@VCAudioSessionInstanceId@@@3@@std@@V?$allocator@U?$pair@$$CBVCAudioSessionInstanceId@@V?$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@@std@@@5@$0A@@std@@@std@@AEAAPEAU?$_List_node@U?$pair@$$CBVCAudioSessionInstanceId@@V?$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@2@PEAU32@QEAU32@@Z @ 0x1800E90A0
 * Callers:
 *     ?Disconnect@CAudioSessionManager@@QEAAJW4AudioServerSessionDisconnectReason@@_N@Z @ 0x18003B160 (-Disconnect@CAudioSessionManager@@QEAAJW4AudioServerSessionDisconnectReason@@_N@Z.c)
 *     ?clear@?$_Hash@V?$_Umap_traits@VCAudioSessionInstanceId@@V?$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@V?$_Uhash_compare@VCAudioSessionInstanceId@@U?$hash@VCAudioSessionInstanceId@@@std@@U?$equal_to@VCAudioSessionInstanceId@@@3@@std@@V?$allocator@U?$pair@$$CBVCAudioSessionInstanceId@@V?$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@@std@@@5@$0A@@std@@@std@@QEAAXXZ @ 0x1800E92D4 (-clear@-$_Hash@V-$_Umap_traits@VCAudioSessionInstanceId@@V-$com_ptr_t@VCAudioSession@@Uerr_retur.c)
 * Callees:
 *     ?MakeUpper@?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAAEAV12@XZ @ 0x18001C7D4 (-MakeUpper@-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAAEAV12@XZ.c)
 *     ?Hash@?$CStringElementTraits@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@ATL@@SAKPEBG@Z @ 0x18001C838 (-Hash@-$CStringElementTraits@V-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@ATL.c)
 *     ?ToString@CAudioSessionInstanceId@@QEBAJAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@Z @ 0x18001C878 (-ToString@CAudioSessionInstanceId@@QEBAJAEAV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@A.c)
 *     ?Release@CStringData@ATL@@QEAAXXZ @ 0x18001CE68 (-Release@CStringData@ATL@@QEAAXXZ.c)
 *     ?PrepareWrite2@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x180036700 (-PrepareWrite2@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 *     ?SetLength@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x18004237C (-SetLength@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_Bump_erased@_Range_eraser@?$_Hash@V?$_Umap_traits@VCAudioSessionInstanceId@@V?$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@V?$_Uhash_compare@VCAudioSessionInstanceId@@U?$hash@VCAudioSessionInstanceId@@@std@@U?$equal_to@VCAudioSessionInstanceId@@@3@@std@@V?$allocator@U?$pair@$$CBVCAudioSessionInstanceId@@V?$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@@std@@@5@$0A@@std@@@std@@QEAAXXZ @ 0x1800E8BF4 (-_Bump_erased@_Range_eraser@-$_Hash@V-$_Umap_traits@VCAudioSessionInstanceId@@V-$com_ptr_t@VCAud.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall std::_Hash<std::_Umap_traits<CAudioSessionInstanceId,wil::com_ptr_t<CAudioSession,wil::err_returncode_policy>,std::_Uhash_compare<CAudioSessionInstanceId,std::hash<CAudioSessionInstanceId>,std::equal_to<CAudioSessionInstanceId>>,std::allocator<std::pair<CAudioSessionInstanceId const,wil::com_ptr_t<CAudioSession,wil::err_returncode_policy>>>,0>>::_Unchecked_erase(
        _QWORD *a1,
        __int64 a2,
        __int64 a3)
{
  _QWORD *v5; // r12
  __int64 v6; // r14
  __int64 v7; // rdi
  unsigned __int16 **Upper; // rax
  unsigned int v9; // ebx
  ATL::CStringData *v10; // rcx
  __int64 v11; // r15
  __int64 v12; // rax
  bool v13; // bl
  _QWORD *v14; // rax
  _QWORD *v16; // rax
  __int64 v17; // r8
  unsigned __int16 *v18; // rbx
  int v19; // r15d
  __int64 v20; // r15
  ATL::CStringData *v21; // rcx
  __int64 v22; // r13
  _QWORD *v23; // [rsp+20h] [rbp-28h] BYREF
  _QWORD *v24; // [rsp+28h] [rbp-20h]
  __int64 v25; // [rsp+30h] [rbp-18h]
  unsigned __int16 *v27; // [rsp+98h] [rbp+50h] BYREF
  __int64 v28; // [rsp+A0h] [rbp+58h]
  _QWORD *v29; // [rsp+A8h] [rbp+60h]

  if ( a2 != a3 )
  {
    v5 = (_QWORD *)a1[1];
    v6 = a1[3];
    v23 = a1 + 1;
    v29 = *(_QWORD **)(a2 + 8);
    v24 = v29;
    v7 = a2;
    v25 = a2;
    v27 = (unsigned __int16 *)((*(__int64 (__fastcall **)(__int64 *))(ATL::g_strmgr + 24))(&ATL::g_strmgr) + 24);
    if ( (int)CAudioSessionInstanceId::ToString(v7 + 16, &v27) < 0 )
    {
      v10 = (ATL::CStringData *)(v27 - 12);
      v9 = 0;
    }
    else
    {
      Upper = (unsigned __int16 **)ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::MakeUpper(&v27);
      v9 = ATL::CStringElementTraits<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>>::Hash(*Upper);
      v10 = (ATL::CStringData *)(v27 - 12);
    }
    ATL::CStringData::Release(v10);
    v11 = 2 * (a1[6] & v9);
    v28 = *(_QWORD *)(v6 + 16 * (a1[6] & v9));
    v12 = *(_QWORD *)(v6 + 8 * v11 + 8);
    v27 = (unsigned __int16 *)v12;
    while ( 1 )
    {
      v13 = v7 == v12;
      std::_Hash<std::_Umap_traits<CAudioSessionInstanceId,wil::com_ptr_t<CAudioSession,wil::err_returncode_policy>,std::_Uhash_compare<CAudioSessionInstanceId,std::hash<CAudioSessionInstanceId>,std::equal_to<CAudioSessionInstanceId>>,std::allocator<std::pair<CAudioSessionInstanceId const,wil::com_ptr_t<CAudioSession,wil::err_returncode_policy>>>,0>>::_Range_eraser::_Bump_erased(&v23);
      if ( v13 )
        break;
      v7 = v25;
      v12 = (__int64)v27;
      if ( v25 == a3 )
      {
        if ( v28 == a2 )
LABEL_9:
          *(_QWORD *)(v6 + 8 * v11) = v7;
        goto LABEL_10;
      }
    }
    if ( v28 == a2 )
    {
      *(_QWORD *)(v6 + 8 * v11) = v5;
      v16 = v5;
    }
    else
    {
      v16 = v29;
    }
    for ( *(_QWORD *)(v6 + 8 * v11 + 8) = v16; ; *(_QWORD *)(v6 + 8 * v11 + 8) = v5 )
    {
      v7 = v25;
      if ( v25 == a3 )
        break;
      v27 = (unsigned __int16 *)((*(__int64 (__fastcall **)(__int64 *))(ATL::g_strmgr + 24))(&ATL::g_strmgr) + 24);
      if ( (int)CAudioSessionInstanceId::ToString(v7 + 16, &v27) < 0 )
      {
        v21 = (ATL::CStringData *)(v27 - 12);
        v20 = 0LL;
      }
      else
      {
        v18 = v27;
        v19 = *((_DWORD *)v27 - 4);
        if ( ((1 - *((_DWORD *)v27 - 2)) | (*((_DWORD *)v27 - 3) - v19)) < 0 )
        {
          ATL::CSimpleStringT<unsigned short,0>::PrepareWrite2((__int64 *)&v27, v19);
          v18 = v27;
        }
        _o__wcsupr_s(v18, v19 + 1, v17);
        ATL::CSimpleStringT<unsigned short,0>::SetLength((__int64 *)&v27, v19);
        v20 = (unsigned int)ATL::CStringElementTraits<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>>::Hash(v18);
        v21 = (ATL::CStringData *)(v18 - 12);
      }
      ATL::CStringData::Release(v21);
      v11 = 2 * (a1[6] & v20);
      v22 = *(_QWORD *)(v6 + 8 * v11 + 8);
      while ( 1 )
      {
        std::_Hash<std::_Umap_traits<CAudioSessionInstanceId,wil::com_ptr_t<CAudioSession,wil::err_returncode_policy>,std::_Uhash_compare<CAudioSessionInstanceId,std::hash<CAudioSessionInstanceId>,std::equal_to<CAudioSessionInstanceId>>,std::allocator<std::pair<CAudioSessionInstanceId const,wil::com_ptr_t<CAudioSession,wil::err_returncode_policy>>>,0>>::_Range_eraser::_Bump_erased(&v23);
        if ( v7 == v22 )
          break;
        v7 = v25;
        if ( v25 == a3 )
          goto LABEL_9;
      }
      *(_QWORD *)(v6 + 8 * v11) = v5;
    }
LABEL_10:
    v14 = v24;
    *v24 = v7;
    *(_QWORD *)(v7 + 8) = v14;
  }
  return a3;
}
